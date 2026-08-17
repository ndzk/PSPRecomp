#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0120[4094] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 6, 0,
    0, 7, 0, 0, 0, 8, 0, 0, 0, 9, 0, 10, 11, 0, 0, 12, 0, 0, 13, 0, 0, 0, 14, 0, 0, 15, 16, 0, 0, 17, 0, 0,
    18, 0, 0, 0, 19, 0, 0, 0, 20, 0, 21, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 27, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    30, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 34, 35, 0, 0, 36, 0, 37, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42, 43, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 46,
    0, 0, 47, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 52, 0, 53, 0, 54, 0, 55, 0,
    56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 59, 0, 60, 0, 0, 61, 0, 62, 0,
    0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 65, 0, 0, 66, 0, 67, 68, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 71,
    0, 72, 73, 0, 74, 0, 75, 0, 76, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 85, 86, 0, 0, 87, 0, 0, 0, 88,
    0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0,
    0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 99, 0, 100, 0,
    101, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0,
    0, 109, 0, 0, 110, 0, 111, 0, 112, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0, 115, 0, 116, 117, 0, 118, 0, 119, 0, 0, 120, 0, 0,
    121, 0, 122, 0, 123, 0, 124, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150,
    0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 159, 0, 160, 0, 161, 0, 162, 0, 163, 0, 164, 0, 165, 0, 0, 0, 166, 167, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 170,
    0, 171, 0, 0, 0, 172, 0, 173, 0, 0, 0, 174, 0, 175, 0, 0, 0, 176, 0, 177, 0, 178, 0, 179, 0, 0, 0, 180, 0, 0, 181, 0,
    0, 182, 0, 0, 0, 0, 183, 0, 0, 184, 0, 185, 0, 186, 0, 0, 187, 0, 0, 188, 0, 0, 189, 0, 190, 0, 191, 0, 0, 192, 0, 0,
    193, 0, 194, 0, 0, 195, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 201, 0, 202, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 208, 0, 0, 209, 0,
    210, 0, 0, 0, 211, 0, 0, 0, 212, 0, 213, 0, 214, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0,
    219, 0, 0, 220, 0, 221, 0, 0, 0, 222, 0, 0, 0, 223, 0, 224, 0, 225, 0, 0, 0, 0, 226, 0, 0, 227, 0, 0, 0, 228, 0, 0,
    0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 234, 0, 0, 235, 0, 236, 0, 0, 0, 237, 0,
    0, 0, 238, 0, 239, 0, 240, 0, 241, 242, 0, 243, 0, 244, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 249, 0,
    0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 253, 0, 0, 0, 254, 0,
    255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 258, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261,
    0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 264, 0, 0, 265, 0, 0, 0, 0, 266, 0, 267, 268, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0,
    0, 0, 0, 271, 0, 0, 272, 0, 273, 0, 274, 0, 0, 0, 0, 275, 0, 276, 277, 278, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 0, 0, 285, 0, 286, 0,
    287, 0, 288, 0, 289, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 294,
    0, 295, 0, 0, 296, 0, 0, 0, 0, 297, 0, 298, 299, 0, 300, 0, 301, 0, 0, 0, 0, 0, 302, 0, 303, 0, 0, 304, 0, 0, 0, 305,
    0, 0, 0, 0, 0, 306, 0, 0, 307, 0, 308, 0, 309, 0, 0, 0, 0, 310, 0, 311, 312, 0, 313, 0, 314, 0, 0, 0, 0, 0, 315, 0,
    316, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 322, 0, 0, 323, 0,
    324, 0, 325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 327, 0, 328, 0, 0, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 332, 0,
    0, 0, 333, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 337, 0, 0, 0, 0, 338, 0, 339,
    0, 0, 0, 340, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 345, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 349, 0, 0, 0, 350, 0, 351, 0, 0, 0, 0, 0, 352,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 354, 0, 0, 0, 0, 355, 0, 356, 0, 0, 0, 357, 0, 358, 0, 0, 0, 0, 0,
    359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 362, 0, 363, 0, 0, 364, 0, 0, 365, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 368, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0,
    371, 372, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0,
    0, 0, 0, 377, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 380, 381, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 383, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0,
    386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 400, 0, 0, 401, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 405, 0, 0, 0, 406, 0, 407, 0, 0, 408, 0, 409, 410, 0, 0, 411, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413,
    0, 0, 414, 0, 415, 0, 416, 0, 417, 0, 418, 0, 419, 420, 0, 421, 0, 422, 0, 423, 0, 424, 0, 425, 0, 426, 0, 427, 0, 0, 0, 0,
    428, 429, 0, 0, 0, 0, 430, 0, 0, 431, 0, 0, 0, 0, 0, 432, 433, 0, 0, 0, 0, 0, 0, 434, 0, 435, 0, 0, 0, 0, 436, 437,
    0, 0, 0, 0, 438, 0, 0, 439, 0, 0, 0, 0, 0, 440, 441, 0, 0, 0, 0, 0, 0, 442, 0, 443, 444, 0, 0, 0, 445, 446, 0, 0,
    0, 0, 447, 0, 0, 448, 0, 0, 0, 0, 0, 449, 450, 0, 0, 0, 0, 0, 0, 451, 0, 452, 0, 0, 0, 0, 453, 454, 0, 0, 0, 0,
    455, 0, 0, 456, 0, 0, 0, 0, 0, 457, 458, 0, 0, 0, 0, 0, 0, 459, 0, 460, 0, 0, 0, 0, 461, 462, 0, 0, 0, 0, 463, 0,
    0, 464, 0, 0, 0, 0, 0, 465, 466, 0, 0, 0, 0, 0, 0, 467, 0, 468, 469, 0, 0, 0, 470, 471, 0, 0, 0, 0, 472, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 474, 0, 0, 0, 0, 0, 0, 475, 0, 476, 0, 0, 0, 0, 477, 0, 478, 0, 0, 0,
    479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 481, 0, 0, 0, 0, 0, 0, 482, 0, 483, 0, 0, 0, 484, 0, 485, 0,
    486, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 489, 490, 0, 0, 0, 0, 491, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 493, 0, 0, 0, 0, 0, 0, 494, 0, 495, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 497, 0, 498, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 500, 501, 0, 0, 0, 0, 502, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 504, 0, 0, 0, 0, 0, 0, 505, 0, 506, 0, 0, 0, 0, 507, 508, 0, 0, 0, 0, 509, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 511,
    0, 0, 0, 0, 0, 0, 512, 0, 513, 514, 0, 0, 515, 0, 0, 516, 0, 517, 0, 0, 0, 518, 0, 519, 0, 520, 0, 0, 521, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 523, 524, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 526, 527, 0, 0, 0, 0, 0, 0, 528, 0, 529, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 532, 0,
    0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 534, 535, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 538,
    0, 0, 0, 0, 0, 0, 539, 0, 540, 0, 0, 0, 0, 541, 542, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 545, 0, 0, 0, 0, 0, 0, 546, 0, 547, 548, 0,
    0, 549, 0, 0, 550, 0, 551, 0, 0, 0, 552, 0, 0, 553, 554, 0, 0, 555, 0, 0, 556, 0, 557, 558, 0, 559, 0, 560, 561, 0, 0, 562,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 564, 565, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0,
    567, 568, 0, 0, 0, 0, 0, 0, 569, 0, 570, 571, 0, 0, 0, 572, 0, 573, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 575, 576, 0, 0, 0, 0, 0, 0, 577, 0, 578, 0, 0, 0, 579, 0, 0, 580, 581, 0, 0, 582, 0, 0,
    583, 0, 584, 585, 0, 586, 0, 587, 588, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 591, 592, 0, 0,
    0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 594, 595, 0, 0, 0, 0, 0, 0, 596, 0, 597, 598, 0, 0, 0, 599, 600, 0, 0, 0, 0, 601,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 602, 603, 0, 0, 0, 0, 0, 0, 604, 0, 605, 606, 0, 0, 607,
    0, 0, 608, 0, 609, 610, 0, 611, 0, 0, 612, 0, 613, 614, 0, 615, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0,
    0, 0, 0, 618, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 621, 0, 0, 622, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 624, 0, 0, 625, 0, 0, 626, 0, 627, 0, 628, 0,
    0, 0, 0, 0, 629, 0, 0, 630, 0, 631, 0, 632, 0, 633, 0, 634, 0, 635, 0, 636, 0, 0, 0, 0, 637, 0, 638, 0, 0, 0, 0, 639,
    0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 642, 643, 0, 0, 0, 0, 0, 0, 644, 0, 645, 0,
    0, 0, 0, 646, 0, 647, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 651,
    652, 0, 0, 0, 0, 0, 0, 653, 0, 654, 655, 0, 0, 0, 656, 0, 657, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0,
    0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 661, 662, 0, 0, 0, 0, 0, 0, 663, 0, 664, 0, 0, 0, 0, 665, 0, 666, 0, 0, 0, 0,
    667, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 670, 671, 0, 0, 0, 0, 0, 0, 672, 0, 673,
    0, 0, 0, 0, 674, 0, 675, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 0,
    679, 680, 0, 0, 0, 0, 0, 0, 681, 0, 682, 0, 0, 0, 0, 683, 0, 684, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 686, 687, 0, 0, 0, 0, 0, 0, 688, 0, 689,
    0, 0, 0, 0, 690, 0, 691, 0, 0, 0, 0, 692, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 693, 694, 0, 0, 0, 0, 0, 0, 695, 0, 696, 697, 0, 698, 0, 699,
    700, 0, 0, 0, 701, 0, 0, 702, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 0, 704, 0, 0, 705, 0, 706,
    0, 707, 0, 708, 0, 709, 0, 710, 0, 711, 0, 0, 0, 0, 712, 713, 0, 0, 0, 0, 714, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 716,
    717, 0, 0, 0, 0, 0, 0, 718, 0, 719, 0, 0, 0, 0, 720, 721, 0, 0, 0, 0, 722, 0, 0, 0, 723, 0, 0, 0, 0, 0, 0, 724,
    725, 0, 0, 0, 0, 0, 0, 726, 0, 727, 728, 0, 0, 0, 729, 730, 0, 0, 0, 0, 731, 0, 0, 0, 732, 0, 0, 0, 0, 0, 0, 733,
    734, 0, 0, 0, 0, 0, 0, 735, 0, 736, 0, 0, 0, 0, 737, 738, 0, 0, 0, 0, 739, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 741,
    742, 0, 0, 0, 0, 0, 0, 743, 0, 744, 0, 0, 0, 0, 745, 746, 0, 0, 0, 0, 747, 0, 0, 0, 748, 0, 0, 0, 0, 0, 0, 749,
    750, 0, 0, 0, 0, 0, 0, 751, 0, 752, 0, 0, 0, 0, 753, 754, 0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 756, 757, 0, 0, 0, 0, 0, 0, 758, 0, 759, 0, 0, 0, 0, 760, 761, 0, 0, 0, 0, 762, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 763, 764, 0, 0, 0, 0, 0, 0, 765, 0, 766, 767, 0, 768, 0, 769, 770, 0,
    0, 0, 771, 0, 0, 772, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 773, 0, 0, 0, 0, 774, 0, 0, 775, 0, 776, 0, 777, 0,
    778, 0, 779, 0, 780, 0, 781, 0, 0, 0, 0, 782, 783, 0, 0, 0, 0, 784, 0, 0, 785, 0, 0, 0, 0, 0, 786, 787, 0, 0, 0, 0,
    0, 0, 788, 0, 789, 0, 0, 0, 0, 790, 791, 0, 0, 0, 0, 792, 0, 0, 793, 0, 0, 0, 0, 0, 794, 795, 0, 0, 0, 0, 0, 0,
    796, 0, 797, 798, 0, 0, 0, 799, 800, 0, 0, 0, 0, 801, 0, 0, 802, 0, 0, 0, 0, 0, 803, 804, 0, 0, 0, 0, 0, 0, 805, 0,
    806, 0, 0, 0, 0, 807, 808, 0, 0, 0, 0, 809, 0, 0, 810, 0, 0, 0, 0, 0, 811, 812, 0, 0, 0, 0, 0, 0, 813, 0, 814, 0,
    0, 0, 0, 815, 816, 0, 0, 0, 0, 817, 0, 0, 818, 0, 0, 0, 0, 0, 819, 820, 0, 0, 0, 0, 0, 0, 821, 0, 822, 0, 0, 0,
    0, 823, 824, 0, 0, 0, 0, 825, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 826, 827, 0, 0, 0, 0, 0, 0, 828, 0, 829,
    0, 0, 0, 0, 830, 831, 0, 0, 0, 0, 832, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 833, 834, 0, 0, 0,
    0, 0, 0, 835, 0, 836, 837, 0, 838, 0, 839, 840, 0, 0, 0, 841, 0, 0, 842, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 843,
    0, 844, 0, 845, 846, 0, 0, 0, 847, 0, 0, 848, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 849, 0, 850, 0, 851, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 852, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 853, 0, 0, 854, 0, 0, 855, 0, 0, 856, 0, 0, 857, 858, 0, 0, 859, 0, 0, 0, 0, 860, 0, 0, 0, 861, 0, 0, 0, 0,
    0, 0, 862, 0, 0, 863, 0, 0, 864, 0, 0, 0, 865, 0, 866, 867, 0, 0, 868, 0, 0, 869, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 870, 0, 871, 0, 0, 0, 872, 873, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 874, 0, 875, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 876, 0, 877, 0, 878, 0, 879, 0, 0, 880, 0, 881, 882, 0, 883, 0, 0, 884, 0, 885, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 886, 0, 887, 888, 0, 0, 889, 890, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 891, 0, 892, 893, 0, 0, 0, 0, 894, 0, 0, 895, 0, 0, 0, 896, 0, 0, 0, 897, 0, 0, 0, 0, 898, 899, 0, 0,
    0, 900, 901, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 902, 0, 903, 0, 0, 0, 0, 0, 904, 0, 905, 0, 0, 0, 906, 907, 0, 0,
    0, 908, 909, 0, 0, 0, 0, 0, 0, 0, 910, 0, 911, 0, 0, 0, 0, 0, 912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 913, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 914, 0, 915, 0, 0, 0, 0, 916, 0, 0, 0, 0, 0, 0, 0, 0, 0, 917, 0, 918, 0, 0,
    919, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 920, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 921,
};
void recomp_unit_0120_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089E4000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0120[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089E4000;
    case 2u: goto L_089E4018;
    case 3u: goto L_089E404C;
    case 4u: goto L_089E406C;
    case 5u: goto L_089E4074;
    case 6u: goto L_089E4078;
    case 7u: goto L_089E4084;
    case 8u: goto L_089E4094;
    case 9u: goto L_089E40A4;
    case 10u: goto L_089E40AC;
    case 11u: goto L_089E40B0;
    case 12u: goto L_089E40BC;
    case 13u: goto L_089E40C8;
    case 14u: goto L_089E40D8;
    case 15u: goto L_089E40E4;
    case 16u: goto L_089E40E8;
    case 17u: goto L_089E40F4;
    case 18u: goto L_089E4100;
    case 19u: goto L_089E4110;
    case 20u: goto L_089E4120;
    case 21u: goto L_089E4128;
    case 22u: goto L_089E4134;
    case 23u: goto L_089E4140;
    case 24u: goto L_089E4190;
    case 25u: goto L_089E41A0;
    case 26u: goto L_089E41B4;
    case 27u: goto L_089E41BC;
    case 28u: goto L_089E41C0;
    case 29u: goto L_089E41F0;
    case 30u: goto L_089E4200;
    case 31u: goto L_089E420C;
    case 32u: goto L_089E4218;
    case 33u: goto L_089E4234;
    case 34u: goto L_089E423C;
    case 35u: goto L_089E4240;
    case 36u: goto L_089E424C;
    case 37u: goto L_089E4254;
    case 38u: goto L_089E4264;
    case 39u: goto L_089E4270;
    case 40u: goto L_089E4298;
    case 41u: goto L_089E42C0;
    case 42u: goto L_089E42C8;
    case 43u: goto L_089E42CC;
    case 44u: goto L_089E42D8;
    case 45u: goto L_089E42E4;
    case 46u: goto L_089E42FC;
    case 47u: goto L_089E4308;
    case 48u: goto L_089E430C;
    case 49u: goto L_089E4328;
    case 50u: goto L_089E4350;
    case 51u: goto L_089E4358;
    case 52u: goto L_089E4360;
    case 53u: goto L_089E4368;
    case 54u: goto L_089E4370;
    case 55u: goto L_089E4378;
    case 56u: goto L_089E4380;
    case 57u: goto L_089E43C4;
    case 58u: goto L_089E43CC;
    case 59u: goto L_089E43DC;
    case 60u: goto L_089E43E4;
    case 61u: goto L_089E43F0;
    case 62u: goto L_089E43F8;
    case 63u: goto L_089E441C;
    case 64u: goto L_089E4428;
    case 65u: goto L_089E4430;
    case 66u: goto L_089E443C;
    case 67u: goto L_089E4444;
    case 68u: goto L_089E4448;
    case 69u: goto L_089E4450;
    case 70u: goto L_089E4458;
    case 71u: goto L_089E447C;
    case 72u: goto L_089E4484;
    case 73u: goto L_089E4488;
    case 74u: goto L_089E4490;
    case 75u: goto L_089E4498;
    case 76u: goto L_089E44A0;
    case 77u: goto L_089E44A8;
    case 78u: goto L_089E44B0;
    case 79u: goto L_089E44D4;
    case 80u: goto L_089E44F8;
    case 81u: goto L_089E4520;
    case 82u: goto L_089E4530;
    case 83u: goto L_089E4548;
    case 84u: goto L_089E4550;
    case 85u: goto L_089E455C;
    case 86u: goto L_089E4560;
    case 87u: goto L_089E456C;
    case 88u: goto L_089E457C;
    case 89u: goto L_089E4588;
    case 90u: goto L_089E45A4;
    case 91u: goto L_089E45BC;
    case 92u: goto L_089E45F0;
    case 93u: goto L_089E4604;
    case 94u: goto L_089E4620;
    case 95u: goto L_089E4638;
    case 96u: goto L_089E4644;
    case 97u: goto L_089E465C;
    case 98u: goto L_089E4668;
    case 99u: goto L_089E4670;
    case 100u: goto L_089E4678;
    case 101u: goto L_089E4680;
    case 102u: goto L_089E4688;
    case 103u: goto L_089E469C;
    case 104u: goto L_089E46AC;
    case 105u: goto L_089E46C0;
    case 106u: goto L_089E46D4;
    case 107u: goto L_089E46E4;
    case 108u: goto L_089E46F0;
    case 109u: goto L_089E4704;
    case 110u: goto L_089E4710;
    case 111u: goto L_089E4718;
    case 112u: goto L_089E4720;
    case 113u: goto L_089E4738;
    case 114u: goto L_089E4740;
    case 115u: goto L_089E474C;
    case 116u: goto L_089E4754;
    case 117u: goto L_089E4758;
    case 118u: goto L_089E4760;
    case 119u: goto L_089E4768;
    case 120u: goto L_089E4774;
    case 121u: goto L_089E4780;
    case 122u: goto L_089E4788;
    case 123u: goto L_089E4790;
    case 124u: goto L_089E4798;
    case 125u: goto L_089E479C;
    case 126u: goto L_089E47C8;
    case 127u: goto L_089E47DC;
    case 128u: goto L_089E4814;
    case 129u: goto L_089E4828;
    case 130u: goto L_089E4860;
    case 131u: goto L_089E4878;
    case 132u: goto L_089E48AC;
    case 133u: goto L_089E48C4;
    case 134u: goto L_089E48DC;
    case 135u: goto L_089E4904;
    case 136u: goto L_089E491C;
    case 137u: goto L_089E4934;
    case 138u: goto L_089E495C;
    case 139u: goto L_089E4998;
    case 140u: goto L_089E49C0;
    case 141u: goto L_089E49C8;
    case 142u: goto L_089E49EC;
    case 143u: goto L_089E4A20;
    case 144u: goto L_089E4A48;
    case 145u: goto L_089E4A50;
    case 146u: goto L_089E4A74;
    case 147u: goto L_089E4AA8;
    case 148u: goto L_089E4AD0;
    case 149u: goto L_089E4AD8;
    case 150u: goto L_089E4AFC;
    case 151u: goto L_089E4B20;
    case 152u: goto L_089E4B38;
    case 153u: goto L_089E4B40;
    case 154u: goto L_089E4B58;
    case 155u: goto L_089E4B60;
    case 156u: goto L_089E4B8C;
    case 157u: goto L_089E4BA4;
    case 158u: goto L_089E4BD4;
    case 159u: goto L_089E4C0C;
    case 160u: goto L_089E4C14;
    case 161u: goto L_089E4C1C;
    case 162u: goto L_089E4C24;
    case 163u: goto L_089E4C2C;
    case 164u: goto L_089E4C34;
    case 165u: goto L_089E4C3C;
    case 166u: goto L_089E4C4C;
    case 167u: goto L_089E4C50;
    case 168u: goto L_089E4C60;
    case 169u: goto L_089E4C6C;
    case 170u: goto L_089E4C7C;
    case 171u: goto L_089E4C84;
    case 172u: goto L_089E4C94;
    case 173u: goto L_089E4C9C;
    case 174u: goto L_089E4CAC;
    case 175u: goto L_089E4CB4;
    case 176u: goto L_089E4CC4;
    case 177u: goto L_089E4CCC;
    case 178u: goto L_089E4CD4;
    case 179u: goto L_089E4CDC;
    case 180u: goto L_089E4CEC;
    case 181u: goto L_089E4CF8;
    case 182u: goto L_089E4D04;
    case 183u: goto L_089E4D18;
    case 184u: goto L_089E4D24;
    case 185u: goto L_089E4D2C;
    case 186u: goto L_089E4D34;
    case 187u: goto L_089E4D40;
    case 188u: goto L_089E4D4C;
    case 189u: goto L_089E4D58;
    case 190u: goto L_089E4D60;
    case 191u: goto L_089E4D68;
    case 192u: goto L_089E4D74;
    case 193u: goto L_089E4D80;
    case 194u: goto L_089E4D88;
    case 195u: goto L_089E4D94;
    case 196u: goto L_089E4DA4;
    case 197u: goto L_089E4DB0;
    case 198u: goto L_089E4DC4;
    case 199u: goto L_089E4DD8;
    case 200u: goto L_089E4DE0;
    case 201u: goto L_089E4DF0;
    case 202u: goto L_089E4DF8;
    case 203u: goto L_089E4E20;
    case 204u: goto L_089E4E34;
    case 205u: goto L_089E4E3C;
    case 206u: goto L_089E4E4C;
    case 207u: goto L_089E4E64;
    case 208u: goto L_089E4E6C;
    case 209u: goto L_089E4E78;
    case 210u: goto L_089E4E80;
    case 211u: goto L_089E4E90;
    case 212u: goto L_089E4EA0;
    case 213u: goto L_089E4EA8;
    case 214u: goto L_089E4EB0;
    case 215u: goto L_089E4EC4;
    case 216u: goto L_089E4ECC;
    case 217u: goto L_089E4EDC;
    case 218u: goto L_089E4EF8;
    case 219u: goto L_089E4F00;
    case 220u: goto L_089E4F0C;
    case 221u: goto L_089E4F14;
    case 222u: goto L_089E4F24;
    case 223u: goto L_089E4F34;
    case 224u: goto L_089E4F3C;
    case 225u: goto L_089E4F44;
    case 226u: goto L_089E4F58;
    case 227u: goto L_089E4F64;
    case 228u: goto L_089E4F74;
    case 229u: goto L_089E4F94;
    case 230u: goto L_089E4F9C;
    case 231u: goto L_089E4FA8;
    case 232u: goto L_089E4FB0;
    case 233u: goto L_089E4FCC;
    case 234u: goto L_089E4FD4;
    case 235u: goto L_089E4FE0;
    case 236u: goto L_089E4FE8;
    case 237u: goto L_089E4FF8;
    case 238u: goto L_089E5008;
    case 239u: goto L_089E5010;
    case 240u: goto L_089E5018;
    case 241u: goto L_089E5020;
    case 242u: goto L_089E5024;
    case 243u: goto L_089E502C;
    case 244u: goto L_089E5034;
    case 245u: goto L_089E5044;
    case 246u: goto L_089E504C;
    case 247u: goto L_089E5060;
    case 248u: goto L_089E5070;
    case 249u: goto L_089E5078;
    case 250u: goto L_089E508C;
    case 251u: goto L_089E509C;
    case 252u: goto L_089E50E0;
    case 253u: goto L_089E50E8;
    case 254u: goto L_089E50F8;
    case 255u: goto L_089E5100;
    case 256u: goto L_089E5120;
    case 257u: goto L_089E5140;
    case 258u: goto L_089E5148;
    case 259u: goto L_089E5150;
    case 260u: goto L_089E516C;
    case 261u: goto L_089E517C;
    case 262u: goto L_089E5190;
    case 263u: goto L_089E51A0;
    case 264u: goto L_089E51A8;
    case 265u: goto L_089E51B4;
    case 266u: goto L_089E51C8;
    case 267u: goto L_089E51D0;
    case 268u: goto L_089E51D4;
    case 269u: goto L_089E51E4;
    case 270u: goto L_089E51F4;
    case 271u: goto L_089E520C;
    case 272u: goto L_089E5218;
    case 273u: goto L_089E5220;
    case 274u: goto L_089E5228;
    case 275u: goto L_089E523C;
    case 276u: goto L_089E5244;
    case 277u: goto L_089E5248;
    case 278u: goto L_089E524C;
    case 279u: goto L_089E5258;
    case 280u: goto L_089E528C;
    case 281u: goto L_089E52B4;
    case 282u: goto L_089E52BC;
    case 283u: goto L_089E52D8;
    case 284u: goto L_089E52E0;
    case 285u: goto L_089E52F0;
    case 286u: goto L_089E52F8;
    case 287u: goto L_089E5300;
    case 288u: goto L_089E5308;
    case 289u: goto L_089E5310;
    case 290u: goto L_089E5318;
    case 291u: goto L_089E5348;
    case 292u: goto L_089E5358;
    case 293u: goto L_089E5370;
    case 294u: goto L_089E537C;
    case 295u: goto L_089E5384;
    case 296u: goto L_089E5390;
    case 297u: goto L_089E53A4;
    case 298u: goto L_089E53AC;
    case 299u: goto L_089E53B0;
    case 300u: goto L_089E53B8;
    case 301u: goto L_089E53C0;
    case 302u: goto L_089E53D8;
    case 303u: goto L_089E53E0;
    case 304u: goto L_089E53EC;
    case 305u: goto L_089E53FC;
    case 306u: goto L_089E5414;
    case 307u: goto L_089E5420;
    case 308u: goto L_089E5428;
    case 309u: goto L_089E5430;
    case 310u: goto L_089E5444;
    case 311u: goto L_089E544C;
    case 312u: goto L_089E5450;
    case 313u: goto L_089E5458;
    case 314u: goto L_089E5460;
    case 315u: goto L_089E5478;
    case 316u: goto L_089E5480;
    case 317u: goto L_089E548C;
    case 318u: goto L_089E54A0;
    case 319u: goto L_089E54AC;
    case 320u: goto L_089E54C0;
    case 321u: goto L_089E54E0;
    case 322u: goto L_089E54EC;
    case 323u: goto L_089E54F8;
    case 324u: goto L_089E5500;
    case 325u: goto L_089E5508;
    case 326u: goto L_089E5528;
    case 327u: goto L_089E5530;
    case 328u: goto L_089E5538;
    case 329u: goto L_089E554C;
    case 330u: goto L_089E5558;
    case 331u: goto L_089E5570;
    case 332u: goto L_089E5578;
    case 333u: goto L_089E5588;
    case 334u: goto L_089E5590;
    case 335u: goto L_089E55A8;
    case 336u: goto L_089E55D4;
    case 337u: goto L_089E55E0;
    case 338u: goto L_089E55F4;
    case 339u: goto L_089E55FC;
    case 340u: goto L_089E560C;
    case 341u: goto L_089E5614;
    case 342u: goto L_089E562C;
    case 343u: goto L_089E5658;
    case 344u: goto L_089E566C;
    case 345u: goto L_089E5674;
    case 346u: goto L_089E569C;
    case 347u: goto L_089E56AC;
    case 348u: goto L_089E56C4;
    case 349u: goto L_089E56CC;
    case 350u: goto L_089E56DC;
    case 351u: goto L_089E56E4;
    case 352u: goto L_089E56FC;
    case 353u: goto L_089E5728;
    case 354u: goto L_089E5734;
    case 355u: goto L_089E5748;
    case 356u: goto L_089E5750;
    case 357u: goto L_089E5760;
    case 358u: goto L_089E5768;
    case 359u: goto L_089E5780;
    case 360u: goto L_089E57AC;
    case 361u: goto L_089E57C4;
    case 362u: goto L_089E57CC;
    case 363u: goto L_089E57D4;
    case 364u: goto L_089E57E0;
    case 365u: goto L_089E57EC;
    case 366u: goto L_089E5814;
    case 367u: goto L_089E5844;
    case 368u: goto L_089E584C;
    case 369u: goto L_089E586C;
    case 370u: goto L_089E5878;
    case 371u: goto L_089E5880;
    case 372u: goto L_089E5884;
    case 373u: goto L_089E58A0;
    case 374u: goto L_089E58C0;
    case 375u: goto L_089E58D4;
    case 376u: goto L_089E58F4;
    case 377u: goto L_089E590C;
    case 378u: goto L_089E5914;
    case 379u: goto L_089E592C;
    case 380u: goto L_089E5948;
    case 381u: goto L_089E594C;
    case 382u: goto L_089E5960;
    case 383u: goto L_089E5978;
    case 384u: goto L_089E59A0;
    case 385u: goto L_089E59E8;
    case 386u: goto L_089E5A00;
    case 387u: goto L_089E5A3C;
    case 388u: goto L_089E5A74;
    case 389u: goto L_089E5AA8;
    case 390u: goto L_089E5AE0;
    case 391u: goto L_089E5B14;
    case 392u: goto L_089E5B24;
    case 393u: goto L_089E5B30;
    case 394u: goto L_089E5B40;
    case 395u: goto L_089E5B90;
    case 396u: goto L_089E5BA4;
    case 397u: goto L_089E5BB8;
    case 398u: goto L_089E5BC8;
    case 399u: goto L_089E5BD8;
    case 400u: goto L_089E5C0C;
    case 401u: goto L_089E5C18;
    case 402u: goto L_089E5C24;
    case 403u: goto L_089E5C48;
    case 404u: goto L_089E5C50;
    case 405u: goto L_089E5C84;
    case 406u: goto L_089E5C94;
    case 407u: goto L_089E5C9C;
    case 408u: goto L_089E5CA8;
    case 409u: goto L_089E5CB0;
    case 410u: goto L_089E5CB4;
    case 411u: goto L_089E5CC0;
    case 412u: goto L_089E5CC8;
    case 413u: goto L_089E5CFC;
    case 414u: goto L_089E5D08;
    case 415u: goto L_089E5D10;
    case 416u: goto L_089E5D18;
    case 417u: goto L_089E5D20;
    case 418u: goto L_089E5D28;
    case 419u: goto L_089E5D30;
    case 420u: goto L_089E5D34;
    case 421u: goto L_089E5D3C;
    case 422u: goto L_089E5D44;
    case 423u: goto L_089E5D4C;
    case 424u: goto L_089E5D54;
    case 425u: goto L_089E5D5C;
    case 426u: goto L_089E5D64;
    case 427u: goto L_089E5D6C;
    case 428u: goto L_089E5D80;
    case 429u: goto L_089E5D84;
    case 430u: goto L_089E5D98;
    case 431u: goto L_089E5DA4;
    case 432u: goto L_089E5DBC;
    case 433u: goto L_089E5DC0;
    case 434u: goto L_089E5DDC;
    case 435u: goto L_089E5DE4;
    case 436u: goto L_089E5DF8;
    case 437u: goto L_089E5DFC;
    case 438u: goto L_089E5E10;
    case 439u: goto L_089E5E1C;
    case 440u: goto L_089E5E34;
    case 441u: goto L_089E5E38;
    case 442u: goto L_089E5E54;
    case 443u: goto L_089E5E5C;
    case 444u: goto L_089E5E60;
    case 445u: goto L_089E5E70;
    case 446u: goto L_089E5E74;
    case 447u: goto L_089E5E88;
    case 448u: goto L_089E5E94;
    case 449u: goto L_089E5EAC;
    case 450u: goto L_089E5EB0;
    case 451u: goto L_089E5ECC;
    case 452u: goto L_089E5ED4;
    case 453u: goto L_089E5EE8;
    case 454u: goto L_089E5EEC;
    case 455u: goto L_089E5F00;
    case 456u: goto L_089E5F0C;
    case 457u: goto L_089E5F24;
    case 458u: goto L_089E5F28;
    case 459u: goto L_089E5F44;
    case 460u: goto L_089E5F4C;
    case 461u: goto L_089E5F60;
    case 462u: goto L_089E5F64;
    case 463u: goto L_089E5F78;
    case 464u: goto L_089E5F84;
    case 465u: goto L_089E5F9C;
    case 466u: goto L_089E5FA0;
    case 467u: goto L_089E5FBC;
    case 468u: goto L_089E5FC4;
    case 469u: goto L_089E5FC8;
    case 470u: goto L_089E5FD8;
    case 471u: goto L_089E5FDC;
    case 472u: goto L_089E5FF0;
    case 473u: goto L_089E602C;
    case 474u: goto L_089E6030;
    case 475u: goto L_089E604C;
    case 476u: goto L_089E6054;
    case 477u: goto L_089E6068;
    case 478u: goto L_089E6070;
    case 479u: goto L_089E6080;
    case 480u: goto L_089E60B8;
    case 481u: goto L_089E60BC;
    case 482u: goto L_089E60D8;
    case 483u: goto L_089E60E0;
    case 484u: goto L_089E60F0;
    case 485u: goto L_089E60F8;
    case 486u: goto L_089E6100;
    case 487u: goto L_089E6110;
    case 488u: goto L_089E6148;
    case 489u: goto L_089E615C;
    case 490u: goto L_089E6160;
    case 491u: goto L_089E6174;
    case 492u: goto L_089E61A8;
    case 493u: goto L_089E61AC;
    case 494u: goto L_089E61C8;
    case 495u: goto L_089E61D0;
    case 496u: goto L_089E61E4;
    case 497u: goto L_089E621C;
    case 498u: goto L_089E6224;
    case 499u: goto L_089E6244;
    case 500u: goto L_089E6258;
    case 501u: goto L_089E625C;
    case 502u: goto L_089E6270;
    case 503u: goto L_089E62A4;
    case 504u: goto L_089E62A8;
    case 505u: goto L_089E62C4;
    case 506u: goto L_089E62CC;
    case 507u: goto L_089E62E0;
    case 508u: goto L_089E62E4;
    case 509u: goto L_089E62F8;
    case 510u: goto L_089E6378;
    case 511u: goto L_089E637C;
    case 512u: goto L_089E6398;
    case 513u: goto L_089E63A0;
    case 514u: goto L_089E63A4;
    case 515u: goto L_089E63B0;
    case 516u: goto L_089E63BC;
    case 517u: goto L_089E63C4;
    case 518u: goto L_089E63D4;
    case 519u: goto L_089E63DC;
    case 520u: goto L_089E63E4;
    case 521u: goto L_089E63F0;
    case 522u: goto L_089E6424;
    case 523u: goto L_089E6438;
    case 524u: goto L_089E643C;
    case 525u: goto L_089E6450;
    case 526u: goto L_089E6484;
    case 527u: goto L_089E6488;
    case 528u: goto L_089E64A4;
    case 529u: goto L_089E64AC;
    case 530u: goto L_089E64BC;
    case 531u: goto L_089E64F0;
    case 532u: goto L_089E64F8;
    case 533u: goto L_089E6518;
    case 534u: goto L_089E652C;
    case 535u: goto L_089E6530;
    case 536u: goto L_089E6544;
    case 537u: goto L_089E6578;
    case 538u: goto L_089E657C;
    case 539u: goto L_089E6598;
    case 540u: goto L_089E65A0;
    case 541u: goto L_089E65B4;
    case 542u: goto L_089E65B8;
    case 543u: goto L_089E65CC;
    case 544u: goto L_089E664C;
    case 545u: goto L_089E6650;
    case 546u: goto L_089E666C;
    case 547u: goto L_089E6674;
    case 548u: goto L_089E6678;
    case 549u: goto L_089E6684;
    case 550u: goto L_089E6690;
    case 551u: goto L_089E6698;
    case 552u: goto L_089E66A8;
    case 553u: goto L_089E66B4;
    case 554u: goto L_089E66B8;
    case 555u: goto L_089E66C4;
    case 556u: goto L_089E66D0;
    case 557u: goto L_089E66D8;
    case 558u: goto L_089E66DC;
    case 559u: goto L_089E66E4;
    case 560u: goto L_089E66EC;
    case 561u: goto L_089E66F0;
    case 562u: goto L_089E66FC;
    case 563u: goto L_089E6734;
    case 564u: goto L_089E6748;
    case 565u: goto L_089E674C;
    case 566u: goto L_089E6760;
    case 567u: goto L_089E6780;
    case 568u: goto L_089E6784;
    case 569u: goto L_089E67A0;
    case 570u: goto L_089E67A8;
    case 571u: goto L_089E67AC;
    case 572u: goto L_089E67BC;
    case 573u: goto L_089E67C4;
    case 574u: goto L_089E67D8;
    case 575u: goto L_089E6820;
    case 576u: goto L_089E6824;
    case 577u: goto L_089E6840;
    case 578u: goto L_089E6848;
    case 579u: goto L_089E6858;
    case 580u: goto L_089E6864;
    case 581u: goto L_089E6868;
    case 582u: goto L_089E6874;
    case 583u: goto L_089E6880;
    case 584u: goto L_089E6888;
    case 585u: goto L_089E688C;
    case 586u: goto L_089E6894;
    case 587u: goto L_089E689C;
    case 588u: goto L_089E68A0;
    case 589u: goto L_089E68A8;
    case 590u: goto L_089E68DC;
    case 591u: goto L_089E68F0;
    case 592u: goto L_089E68F4;
    case 593u: goto L_089E6908;
    case 594u: goto L_089E6928;
    case 595u: goto L_089E692C;
    case 596u: goto L_089E6948;
    case 597u: goto L_089E6950;
    case 598u: goto L_089E6954;
    case 599u: goto L_089E6964;
    case 600u: goto L_089E6968;
    case 601u: goto L_089E697C;
    case 602u: goto L_089E69C4;
    case 603u: goto L_089E69C8;
    case 604u: goto L_089E69E4;
    case 605u: goto L_089E69EC;
    case 606u: goto L_089E69F0;
    case 607u: goto L_089E69FC;
    case 608u: goto L_089E6A08;
    case 609u: goto L_089E6A10;
    case 610u: goto L_089E6A14;
    case 611u: goto L_089E6A1C;
    case 612u: goto L_089E6A28;
    case 613u: goto L_089E6A30;
    case 614u: goto L_089E6A34;
    case 615u: goto L_089E6A3C;
    case 616u: goto L_089E6A44;
    case 617u: goto L_089E6A78;
    case 618u: goto L_089E6A8C;
    case 619u: goto L_089E6A98;
    case 620u: goto L_089E6ACC;
    case 621u: goto L_089E6B18;
    case 622u: goto L_089E6B24;
    case 623u: goto L_089E6B34;
    case 624u: goto L_089E6B50;
    case 625u: goto L_089E6B5C;
    case 626u: goto L_089E6B68;
    case 627u: goto L_089E6B70;
    case 628u: goto L_089E6B78;
    case 629u: goto L_089E6B90;
    case 630u: goto L_089E6B9C;
    case 631u: goto L_089E6BA4;
    case 632u: goto L_089E6BAC;
    case 633u: goto L_089E6BB4;
    case 634u: goto L_089E6BBC;
    case 635u: goto L_089E6BC4;
    case 636u: goto L_089E6BCC;
    case 637u: goto L_089E6BE0;
    case 638u: goto L_089E6BE8;
    case 639u: goto L_089E6BFC;
    case 640u: goto L_089E6C18;
    case 641u: goto L_089E6C30;
    case 642u: goto L_089E6C50;
    case 643u: goto L_089E6C54;
    case 644u: goto L_089E6C70;
    case 645u: goto L_089E6C78;
    case 646u: goto L_089E6C8C;
    case 647u: goto L_089E6C94;
    case 648u: goto L_089E6CA8;
    case 649u: goto L_089E6CC4;
    case 650u: goto L_089E6CDC;
    case 651u: goto L_089E6CFC;
    case 652u: goto L_089E6D00;
    case 653u: goto L_089E6D1C;
    case 654u: goto L_089E6D24;
    case 655u: goto L_089E6D28;
    case 656u: goto L_089E6D38;
    case 657u: goto L_089E6D40;
    case 658u: goto L_089E6D54;
    case 659u: goto L_089E6D70;
    case 660u: goto L_089E6D88;
    case 661u: goto L_089E6DA8;
    case 662u: goto L_089E6DAC;
    case 663u: goto L_089E6DC8;
    case 664u: goto L_089E6DD0;
    case 665u: goto L_089E6DE4;
    case 666u: goto L_089E6DEC;
    case 667u: goto L_089E6E00;
    case 668u: goto L_089E6E1C;
    case 669u: goto L_089E6E34;
    case 670u: goto L_089E6E54;
    case 671u: goto L_089E6E58;
    case 672u: goto L_089E6E74;
    case 673u: goto L_089E6E7C;
    case 674u: goto L_089E6E90;
    case 675u: goto L_089E6E98;
    case 676u: goto L_089E6EAC;
    case 677u: goto L_089E6EC8;
    case 678u: goto L_089E6EE0;
    case 679u: goto L_089E6F00;
    case 680u: goto L_089E6F04;
    case 681u: goto L_089E6F20;
    case 682u: goto L_089E6F28;
    case 683u: goto L_089E6F3C;
    case 684u: goto L_089E6F44;
    case 685u: goto L_089E6F58;
    case 686u: goto L_089E6FD4;
    case 687u: goto L_089E6FD8;
    case 688u: goto L_089E6FF4;
    case 689u: goto L_089E6FFC;
    case 690u: goto L_089E7010;
    case 691u: goto L_089E7018;
    case 692u: goto L_089E702C;
    case 693u: goto L_089E70C0;
    case 694u: goto L_089E70C4;
    case 695u: goto L_089E70E0;
    case 696u: goto L_089E70E8;
    case 697u: goto L_089E70EC;
    case 698u: goto L_089E70F4;
    case 699u: goto L_089E70FC;
    case 700u: goto L_089E7100;
    case 701u: goto L_089E7110;
    case 702u: goto L_089E711C;
    case 703u: goto L_089E7150;
    case 704u: goto L_089E7168;
    case 705u: goto L_089E7174;
    case 706u: goto L_089E717C;
    case 707u: goto L_089E7184;
    case 708u: goto L_089E718C;
    case 709u: goto L_089E7194;
    case 710u: goto L_089E719C;
    case 711u: goto L_089E71A4;
    case 712u: goto L_089E71B8;
    case 713u: goto L_089E71BC;
    case 714u: goto L_089E71D0;
    case 715u: goto L_089E71E0;
    case 716u: goto L_089E71FC;
    case 717u: goto L_089E7200;
    case 718u: goto L_089E721C;
    case 719u: goto L_089E7224;
    case 720u: goto L_089E7238;
    case 721u: goto L_089E723C;
    case 722u: goto L_089E7250;
    case 723u: goto L_089E7260;
    case 724u: goto L_089E727C;
    case 725u: goto L_089E7280;
    case 726u: goto L_089E729C;
    case 727u: goto L_089E72A4;
    case 728u: goto L_089E72A8;
    case 729u: goto L_089E72B8;
    case 730u: goto L_089E72BC;
    case 731u: goto L_089E72D0;
    case 732u: goto L_089E72E0;
    case 733u: goto L_089E72FC;
    case 734u: goto L_089E7300;
    case 735u: goto L_089E731C;
    case 736u: goto L_089E7324;
    case 737u: goto L_089E7338;
    case 738u: goto L_089E733C;
    case 739u: goto L_089E7350;
    case 740u: goto L_089E7360;
    case 741u: goto L_089E737C;
    case 742u: goto L_089E7380;
    case 743u: goto L_089E739C;
    case 744u: goto L_089E73A4;
    case 745u: goto L_089E73B8;
    case 746u: goto L_089E73BC;
    case 747u: goto L_089E73D0;
    case 748u: goto L_089E73E0;
    case 749u: goto L_089E73FC;
    case 750u: goto L_089E7400;
    case 751u: goto L_089E741C;
    case 752u: goto L_089E7424;
    case 753u: goto L_089E7438;
    case 754u: goto L_089E743C;
    case 755u: goto L_089E7450;
    case 756u: goto L_089E7494;
    case 757u: goto L_089E7498;
    case 758u: goto L_089E74B4;
    case 759u: goto L_089E74BC;
    case 760u: goto L_089E74D0;
    case 761u: goto L_089E74D4;
    case 762u: goto L_089E74E8;
    case 763u: goto L_089E7538;
    case 764u: goto L_089E753C;
    case 765u: goto L_089E7558;
    case 766u: goto L_089E7560;
    case 767u: goto L_089E7564;
    case 768u: goto L_089E756C;
    case 769u: goto L_089E7574;
    case 770u: goto L_089E7578;
    case 771u: goto L_089E7588;
    case 772u: goto L_089E7594;
    case 773u: goto L_089E75C8;
    case 774u: goto L_089E75DC;
    case 775u: goto L_089E75E8;
    case 776u: goto L_089E75F0;
    case 777u: goto L_089E75F8;
    case 778u: goto L_089E7600;
    case 779u: goto L_089E7608;
    case 780u: goto L_089E7610;
    case 781u: goto L_089E7618;
    case 782u: goto L_089E762C;
    case 783u: goto L_089E7630;
    case 784u: goto L_089E7644;
    case 785u: goto L_089E7650;
    case 786u: goto L_089E7668;
    case 787u: goto L_089E766C;
    case 788u: goto L_089E7688;
    case 789u: goto L_089E7690;
    case 790u: goto L_089E76A4;
    case 791u: goto L_089E76A8;
    case 792u: goto L_089E76BC;
    case 793u: goto L_089E76C8;
    case 794u: goto L_089E76E0;
    case 795u: goto L_089E76E4;
    case 796u: goto L_089E7700;
    case 797u: goto L_089E7708;
    case 798u: goto L_089E770C;
    case 799u: goto L_089E771C;
    case 800u: goto L_089E7720;
    case 801u: goto L_089E7734;
    case 802u: goto L_089E7740;
    case 803u: goto L_089E7758;
    case 804u: goto L_089E775C;
    case 805u: goto L_089E7778;
    case 806u: goto L_089E7780;
    case 807u: goto L_089E7794;
    case 808u: goto L_089E7798;
    case 809u: goto L_089E77AC;
    case 810u: goto L_089E77B8;
    case 811u: goto L_089E77D0;
    case 812u: goto L_089E77D4;
    case 813u: goto L_089E77F0;
    case 814u: goto L_089E77F8;
    case 815u: goto L_089E780C;
    case 816u: goto L_089E7810;
    case 817u: goto L_089E7824;
    case 818u: goto L_089E7830;
    case 819u: goto L_089E7848;
    case 820u: goto L_089E784C;
    case 821u: goto L_089E7868;
    case 822u: goto L_089E7870;
    case 823u: goto L_089E7884;
    case 824u: goto L_089E7888;
    case 825u: goto L_089E789C;
    case 826u: goto L_089E78D4;
    case 827u: goto L_089E78D8;
    case 828u: goto L_089E78F4;
    case 829u: goto L_089E78FC;
    case 830u: goto L_089E7910;
    case 831u: goto L_089E7914;
    case 832u: goto L_089E7928;
    case 833u: goto L_089E796C;
    case 834u: goto L_089E7970;
    case 835u: goto L_089E798C;
    case 836u: goto L_089E7994;
    case 837u: goto L_089E7998;
    case 838u: goto L_089E79A0;
    case 839u: goto L_089E79A8;
    case 840u: goto L_089E79AC;
    case 841u: goto L_089E79BC;
    case 842u: goto L_089E79C8;
    case 843u: goto L_089E79FC;
    case 844u: goto L_089E7A04;
    case 845u: goto L_089E7A0C;
    case 846u: goto L_089E7A10;
    case 847u: goto L_089E7A20;
    case 848u: goto L_089E7A2C;
    case 849u: goto L_089E7A60;
    case 850u: goto L_089E7A68;
    case 851u: goto L_089E7A70;
    case 852u: goto L_089E7AA4;
    case 853u: goto L_089E7B08;
    case 854u: goto L_089E7B14;
    case 855u: goto L_089E7B20;
    case 856u: goto L_089E7B2C;
    case 857u: goto L_089E7B38;
    case 858u: goto L_089E7B3C;
    case 859u: goto L_089E7B48;
    case 860u: goto L_089E7B5C;
    case 861u: goto L_089E7B6C;
    case 862u: goto L_089E7B88;
    case 863u: goto L_089E7B94;
    case 864u: goto L_089E7BA0;
    case 865u: goto L_089E7BB0;
    case 866u: goto L_089E7BB8;
    case 867u: goto L_089E7BBC;
    case 868u: goto L_089E7BC8;
    case 869u: goto L_089E7BD4;
    case 870u: goto L_089E7C04;
    case 871u: goto L_089E7C0C;
    case 872u: goto L_089E7C1C;
    case 873u: goto L_089E7C20;
    case 874u: goto L_089E7C50;
    case 875u: goto L_089E7C58;
    case 876u: goto L_089E7C8C;
    case 877u: goto L_089E7C94;
    case 878u: goto L_089E7C9C;
    case 879u: goto L_089E7CA4;
    case 880u: goto L_089E7CB0;
    case 881u: goto L_089E7CB8;
    case 882u: goto L_089E7CBC;
    case 883u: goto L_089E7CC4;
    case 884u: goto L_089E7CD0;
    case 885u: goto L_089E7CD8;
    case 886u: goto L_089E7D20;
    case 887u: goto L_089E7D28;
    case 888u: goto L_089E7D2C;
    case 889u: goto L_089E7D38;
    case 890u: goto L_089E7D3C;
    case 891u: goto L_089E7D90;
    case 892u: goto L_089E7D98;
    case 893u: goto L_089E7D9C;
    case 894u: goto L_089E7DB0;
    case 895u: goto L_089E7DBC;
    case 896u: goto L_089E7DCC;
    case 897u: goto L_089E7DDC;
    case 898u: goto L_089E7DF0;
    case 899u: goto L_089E7DF4;
    case 900u: goto L_089E7E04;
    case 901u: goto L_089E7E08;
    case 902u: goto L_089E7E38;
    case 903u: goto L_089E7E40;
    case 904u: goto L_089E7E58;
    case 905u: goto L_089E7E60;
    case 906u: goto L_089E7E70;
    case 907u: goto L_089E7E74;
    case 908u: goto L_089E7E84;
    case 909u: goto L_089E7E88;
    case 910u: goto L_089E7EA8;
    case 911u: goto L_089E7EB0;
    case 912u: goto L_089E7EC8;
    case 913u: goto L_089E7EF8;
    case 914u: goto L_089E7F28;
    case 915u: goto L_089E7F30;
    case 916u: goto L_089E7F44;
    case 917u: goto L_089E7F6C;
    case 918u: goto L_089E7F74;
    case 919u: goto L_089E7F80;
    case 920u: goto L_089E7FC8;
    case 921u: goto L_089E7FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089E4000:
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(34)));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_089E4018;
L_089E4018:
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
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
L_089E404C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] & 7u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089E40D8;
      }
      goto L_089E406C;
    }
L_089E406C:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (32768u << 16u);
        goto L_089E40E8;
    }
    goto L_089E4074;
L_089E4074:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(35)));
    goto L_089E4078;
L_089E4078:
    ctx.gpr[5] = (ctx.gpr[5] & 96u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (32768u << 16u);
        goto L_089E40B0;
    }
    goto L_089E4084;
L_089E4084:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(33)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (32768u << 16u);
        goto L_089E40B0;
    }
    goto L_089E4094;
L_089E4094:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (ctx.gpr[6] & 1u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089E4110;
      }
      goto L_089E40A4;
    }
L_089E40A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[6] & 2u);
      if (branch_taken) {
          goto L_089E4120;
      }
      goto L_089E40AC;
    }
L_089E40AC:
    ctx.gpr[4] = (32768u << 16u);
    goto L_089E40B0;
L_089E40B0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[31] = (0x089E40BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089E40BCu) goto L_089E40BC;
    return;
L_089E40BC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[31] = (0x089E40C8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089E40C8u) goto L_089E40C8;
    return;
L_089E40C8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E40D8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 6 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(35)));
        goto L_089E4078;
    }
    goto L_089E40E4;
L_089E40E4:
    ctx.gpr[4] = (32768u << 16u);
    goto L_089E40E8;
L_089E40E8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[31] = (0x089E40F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089E40F4u) goto L_089E40F4;
    return;
L_089E40F4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[31] = (0x089E4100u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089E4100u) goto L_089E4100;
    return;
L_089E4100:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4110:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(34)));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[6] & 2u);
    goto L_089E4120;
L_089E4120:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4134;
      }
      goto L_089E4128;
    }
L_089E4128:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(34)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089E4134;
L_089E4134:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4140:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14384)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(34)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[18] = (ctx.gpr[16] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[4] & 32u);
    ctx.gpr[19] = (0u | 5u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-39));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_089E41BC;
      }
      goto L_089E4190;
    }
L_089E4190:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] & 7u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[19];
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089E41C0;
      }
      goto L_089E41A0;
    }
L_089E41A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[31] = (0x089E41B4u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 495u, 0x089F6BF8u>(ctx, &aot_mem) && ctx.pc == 0x089E41B4u) goto L_089E41B4;
    return;
L_089E41B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(34)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_089E41BC;
L_089E41BC:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    goto L_089E41C0;
L_089E41C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[7] & 4u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[20]);
      if (branch_taken) {
          goto L_089E423C;
      }
      goto L_089E41F0;
    }
L_089E41F0:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(35)));
    ctx.gpr[7] = (ctx.gpr[7] & 16u);
    if (ctx.gpr[7] == 0u) {
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[6]));
        goto L_089E4240;
    }
    goto L_089E4200;
L_089E4200:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[4] != ctx.gpr[7]) {
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[6]));
        goto L_089E4240;
    }
    goto L_089E420C;
L_089E420C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[5] != ctx.gpr[4]) {
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[6]));
        goto L_089E4240;
    }
    goto L_089E4218;
L_089E4218:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(34)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x089E4234u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 420u, 0x089DED20u>(ctx, &aot_mem) && ctx.pc == 0x089E4234u) goto L_089E4234;
    return;
L_089E4234:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E424C;
      }
      goto L_089E423C;
    }
L_089E423C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_089E4240;
L_089E4240:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(34)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089E424C;
L_089E424C:
    ctx.gpr[31] = (0x089E4254u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089E45BC;
L_089E4254:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    if (ctx.gpr[4] != ctx.gpr[19]) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
        goto L_089E4264;
    }
    goto L_089E4264;
L_089E4264:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089E4270u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    ctx.pc = 0x08AB4544u;
    return;
L_089E4270:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
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
L_089E4298:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_089E42FC;
      }
      goto L_089E42C0;
    }
L_089E42C0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_089E430C;
      }
      goto L_089E42C8;
    }
L_089E42C8:
    ctx.gpr[4] = (32768u << 16u);
    goto L_089E42CC;
L_089E42CC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[31] = (0x089E42D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089E42D8u) goto L_089E42D8;
    return;
L_089E42D8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[31] = (0x089E42E4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089E42E4u) goto L_089E42E4;
    return;
L_089E42E4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E42FC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (32768u << 16u);
      if (branch_taken) {
          goto L_089E42CC;
      }
      goto L_089E4308;
    }
L_089E4308:
    ctx.gpr[4] = (2227u << 16u);
    goto L_089E430C;
L_089E430C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14384)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x089E4328u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.pc = 0x08AB4544u;
    return;
L_089E4328:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(34)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-25));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4350:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4358:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4360:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4368:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4370:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4378:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4380:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(35)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(34)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] << 8u);
      if (branch_taken) {
          goto L_089E43CC;
      }
      goto L_089E43C4;
    }
L_089E43C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_089E43E4;
      }
      goto L_089E43CC;
    }
L_089E43CC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089E43DCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 35u, 0x089DC7FCu>(ctx, &aot_mem) && ctx.pc == 0x089E43DCu) goto L_089E43DC;
    return;
L_089E43DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E43F8;
      }
      goto L_089E43E4;
    }
L_089E43E4:
    ctx.gpr[16] = (ctx.gpr[16] & 24576u);
    if (ctx.gpr[16] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(34)));
        goto L_089E441C;
    }
    goto L_089E43F0;
L_089E43F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_089E447C;
      }
      goto L_089E43F8;
    }
L_089E43F8:
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
L_089E441C:
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (0u | 1u);
        goto L_089E4428;
    }
    goto L_089E4428;
L_089E4428:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_089E4448;
      }
      goto L_089E4430;
    }
L_089E4430:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089E443Cu);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 11u, 0x089DC40Cu>(ctx, &aot_mem) && ctx.pc == 0x089E443Cu) goto L_089E443C;
    return;
L_089E443C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4458;
      }
      goto L_089E4444;
    }
L_089E4444:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_089E4448;
L_089E4448:
    ctx.gpr[31] = (0x089E4450u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_089E7AA4;
L_089E4450:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089E4488;
      }
      goto L_089E4458;
    }
L_089E4458:
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
L_089E447C:
    ctx.gpr[31] = (0x089E4484u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_089E6ACC;
L_089E4484:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_089E4488;
L_089E4488:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E44A0;
      }
      goto L_089E4490;
    }
L_089E4490:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E44A0;
      }
      goto L_089E4498;
    }
L_089E4498:
    ctx.gpr[31] = (0x089E44A0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 3u, 0x089DC278u>(ctx, &aot_mem) && ctx.pc == 0x089E44A0u) goto L_089E44A0;
    return;
L_089E44A0:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E44B0;
      }
      goto L_089E44A8;
    }
L_089E44A8:
    ctx.gpr[31] = (0x089E44B0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 1u, 0x089DC0F4u>(ctx, &aot_mem) && ctx.pc == 0x089E44B0u) goto L_089E44B0;
    return;
L_089E44B0:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_089E44D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(35)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
      if (branch_taken) {
          goto L_089E4530;
      }
      goto L_089E44F8;
    }
L_089E44F8:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 12u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 112u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 184u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] & 16384u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 8192u);
      if (branch_taken) {
          goto L_089E4548;
      }
      goto L_089E4520;
    }
L_089E4520:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E455C;
      }
      goto L_089E4530;
    }
L_089E4530:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4548:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089E4560;
      }
      goto L_089E4550;
    }
L_089E4550:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1024));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_089E455C;
L_089E455C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_089E4560;
L_089E4560:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E456Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 476u, 0x089E3C3Cu>(ctx, &aot_mem) && ctx.pc == 0x089E456Cu) goto L_089E456C;
    return;
L_089E456C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089E45A4;
      }
      goto L_089E457C;
    }
L_089E457C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x089E4588u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 453u, 0x089E3AD0u>(ctx, &aot_mem) && ctx.pc == 0x089E4588u) goto L_089E4588;
    return;
L_089E4588:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089E457C;
      }
      goto L_089E45A4;
    }
L_089E45A4:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E45BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089E4BA4;
      }
      goto L_089E45F0;
    }
L_089E45F0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14384)));
    ctx.gpr[23] = (ctx.gpr[22] + ctx.gpr[23]);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4BA4;
      }
      goto L_089E4604;
    }
L_089E4604:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(35)));
    ctx.gpr[30] = (0u | 8u);
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] << 8u);
    ctx.gpr[4] = (ctx.gpr[6] & 8192u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_089E4638;
      }
      goto L_089E4620;
    }
L_089E4620:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    ctx.gpr[30] = (0u | 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089E46E4;
      }
      goto L_089E4638;
    }
L_089E4638:
    ctx.gpr[4] = (ctx.gpr[6] & 16384u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] & 3840u);
      if (branch_taken) {
          goto L_089E465C;
      }
      goto L_089E4644;
    }
L_089E4644:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    ctx.gpr[30] = (0u | 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089E46E4;
      }
      goto L_089E465C;
    }
L_089E465C:
    ctx.gpr[5] = (0u | 2560u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 1024u);
      if (branch_taken) {
          goto L_089E4688;
      }
      goto L_089E4668;
    }
L_089E4668:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 768u);
      if (branch_taken) {
          goto L_089E46C0;
      }
      goto L_089E4670;
    }
L_089E4670:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 512u);
      if (branch_taken) {
          goto L_089E46AC;
      }
      goto L_089E4678;
    }
L_089E4678:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 256u);
      if (branch_taken) {
          goto L_089E469C;
      }
      goto L_089E4680;
    }
L_089E4680:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_089E46D4;
      }
      goto L_089E4688;
    }
L_089E4688:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089E46E4;
      }
      goto L_089E469C;
    }
L_089E469C:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089E46E4;
      }
      goto L_089E46AC;
    }
L_089E46AC:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089E46E4;
      }
      goto L_089E46C0;
    }
L_089E46C0:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089E46E4;
      }
      goto L_089E46D4;
    }
L_089E46D4:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    ctx.gpr[30] = (0u | 4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    goto L_089E46E4;
L_089E46E4:
    ctx.gpr[6] = (ctx.gpr[6] & 32768u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089E4B60;
      }
      goto L_089E46F0;
    }
L_089E46F0:
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089E4768;
      }
      goto L_089E4704;
    }
L_089E4704:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 32 ? 1u : 0u);
        goto L_089E4738;
    }
    goto L_089E4710;
L_089E4710:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
      if (branch_taken) {
          goto L_089E4BA4;
      }
      goto L_089E4718;
    }
L_089E4718:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089E4BA4;
      }
      goto L_089E4720;
    }
L_089E4720:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30176)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4738:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 33 ? 1u : 0u);
        goto L_089E4758;
    }
    goto L_089E4740;
L_089E4740:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[17] & 1023u);
      if (branch_taken) {
          goto L_089E491C;
      }
      goto L_089E474C;
    }
L_089E474C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4BA4;
      }
      goto L_089E4754;
    }
L_089E4754:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 33 ? 1u : 0u);
    goto L_089E4758;
L_089E4758:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[17] & 1023u);
      if (branch_taken) {
          goto L_089E48C4;
      }
      goto L_089E4760;
    }
L_089E4760:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4BA4;
      }
      goto L_089E4768;
    }
L_089E4768:
    ctx.gpr[6] = (0u | 512u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (ctx.gpr[4] & 1023u);
      if (branch_taken) {
          goto L_089E479C;
      }
      goto L_089E4774;
    }
L_089E4774:
    ctx.gpr[5] = (0u | 256u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 128u);
      if (branch_taken) {
          goto L_089E47DC;
      }
      goto L_089E4780;
    }
L_089E4780:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 64u);
      if (branch_taken) {
          goto L_089E4828;
      }
      goto L_089E4788;
    }
L_089E4788:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[16] & 1023u);
      if (branch_taken) {
          goto L_089E4878;
      }
      goto L_089E4790;
    }
L_089E4790:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4BA4;
      }
      goto L_089E4798;
    }
L_089E4798:
    ctx.gpr[6] = (ctx.gpr[4] & 1023u);
    goto L_089E479C;
L_089E479C:
    ctx.gpr[5] = (ctx.gpr[5] & 1023u);
    ctx.gpr[6] = (ctx.gpr[6] << 20u);
    ctx.gpr[5] = (ctx.gpr[5] << 10u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 1023u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089E47C8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 453u, 0x089E3AD0u>(ctx, &aot_mem) && ctx.pc == 0x089E47C8u) goto L_089E47C8;
    return;
L_089E47C8:
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[2]);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[18] = (ctx.gpr[18] >> 1u);
    ctx.gpr[17] = (ctx.gpr[17] >> 1u);
    ctx.gpr[16] = (ctx.gpr[16] >> 1u);
    goto L_089E47DC;
L_089E47DC:
    ctx.gpr[4] = (ctx.gpr[16] & 1023u);
    ctx.gpr[5] = (ctx.gpr[17] & 1023u);
    ctx.gpr[4] = (ctx.gpr[4] << 20u);
    ctx.gpr[5] = (ctx.gpr[5] << 10u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[18] & 1023u);
    ctx.gpr[6] = (ctx.gpr[21] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089E4814u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 453u, 0x089E3AD0u>(ctx, &aot_mem) && ctx.pc == 0x089E4814u) goto L_089E4814;
    return;
L_089E4814:
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[2]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] >> 1u);
    ctx.gpr[17] = (ctx.gpr[17] >> 1u);
    ctx.gpr[16] = (ctx.gpr[16] >> 1u);
    goto L_089E4828;
L_089E4828:
    ctx.gpr[4] = (ctx.gpr[16] & 1023u);
    ctx.gpr[5] = (ctx.gpr[17] & 1023u);
    ctx.gpr[4] = (ctx.gpr[4] << 20u);
    ctx.gpr[5] = (ctx.gpr[5] << 10u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[18] & 1023u);
    ctx.gpr[6] = (ctx.gpr[21] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089E4860u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 453u, 0x089E3AD0u>(ctx, &aot_mem) && ctx.pc == 0x089E4860u) goto L_089E4860;
    return;
L_089E4860:
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[2]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] >> 1u);
    ctx.gpr[17] = (ctx.gpr[17] >> 1u);
    ctx.gpr[16] = (ctx.gpr[16] >> 1u);
    ctx.gpr[4] = (ctx.gpr[16] & 1023u);
    goto L_089E4878;
L_089E4878:
    ctx.gpr[5] = (ctx.gpr[17] & 1023u);
    ctx.gpr[4] = (ctx.gpr[4] << 20u);
    ctx.gpr[5] = (ctx.gpr[5] << 10u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[18] & 1023u);
    ctx.gpr[6] = (ctx.gpr[21] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089E48ACu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 453u, 0x089E3AD0u>(ctx, &aot_mem) && ctx.pc == 0x089E48ACu) goto L_089E48AC;
    return;
L_089E48AC:
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[2]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] >> 1u);
    ctx.gpr[17] = (ctx.gpr[17] >> 1u);
    ctx.gpr[16] = (ctx.gpr[16] >> 1u);
    ctx.gpr[5] = (ctx.gpr[17] & 1023u);
    goto L_089E48C4;
L_089E48C4:
    ctx.gpr[4] = (ctx.gpr[21] << 3u);
    ctx.gpr[6] = (ctx.gpr[16] < ctx.gpr[30] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] << 10u);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[16] = (ctx.gpr[30] | 0u);
        goto L_089E48DC;
    }
    goto L_089E48DC;
L_089E48DC:
    ctx.gpr[6] = (ctx.gpr[16] & 1023u);
    ctx.gpr[6] = (ctx.gpr[6] << 20u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[18] & 1023u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089E4904u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 453u, 0x089E3AD0u>(ctx, &aot_mem) && ctx.pc == 0x089E4904u) goto L_089E4904;
    return;
L_089E4904:
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[2]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] >> 1u);
    ctx.gpr[17] = (ctx.gpr[17] >> 1u);
    ctx.gpr[16] = (ctx.gpr[16] >> 1u);
    ctx.gpr[5] = (ctx.gpr[17] & 1023u);
    goto L_089E491C;
L_089E491C:
    ctx.gpr[6] = (ctx.gpr[21] << 3u);
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[30] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] << 10u);
    ctx.gpr[6] = (ctx.gpr[23] + ctx.gpr[6]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[16] = (ctx.gpr[30] | 0u);
        goto L_089E4934;
    }
    goto L_089E4934;
L_089E4934:
    ctx.gpr[4] = (ctx.gpr[16] & 1023u);
    ctx.gpr[4] = (ctx.gpr[4] << 20u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[18] & 1023u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089E495Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 453u, 0x089E3AD0u>(ctx, &aot_mem) && ctx.pc == 0x089E495Cu) goto L_089E495C;
    return;
L_089E495C:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] >> 1u);
    ctx.gpr[18] = (ctx.gpr[18] >> 1u);
    ctx.gpr[16] = (ctx.gpr[16] >> 1u);
    ctx.gpr[5] = (ctx.gpr[17] & 1023u);
    ctx.gpr[6] = (ctx.gpr[21] << 3u);
    ctx.gpr[4] = (ctx.gpr[18] & 1023u);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[5] << 10u);
    ctx.gpr[6] = (ctx.gpr[23] + ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] >> 1u);
    ctx.gpr[17] = (ctx.gpr[17] >> 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[16] < ctx.gpr[30] ? 1u : 0u);
      if (branch_taken) {
          goto L_089E49C0;
      }
      goto L_089E4998;
    }
L_089E4998:
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] & 1023u);
    ctx.gpr[4] = (ctx.gpr[7] & 1023u);
    ctx.gpr[18] = (ctx.gpr[7] >> 1u);
    ctx.gpr[5] = (ctx.gpr[5] << 10u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[17] >> 1u);
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[30] ? 1u : 0u);
    goto L_089E49C0;
L_089E49C0:
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[16] = (ctx.gpr[30] | 0u);
        goto L_089E49C8;
    }
    goto L_089E49C8;
L_089E49C8:
    ctx.gpr[7] = (ctx.gpr[16] & 1023u);
    ctx.gpr[7] = (ctx.gpr[7] << 20u);
    ctx.gpr[5] = (ctx.gpr[7] | ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089E49ECu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 453u, 0x089E3AD0u>(ctx, &aot_mem) && ctx.pc == 0x089E49ECu) goto L_089E49EC;
    return;
L_089E49EC:
    ctx.gpr[21] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (ctx.gpr[16] >> 1u);
    ctx.gpr[5] = (ctx.gpr[17] & 1023u);
    ctx.gpr[4] = (ctx.gpr[18] & 1023u);
    ctx.gpr[6] = (ctx.gpr[21] << 3u);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[5] << 10u);
    ctx.gpr[6] = (ctx.gpr[23] + ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] >> 1u);
    ctx.gpr[17] = (ctx.gpr[17] >> 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[16] < ctx.gpr[30] ? 1u : 0u);
      if (branch_taken) {
          goto L_089E4A48;
      }
      goto L_089E4A20;
    }
L_089E4A20:
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] & 1023u);
    ctx.gpr[4] = (ctx.gpr[7] & 1023u);
    ctx.gpr[18] = (ctx.gpr[7] >> 1u);
    ctx.gpr[5] = (ctx.gpr[5] << 10u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[17] >> 1u);
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[30] ? 1u : 0u);
    goto L_089E4A48;
L_089E4A48:
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[16] = (ctx.gpr[30] | 0u);
        goto L_089E4A50;
    }
    goto L_089E4A50;
L_089E4A50:
    ctx.gpr[7] = (ctx.gpr[16] & 1023u);
    ctx.gpr[7] = (ctx.gpr[7] << 20u);
    ctx.gpr[5] = (ctx.gpr[7] | ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089E4A74u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 453u, 0x089E3AD0u>(ctx, &aot_mem) && ctx.pc == 0x089E4A74u) goto L_089E4A74;
    return;
L_089E4A74:
    ctx.gpr[21] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (ctx.gpr[16] >> 1u);
    ctx.gpr[5] = (ctx.gpr[17] & 1023u);
    ctx.gpr[4] = (ctx.gpr[18] & 1023u);
    ctx.gpr[6] = (ctx.gpr[21] << 3u);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[5] << 10u);
    ctx.gpr[6] = (ctx.gpr[23] + ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] >> 1u);
    ctx.gpr[17] = (ctx.gpr[17] >> 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[16] < ctx.gpr[30] ? 1u : 0u);
      if (branch_taken) {
          goto L_089E4AD0;
      }
      goto L_089E4AA8;
    }
L_089E4AA8:
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] & 1023u);
    ctx.gpr[4] = (ctx.gpr[7] & 1023u);
    ctx.gpr[18] = (ctx.gpr[7] >> 1u);
    ctx.gpr[5] = (ctx.gpr[5] << 10u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[17] >> 1u);
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[30] ? 1u : 0u);
    goto L_089E4AD0;
L_089E4AD0:
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[16] = (ctx.gpr[30] | 0u);
        goto L_089E4AD8;
    }
    goto L_089E4AD8;
L_089E4AD8:
    ctx.gpr[7] = (ctx.gpr[16] & 1023u);
    ctx.gpr[7] = (ctx.gpr[7] << 20u);
    ctx.gpr[5] = (ctx.gpr[7] | ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089E4AFCu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 453u, 0x089E3AD0u>(ctx, &aot_mem) && ctx.pc == 0x089E4AFCu) goto L_089E4AFC;
    return;
L_089E4AFC:
    ctx.gpr[16] = (ctx.gpr[16] >> 1u);
    ctx.gpr[5] = (ctx.gpr[17] & 1023u);
    ctx.gpr[6] = (ctx.gpr[19] << 3u);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[5] << 10u);
    ctx.gpr[4] = (ctx.gpr[18] & 1023u);
    ctx.gpr[6] = (ctx.gpr[23] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[16] < ctx.gpr[30] ? 1u : 0u);
      if (branch_taken) {
          goto L_089E4B38;
      }
      goto L_089E4B20;
    }
L_089E4B20:
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 1023u);
    ctx.gpr[4] = (ctx.gpr[22] & 1023u);
    ctx.gpr[5] = (ctx.gpr[5] << 10u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[22] = (ctx.gpr[22] < ctx.gpr[30] ? 1u : 0u);
    goto L_089E4B38;
L_089E4B38:
    if (ctx.gpr[22] != 0u) {
    ctx.gpr[16] = (ctx.gpr[30] | 0u);
        goto L_089E4B40;
    }
    goto L_089E4B40;
L_089E4B40:
    ctx.gpr[7] = (ctx.gpr[16] & 1023u);
    ctx.gpr[7] = (ctx.gpr[7] << 20u);
    ctx.gpr[5] = (ctx.gpr[7] | ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    goto L_089E4B58;
L_089E4B58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4BA4;
      }
      goto L_089E4B60;
    }
L_089E4B60:
    ctx.gpr[4] = (ctx.gpr[4] & 1023u);
    ctx.gpr[5] = (ctx.gpr[5] & 1023u);
    ctx.gpr[6] = (ctx.gpr[4] << 20u);
    ctx.gpr[5] = (ctx.gpr[5] << 10u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[22] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(8));
    goto L_089E4B8C;
L_089E4B8C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[22]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089E4B8C;
      }
      goto L_089E4BA4;
    }
L_089E4BA4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4BD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 7u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-8));
    ctx.gpr[4] = (ctx.gpr[6] & 65280u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[7] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 3840u);
      if (branch_taken) {
          goto L_089E4DC4;
      }
      goto L_089E4C0C;
    }
L_089E4C0C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E4D18;
      }
      goto L_089E4C14;
    }
L_089E4C14:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089E4D4C;
      }
      goto L_089E4C1C;
    }
L_089E4C1C:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089E4D18;
      }
      goto L_089E4C24;
    }
L_089E4C24:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_089E4DC4;
      }
      goto L_089E4C2C;
    }
L_089E4C2C:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_089E4D80;
      }
      goto L_089E4C34;
    }
L_089E4C34:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089E4C60;
      }
      goto L_089E4C3C;
    }
L_089E4C3C:
    ctx.gpr[4] = (ctx.gpr[4] | 1280u);
    ctx.gpr[5] = (0u | 32u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    goto L_089E4C4C;
L_089E4C4C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089E4C50;
L_089E4C50:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4C60:
    ctx.gpr[6] = (ctx.gpr[4] & 16384u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] & 8192u);
      if (branch_taken) {
          goto L_089E4C7C;
      }
      goto L_089E4C6C;
    }
L_089E4C6C:
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
      if (branch_taken) {
          goto L_089E4C4C;
      }
      goto L_089E4C7C;
    }
L_089E4C7C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u | 1536u);
      if (branch_taken) {
          goto L_089E4C94;
      }
      goto L_089E4C84;
    }
L_089E4C84:
    ctx.gpr[5] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
      if (branch_taken) {
          goto L_089E4C4C;
      }
      goto L_089E4C94;
    }
L_089E4C94:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 1280u);
      if (branch_taken) {
          goto L_089E4CAC;
      }
      goto L_089E4C9C;
    }
L_089E4C9C:
    ctx.gpr[5] = (0u | 24u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
      if (branch_taken) {
          goto L_089E4C4C;
      }
      goto L_089E4CAC;
    }
L_089E4CAC:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 768u);
      if (branch_taken) {
          goto L_089E4CC4;
      }
      goto L_089E4CB4;
    }
L_089E4CB4:
    ctx.gpr[5] = (0u | 32u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
      if (branch_taken) {
          goto L_089E4C4C;
      }
      goto L_089E4CC4;
    }
L_089E4CC4:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 512u);
      if (branch_taken) {
          goto L_089E4CDC;
      }
      goto L_089E4CCC;
    }
L_089E4CCC:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 256u);
      if (branch_taken) {
          goto L_089E4CDC;
      }
      goto L_089E4CD4;
    }
L_089E4CD4:
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (32768u << 16u);
        goto L_089E4CEC;
    }
    goto L_089E4CDC;
L_089E4CDC:
    ctx.gpr[5] = (0u | 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
      if (branch_taken) {
          goto L_089E4C4C;
      }
      goto L_089E4CEC;
    }
L_089E4CEC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[31] = (0x089E4CF8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089E4CF8u) goto L_089E4CF8;
    return;
L_089E4CF8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[31] = (0x089E4D04u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089E4D04u) goto L_089E4D04;
    return;
L_089E4D04:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4D18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (0u | 32u);
      if (branch_taken) {
          goto L_089E4D2C;
      }
      goto L_089E4D24;
    }
L_089E4D24:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
      if (branch_taken) {
          goto L_089E4D34;
      }
      goto L_089E4D2C;
    }
L_089E4D2C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089E4DC4;
      }
      goto L_089E4D34;
    }
L_089E4D34:
    ctx.gpr[2] = (0u | 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (0u | 1280u);
        goto L_089E4D40;
    }
    goto L_089E4D40;
L_089E4D40:
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E4C50;
      }
      goto L_089E4D4C;
    }
L_089E4D4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (0u | 16u);
      if (branch_taken) {
          goto L_089E4D60;
      }
      goto L_089E4D58;
    }
L_089E4D58:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
      if (branch_taken) {
          goto L_089E4D68;
      }
      goto L_089E4D60;
    }
L_089E4D60:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089E4DC4;
      }
      goto L_089E4D68;
    }
L_089E4D68:
    ctx.gpr[2] = (0u | 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (0u | 1792u);
        goto L_089E4D74;
    }
    goto L_089E4D74;
L_089E4D74:
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E4C50;
      }
      goto L_089E4D80;
    }
L_089E4D80:
    ctx.gpr[31] = (0x089E4D88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 56u, 0x089D85C8u>(ctx, &aot_mem) && ctx.pc == 0x089E4D88u) goto L_089E4D88;
    return;
L_089E4D88:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x089E4D94u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 53u, 0x089D857Cu>(ctx, &aot_mem) && ctx.pc == 0x089E4D94u) goto L_089E4D94;
    return;
L_089E4D94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[2] = (0u | 32u);
      if (branch_taken) {
          goto L_089E4DD8;
      }
      goto L_089E4DA4;
    }
L_089E4DA4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 16u);
      if (branch_taken) {
          goto L_089E4DC4;
      }
      goto L_089E4DB0;
    }
L_089E4DB0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
      if (branch_taken) {
          goto L_089E4DF0;
      }
      goto L_089E4DC4;
    }
L_089E4DC4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E4DD8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089E4DC4;
      }
      goto L_089E4DE0;
    }
L_089E4DE0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    goto L_089E4DF0;
L_089E4DF0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E4C50;
      }
      goto L_089E4DF8;
    }
L_089E4DF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[3] = (0u | 0u);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[7] = (0u | 32u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[7];
    ctx.gpr[6] = (0u | 8u);
      if (branch_taken) {
          goto L_089E4EA8;
      }
      goto L_089E4E20;
    }
L_089E4E20:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5008;
      }
      goto L_089E4E34;
    }
L_089E4E34:
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_089E4E3C;
L_089E4E3C:
    ctx.gpr[13] = (0u | 0u);
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[15]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.gpr[14] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_089E4E90;
      }
      goto L_089E4E4C;
    }
L_089E4E4C:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    ctx.gpr[12] = (ctx.gpr[12] >> 24u);
    ctx.gpr[12] = (ctx.gpr[12] & 255u);
    ctx.gpr[24] = (ctx.gpr[12] < static_cast<std::uint32_t>(255) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[24] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4E78;
      }
      goto L_089E4E64;
    }
L_089E4E64:
    { const bool branch_taken = ctx.gpr[12] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4E78;
      }
      goto L_089E4E6C;
    }
L_089E4E6C:
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_089E4E90;
      }
      goto L_089E4E78;
    }
L_089E4E78:
    if (ctx.gpr[12] == 0u) {
    ctx.gpr[11] = (0u | 1u);
        goto L_089E4E80;
    }
    goto L_089E4E80;
L_089E4E80:
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[15]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E4E4C;
      }
      goto L_089E4E90;
    }
L_089E4E90:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E4E3C;
      }
      goto L_089E4EA0;
    }
L_089E4EA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5008;
      }
      goto L_089E4EA8;
    }
L_089E4EA8:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[6];
    ctx.gpr[7] = (0u | 4u);
      if (branch_taken) {
          goto L_089E4F3C;
      }
      goto L_089E4EB0;
    }
L_089E4EB0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089E5008;
      }
      goto L_089E4EC4;
    }
L_089E4EC4:
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_089E4ECC;
L_089E4ECC:
    ctx.gpr[13] = (0u | 0u);
    ctx.gpr[24] = (static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[15]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[24] == 0u;
    ctx.gpr[14] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_089E4F24;
      }
      goto L_089E4EDC;
    }
L_089E4EDC:
    ctx.gpr[24] = (aot_mem.aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    ctx.gpr[24] = (ctx.gpr[24] << 2u);
    ctx.gpr[24] = (ctx.gpr[12] + ctx.gpr[24]);
    ctx.gpr[24] = (aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(3)));
    ctx.gpr[25] = (static_cast<std::int32_t>(ctx.gpr[24]) < 255 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[25] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4F0C;
      }
      goto L_089E4EF8;
    }
L_089E4EF8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[24]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089E4F0C;
      }
      goto L_089E4F00;
    }
L_089E4F00:
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_089E4F24;
      }
      goto L_089E4F0C;
    }
L_089E4F0C:
    if (ctx.gpr[24] == 0u) {
    ctx.gpr[11] = (0u | 1u);
        goto L_089E4F14;
    }
    goto L_089E4F14;
L_089E4F14:
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.gpr[24] = (static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[15]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[24] != 0u;
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E4EDC;
      }
      goto L_089E4F24;
    }
L_089E4F24:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E4ECC;
      }
      goto L_089E4F34;
    }
L_089E4F34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5008;
      }
      goto L_089E4F3C;
    }
L_089E4F3C:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089E5008;
      }
      goto L_089E4F44;
    }
L_089E4F44:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089E5008;
      }
      goto L_089E4F58;
    }
L_089E4F58:
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[15]) >> 1u));
    goto L_089E4F64;
L_089E4F64:
    ctx.gpr[13] = (0u | 0u);
    ctx.gpr[24] = (static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[15]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[24] == 0u;
    ctx.gpr[14] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_089E4FF8;
      }
      goto L_089E4F74;
    }
L_089E4F74:
    ctx.gpr[25] = (aot_mem.aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    ctx.gpr[24] = (ctx.gpr[25] & 15u);
    ctx.gpr[24] = (ctx.gpr[24] << 2u);
    ctx.gpr[24] = (ctx.gpr[12] + ctx.gpr[24]);
    ctx.gpr[24] = (aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(3)));
    ctx.gpr[16] = (static_cast<std::int32_t>(ctx.gpr[24]) < 255 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4FA8;
      }
      goto L_089E4F94;
    }
L_089E4F94:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[24]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089E4FA8;
      }
      goto L_089E4F9C;
    }
L_089E4F9C:
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_089E4FF8;
      }
      goto L_089E4FA8;
    }
L_089E4FA8:
    if (ctx.gpr[24] == 0u) {
    ctx.gpr[11] = (0u | 1u);
        goto L_089E4FB0;
    }
    goto L_089E4FB0;
L_089E4FB0:
    ctx.gpr[24] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[25]) >> 4u));
    ctx.gpr[24] = (ctx.gpr[24] << 2u);
    ctx.gpr[24] = (ctx.gpr[12] + ctx.gpr[24]);
    ctx.gpr[24] = (aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(3)));
    ctx.gpr[25] = (static_cast<std::int32_t>(ctx.gpr[24]) < 255 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[25] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4FE0;
      }
      goto L_089E4FCC;
    }
L_089E4FCC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[24]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089E4FE0;
      }
      goto L_089E4FD4;
    }
L_089E4FD4:
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_089E4FF8;
      }
      goto L_089E4FE0;
    }
L_089E4FE0:
    if (ctx.gpr[24] == 0u) {
    ctx.gpr[11] = (0u | 1u);
        goto L_089E4FE8;
    }
    goto L_089E4FE8;
L_089E4FE8:
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.gpr[24] = (static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[15]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[24] != 0u;
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E4F74;
      }
      goto L_089E4FF8;
    }
L_089E4FF8:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E4F64;
      }
      goto L_089E5008;
    }
L_089E5008:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[6];
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_089E5018;
      }
      goto L_089E5010;
    }
L_089E5010:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[3] = (0u | 8192u);
      if (branch_taken) {
          goto L_089E5024;
      }
      goto L_089E5018;
    }
L_089E5018:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089E5024;
      }
      goto L_089E5020;
    }
L_089E5020:
    ctx.gpr[3] = (0u | 16384u);
    goto L_089E5024;
L_089E5024:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[4] = (ctx.gpr[2] | ctx.gpr[11]);
      if (branch_taken) {
          goto L_089E5070;
      }
      goto L_089E502C;
    }
L_089E502C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 768u);
      if (branch_taken) {
          goto L_089E5044;
      }
      goto L_089E5034;
    }
L_089E5034:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E5044:
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[4] = (0u | 512u);
      if (branch_taken) {
          goto L_089E5060;
      }
      goto L_089E504C;
    }
L_089E504C:
    ctx.gpr[4] = (0u | 256u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E5060:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E5070:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[3] | 1536u);
      if (branch_taken) {
          goto L_089E508C;
      }
      goto L_089E5078;
    }
L_089E5078:
    ctx.gpr[4] = (ctx.gpr[3] | 1280u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E508C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E509C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E50E0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089E4BD4;
L_089E50E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5120;
      }
      goto L_089E50E8;
    }
L_089E50E8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_089E5140;
      }
      goto L_089E50F8;
    }
L_089E50F8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089E5120;
      }
      goto L_089E5100;
    }
L_089E5100:
    ctx.gpr[2] = (0u | 1u);
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
L_089E5120:
    ctx.gpr[2] = (0u | 0u);
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
L_089E5140:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[16] & 32768u);
      if (branch_taken) {
          goto L_089E5120;
      }
      goto L_089E5148;
    }
L_089E5148:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_089E524C;
      }
      goto L_089E5150;
    }
L_089E5150:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (65535u << 16u);
    ctx.gpr[8] = (2222u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-23936));
      if (branch_taken) {
          goto L_089E51A8;
      }
      goto L_089E516C;
    }
L_089E516C:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[9] = (ctx.gpr[7] & 65280u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
      if (branch_taken) {
          goto L_089E5190;
      }
      goto L_089E517C;
    }
L_089E517C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089E51A0;
      }
      goto L_089E5190;
    }
L_089E5190:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    goto L_089E51A0;
L_089E51A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[19] << (ctx.gpr[4] & 31u));
      if (branch_taken) {
          goto L_089E51D4;
      }
      goto L_089E51A8;
    }
L_089E51A8:
    ctx.gpr[7] = (ctx.gpr[4] & 65280u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
        goto L_089E51C8;
    }
    goto L_089E51B4;
L_089E51B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_089E51D0;
      }
      goto L_089E51C8;
    }
L_089E51C8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    goto L_089E51D0;
L_089E51D0:
    ctx.gpr[4] = (ctx.gpr[19] << (ctx.gpr[4] & 31u));
    goto L_089E51D4;
L_089E51D4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 65280u);
      if (branch_taken) {
          goto L_089E5220;
      }
      goto L_089E51E4;
    }
L_089E51E4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[4] & 65280u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_089E520C;
      }
      goto L_089E51F4;
    }
L_089E51F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089E5218;
      }
      goto L_089E520C;
    }
L_089E520C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    goto L_089E5218;
L_089E5218:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[19] << (ctx.gpr[5] & 31u));
      if (branch_taken) {
          goto L_089E5248;
      }
      goto L_089E5220;
    }
L_089E5220:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_089E523C;
      }
      goto L_089E5228;
    }
L_089E5228:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_089E5244;
      }
      goto L_089E523C;
    }
L_089E523C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    goto L_089E5244;
L_089E5244:
    ctx.gpr[5] = (ctx.gpr[19] << (ctx.gpr[5] & 31u));
    goto L_089E5248;
L_089E5248:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    goto L_089E524C;
L_089E524C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089E5258u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089E4DF8;
L_089E5258:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[16] & 36864u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_089E528C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E52B4u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    goto L_089E4BD4;
L_089E52B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5674;
      }
      goto L_089E52BC;
    }
L_089E52BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(35)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[17] = (ctx.gpr[17] << 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089E5948;
      }
      goto L_089E52D8;
    }
L_089E52D8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (0u | 128u);
      if (branch_taken) {
          goto L_089E594C;
      }
      goto L_089E52E0;
    }
L_089E52E0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5674;
      }
      goto L_089E52F0;
    }
L_089E52F0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E592C;
      }
      goto L_089E52F8;
    }
L_089E52F8:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089E592C;
      }
      goto L_089E5300;
    }
L_089E5300:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089E592C;
      }
      goto L_089E5308;
    }
L_089E5308:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_089E5674;
      }
      goto L_089E5310;
    }
L_089E5310:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_089E5814;
      }
      goto L_089E5318;
    }
L_089E5318:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14384)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[18] = (ctx.gpr[16] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(84), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (65535u << 16u);
    ctx.gpr[20] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[19]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-23936));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_089E5384;
      }
      goto L_089E5348;
    }
L_089E5348:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[4] & 65280u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_089E5370;
      }
      goto L_089E5358;
    }
L_089E5358:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089E537C;
      }
      goto L_089E5370;
    }
L_089E5370:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    goto L_089E537C;
L_089E537C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[21] << (ctx.gpr[4] & 31u));
      if (branch_taken) {
          goto L_089E53B0;
      }
      goto L_089E5384;
    }
L_089E5384:
    ctx.gpr[4] = (ctx.gpr[5] & 65280u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_089E53A4;
      }
      goto L_089E5390;
    }
L_089E5390:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_089E53AC;
      }
      goto L_089E53A4;
    }
L_089E53A4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    goto L_089E53AC;
L_089E53AC:
    ctx.gpr[4] = (ctx.gpr[21] << (ctx.gpr[4] & 31u));
    goto L_089E53B0;
L_089E53B0:
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
        goto L_089E53E0;
    }
    goto L_089E53B8;
L_089E53B8:
    ctx.gpr[31] = (0x089E53C0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 494u, 0x089F6B34u>(ctx, &aot_mem) && ctx.pc == 0x089E53C0u) goto L_089E53C0;
    return;
L_089E53C0:
    ctx.gpr[4] = (ctx.gpr[2] >> 1u);
    ctx.gpr[5] = (0u | 512u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
        goto L_089E53E0;
    }
    goto L_089E53D8;
L_089E53D8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_089E53E0;
L_089E53E0:
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 65280u);
      if (branch_taken) {
          goto L_089E5428;
      }
      goto L_089E53EC;
    }
L_089E53EC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[5] & 65280u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_089E5414;
      }
      goto L_089E53FC;
    }
L_089E53FC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089E5420;
      }
      goto L_089E5414;
    }
L_089E5414:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    goto L_089E5420;
L_089E5420:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[21] << (ctx.gpr[20] & 31u));
      if (branch_taken) {
          goto L_089E5450;
      }
      goto L_089E5428;
    }
L_089E5428:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_089E5444;
      }
      goto L_089E5430;
    }
L_089E5430:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_089E544C;
      }
      goto L_089E5444;
    }
L_089E5444:
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    goto L_089E544C;
L_089E544C:
    ctx.gpr[20] = (ctx.gpr[21] << (ctx.gpr[20] & 31u));
    goto L_089E5450;
L_089E5450:
    if (ctx.gpr[20] == ctx.gpr[4]) {
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
        goto L_089E5480;
    }
    goto L_089E5458;
L_089E5458:
    ctx.gpr[31] = (0x089E5460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 494u, 0x089F6B34u>(ctx, &aot_mem) && ctx.pc == 0x089E5460u) goto L_089E5460;
    return;
L_089E5460:
    ctx.gpr[5] = (ctx.gpr[2] >> 1u);
    ctx.gpr[4] = (0u | 512u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
        goto L_089E5480;
    }
    goto L_089E5478;
L_089E5478:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_089E5480;
L_089E5480:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E548Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 476u, 0x089E3C3Cu>(ctx, &aot_mem) && ctx.pc == 0x089E548Cu) goto L_089E548C;
    return;
L_089E548C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089E54C0;
      }
      goto L_089E54A0;
    }
L_089E54A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x089E54ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 453u, 0x089E3AD0u>(ctx, &aot_mem) && ctx.pc == 0x089E54ACu) goto L_089E54AC;
    return;
L_089E54AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089E54A0;
      }
      goto L_089E54C0;
    }
L_089E54C0:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(63));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-64));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] & 3840u);
    ctx.gpr[5] = (0u | 1536u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(92), 0u);
      if (branch_taken) {
          goto L_089E569C;
      }
      goto L_089E54E0;
    }
L_089E54E0:
    ctx.gpr[5] = (0u | 1280u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[17] & 16384u);
      if (branch_taken) {
          goto L_089E554C;
      }
      goto L_089E54EC;
    }
L_089E54EC:
    ctx.gpr[5] = (0u | 768u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 512u);
      if (branch_taken) {
          goto L_089E5508;
      }
      goto L_089E54F8;
    }
L_089E54F8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 256u);
      if (branch_taken) {
          goto L_089E5508;
      }
      goto L_089E5500;
    }
L_089E5500:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (32768u << 16u);
      if (branch_taken) {
          goto L_089E57D4;
      }
      goto L_089E5508;
    }
L_089E5508:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(15));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x089E5528u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 364u, 0x089E33D0u>(ctx, &aot_mem) && ctx.pc == 0x089E5528u) goto L_089E5528;
    return;
L_089E5528:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089E5674;
      }
      goto L_089E5530;
    }
L_089E5530:
    ctx.gpr[31] = (0x089E5538u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089E45BC;
L_089E5538:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089E5960;
      }
      goto L_089E554C;
    }
L_089E554C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-16));
      if (branch_taken) {
          goto L_089E55D4;
      }
      goto L_089E5558;
    }
L_089E5558:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(15));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x089E5570u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 364u, 0x089E33D0u>(ctx, &aot_mem) && ctx.pc == 0x089E5570u) goto L_089E5570;
    return;
L_089E5570:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089E5674;
      }
      goto L_089E5578;
    }
L_089E5578:
    ctx.gpr[4] = (0u | 64u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[31] = (0x089E5588u);
    ctx.gpr[4] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 364u, 0x089E33D0u>(ctx, &aot_mem) && ctx.pc == 0x089E5588u) goto L_089E5588;
    return;
L_089E5588:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089E5530;
      }
      goto L_089E5590;
    }
L_089E5590:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14360));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089E55A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E55A8u) goto L_089E55A8;
    return;
L_089E55A8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
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
L_089E55D4:
    ctx.gpr[6] = (ctx.gpr[17] & 8192u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
        goto L_089E5658;
    }
    goto L_089E55E0;
L_089E55E0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(15));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x089E55F4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 364u, 0x089E33D0u>(ctx, &aot_mem) && ctx.pc == 0x089E55F4u) goto L_089E55F4;
    return;
L_089E55F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089E5674;
      }
      goto L_089E55FC;
    }
L_089E55FC:
    ctx.gpr[4] = (0u | 1024u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[31] = (0x089E560Cu);
    ctx.gpr[4] = (0u | 1024u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 364u, 0x089E33D0u>(ctx, &aot_mem) && ctx.pc == 0x089E560Cu) goto L_089E560C;
    return;
L_089E560C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089E5530;
      }
      goto L_089E5614;
    }
L_089E5614:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14360));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089E562Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E562Cu) goto L_089E562C;
    return;
L_089E562C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
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
L_089E5658:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(15));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x089E566Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 364u, 0x089E33D0u>(ctx, &aot_mem) && ctx.pc == 0x089E566Cu) goto L_089E566C;
    return;
L_089E566C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089E5530;
      }
      goto L_089E5674;
    }
L_089E5674:
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
L_089E569C:
    ctx.gpr[6] = (ctx.gpr[17] & 16384u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-16));
      if (branch_taken) {
          goto L_089E5728;
      }
      goto L_089E56AC;
    }
L_089E56AC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(15));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x089E56C4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 364u, 0x089E33D0u>(ctx, &aot_mem) && ctx.pc == 0x089E56C4u) goto L_089E56C4;
    return;
L_089E56C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089E5674;
      }
      goto L_089E56CC;
    }
L_089E56CC:
    ctx.gpr[4] = (0u | 64u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[31] = (0x089E56DCu);
    ctx.gpr[4] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 364u, 0x089E33D0u>(ctx, &aot_mem) && ctx.pc == 0x089E56DCu) goto L_089E56DC;
    return;
L_089E56DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089E5530;
      }
      goto L_089E56E4;
    }
L_089E56E4:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14360));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089E56FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E56FCu) goto L_089E56FC;
    return;
L_089E56FC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
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
L_089E5728:
    ctx.gpr[6] = (ctx.gpr[17] & 8192u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] << 1u);
      if (branch_taken) {
          goto L_089E57AC;
      }
      goto L_089E5734;
    }
L_089E5734:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(15));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x089E5748u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 364u, 0x089E33D0u>(ctx, &aot_mem) && ctx.pc == 0x089E5748u) goto L_089E5748;
    return;
L_089E5748:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089E5674;
      }
      goto L_089E5750;
    }
L_089E5750:
    ctx.gpr[4] = (0u | 1024u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[31] = (0x089E5760u);
    ctx.gpr[4] = (0u | 1024u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 364u, 0x089E33D0u>(ctx, &aot_mem) && ctx.pc == 0x089E5760u) goto L_089E5760;
    return;
L_089E5760:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089E5530;
      }
      goto L_089E5768;
    }
L_089E5768:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14360));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089E5780u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E5780u) goto L_089E5780;
    return;
L_089E5780:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
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
L_089E57AC:
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(15));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x089E57C4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 364u, 0x089E33D0u>(ctx, &aot_mem) && ctx.pc == 0x089E57C4u) goto L_089E57C4;
    return;
L_089E57C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089E5674;
      }
      goto L_089E57CC;
    }
L_089E57CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5530;
      }
      goto L_089E57D4;
    }
L_089E57D4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.gpr[31] = (0x089E57E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089E57E0u) goto L_089E57E0;
    return;
L_089E57E0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[31] = (0x089E57ECu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089E57ECu) goto L_089E57EC;
    return;
L_089E57EC:
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
L_089E5814:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14384)));
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(84), 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-14368)));
    ctx.gpr[8] = (2223u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-22584));
      if (branch_taken) {
          goto L_089E586C;
      }
      goto L_089E5844;
    }
L_089E5844:
    if (static_cast<std::int32_t>(ctx.gpr[7]) <= 0) {
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
        goto L_089E5884;
    }
    goto L_089E584C;
L_089E584C:
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(15));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_089E58D4;
      }
      goto L_089E586C;
    }
L_089E586C:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089E58A0;
      }
      goto L_089E5878;
    }
L_089E5878:
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
        goto L_089E58C0;
    }
    goto L_089E5880;
L_089E5880:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    goto L_089E5884;
L_089E5884:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(15));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_089E58D4;
      }
      goto L_089E58A0;
    }
L_089E58A0:
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(15));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_089E58D4;
      }
      goto L_089E58C0;
    }
L_089E58C0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(15));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(28)));
    goto L_089E58D4;
L_089E58D4:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[31] = (0x089E58F4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 364u, 0x089E33D0u>(ctx, &aot_mem) && ctx.pc == 0x089E58F4u) goto L_089E58F4;
    return;
L_089E58F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5674;
      }
      goto L_089E590C;
    }
L_089E590C:
    ctx.gpr[31] = (0x089E5914u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089E45BC;
L_089E5914:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089E5960;
      }
      goto L_089E592C;
    }
L_089E592C:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(33)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] | 128u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[21] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089E5960;
      }
      goto L_089E5948;
    }
L_089E5948:
    ctx.gpr[6] = (0u | 128u);
    goto L_089E594C;
L_089E594C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    goto L_089E5960;
L_089E5960:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[31] = (0x089E5978u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089E45BC;
L_089E5978:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
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
L_089E59A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(35)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    ctx.gpr[7] = (ctx.gpr[4] < static_cast<std::uint32_t>(29) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089E5B14;
      }
      goto L_089E59E8;
    }
L_089E59E8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30208)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E5A00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E5A3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E5A74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E5AA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E5AE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E5B14:
    ctx.gpr[4] = (32768u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[31] = (0x089E5B24u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089E5B24u) goto L_089E5B24;
    return;
L_089E5B24:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[31] = (0x089E5B30u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089E5B30u) goto L_089E5B30;
    return;
L_089E5B30:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E5B40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089E6A78;
      }
      goto L_089E5B90;
    }
L_089E5B90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E5BD8;
      }
      goto L_089E5BA4;
    }
L_089E5BA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E5BD8;
      }
      goto L_089E5BB8;
    }
L_089E5BB8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(34)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089E5C0C;
      }
      goto L_089E5BC8;
    }
L_089E5BC8:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E5C24;
      }
      goto L_089E5BD8;
    }
L_089E5BD8:
    ctx.gpr[2] = (0u | 0u);
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
L_089E5C0C:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089E5C18u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 35u, 0x089DC7FCu>(ctx, &aot_mem) && ctx.pc == 0x089E5C18u) goto L_089E5C18;
    return;
L_089E5C18:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5C50;
      }
      goto L_089E5C24;
    }
L_089E5C24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(35)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] & 255u);
    ctx.gpr[16] = (ctx.gpr[16] << 8u);
    ctx.gpr[4] = (ctx.gpr[16] & 24576u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[30] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E5C84;
      }
      goto L_089E5C48;
    }
L_089E5C48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] & 28416u);
      if (branch_taken) {
          goto L_089E5CB4;
      }
      goto L_089E5C50;
    }
L_089E5C50:
    ctx.gpr[2] = (0u | 0u);
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
L_089E5C84:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(34)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (ctx.gpr[30] | 0u);
        goto L_089E5C94;
    }
    goto L_089E5C94;
L_089E5C94:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
      if (branch_taken) {
          goto L_089E5CB0;
      }
      goto L_089E5C9C;
    }
L_089E5C9C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089E5CA8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 11u, 0x089DC40Cu>(ctx, &aot_mem) && ctx.pc == 0x089E5CA8u) goto L_089E5CA8;
    return;
L_089E5CA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5CC8;
      }
      goto L_089E5CB0;
    }
L_089E5CB0:
    ctx.gpr[16] = (ctx.gpr[16] & 28416u);
    goto L_089E5CB4;
L_089E5CB4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 1536 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089E5CFC;
      }
      goto L_089E5CC0;
    }
L_089E5CC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 17920u);
      if (branch_taken) {
          goto L_089E5D34;
      }
      goto L_089E5CC8;
    }
L_089E5CC8:
    ctx.gpr[2] = (0u | 0u);
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
L_089E5CFC:
    ctx.gpr[4] = (0u | 1280u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 1024u);
      if (branch_taken) {
          goto L_089E6054;
      }
      goto L_089E5D08;
    }
L_089E5D08:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 768u);
      if (branch_taken) {
          goto L_089E5D6C;
      }
      goto L_089E5D10;
    }
L_089E5D10:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 512u);
      if (branch_taken) {
          goto L_089E5F4C;
      }
      goto L_089E5D18;
    }
L_089E5D18:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 256u);
      if (branch_taken) {
          goto L_089E5ED4;
      }
      goto L_089E5D20;
    }
L_089E5D20:
    if (ctx.gpr[16] == ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
        goto L_089E5E60;
    }
    goto L_089E5D28;
L_089E5D28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (32768u << 16u);
      if (branch_taken) {
          goto L_089E69F0;
      }
      goto L_089E5D30;
    }
L_089E5D30:
    ctx.gpr[4] = (0u | 17920u);
    goto L_089E5D34;
L_089E5D34:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 17664u);
      if (branch_taken) {
          goto L_089E60E0;
      }
      goto L_089E5D3C;
    }
L_089E5D3C:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 9728u);
      if (branch_taken) {
          goto L_089E63C4;
      }
      goto L_089E5D44;
    }
L_089E5D44:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 9472u);
      if (branch_taken) {
          goto L_089E6698;
      }
      goto L_089E5D4C;
    }
L_089E5D4C:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 2560u);
      if (branch_taken) {
          goto L_089E6848;
      }
      goto L_089E5D54;
    }
L_089E5D54:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 1536u);
      if (branch_taken) {
          goto L_089E5DE4;
      }
      goto L_089E5D5C;
    }
L_089E5D5C:
    if (ctx.gpr[16] == ctx.gpr[4]) {
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
        goto L_089E5FC8;
    }
    goto L_089E5D64;
L_089E5D64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (32768u << 16u);
      if (branch_taken) {
          goto L_089E69F0;
      }
      goto L_089E5D6C;
    }
L_089E5D6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
        goto L_089E6A14;
    }
    goto L_089E5D80;
L_089E5D80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    goto L_089E5D84;
L_089E5D84:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_089E5DC0;
      }
      goto L_089E5D98;
    }
L_089E5D98:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089E5DA4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 387u, 0x089E377Cu>(ctx, &aot_mem) && ctx.pc == 0x089E5DA4u) goto L_089E5DA4;
    return;
L_089E5DA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E5D98;
      }
      goto L_089E5DBC;
    }
L_089E5DBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    goto L_089E5DC0;
L_089E5DC0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[6]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_089E5D84;
      }
      goto L_089E5DDC;
    }
L_089E5DDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_089E6A14;
      }
      goto L_089E5DE4;
    }
L_089E5DE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
        goto L_089E6A14;
    }
    goto L_089E5DF8;
L_089E5DF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    goto L_089E5DFC;
L_089E5DFC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_089E5E38;
      }
      goto L_089E5E10;
    }
L_089E5E10:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089E5E1Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 378u, 0x089E364Cu>(ctx, &aot_mem) && ctx.pc == 0x089E5E1Cu) goto L_089E5E1C;
    return;
L_089E5E1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089E5E10;
      }
      goto L_089E5E34;
    }
L_089E5E34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    goto L_089E5E38;
L_089E5E38:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[6]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_089E5DFC;
      }
      goto L_089E5E54;
    }
L_089E5E54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_089E6A14;
      }
      goto L_089E5E5C;
    }
L_089E5E5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    goto L_089E5E60;
L_089E5E60:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
        goto L_089E6A14;
    }
    goto L_089E5E70;
L_089E5E70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    goto L_089E5E74;
L_089E5E74:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_089E5EB0;
      }
      goto L_089E5E88;
    }
L_089E5E88:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089E5E94u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 380u, 0x089E36ACu>(ctx, &aot_mem) && ctx.pc == 0x089E5E94u) goto L_089E5E94;
    return;
L_089E5E94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089E5E88;
      }
      goto L_089E5EAC;
    }
L_089E5EAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    goto L_089E5EB0;
L_089E5EB0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[6]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_089E5E74;
      }
      goto L_089E5ECC;
    }
L_089E5ECC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_089E6A14;
      }
      goto L_089E5ED4;
    }
L_089E5ED4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
        goto L_089E6A14;
    }
    goto L_089E5EE8;
L_089E5EE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    goto L_089E5EEC;
L_089E5EEC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_089E5F28;
      }
      goto L_089E5F00;
    }
L_089E5F00:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089E5F0Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 379u, 0x089E367Cu>(ctx, &aot_mem) && ctx.pc == 0x089E5F0Cu) goto L_089E5F0C;
    return;
L_089E5F0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089E5F00;
      }
      goto L_089E5F24;
    }
L_089E5F24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    goto L_089E5F28;
L_089E5F28:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[6]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_089E5EEC;
      }
      goto L_089E5F44;
    }
L_089E5F44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_089E6A14;
      }
      goto L_089E5F4C;
    }
L_089E5F4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
        goto L_089E6A14;
    }
    goto L_089E5F60;
L_089E5F60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    goto L_089E5F64;
L_089E5F64:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_089E5FA0;
      }
      goto L_089E5F78;
    }
L_089E5F78:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089E5F84u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 384u, 0x089E36F0u>(ctx, &aot_mem) && ctx.pc == 0x089E5F84u) goto L_089E5F84;
    return;
L_089E5F84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089E5F78;
      }
      goto L_089E5F9C;
    }
L_089E5F9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    goto L_089E5FA0;
L_089E5FA0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[6]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_089E5F64;
      }
      goto L_089E5FBC;
    }
L_089E5FBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_089E6A14;
      }
      goto L_089E5FC4;
    }
L_089E5FC4:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    goto L_089E5FC8;
L_089E5FC8:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (0u | 255u);
      if (branch_taken) {
          goto L_089E6A10;
      }
      goto L_089E5FD8;
    }
L_089E5FD8:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    goto L_089E5FDC;
L_089E5FDC:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_089E6030;
      }
      goto L_089E5FF0;
    }
L_089E5FF0:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E5FF0;
      }
      goto L_089E602C;
    }
L_089E602C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    goto L_089E6030;
L_089E6030:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_089E5FDC;
      }
      goto L_089E604C;
    }
L_089E604C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_089E6A14;
      }
      goto L_089E6054;
    }
L_089E6054:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
        goto L_089E6A14;
    }
    goto L_089E6068;
L_089E6068:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (0u | 0u);
    goto L_089E6070;
L_089E6070:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_089E60BC;
      }
      goto L_089E6080;
    }
L_089E6080:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E6080;
      }
      goto L_089E60B8;
    }
L_089E60B8:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    goto L_089E60BC;
L_089E60BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_089E6070;
      }
      goto L_089E60D8;
    }
L_089E60D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_089E6A14;
      }
      goto L_089E60E0;
    }
L_089E60E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_089E62CC;
      }
      goto L_089E60F0;
    }
L_089E60F0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_089E61D0;
      }
      goto L_089E60F8;
    }
L_089E60F8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (32768u << 16u);
      if (branch_taken) {
          goto L_089E63A4;
      }
      goto L_089E6100;
    }
L_089E6100:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (0u | 255u);
    goto L_089E6110;
L_089E6110:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E6110;
      }
      goto L_089E6148;
    }
L_089E6148:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
        goto L_089E6A14;
    }
    goto L_089E615C;
L_089E615C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    goto L_089E6160;
L_089E6160:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_089E61AC;
      }
      goto L_089E6174;
    }
L_089E6174:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[8] & 15u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[4] = (ctx.gpr[8] & 240u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 4u));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E6174;
      }
      goto L_089E61A8;
    }
L_089E61A8:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    goto L_089E61AC;
L_089E61AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_089E6160;
      }
      goto L_089E61C8;
    }
L_089E61C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_089E6A14;
      }
      goto L_089E61D0;
    }
L_089E61D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_089E61E4;
L_089E61E4:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E61E4;
      }
      goto L_089E621C;
    }
L_089E621C:
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    goto L_089E6224;
L_089E6224:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 255 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E6224;
      }
      goto L_089E6244;
    }
L_089E6244:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
        goto L_089E6A14;
    }
    goto L_089E6258;
L_089E6258:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    goto L_089E625C;
L_089E625C:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_089E62A8;
      }
      goto L_089E6270;
    }
L_089E6270:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[8] & 15u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[4] = (ctx.gpr[8] & 240u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 4u));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E6270;
      }
      goto L_089E62A4;
    }
L_089E62A4:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    goto L_089E62A8;
L_089E62A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_089E625C;
      }
      goto L_089E62C4;
    }
L_089E62C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_089E6A14;
      }
      goto L_089E62CC;
    }
L_089E62CC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089E6A10;
      }
      goto L_089E62E0;
    }
L_089E62E0:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    goto L_089E62E4;
L_089E62E4:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_089E637C;
      }
      goto L_089E62F8;
    }
L_089E62F8:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[9] & 15u);
    ctx.gpr[10] = (ctx.gpr[10] << 2u);
    ctx.gpr[10] = (ctx.gpr[4] + ctx.gpr[10]);
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] & 240u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(1)));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 4u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(2)));
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(3)));
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[9]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(3)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E62F8;
      }
      goto L_089E6378;
    }
L_089E6378:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    goto L_089E637C;
L_089E637C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_089E62E4;
      }
      goto L_089E6398;
    }
L_089E6398:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_089E6A14;
      }
      goto L_089E63A0;
    }
L_089E63A0:
    ctx.gpr[4] = (32768u << 16u);
    goto L_089E63A4;
L_089E63A4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[30]);
    ctx.gpr[31] = (0x089E63B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089E63B0u) goto L_089E63B0;
    return;
L_089E63B0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[31] = (0x089E63BCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089E63BCu) goto L_089E63BC;
    return;
L_089E63BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_089E6A14;
      }
      goto L_089E63C4;
    }
L_089E63C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_089E65A0;
      }
      goto L_089E63D4;
    }
L_089E63D4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_089E64AC;
      }
      goto L_089E63DC;
    }
L_089E63DC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (32768u << 16u);
      if (branch_taken) {
          goto L_089E6678;
      }
      goto L_089E63E4;
    }
L_089E63E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 0u);
    goto L_089E63F0;
L_089E63F0:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E63F0;
      }
      goto L_089E6424;
    }
L_089E6424:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
        goto L_089E6A14;
    }
    goto L_089E6438;
L_089E6438:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    goto L_089E643C;
L_089E643C:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_089E6488;
      }
      goto L_089E6450;
    }
L_089E6450:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[8] & 240u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 4u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[4] = (ctx.gpr[8] & 15u);
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E6450;
      }
      goto L_089E6484;
    }
L_089E6484:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    goto L_089E6488;
L_089E6488:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_089E643C;
      }
      goto L_089E64A4;
    }
L_089E64A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_089E6A14;
      }
      goto L_089E64AC;
    }
L_089E64AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_089E64BC;
L_089E64BC:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E64BC;
      }
      goto L_089E64F0;
    }
L_089E64F0:
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    goto L_089E64F8;
L_089E64F8:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 255 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E64F8;
      }
      goto L_089E6518;
    }
L_089E6518:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
        goto L_089E6A14;
    }
    goto L_089E652C;
L_089E652C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    goto L_089E6530;
L_089E6530:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_089E657C;
      }
      goto L_089E6544;
    }
L_089E6544:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[8] & 15u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[4] = (ctx.gpr[8] & 240u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 4u));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E6544;
      }
      goto L_089E6578;
    }
L_089E6578:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    goto L_089E657C;
L_089E657C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_089E6530;
      }
      goto L_089E6598;
    }
L_089E6598:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_089E6A14;
      }
      goto L_089E65A0;
    }
L_089E65A0:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089E6A10;
      }
      goto L_089E65B4;
    }
L_089E65B4:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    goto L_089E65B8;
L_089E65B8:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_089E6650;
      }
      goto L_089E65CC;
    }
L_089E65CC:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[9] & 15u);
    ctx.gpr[10] = (ctx.gpr[10] << 2u);
    ctx.gpr[10] = (ctx.gpr[4] + ctx.gpr[10]);
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] & 240u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(1)));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 4u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(2)));
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(3)));
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[9]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(3)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E65CC;
      }
      goto L_089E664C;
    }
L_089E664C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    goto L_089E6650;
L_089E6650:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_089E65B8;
      }
      goto L_089E666C;
    }
L_089E666C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_089E6A14;
      }
      goto L_089E6674;
    }
L_089E6674:
    ctx.gpr[4] = (32768u << 16u);
    goto L_089E6678;
L_089E6678:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[30]);
    ctx.gpr[31] = (0x089E6684u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089E6684u) goto L_089E6684;
    return;
L_089E6684:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[31] = (0x089E6690u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089E6690u) goto L_089E6690;
    return;
L_089E6690:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_089E6A14;
      }
      goto L_089E6698;
    }
L_089E6698:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 32u);
      if (branch_taken) {
          goto L_089E66DC;
      }
      goto L_089E66A8;
    }
L_089E66A8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(24)));
        goto L_089E66F0;
    }
    goto L_089E66B4;
L_089E66B4:
    ctx.gpr[4] = (32768u << 16u);
    goto L_089E66B8;
L_089E66B8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    ctx.gpr[31] = (0x089E66C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089E66C4u) goto L_089E66C4;
    return;
L_089E66C4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[31] = (0x089E66D0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089E66D0u) goto L_089E66D0;
    return;
L_089E66D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_089E6A14;
      }
      goto L_089E66D8;
    }
L_089E66D8:
    ctx.gpr[5] = (0u | 32u);
    goto L_089E66DC;
L_089E66DC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (32768u << 16u);
      if (branch_taken) {
          goto L_089E66B8;
      }
      goto L_089E66E4;
    }
L_089E66E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089E67AC;
      }
      goto L_089E66EC;
    }
L_089E66EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(24)));
    goto L_089E66F0;
L_089E66F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (0u | 255u);
    goto L_089E66FC;
L_089E66FC:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E66FC;
      }
      goto L_089E6734;
    }
L_089E6734:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
        goto L_089E6A14;
    }
    goto L_089E6748;
L_089E6748:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    goto L_089E674C;
L_089E674C:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_089E6784;
      }
      goto L_089E6760;
    }
L_089E6760:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E6760;
      }
      goto L_089E6780;
    }
L_089E6780:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    goto L_089E6784;
L_089E6784:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_089E674C;
      }
      goto L_089E67A0;
    }
L_089E67A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_089E6A14;
      }
      goto L_089E67A8;
    }
L_089E67A8:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    goto L_089E67AC;
L_089E67AC:
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089E6A10;
      }
      goto L_089E67BC;
    }
L_089E67BC:
    ctx.gpr[4] = (0u | 255u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    goto L_089E67C4;
L_089E67C4:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_089E6824;
      }
      goto L_089E67D8;
    }
L_089E67D8:
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] << 2u);
    ctx.gpr[10] = (ctx.gpr[5] + ctx.gpr[10]);
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E67D8;
      }
      goto L_089E6820;
    }
L_089E6820:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    goto L_089E6824;
L_089E6824:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_089E67C4;
      }
      goto L_089E6840;
    }
L_089E6840:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_089E6A14;
      }
      goto L_089E6848;
    }
L_089E6848:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 32u);
      if (branch_taken) {
          goto L_089E688C;
      }
      goto L_089E6858;
    }
L_089E6858:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(24)));
        goto L_089E68A0;
    }
    goto L_089E6864;
L_089E6864:
    ctx.gpr[4] = (32768u << 16u);
    goto L_089E6868;
L_089E6868:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    ctx.gpr[31] = (0x089E6874u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089E6874u) goto L_089E6874;
    return;
L_089E6874:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.gpr[31] = (0x089E6880u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089E6880u) goto L_089E6880;
    return;
L_089E6880:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_089E6A14;
      }
      goto L_089E6888;
    }
L_089E6888:
    ctx.gpr[5] = (0u | 32u);
    goto L_089E688C;
L_089E688C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (32768u << 16u);
      if (branch_taken) {
          goto L_089E6868;
      }
      goto L_089E6894;
    }
L_089E6894:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089E6954;
      }
      goto L_089E689C;
    }
L_089E689C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(24)));
    goto L_089E68A0;
L_089E68A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 0u);
    goto L_089E68A8;
L_089E68A8:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E68A8;
      }
      goto L_089E68DC;
    }
L_089E68DC:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
        goto L_089E6A14;
    }
    goto L_089E68F0;
L_089E68F0:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    goto L_089E68F4;
L_089E68F4:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_089E692C;
      }
      goto L_089E6908;
    }
L_089E6908:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E6908;
      }
      goto L_089E6928;
    }
L_089E6928:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    goto L_089E692C;
L_089E692C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_089E68F4;
      }
      goto L_089E6948;
    }
L_089E6948:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_089E6A14;
      }
      goto L_089E6950;
    }
L_089E6950:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    goto L_089E6954;
L_089E6954:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089E6A10;
      }
      goto L_089E6964;
    }
L_089E6964:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    goto L_089E6968;
L_089E6968:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[10] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_089E69C8;
      }
      goto L_089E697C;
    }
L_089E697C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E697C;
      }
      goto L_089E69C4;
    }
L_089E69C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    goto L_089E69C8;
L_089E69C8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_089E6968;
      }
      goto L_089E69E4;
    }
L_089E69E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_089E6A14;
      }
      goto L_089E69EC;
    }
L_089E69EC:
    ctx.gpr[4] = (32768u << 16u);
    goto L_089E69F0;
L_089E69F0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    ctx.gpr[31] = (0x089E69FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089E69FCu) goto L_089E69FC;
    return;
L_089E69FC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[31] = (0x089E6A08u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089E6A08u) goto L_089E6A08;
    return;
L_089E6A08:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    goto L_089E6A10;
L_089E6A10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_089E6A14;
L_089E6A14:
    if (ctx.gpr[4] != ctx.gpr[30]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
        goto L_089E6A34;
    }
    goto L_089E6A1C;
L_089E6A1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
        goto L_089E6A34;
    }
    goto L_089E6A28;
L_089E6A28:
    ctx.gpr[31] = (0x089E6A30u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 3u, 0x089DC278u>(ctx, &aot_mem) && ctx.pc == 0x089E6A30u) goto L_089E6A30;
    return;
L_089E6A30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    goto L_089E6A34;
L_089E6A34:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E6A44;
      }
      goto L_089E6A3C;
    }
L_089E6A3C:
    ctx.gpr[31] = (0x089E6A44u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 1u, 0x089DC0F4u>(ctx, &aot_mem) && ctx.pc == 0x089E6A44u) goto L_089E6A44;
    return;
L_089E6A44:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
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
L_089E6A78:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[31] = (0x089E6A8Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089E6A8Cu) goto L_089E6A8C;
    return;
L_089E6A8C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.gpr[31] = (0x089E6A98u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089E6A98u) goto L_089E6A98;
    return;
L_089E6A98:
    ctx.gpr[2] = (0u | 0u);
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
L_089E6ACC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089E6B24;
      }
      goto L_089E6B18;
    }
L_089E6B18:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[6] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(35)));
        goto L_089E6B50;
    }
    goto L_089E6B24;
L_089E6B24:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089E6B34u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 56u, 0x089DCC3Cu>(ctx, &aot_mem) && ctx.pc == 0x089E6B34u) goto L_089E6B34;
    return;
L_089E6B34:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(35)));
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089E6B5C;
      }
      goto L_089E6B50;
    }
L_089E6B50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    goto L_089E6B5C;
L_089E6B5C:
    ctx.gpr[6] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 8u);
      if (branch_taken) {
          goto L_089E75C8;
      }
      goto L_089E6B68;
    }
L_089E6B68:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 4u);
      if (branch_taken) {
          goto L_089E7150;
      }
      goto L_089E6B70;
    }
L_089E6B70:
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_089E79FC;
    }
    goto L_089E6B78;
L_089E6B78:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] & 3840u);
    ctx.gpr[5] = (0u | 2560u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089E6C78;
      }
      goto L_089E6B90;
    }
L_089E6B90:
    ctx.gpr[5] = (0u | 1536u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 1280u);
      if (branch_taken) {
          goto L_089E6F28;
      }
      goto L_089E6B9C;
    }
L_089E6B9C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 1024u);
      if (branch_taken) {
          goto L_089E6FFC;
      }
      goto L_089E6BA4;
    }
L_089E6BA4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 768u);
      if (branch_taken) {
          goto L_089E6BCC;
      }
      goto L_089E6BAC;
    }
L_089E6BAC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 512u);
      if (branch_taken) {
          goto L_089E6E7C;
      }
      goto L_089E6BB4;
    }
L_089E6BB4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 256u);
      if (branch_taken) {
          goto L_089E6DD0;
      }
      goto L_089E6BBC;
    }
L_089E6BBC:
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
        goto L_089E6D28;
    }
    goto L_089E6BC4;
L_089E6BC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_089E70EC;
      }
      goto L_089E6BCC;
    }
L_089E6BCC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_089E7A60;
    }
    goto L_089E6BE0;
L_089E6BE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    goto L_089E6BE8;
L_089E6BE8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_089E6C54;
      }
      goto L_089E6BFC;
    }
L_089E6BFC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[21] & 15u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[31] = (0x089E6C18u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 377u, 0x089E35F8u>(ctx, &aot_mem) && ctx.pc == 0x089E6C18u) goto L_089E6C18;
    return;
L_089E6C18:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 4u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x089E6C30u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 377u, 0x089E35F8u>(ctx, &aot_mem) && ctx.pc == 0x089E6C30u) goto L_089E6C30;
    return;
L_089E6C30:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_089E6BFC;
      }
      goto L_089E6C50;
    }
L_089E6C50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    goto L_089E6C54;
L_089E6C54:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24)));
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[6]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_089E6BE8;
      }
      goto L_089E6C70;
    }
L_089E6C70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_089E7A60;
      }
      goto L_089E6C78;
    }
L_089E6C78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_089E7A60;
    }
    goto L_089E6C8C;
L_089E6C8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    goto L_089E6C94;
L_089E6C94:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_089E6D00;
      }
      goto L_089E6CA8;
    }
L_089E6CA8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[21] & 15u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[31] = (0x089E6CC4u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 371u, 0x089E34A0u>(ctx, &aot_mem) && ctx.pc == 0x089E6CC4u) goto L_089E6CC4;
    return;
L_089E6CC4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 4u));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[31] = (0x089E6CDCu);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 371u, 0x089E34A0u>(ctx, &aot_mem) && ctx.pc == 0x089E6CDCu) goto L_089E6CDC;
    return;
L_089E6CDC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_089E6CA8;
      }
      goto L_089E6CFC;
    }
L_089E6CFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    goto L_089E6D00;
L_089E6D00:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24)));
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[6]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_089E6C94;
      }
      goto L_089E6D1C;
    }
L_089E6D1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_089E7A60;
      }
      goto L_089E6D24;
    }
L_089E6D24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    goto L_089E6D28;
L_089E6D28:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_089E7A60;
    }
    goto L_089E6D38;
L_089E6D38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    goto L_089E6D40;
L_089E6D40:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_089E6DAC;
      }
      goto L_089E6D54;
    }
L_089E6D54:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[21] & 15u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[31] = (0x089E6D70u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 373u, 0x089E3500u>(ctx, &aot_mem) && ctx.pc == 0x089E6D70u) goto L_089E6D70;
    return;
L_089E6D70:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 4u));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[31] = (0x089E6D88u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 373u, 0x089E3500u>(ctx, &aot_mem) && ctx.pc == 0x089E6D88u) goto L_089E6D88;
    return;
L_089E6D88:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_089E6D54;
      }
      goto L_089E6DA8;
    }
L_089E6DA8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    goto L_089E6DAC;
L_089E6DAC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24)));
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[6]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_089E6D40;
      }
      goto L_089E6DC8;
    }
L_089E6DC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_089E7A60;
      }
      goto L_089E6DD0;
    }
L_089E6DD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_089E7A60;
    }
    goto L_089E6DE4;
L_089E6DE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    goto L_089E6DEC;
L_089E6DEC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_089E6E58;
      }
      goto L_089E6E00;
    }
L_089E6E00:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[21] & 15u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[31] = (0x089E6E1Cu);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 372u, 0x089E34D0u>(ctx, &aot_mem) && ctx.pc == 0x089E6E1Cu) goto L_089E6E1C;
    return;
L_089E6E1C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 4u));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[31] = (0x089E6E34u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 372u, 0x089E34D0u>(ctx, &aot_mem) && ctx.pc == 0x089E6E34u) goto L_089E6E34;
    return;
L_089E6E34:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_089E6E00;
      }
      goto L_089E6E54;
    }
L_089E6E54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    goto L_089E6E58;
L_089E6E58:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24)));
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[6]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_089E6DEC;
      }
      goto L_089E6E74;
    }
L_089E6E74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_089E7A60;
      }
      goto L_089E6E7C;
    }
L_089E6E7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_089E7A60;
    }
    goto L_089E6E90;
L_089E6E90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    goto L_089E6E98;
L_089E6E98:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_089E6F04;
      }
      goto L_089E6EAC;
    }
L_089E6EAC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[21] & 15u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[31] = (0x089E6EC8u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 374u, 0x089E3540u>(ctx, &aot_mem) && ctx.pc == 0x089E6EC8u) goto L_089E6EC8;
    return;
L_089E6EC8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 4u));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[31] = (0x089E6EE0u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 374u, 0x089E3540u>(ctx, &aot_mem) && ctx.pc == 0x089E6EE0u) goto L_089E6EE0;
    return;
L_089E6EE0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_089E6EAC;
      }
      goto L_089E6F00;
    }
L_089E6F00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    goto L_089E6F04;
L_089E6F04:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24)));
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[6]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_089E6E98;
      }
      goto L_089E6F20;
    }
L_089E6F20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_089E7A60;
      }
      goto L_089E6F28;
    }
L_089E6F28:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_089E7A60;
    }
    goto L_089E6F3C;
L_089E6F3C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    goto L_089E6F44;
L_089E6F44:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_089E6FD8;
      }
      goto L_089E6F58;
    }
L_089E6F58:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[6] & 15u);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[19] + ctx.gpr[8]);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 4u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    ctx.gpr[10] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 1u));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E6F58;
      }
      goto L_089E6FD4;
    }
L_089E6FD4:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    goto L_089E6FD8;
L_089E6FD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24)));
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_089E6F44;
      }
      goto L_089E6FF4;
    }
L_089E6FF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_089E7A60;
      }
      goto L_089E6FFC;
    }
L_089E6FFC:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_089E7A60;
    }
    goto L_089E7010;
L_089E7010:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    goto L_089E7018;
L_089E7018:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_089E70C4;
      }
      goto L_089E702C;
    }
L_089E702C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[4] & 15u);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[19] + ctx.gpr[8]);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    ctx.gpr[10] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 4u));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(3)));
    ctx.gpr[11] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E702C;
      }
      goto L_089E70C0;
    }
L_089E70C0:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    goto L_089E70C4;
L_089E70C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24)));
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_089E7018;
      }
      goto L_089E70E0;
    }
L_089E70E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_089E7A60;
      }
      goto L_089E70E8;
    }
L_089E70E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_089E70EC;
L_089E70EC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089E7100;
      }
      goto L_089E70F4;
    }
L_089E70F4:
    ctx.gpr[31] = (0x089E70FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 272u, 0x089D9D94u>(ctx, &aot_mem) && ctx.pc == 0x089E70FCu) goto L_089E70FC;
    return;
L_089E70FC:
    ctx.gpr[4] = (0u | 1u);
    goto L_089E7100;
L_089E7100:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[31] = (0x089E7110u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089E7110u) goto L_089E7110;
    return;
L_089E7110:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[31] = (0x089E711Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089E711Cu) goto L_089E711C;
    return;
L_089E711C:
    ctx.gpr[2] = (0u | 0u);
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
L_089E7150:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] & 3840u);
    ctx.gpr[5] = (0u | 2560u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089E7224;
      }
      goto L_089E7168;
    }
L_089E7168:
    ctx.gpr[5] = (0u | 1536u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 1280u);
      if (branch_taken) {
          goto L_089E7424;
      }
      goto L_089E7174;
    }
L_089E7174:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 1024u);
      if (branch_taken) {
          goto L_089E74BC;
      }
      goto L_089E717C;
    }
L_089E717C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 768u);
      if (branch_taken) {
          goto L_089E71A4;
      }
      goto L_089E7184;
    }
L_089E7184:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 512u);
      if (branch_taken) {
          goto L_089E73A4;
      }
      goto L_089E718C;
    }
L_089E718C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 256u);
      if (branch_taken) {
          goto L_089E7324;
      }
      goto L_089E7194;
    }
L_089E7194:
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
        goto L_089E72A8;
    }
    goto L_089E719C;
L_089E719C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_089E7564;
      }
      goto L_089E71A4;
    }
L_089E71A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_089E7A60;
    }
    goto L_089E71B8;
L_089E71B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    goto L_089E71BC;
L_089E71BC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_089E7200;
      }
      goto L_089E71D0;
    }
L_089E71D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[31] = (0x089E71E0u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 377u, 0x089E35F8u>(ctx, &aot_mem) && ctx.pc == 0x089E71E0u) goto L_089E71E0;
    return;
L_089E71E0:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E71D0;
      }
      goto L_089E71FC;
    }
L_089E71FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    goto L_089E7200;
L_089E7200:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24)));
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[6]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_089E71BC;
      }
      goto L_089E721C;
    }
L_089E721C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_089E7A60;
      }
      goto L_089E7224;
    }
L_089E7224:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_089E7A60;
    }
    goto L_089E7238;
L_089E7238:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    goto L_089E723C;
L_089E723C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_089E7280;
      }
      goto L_089E7250;
    }
L_089E7250:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[31] = (0x089E7260u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 371u, 0x089E34A0u>(ctx, &aot_mem) && ctx.pc == 0x089E7260u) goto L_089E7260;
    return;
L_089E7260:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E7250;
      }
      goto L_089E727C;
    }
L_089E727C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    goto L_089E7280;
L_089E7280:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24)));
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[6]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_089E723C;
      }
      goto L_089E729C;
    }
L_089E729C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_089E7A60;
      }
      goto L_089E72A4;
    }
L_089E72A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    goto L_089E72A8;
L_089E72A8:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_089E7A60;
    }
    goto L_089E72B8;
L_089E72B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    goto L_089E72BC;
L_089E72BC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_089E7300;
      }
      goto L_089E72D0;
    }
L_089E72D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[31] = (0x089E72E0u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 373u, 0x089E3500u>(ctx, &aot_mem) && ctx.pc == 0x089E72E0u) goto L_089E72E0;
    return;
L_089E72E0:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E72D0;
      }
      goto L_089E72FC;
    }
L_089E72FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    goto L_089E7300;
L_089E7300:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24)));
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[6]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_089E72BC;
      }
      goto L_089E731C;
    }
L_089E731C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_089E7A60;
      }
      goto L_089E7324;
    }
L_089E7324:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_089E7A60;
    }
    goto L_089E7338;
L_089E7338:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    goto L_089E733C;
L_089E733C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_089E7380;
      }
      goto L_089E7350;
    }
L_089E7350:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[31] = (0x089E7360u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 372u, 0x089E34D0u>(ctx, &aot_mem) && ctx.pc == 0x089E7360u) goto L_089E7360;
    return;
L_089E7360:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E7350;
      }
      goto L_089E737C;
    }
L_089E737C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    goto L_089E7380;
L_089E7380:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24)));
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[6]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_089E733C;
      }
      goto L_089E739C;
    }
L_089E739C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_089E7A60;
      }
      goto L_089E73A4;
    }
L_089E73A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_089E7A60;
    }
    goto L_089E73B8;
L_089E73B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    goto L_089E73BC;
L_089E73BC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_089E7400;
      }
      goto L_089E73D0;
    }
L_089E73D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[31] = (0x089E73E0u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 374u, 0x089E3540u>(ctx, &aot_mem) && ctx.pc == 0x089E73E0u) goto L_089E73E0;
    return;
L_089E73E0:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E73D0;
      }
      goto L_089E73FC;
    }
L_089E73FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    goto L_089E7400;
L_089E7400:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24)));
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[6]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_089E73BC;
      }
      goto L_089E741C;
    }
L_089E741C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_089E7A60;
      }
      goto L_089E7424;
    }
L_089E7424:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_089E7A60;
    }
    goto L_089E7438;
L_089E7438:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    goto L_089E743C;
L_089E743C:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_089E7498;
      }
      goto L_089E7450;
    }
L_089E7450:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    ctx.gpr[8] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E7450;
      }
      goto L_089E7494;
    }
L_089E7494:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    goto L_089E7498;
L_089E7498:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24)));
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_089E743C;
      }
      goto L_089E74B4;
    }
L_089E74B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_089E7A60;
      }
      goto L_089E74BC;
    }
L_089E74BC:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_089E7A60;
    }
    goto L_089E74D0;
L_089E74D0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    goto L_089E74D4;
L_089E74D4:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_089E753C;
      }
      goto L_089E74E8;
    }
L_089E74E8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    ctx.gpr[8] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    ctx.gpr[10] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E74E8;
      }
      goto L_089E7538;
    }
L_089E7538:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    goto L_089E753C;
L_089E753C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24)));
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_089E74D4;
      }
      goto L_089E7558;
    }
L_089E7558:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_089E7A60;
      }
      goto L_089E7560;
    }
L_089E7560:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_089E7564;
L_089E7564:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089E7578;
      }
      goto L_089E756C;
    }
L_089E756C:
    ctx.gpr[31] = (0x089E7574u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 272u, 0x089D9D94u>(ctx, &aot_mem) && ctx.pc == 0x089E7574u) goto L_089E7574;
    return;
L_089E7574:
    ctx.gpr[4] = (0u | 1u);
    goto L_089E7578;
L_089E7578:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[31] = (0x089E7588u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089E7588u) goto L_089E7588;
    return;
L_089E7588:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[31] = (0x089E7594u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089E7594u) goto L_089E7594;
    return;
L_089E7594:
    ctx.gpr[2] = (0u | 0u);
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
L_089E75C8:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] & 3840u);
    ctx.gpr[5] = (0u | 2560u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089E7690;
      }
      goto L_089E75DC;
    }
L_089E75DC:
    ctx.gpr[5] = (0u | 1536u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 1280u);
      if (branch_taken) {
          goto L_089E7870;
      }
      goto L_089E75E8;
    }
L_089E75E8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 1024u);
      if (branch_taken) {
          goto L_089E78FC;
      }
      goto L_089E75F0;
    }
L_089E75F0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 768u);
      if (branch_taken) {
          goto L_089E7618;
      }
      goto L_089E75F8;
    }
L_089E75F8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 512u);
      if (branch_taken) {
          goto L_089E77F8;
      }
      goto L_089E7600;
    }
L_089E7600:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 256u);
      if (branch_taken) {
          goto L_089E7780;
      }
      goto L_089E7608;
    }
L_089E7608:
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
        goto L_089E770C;
    }
    goto L_089E7610;
L_089E7610:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_089E7998;
      }
      goto L_089E7618;
    }
L_089E7618:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_089E7A60;
    }
    goto L_089E762C;
L_089E762C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    goto L_089E7630;
L_089E7630:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_089E766C;
      }
      goto L_089E7644;
    }
L_089E7644:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089E7650u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 377u, 0x089E35F8u>(ctx, &aot_mem) && ctx.pc == 0x089E7650u) goto L_089E7650;
    return;
L_089E7650:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E7644;
      }
      goto L_089E7668;
    }
L_089E7668:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    goto L_089E766C;
L_089E766C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24)));
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_089E7630;
      }
      goto L_089E7688;
    }
L_089E7688:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_089E7A60;
      }
      goto L_089E7690;
    }
L_089E7690:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_089E7A60;
    }
    goto L_089E76A4;
L_089E76A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    goto L_089E76A8;
L_089E76A8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_089E76E4;
      }
      goto L_089E76BC;
    }
L_089E76BC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089E76C8u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 371u, 0x089E34A0u>(ctx, &aot_mem) && ctx.pc == 0x089E76C8u) goto L_089E76C8;
    return;
L_089E76C8:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089E76BC;
      }
      goto L_089E76E0;
    }
L_089E76E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    goto L_089E76E4;
L_089E76E4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24)));
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_089E76A8;
      }
      goto L_089E7700;
    }
L_089E7700:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_089E7A60;
      }
      goto L_089E7708;
    }
L_089E7708:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    goto L_089E770C;
L_089E770C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_089E7A60;
    }
    goto L_089E771C;
L_089E771C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    goto L_089E7720;
L_089E7720:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_089E775C;
      }
      goto L_089E7734;
    }
L_089E7734:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089E7740u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 373u, 0x089E3500u>(ctx, &aot_mem) && ctx.pc == 0x089E7740u) goto L_089E7740;
    return;
L_089E7740:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089E7734;
      }
      goto L_089E7758;
    }
L_089E7758:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    goto L_089E775C;
L_089E775C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24)));
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_089E7720;
      }
      goto L_089E7778;
    }
L_089E7778:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_089E7A60;
      }
      goto L_089E7780;
    }
L_089E7780:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_089E7A60;
    }
    goto L_089E7794;
L_089E7794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    goto L_089E7798;
L_089E7798:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_089E77D4;
      }
      goto L_089E77AC;
    }
L_089E77AC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089E77B8u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 372u, 0x089E34D0u>(ctx, &aot_mem) && ctx.pc == 0x089E77B8u) goto L_089E77B8;
    return;
L_089E77B8:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089E77AC;
      }
      goto L_089E77D0;
    }
L_089E77D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    goto L_089E77D4;
L_089E77D4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24)));
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_089E7798;
      }
      goto L_089E77F0;
    }
L_089E77F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_089E7A60;
      }
      goto L_089E77F8;
    }
L_089E77F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_089E7A60;
    }
    goto L_089E780C;
L_089E780C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    goto L_089E7810;
L_089E7810:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_089E784C;
      }
      goto L_089E7824;
    }
L_089E7824:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089E7830u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 374u, 0x089E3540u>(ctx, &aot_mem) && ctx.pc == 0x089E7830u) goto L_089E7830;
    return;
L_089E7830:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089E7824;
      }
      goto L_089E7848;
    }
L_089E7848:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    goto L_089E784C;
L_089E784C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24)));
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_089E7810;
      }
      goto L_089E7868;
    }
L_089E7868:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_089E7A60;
      }
      goto L_089E7870;
    }
L_089E7870:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_089E7A60;
    }
    goto L_089E7884;
L_089E7884:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    goto L_089E7888;
L_089E7888:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_089E78D8;
      }
      goto L_089E789C;
    }
L_089E789C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E789C;
      }
      goto L_089E78D4;
    }
L_089E78D4:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    goto L_089E78D8;
L_089E78D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24)));
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_089E7888;
      }
      goto L_089E78F4;
    }
L_089E78F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_089E7A60;
      }
      goto L_089E78FC;
    }
L_089E78FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_089E7A60;
    }
    goto L_089E7910;
L_089E7910:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    goto L_089E7914;
L_089E7914:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_089E7970;
      }
      goto L_089E7928;
    }
L_089E7928:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(3)));
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E7928;
      }
      goto L_089E796C;
    }
L_089E796C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    goto L_089E7970;
L_089E7970:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24)));
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_089E7914;
      }
      goto L_089E798C;
    }
L_089E798C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_089E7A60;
      }
      goto L_089E7994;
    }
L_089E7994:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_089E7998;
L_089E7998:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089E79AC;
      }
      goto L_089E79A0;
    }
L_089E79A0:
    ctx.gpr[31] = (0x089E79A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 272u, 0x089D9D94u>(ctx, &aot_mem) && ctx.pc == 0x089E79A8u) goto L_089E79A8;
    return;
L_089E79A8:
    ctx.gpr[4] = (0u | 1u);
    goto L_089E79AC;
L_089E79AC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[31] = (0x089E79BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089E79BCu) goto L_089E79BC;
    return;
L_089E79BC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[31] = (0x089E79C8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089E79C8u) goto L_089E79C8;
    return;
L_089E79C8:
    ctx.gpr[2] = (0u | 0u);
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
L_089E79FC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089E7A10;
      }
      goto L_089E7A04;
    }
L_089E7A04:
    ctx.gpr[31] = (0x089E7A0Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 272u, 0x089D9D94u>(ctx, &aot_mem) && ctx.pc == 0x089E7A0Cu) goto L_089E7A0C;
    return;
L_089E7A0C:
    ctx.gpr[4] = (0u | 1u);
    goto L_089E7A10;
L_089E7A10:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[31] = (0x089E7A20u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089E7A20u) goto L_089E7A20;
    return;
L_089E7A20:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.gpr[31] = (0x089E7A2Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089E7A2Cu) goto L_089E7A2C;
    return;
L_089E7A2C:
    ctx.gpr[2] = (0u | 0u);
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
L_089E7A60:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7A70;
      }
      goto L_089E7A68;
    }
L_089E7A68:
    ctx.gpr[31] = (0x089E7A70u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 272u, 0x089D9D94u>(ctx, &aot_mem) && ctx.pc == 0x089E7A70u) goto L_089E7A70;
    return;
L_089E7A70:
    ctx.gpr[2] = (0u | 1u);
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
L_089E7AA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-17520));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(17472), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(35)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(17476), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(17492), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] & 16384u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(17484), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(17496), ctx.gpr[22]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (0u | 256u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[21] = (ctx.gpr[21] & 3840u);
    ctx.gpr[22] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(17480), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(17488), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(17500), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(17504), ctx.gpr[31]);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[19] = (0u | 16u);
        goto L_089E7B08;
    }
    goto L_089E7B08;
L_089E7B08:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089E7B20;
      }
      goto L_089E7B14;
    }
L_089E7B14:
    ctx.gpr[7] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[7];
    ctx.gpr[23] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089E7B3C;
      }
      goto L_089E7B20;
    }
L_089E7B20:
    ctx.gpr[7] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[21]) < 1281 ? 1u : 0u);
      if (branch_taken) {
          goto L_089E7C9C;
      }
      goto L_089E7B2C;
    }
L_089E7B2C:
    ctx.gpr[7] = (0u | 256u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[7];
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[21]) < 1281 ? 1u : 0u);
      if (branch_taken) {
          goto L_089E7C9C;
      }
      goto L_089E7B38;
    }
L_089E7B38:
    ctx.gpr[23] = (ctx.gpr[16] | 0u);
    goto L_089E7B3C;
L_089E7B3C:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x089E7B48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 125u, 0x089E0F58u>(ctx, &aot_mem) && ctx.pc == 0x089E7B48u) goto L_089E7B48;
    return;
L_089E7B48:
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x089E7B5Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 40u, 0x089E0694u>(ctx, &aot_mem) && ctx.pc == 0x089E7B5Cu) goto L_089E7B5C;
    return;
L_089E7B5C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16424));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089E7B6Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 181u, 0x089E1750u>(ctx, &aot_mem) && ctx.pc == 0x089E7B6Cu) goto L_089E7B6C;
    return;
L_089E7B6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E7B88u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 210u, 0x089E1A58u>(ctx, &aot_mem) && ctx.pc == 0x089E7B88u) goto L_089E7B88;
    return;
L_089E7B88:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 1281 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 1536u);
      if (branch_taken) {
          goto L_089E7C04;
      }
      goto L_089E7B94;
    }
L_089E7B94:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 1280 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (32768u << 16u);
      if (branch_taken) {
          goto L_089E7BBC;
      }
      goto L_089E7BA0;
    }
L_089E7BA0:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
      if (branch_taken) {
          goto L_089E7C58;
      }
      goto L_089E7BB0;
    }
L_089E7BB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7C8C;
      }
      goto L_089E7BB8;
    }
L_089E7BB8:
    ctx.gpr[4] = (32768u << 16u);
    goto L_089E7BBC;
L_089E7BBC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(17448), ctx.gpr[22]);
    ctx.gpr[31] = (0x089E7BC8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089E7BC8u) goto L_089E7BC8;
    return;
L_089E7BC8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(17452), ctx.gpr[2]);
    ctx.gpr[31] = (0x089E7BD4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(17448));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089E7BD4u) goto L_089E7BD4;
    return;
L_089E7BD4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(17476)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(17480)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(17484)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(17488)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(17492)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(17496)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(17500)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(17504)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(17520));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E7C04:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[4];
    ctx.gpr[4] = (32768u << 16u);
      if (branch_taken) {
          goto L_089E7BBC;
      }
      goto L_089E7C0C;
    }
L_089E7C0C:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 255u);
      if (branch_taken) {
          goto L_089E7C8C;
      }
      goto L_089E7C1C;
    }
L_089E7C1C:
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_089E7C20;
L_089E7C20:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16424)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16425)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16426)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E7C20;
      }
      goto L_089E7C50;
    }
L_089E7C50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7C8C;
      }
      goto L_089E7C58;
    }
L_089E7C58:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16424)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16425)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16426)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16427)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E7C58;
      }
      goto L_089E7C8C;
    }
L_089E7C8C:
    ctx.gpr[31] = (0x089E7C94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 143u, 0x089E10D8u>(ctx, &aot_mem) && ctx.pc == 0x089E7C94u) goto L_089E7C94;
    return;
L_089E7C94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7EC8;
      }
      goto L_089E7C9C;
    }
L_089E7C9C:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (0u | 1536u);
      if (branch_taken) {
          goto L_089E7CBC;
      }
      goto L_089E7CA4;
    }
L_089E7CA4:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[21]) < 1280 ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(17468), ctx.gpr[4]);
        goto L_089E7D9C;
    }
    goto L_089E7CB0;
L_089E7CB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_089E7D2C;
      }
      goto L_089E7CB8;
    }
L_089E7CB8:
    ctx.gpr[7] = (0u | 1536u);
    goto L_089E7CBC;
L_089E7CBC:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[7];
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_089E7D98;
      }
      goto L_089E7CC4;
    }
L_089E7CC4:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089E7DCC;
      }
      goto L_089E7CD0;
    }
L_089E7CD0:
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 0u);
    goto L_089E7CD8;
L_089E7CD8:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[8]);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[8]);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(1)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[8]);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E7CD8;
      }
      goto L_089E7D20;
    }
L_089E7D20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089E7DCC;
      }
      goto L_089E7D28;
    }
L_089E7D28:
    ctx.gpr[7] = (0u | 0u);
    goto L_089E7D2C;
L_089E7D2C:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089E7DCC;
      }
      goto L_089E7D38;
    }
L_089E7D38:
    ctx.gpr[8] = (0u | 0u);
    goto L_089E7D3C;
L_089E7D3C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(3)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E7D3C;
      }
      goto L_089E7D90;
    }
L_089E7D90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089E7DCC;
      }
      goto L_089E7D98;
    }
L_089E7D98:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(17468), ctx.gpr[4]);
    goto L_089E7D9C;
L_089E7D9C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(17464), ctx.gpr[5]);
    ctx.gpr[4] = (32768u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(17456), ctx.gpr[22]);
    ctx.gpr[31] = (0x089E7DB0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 425u, 0x089CE21Cu>(ctx, &aot_mem) && ctx.pc == 0x089E7DB0u) goto L_089E7DB0;
    return;
L_089E7DB0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(17460), ctx.gpr[2]);
    ctx.gpr[31] = (0x089E7DBCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(17456));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 418u, 0x089CE154u>(ctx, &aot_mem) && ctx.pc == 0x089E7DBCu) goto L_089E7DBC;
    return;
L_089E7DBC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(17464)));
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(17468)));
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    goto L_089E7DCC;
L_089E7DCC:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[7];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089E7E60;
      }
      goto L_089E7DDC;
    }
L_089E7DDC:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7EC8;
      }
      goto L_089E7DF0;
    }
L_089E7DF0:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_089E7DF4;
L_089E7DF4:
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    if (ctx.gpr[10] == 0u) {
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
        goto L_089E7E40;
    }
    goto L_089E7E04;
L_089E7E04:
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[9]);
    goto L_089E7E08;
L_089E7E08:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] << 4u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[10]);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_089E7E08;
      }
      goto L_089E7E38;
    }
L_089E7E38:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_089E7E40;
L_089E7E40:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[10]);
      if (branch_taken) {
          goto L_089E7DF4;
      }
      goto L_089E7E58;
    }
L_089E7E58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7EC8;
      }
      goto L_089E7E60;
    }
L_089E7E60:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7EC8;
      }
      goto L_089E7E70;
    }
L_089E7E70:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_089E7E74;
L_089E7E74:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    if (ctx.gpr[10] == 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
        goto L_089E7EB0;
    }
    goto L_089E7E84;
L_089E7E84:
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[8]);
    goto L_089E7E88;
L_089E7E88:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_089E7E88;
      }
      goto L_089E7EA8;
    }
L_089E7EA8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_089E7EB0;
L_089E7EB0:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[10]);
      if (branch_taken) {
          goto L_089E7E74;
      }
      goto L_089E7EC8;
    }
L_089E7EC8:
    ctx.gpr[2] = (ctx.gpr[22] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(17476)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(17480)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(17484)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(17488)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(17492)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(17496)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(17500)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(17504)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(17520));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E7EF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[31]);
    ctx.gpr[31] = (0x089E7F28u);
    ctx.gpr[6] = (0u | 0u);
    goto L_089E44D4;
L_089E7F28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 13u, 0x089E80DCu>(ctx, &aot_mem); return;
      }
      goto L_089E7F30;
    }
L_089E7F30:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14384)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[19] = (ctx.gpr[18] + ctx.gpr[19]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 13u, 0x089E80DCu>(ctx, &aot_mem); return;
      }
      goto L_089E7F44;
    }
L_089E7F44:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (3u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-12));
    ctx.gpr[20] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[8] = (0u | 101u);
    ctx.gpr[31] = (0x089E7F6Cu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(28674));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 286u, 0x089CD5A8u>(ctx, &aot_mem) && ctx.pc == 0x089E7F6Cu) goto L_089E7F6C;
    return;
L_089E7F6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 13u, 0x089E80DCu>(ctx, &aot_mem); return;
      }
      goto L_089E7F74;
    }
L_089E7F74:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089E7F80u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 476u, 0x089E3C3Cu>(ctx, &aot_mem) && ctx.pc == 0x089E7F80u) goto L_089E7F80;
    return;
L_089E7F80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(35)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (ctx.gpr[4] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] << 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_089E7FC8;
L_089E7FC8:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(52), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(56), ctx.gpr[8]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089E7FC8;
      }
      goto L_089E7FF4;
    }
L_089E7FF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    ctx.pc = 0x089E8000u; return;
}

void recomp_unit_0120(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0120_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_120(Runtime &runtime) {
    runtime.register_generated_unit(120u, 0x089E4000u, 16384u, &recomp_unit_0120, &recomp_unit_0120_entry);
    runtime.register_function(0x089E4000u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4018u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E404Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E406Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4074u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4078u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4084u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4094u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E40A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E40ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E40B0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E40BCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E40C8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E40D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E40E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E40E8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E40F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4100u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4110u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4120u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4128u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4134u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4140u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4190u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E41A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E41B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E41BCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E41C0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E41F0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4200u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E420Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4218u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4234u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E423Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4240u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E424Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4254u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4264u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4270u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4298u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E42C0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E42C8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E42CCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E42D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E42E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E42FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4308u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E430Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4328u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4350u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4358u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4360u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4368u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4370u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4378u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4380u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E43C4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E43CCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E43DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E43E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E43F0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E43F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E441Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4428u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4430u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E443Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4444u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4448u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4450u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4458u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E447Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4484u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4488u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4490u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4498u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E44A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E44A8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E44B0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E44D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E44F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4520u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4530u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4548u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4550u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E455Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4560u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E456Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E457Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4588u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E45A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E45BCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E45F0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4604u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4620u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4638u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4644u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E465Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4668u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4670u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4678u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4680u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4688u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E469Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E46ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E46C0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E46D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E46E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E46F0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4704u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4710u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4718u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4720u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4738u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4740u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E474Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4754u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4758u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4760u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4768u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4774u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4780u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4788u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4790u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4798u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E479Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E47C8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E47DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4814u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4828u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4860u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4878u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E48ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E48C4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E48DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4904u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E491Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4934u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E495Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4998u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E49C0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E49C8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E49ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4A20u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4A48u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4A50u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4A74u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4AA8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4AD0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4AD8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4AFCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4B20u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4B38u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4B40u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4B58u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4B60u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4B8Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4BA4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4BD4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C0Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C14u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C1Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C24u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C2Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C34u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C3Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C4Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C50u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C60u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C6Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C7Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C84u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C94u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C9Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4CACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4CB4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4CC4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4CCCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4CD4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4CDCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4CECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4CF8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D04u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D18u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D24u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D2Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D34u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D40u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D4Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D58u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D60u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D68u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D74u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D80u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D88u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D94u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4DA4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4DB0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4DC4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4DD8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4DE0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4DF0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4DF8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4E20u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4E34u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4E3Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4E4Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4E64u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4E6Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4E78u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4E80u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4E90u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4EA0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4EA8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4EB0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4EC4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4ECCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4EDCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4EF8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4F00u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4F0Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4F14u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4F24u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4F34u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4F3Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4F44u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4F58u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4F64u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4F74u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4F94u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4F9Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4FA8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4FB0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4FCCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4FD4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4FE0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4FE8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4FF8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5008u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5010u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5018u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5020u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5024u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E502Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5034u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5044u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E504Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5060u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5070u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5078u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E508Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E509Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E50E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E50E8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E50F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5100u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5120u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5140u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5148u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5150u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E516Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E517Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5190u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E51A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E51A8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E51B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E51C8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E51D0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E51D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E51E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E51F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E520Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5218u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5220u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5228u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E523Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5244u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5248u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E524Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5258u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E528Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E52B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E52BCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E52D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E52E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E52F0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E52F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5300u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5308u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5310u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5318u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5348u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5358u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5370u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E537Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5384u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5390u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E53A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E53ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E53B0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E53B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E53C0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E53D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E53E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E53ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E53FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5414u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5420u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5428u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5430u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5444u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E544Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5450u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5458u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5460u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5478u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5480u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E548Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E54A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E54ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E54C0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E54E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E54ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E54F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5500u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5508u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5528u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5530u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5538u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E554Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5558u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5570u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5578u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5588u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5590u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E55A8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E55D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E55E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E55F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E55FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E560Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5614u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E562Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5658u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E566Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5674u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E569Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E56ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E56C4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E56CCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E56DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E56E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E56FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5728u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5734u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5748u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5750u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5760u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5768u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5780u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E57ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E57C4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E57CCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E57D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E57E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E57ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5814u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5844u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E584Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E586Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5878u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5880u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5884u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E58A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E58C0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E58D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E58F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E590Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5914u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E592Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5948u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E594Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5960u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5978u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E59A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E59E8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5A00u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5A3Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5A74u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5AA8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5AE0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5B14u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5B24u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5B30u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5B40u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5B90u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5BA4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5BB8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5BC8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5BD8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5C0Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5C18u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5C24u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5C48u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5C50u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5C84u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5C94u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5C9Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5CA8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5CB0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5CB4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5CC0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5CC8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5CFCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D08u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D10u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D18u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D20u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D28u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D30u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D34u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D3Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D44u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D4Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D54u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D5Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D64u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D6Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D80u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D84u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D98u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5DA4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5DBCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5DC0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5DDCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5DE4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5DF8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5DFCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E10u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E1Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E34u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E38u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E54u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E5Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E60u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E70u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E74u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E88u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E94u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5EACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5EB0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5ECCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5ED4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5EE8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5EECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F00u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F0Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F24u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F28u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F44u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F4Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F60u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F64u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F78u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F84u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F9Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5FA0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5FBCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5FC4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5FC8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5FD8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5FDCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5FF0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E602Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6030u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E604Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6054u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6068u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6070u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6080u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E60B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E60BCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E60D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E60E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E60F0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E60F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6100u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6110u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6148u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E615Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6160u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6174u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E61A8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E61ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E61C8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E61D0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E61E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E621Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6224u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6244u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6258u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E625Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6270u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E62A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E62A8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E62C4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E62CCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E62E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E62E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E62F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6378u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E637Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6398u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E63A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E63A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E63B0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E63BCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E63C4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E63D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E63DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E63E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E63F0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6424u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6438u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E643Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6450u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6484u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6488u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E64A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E64ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E64BCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E64F0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E64F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6518u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E652Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6530u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6544u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6578u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E657Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6598u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E65A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E65B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E65B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E65CCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E664Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6650u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E666Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6674u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6678u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6684u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6690u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6698u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E66A8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E66B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E66B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E66C4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E66D0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E66D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E66DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E66E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E66ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E66F0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E66FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6734u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6748u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E674Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6760u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6780u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6784u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E67A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E67A8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E67ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E67BCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E67C4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E67D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6820u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6824u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6840u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6848u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6858u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6864u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6868u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6874u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6880u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6888u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E688Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6894u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E689Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E68A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E68A8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E68DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E68F0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E68F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6908u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6928u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E692Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6948u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6950u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6954u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6964u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6968u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E697Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E69C4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E69C8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E69E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E69ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E69F0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E69FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A08u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A10u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A14u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A1Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A28u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A30u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A34u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A3Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A44u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A78u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A8Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A98u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6ACCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6B18u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6B24u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6B34u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6B50u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6B5Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6B68u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6B70u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6B78u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6B90u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6B9Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6BA4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6BACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6BB4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6BBCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6BC4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6BCCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6BE0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6BE8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6BFCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6C18u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6C30u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6C50u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6C54u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6C70u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6C78u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6C8Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6C94u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6CA8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6CC4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6CDCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6CFCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D00u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D1Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D24u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D28u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D38u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D40u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D54u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D70u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D88u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6DA8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6DACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6DC8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6DD0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6DE4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6DECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E00u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E1Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E34u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E54u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E58u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E74u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E7Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E90u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E98u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6EACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6EC8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6EE0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6F00u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6F04u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6F20u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6F28u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6F3Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6F44u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6F58u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6FD4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6FD8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6FF4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6FFCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7010u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7018u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E702Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E70C0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E70C4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E70E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E70E8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E70ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E70F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E70FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7100u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7110u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E711Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7150u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7168u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7174u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E717Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7184u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E718Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7194u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E719Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E71A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E71B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E71BCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E71D0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E71E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E71FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7200u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E721Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7224u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7238u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E723Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7250u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7260u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E727Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7280u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E729Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E72A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E72A8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E72B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E72BCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E72D0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E72E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E72FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7300u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E731Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7324u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7338u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E733Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7350u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7360u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E737Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7380u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E739Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E73A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E73B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E73BCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E73D0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E73E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E73FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7400u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E741Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7424u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7438u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E743Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7450u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7494u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7498u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E74B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E74BCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E74D0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E74D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E74E8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7538u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E753Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7558u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7560u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7564u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E756Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7574u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7578u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7588u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7594u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E75C8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E75DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E75E8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E75F0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E75F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7600u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7608u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7610u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7618u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E762Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7630u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7644u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7650u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7668u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E766Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7688u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7690u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E76A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E76A8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E76BCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E76C8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E76E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E76E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7700u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7708u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E770Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E771Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7720u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7734u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7740u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7758u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E775Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7778u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7780u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7794u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7798u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E77ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E77B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E77D0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E77D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E77F0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E77F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E780Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7810u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7824u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7830u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7848u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E784Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7868u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7870u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7884u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7888u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E789Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E78D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E78D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E78F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E78FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7910u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7914u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7928u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E796Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7970u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E798Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7994u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7998u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E79A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E79A8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E79ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E79BCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E79C8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E79FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7A04u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7A0Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7A10u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7A20u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7A2Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7A60u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7A68u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7A70u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7AA4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B08u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B14u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B20u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B2Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B38u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B3Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B48u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B5Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B6Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B88u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B94u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7BA0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7BB0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7BB8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7BBCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7BC8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7BD4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C04u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C0Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C1Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C20u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C50u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C58u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C8Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C94u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C9Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7CA4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7CB0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7CB8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7CBCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7CC4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7CD0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7CD8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D20u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D28u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D2Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D38u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D3Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D90u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D98u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D9Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7DB0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7DBCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7DCCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7DDCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7DF0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7DF4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7E04u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7E08u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7E38u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7E40u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7E58u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7E60u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7E70u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7E74u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7E84u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7E88u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7EA8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7EB0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7EC8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7EF8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7F28u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7F30u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7F44u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7F6Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7F74u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7F80u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7FC8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7FF4u, &recomp_unit_0120, "recomp_unit_0120");
}
} // namespace psprecomp

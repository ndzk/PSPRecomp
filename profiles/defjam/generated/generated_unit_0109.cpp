#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0109[4093] = {
    1, 0, 2, 0, 0, 3, 0, 0, 4, 5, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 8, 9, 0, 10, 0, 0, 11, 0, 0, 12, 0,
    0, 13, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 18, 19, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0,
    22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 27, 0, 28, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 32, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 35,
    0, 36, 0, 0, 0, 0, 0, 37, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 44, 0, 45, 0, 46, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 52, 53, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 56, 57, 0, 58, 0, 0, 0, 59, 60, 0, 0, 0, 61,
    0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    65, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 68, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 73, 0, 74, 0,
    75, 0, 0, 76, 0, 0, 77, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    80, 81, 0, 0, 0, 0, 82, 0, 0, 83, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 88, 89, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0,
    0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 99, 0, 100, 0, 0, 0,
    101, 102, 0, 0, 103, 0, 0, 104, 0, 105, 0, 0, 106, 107, 0, 0, 0, 108, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0,
    0, 0, 0, 0, 112, 113, 0, 0, 114, 0, 0, 0, 115, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 120, 121, 0, 0, 122, 0, 123, 0, 124, 0, 125, 0, 126, 127, 128, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 131, 132, 0,
    0, 0, 133, 0, 134, 0, 0, 135, 0, 136, 0, 0, 137, 138, 0, 0, 139, 0, 140, 0, 0, 0, 0, 141, 142, 0, 0, 0, 143, 0, 144, 0,
    0, 145, 146, 0, 147, 0, 148, 0, 0, 149, 150, 151, 0, 0, 152, 0, 153, 0, 0, 0, 154, 0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0,
    158, 0, 159, 0, 160, 0, 0, 161, 0, 0, 162, 163, 0, 0, 164, 0, 165, 0, 166, 0, 0, 0, 167, 0, 0, 168, 0, 169, 0, 170, 0, 0,
    171, 0, 0, 172, 173, 0, 0, 174, 175, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0,
    0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 183, 0, 0, 0, 0, 184, 0, 185, 0,
    0, 0, 186, 0, 187, 0, 0, 0, 0, 188, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 194, 0, 0, 0, 195,
    0, 0, 196, 0, 0, 197, 0, 198, 0, 199, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203,
    0, 0, 204, 0, 205, 0, 0, 206, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 210, 0, 0, 0, 0, 211, 0, 212, 0, 0, 0, 0,
    0, 0, 213, 0, 214, 0, 0, 0, 215, 0, 0, 216, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0,
    220, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 227, 228, 229, 0, 230, 231,
    0, 232, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 236, 237, 238, 0, 239, 0, 240, 0, 0, 241, 0, 0, 0, 242, 0, 0,
    0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0,
    251, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 255, 0, 0, 0, 256, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 0,
    259, 0, 0, 0, 260, 261, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0,
    0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 271, 0, 0, 272, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 277, 0, 278, 0, 279, 0, 280,
    281, 282, 0, 0, 0, 0, 283, 0, 284, 0, 0, 285, 0, 286, 287, 0, 288, 0, 0, 289, 290, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0,
    0, 0, 0, 0, 293, 0, 294, 0, 295, 0, 296, 0, 297, 0, 298, 299, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0,
    0, 0, 302, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 306, 0, 307,
    0, 0, 308, 0, 309, 0, 310, 0, 0, 311, 0, 312, 0, 313, 0, 0, 314, 0, 315, 0, 316, 0, 0, 317, 318, 0, 319, 0, 0, 0, 0, 320,
    0, 0, 0, 321, 0, 322, 0, 0, 323, 0, 324, 0, 325, 326, 327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0,
    0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 333, 0, 0, 0, 334, 0, 0, 335, 336, 0, 337, 0, 0,
    338, 339, 340, 0, 341, 342, 0, 343, 0, 344, 0, 0, 0, 345, 0, 0, 346, 347, 0, 348, 0, 0, 349, 350, 351, 0, 352, 353, 0, 354, 0, 0,
    355, 0, 356, 0, 357, 0, 358, 0, 359, 0, 360, 0, 361, 0, 362, 363, 0, 364, 0, 365, 0, 0, 0, 366, 0, 0, 367, 368, 0, 369, 0, 0,
    370, 371, 372, 0, 373, 374, 0, 375, 0, 376, 0, 0, 0, 377, 0, 0, 378, 379, 0, 380, 0, 0, 381, 382, 383, 0, 384, 385, 0, 386, 0, 387,
    0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 391, 0,
    392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 398,
    0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0,
    0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 404, 405, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 411, 0, 0, 412, 413, 0, 0, 414, 415, 0, 0, 0, 0, 416, 0,
    0, 417, 418, 0, 419, 0, 0, 420, 421, 422, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 425, 426, 0, 427, 0, 0, 428, 429, 430, 0, 0, 431,
    0, 432, 0, 0, 0, 433, 0, 0, 434, 435, 0, 436, 0, 0, 437, 438, 439, 0, 0, 440, 0, 441, 0, 0, 442, 443, 0, 444, 0, 0, 445, 446,
    447, 0, 0, 448, 0, 449, 0, 0, 0, 450, 0, 0, 451, 452, 0, 453, 0, 0, 454, 455, 456, 0, 0, 457, 0, 458, 0, 0, 459, 460, 0, 461,
    0, 0, 462, 463, 464, 0, 0, 465, 0, 466, 0, 467, 0, 0, 468, 469, 0, 470, 0, 0, 471, 472, 0, 473, 0, 0, 474, 475, 0, 476, 0, 0,
    477, 478, 479, 0, 0, 0, 480, 0, 0, 481, 0, 0, 482, 483, 0, 484, 0, 0, 485, 486, 0, 487, 0, 0, 488, 489, 0, 490, 0, 0, 491, 492,
    493, 0, 0, 0, 494, 0, 495, 496, 0, 497, 0, 0, 498, 499, 0, 500, 0, 0, 501, 502, 0, 503, 0, 0, 504, 505, 0, 506, 0, 0, 507, 508,
    509, 0, 0, 0, 510, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 513, 514, 0, 0, 0, 0,
    0, 0, 515, 516, 0, 0, 0, 0, 0, 0, 517, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0,
    520, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 525, 0, 526, 0, 0, 0, 0, 527, 0, 528, 0,
    529, 0, 530, 0, 0, 0, 0, 531, 0, 0, 532, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 536, 0, 537, 0, 0, 538, 539, 0, 540, 0, 0, 541, 542, 543, 0,
    544, 0, 545, 0, 0, 546, 547, 0, 548, 0, 0, 549, 550, 551, 552, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    554, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 557, 0, 558, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 564, 0, 0, 565, 0, 0, 566, 0, 567, 0, 568, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 571, 572, 0, 573, 0, 0,
    0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 578, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 581, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 584, 0, 0, 0, 0, 0,
    0, 0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0,
    588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 590, 0, 591, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 593,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 595, 0, 0, 596, 0, 0, 0, 0, 0, 597, 0, 0, 0, 598, 599, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 602, 603, 0,
    604, 0, 0, 605, 606, 607, 0, 608, 0, 0, 609, 610, 0, 0, 0, 0, 0, 0, 611, 612, 0, 613, 0, 614, 0, 0, 0, 615, 0, 0, 616, 0,
    617, 0, 618, 0, 0, 0, 619, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 0, 624, 0, 0,
    0, 625, 0, 0, 626, 627, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 629, 0, 630, 0, 0, 631, 0, 0, 632, 0, 633, 0,
    634, 0, 0, 635, 636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 639, 0, 0, 640, 641, 0, 642, 0, 0, 643, 644,
    645, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653,
    0, 0, 0, 0, 654, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657,
    0, 0, 0, 0, 0, 658, 659, 0, 660, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 0, 0, 662, 0, 0, 0, 663, 0, 0, 0, 0,
    0, 0, 0, 664, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 669, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    671, 672, 0, 0, 0, 0, 0, 673, 674, 0, 0, 0, 675, 0, 0, 0, 0, 0, 0, 676, 677, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 678, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 0, 681, 682, 0, 683, 0, 0, 0, 0, 0, 0, 684,
    0, 0, 685, 0, 0, 686, 0, 687, 0, 0, 0, 0, 0, 688, 0, 689, 0, 690, 0, 0, 691, 0, 0, 0, 0, 0, 0, 692, 0, 0, 693, 0,
    0, 0, 694, 0, 695, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 696, 697, 0, 0, 0, 698, 0, 699, 0, 700, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 701, 0, 702, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 704, 705, 0, 0, 0, 706, 707, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 708, 0, 0,
    0, 709, 0, 710, 0, 0, 0, 0, 0, 0, 0, 711, 0, 712, 0, 0, 0, 713, 714, 0, 0, 715, 0, 0, 0, 0, 0, 0, 0, 716, 0, 717,
    718, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 720, 0, 0, 0, 721, 0, 0, 0, 0, 722, 0, 723, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 724, 0, 725, 0, 0,
    0, 0, 0, 0, 0, 0, 726, 727, 0, 0, 0, 0, 728, 0, 0, 0, 0, 0, 0, 729, 0, 0, 0, 0, 730, 0, 731, 0, 0, 0, 732, 0,
    0, 733, 0, 0, 0, 734, 0, 0, 0, 0, 735, 0, 0, 0, 0, 0, 0, 0, 736, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 737, 0,
    0, 0, 0, 738, 0, 0, 0, 739, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 741, 0, 0, 0, 0, 0, 0, 0,
    742, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 743, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 744, 0, 745, 0, 0, 0,
    0, 0, 0, 746, 0, 0, 0, 0, 747, 0, 748, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 749, 0, 0, 0, 0,
    0, 750, 0, 0, 751, 0, 0, 752, 0, 0, 0, 0, 0, 753, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 754, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 756, 0, 0, 757, 0, 0, 0, 0, 0, 758, 0, 0, 0, 0, 0, 0, 0, 759, 0, 0,
    760, 761, 0, 762, 0, 0, 0, 0, 0, 0, 0, 763, 0, 0, 0, 764, 0, 0, 0, 0, 0, 0, 0, 0, 765, 766, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 767, 0, 768, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 769, 770,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 771, 0, 0, 0, 0, 0, 0, 0, 772, 0, 0, 0, 0, 773, 0, 0, 0, 774, 0, 0,
    0, 775, 0, 0, 0, 776, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 777, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 778, 779, 0, 780, 0, 0, 0, 781, 0, 0, 0, 782, 0, 0, 0, 0, 783, 0, 0, 0, 0, 0, 784,
    0, 0, 0, 0, 785, 0, 786, 0, 0, 0, 0, 0, 0, 787, 0, 0, 0, 0, 0, 0, 0, 788, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 789, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 790,
    0, 0, 0, 0, 0, 0, 0, 0, 791, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 792, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 793, 0, 0, 794, 0, 0, 0, 0, 0, 0,
    0, 0, 795, 796, 0, 0, 0, 797, 0, 0, 798, 0, 0, 799, 0, 800, 801, 0, 802, 0, 803, 0, 0, 804, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 805, 0, 0, 0, 0, 0, 0, 0, 806, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 807, 0, 0, 0, 0, 808, 0, 0, 0, 809, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 810, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 811, 812, 0, 813, 0, 0, 0, 814, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 815,
    0, 0, 0, 0, 0, 0, 0, 0, 816, 0, 0, 0, 0, 817, 0, 818, 0, 0, 0, 0, 819, 0, 820, 0, 0, 0, 0, 0, 821,
};
void recomp_unit_0109_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089B8004u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0109[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089B8004;
    case 2u: goto L_089B800C;
    case 3u: goto L_089B8018;
    case 4u: goto L_089B8024;
    case 5u: goto L_089B8028;
    case 6u: goto L_089B8034;
    case 7u: goto L_089B803C;
    case 8u: goto L_089B8058;
    case 9u: goto L_089B805C;
    case 10u: goto L_089B8064;
    case 11u: goto L_089B8070;
    case 12u: goto L_089B807C;
    case 13u: goto L_089B8088;
    case 14u: goto L_089B809C;
    case 15u: goto L_089B80A4;
    case 16u: goto L_089B80C4;
    case 17u: goto L_089B80CC;
    case 18u: goto L_089B80D4;
    case 19u: goto L_089B80D8;
    case 20u: goto L_089B80E8;
    case 21u: goto L_089B80F0;
    case 22u: goto L_089B8104;
    case 23u: goto L_089B8130;
    case 24u: goto L_089B8138;
    case 25u: goto L_089B814C;
    case 26u: goto L_089B815C;
    case 27u: goto L_089B816C;
    case 28u: goto L_089B8174;
    case 29u: goto L_089B81A4;
    case 30u: goto L_089B81B4;
    case 31u: goto L_089B81BC;
    case 32u: goto L_089B81D0;
    case 33u: goto L_089B81DC;
    case 34u: goto L_089B81E4;
    case 35u: goto L_089B8200;
    case 36u: goto L_089B8208;
    case 37u: goto L_089B8220;
    case 38u: goto L_089B8224;
    case 39u: goto L_089B8234;
    case 40u: goto L_089B8258;
    case 41u: goto L_089B8290;
    case 42u: goto L_089B8298;
    case 43u: goto L_089B82B8;
    case 44u: goto L_089B82BC;
    case 45u: goto L_089B82C4;
    case 46u: goto L_089B82CC;
    case 47u: goto L_089B82D4;
    case 48u: goto L_089B82E0;
    case 49u: goto L_089B830C;
    case 50u: goto L_089B8320;
    case 51u: goto L_089B834C;
    case 52u: goto L_089B839C;
    case 53u: goto L_089B83A0;
    case 54u: goto L_089B83B8;
    case 55u: goto L_089B83C4;
    case 56u: goto L_089B83D0;
    case 57u: goto L_089B83D4;
    case 58u: goto L_089B83DC;
    case 59u: goto L_089B83EC;
    case 60u: goto L_089B83F0;
    case 61u: goto L_089B8400;
    case 62u: goto L_089B8410;
    case 63u: goto L_089B841C;
    case 64u: goto L_089B8458;
    case 65u: goto L_089B8484;
    case 66u: goto L_089B84A0;
    case 67u: goto L_089B84A8;
    case 68u: goto L_089B84B0;
    case 69u: goto L_089B84BC;
    case 70u: goto L_089B84C4;
    case 71u: goto L_089B84E0;
    case 72u: goto L_089B84EC;
    case 73u: goto L_089B84F4;
    case 74u: goto L_089B84FC;
    case 75u: goto L_089B8504;
    case 76u: goto L_089B8510;
    case 77u: goto L_089B851C;
    case 78u: goto L_089B8520;
    case 79u: goto L_089B853C;
    case 80u: goto L_089B8584;
    case 81u: goto L_089B8588;
    case 82u: goto L_089B859C;
    case 83u: goto L_089B85A8;
    case 84u: goto L_089B85B0;
    case 85u: goto L_089B85B8;
    case 86u: goto L_089B85D4;
    case 87u: goto L_089B85E4;
    case 88u: goto L_089B85F0;
    case 89u: goto L_089B85F4;
    case 90u: goto L_089B8640;
    case 91u: goto L_089B8648;
    case 92u: goto L_089B865C;
    case 93u: goto L_089B8664;
    case 94u: goto L_089B8688;
    case 95u: goto L_089B86A8;
    case 96u: goto L_089B86B8;
    case 97u: goto L_089B86D8;
    case 98u: goto L_089B86E4;
    case 99u: goto L_089B86EC;
    case 100u: goto L_089B86F4;
    case 101u: goto L_089B8704;
    case 102u: goto L_089B8708;
    case 103u: goto L_089B8714;
    case 104u: goto L_089B8720;
    case 105u: goto L_089B8728;
    case 106u: goto L_089B8734;
    case 107u: goto L_089B8738;
    case 108u: goto L_089B8748;
    case 109u: goto L_089B874C;
    case 110u: goto L_089B8754;
    case 111u: goto L_089B8778;
    case 112u: goto L_089B8794;
    case 113u: goto L_089B8798;
    case 114u: goto L_089B87A4;
    case 115u: goto L_089B87B4;
    case 116u: goto L_089B87B8;
    case 117u: goto L_089B87D4;
    case 118u: goto L_089B87E0;
    case 119u: goto L_089B87EC;
    case 120u: goto L_089B8814;
    case 121u: goto L_089B8818;
    case 122u: goto L_089B8824;
    case 123u: goto L_089B882C;
    case 124u: goto L_089B8834;
    case 125u: goto L_089B883C;
    case 126u: goto L_089B8844;
    case 127u: goto L_089B8848;
    case 128u: goto L_089B884C;
    case 129u: goto L_089B885C;
    case 130u: goto L_089B8864;
    case 131u: goto L_089B8878;
    case 132u: goto L_089B887C;
    case 133u: goto L_089B888C;
    case 134u: goto L_089B8894;
    case 135u: goto L_089B88A0;
    case 136u: goto L_089B88A8;
    case 137u: goto L_089B88B4;
    case 138u: goto L_089B88B8;
    case 139u: goto L_089B88C4;
    case 140u: goto L_089B88CC;
    case 141u: goto L_089B88E0;
    case 142u: goto L_089B88E4;
    case 143u: goto L_089B88F4;
    case 144u: goto L_089B88FC;
    case 145u: goto L_089B8908;
    case 146u: goto L_089B890C;
    case 147u: goto L_089B8914;
    case 148u: goto L_089B891C;
    case 149u: goto L_089B8928;
    case 150u: goto L_089B892C;
    case 151u: goto L_089B8930;
    case 152u: goto L_089B893C;
    case 153u: goto L_089B8944;
    case 154u: goto L_089B8954;
    case 155u: goto L_089B8960;
    case 156u: goto L_089B896C;
    case 157u: goto L_089B8978;
    case 158u: goto L_089B8984;
    case 159u: goto L_089B898C;
    case 160u: goto L_089B8994;
    case 161u: goto L_089B89A0;
    case 162u: goto L_089B89AC;
    case 163u: goto L_089B89B0;
    case 164u: goto L_089B89BC;
    case 165u: goto L_089B89C4;
    case 166u: goto L_089B89CC;
    case 167u: goto L_089B89DC;
    case 168u: goto L_089B89E8;
    case 169u: goto L_089B89F0;
    case 170u: goto L_089B89F8;
    case 171u: goto L_089B8A04;
    case 172u: goto L_089B8A10;
    case 173u: goto L_089B8A14;
    case 174u: goto L_089B8A20;
    case 175u: goto L_089B8A24;
    case 176u: goto L_089B8A2C;
    case 177u: goto L_089B8A34;
    case 178u: goto L_089B8A7C;
    case 179u: goto L_089B8A8C;
    case 180u: goto L_089B8AB4;
    case 181u: goto L_089B8AC4;
    case 182u: goto L_089B8AD8;
    case 183u: goto L_089B8AE0;
    case 184u: goto L_089B8AF4;
    case 185u: goto L_089B8AFC;
    case 186u: goto L_089B8B0C;
    case 187u: goto L_089B8B14;
    case 188u: goto L_089B8B28;
    case 189u: goto L_089B8B2C;
    case 190u: goto L_089B8C50;
    case 191u: goto L_089B8C64;
    case 192u: goto L_089B9058;
    case 193u: goto L_089B906C;
    case 194u: goto L_089B9070;
    case 195u: goto L_089B9080;
    case 196u: goto L_089B908C;
    case 197u: goto L_089B9098;
    case 198u: goto L_089B90A0;
    case 199u: goto L_089B90A8;
    case 200u: goto L_089B90B0;
    case 201u: goto L_089B90BC;
    case 202u: goto L_089B90F8;
    case 203u: goto L_089B9100;
    case 204u: goto L_089B910C;
    case 205u: goto L_089B9114;
    case 206u: goto L_089B9120;
    case 207u: goto L_089B9128;
    case 208u: goto L_089B9140;
    case 209u: goto L_089B914C;
    case 210u: goto L_089B9154;
    case 211u: goto L_089B9168;
    case 212u: goto L_089B9170;
    case 213u: goto L_089B918C;
    case 214u: goto L_089B9194;
    case 215u: goto L_089B91A4;
    case 216u: goto L_089B91B0;
    case 217u: goto L_089B91B8;
    case 218u: goto L_089B91D0;
    case 219u: goto L_089B91E8;
    case 220u: goto L_089B9204;
    case 221u: goto L_089B9220;
    case 222u: goto L_089B9228;
    case 223u: goto L_089B9230;
    case 224u: goto L_089B923C;
    case 225u: goto L_089B925C;
    case 226u: goto L_089B9264;
    case 227u: goto L_089B926C;
    case 228u: goto L_089B9270;
    case 229u: goto L_089B9274;
    case 230u: goto L_089B927C;
    case 231u: goto L_089B9280;
    case 232u: goto L_089B9288;
    case 233u: goto L_089B9294;
    case 234u: goto L_089B92B4;
    case 235u: goto L_089B92BC;
    case 236u: goto L_089B92C4;
    case 237u: goto L_089B92C8;
    case 238u: goto L_089B92CC;
    case 239u: goto L_089B92D4;
    case 240u: goto L_089B92DC;
    case 241u: goto L_089B92E8;
    case 242u: goto L_089B92F8;
    case 243u: goto L_089B9308;
    case 244u: goto L_089B9320;
    case 245u: goto L_089B9338;
    case 246u: goto L_089B934C;
    case 247u: goto L_089B9370;
    case 248u: goto L_089B93D4;
    case 249u: goto L_089B93D8;
    case 250u: goto L_089B93F0;
    case 251u: goto L_089B9404;
    case 252u: goto L_089B9410;
    case 253u: goto L_089B942C;
    case 254u: goto L_089B9438;
    case 255u: goto L_089B9444;
    case 256u: goto L_089B9454;
    case 257u: goto L_089B9460;
    case 258u: goto L_089B946C;
    case 259u: goto L_089B9484;
    case 260u: goto L_089B9494;
    case 261u: goto L_089B9498;
    case 262u: goto L_089B94B8;
    case 263u: goto L_089B94DC;
    case 264u: goto L_089B94FC;
    case 265u: goto L_089B951C;
    case 266u: goto L_089B959C;
    case 267u: goto L_089B95AC;
    case 268u: goto L_089B95B8;
    case 269u: goto L_089B95C8;
    case 270u: goto L_089B95D8;
    case 271u: goto L_089B9608;
    case 272u: goto L_089B9614;
    case 273u: goto L_089B961C;
    case 274u: goto L_089B9638;
    case 275u: goto L_089B9658;
    case 276u: goto L_089B9660;
    case 277u: goto L_089B9668;
    case 278u: goto L_089B9670;
    case 279u: goto L_089B9678;
    case 280u: goto L_089B9680;
    case 281u: goto L_089B9684;
    case 282u: goto L_089B9688;
    case 283u: goto L_089B969C;
    case 284u: goto L_089B96A4;
    case 285u: goto L_089B96B0;
    case 286u: goto L_089B96B8;
    case 287u: goto L_089B96BC;
    case 288u: goto L_089B96C4;
    case 289u: goto L_089B96D0;
    case 290u: goto L_089B96D4;
    case 291u: goto L_089B96DC;
    case 292u: goto L_089B96F4;
    case 293u: goto L_089B9714;
    case 294u: goto L_089B971C;
    case 295u: goto L_089B9724;
    case 296u: goto L_089B972C;
    case 297u: goto L_089B9734;
    case 298u: goto L_089B973C;
    case 299u: goto L_089B9740;
    case 300u: goto L_089B9764;
    case 301u: goto L_089B977C;
    case 302u: goto L_089B978C;
    case 303u: goto L_089B9794;
    case 304u: goto L_089B97DC;
    case 305u: goto L_089B97EC;
    case 306u: goto L_089B97F8;
    case 307u: goto L_089B9800;
    case 308u: goto L_089B980C;
    case 309u: goto L_089B9814;
    case 310u: goto L_089B981C;
    case 311u: goto L_089B9828;
    case 312u: goto L_089B9830;
    case 313u: goto L_089B9838;
    case 314u: goto L_089B9844;
    case 315u: goto L_089B984C;
    case 316u: goto L_089B9854;
    case 317u: goto L_089B9860;
    case 318u: goto L_089B9864;
    case 319u: goto L_089B986C;
    case 320u: goto L_089B9880;
    case 321u: goto L_089B9890;
    case 322u: goto L_089B9898;
    case 323u: goto L_089B98A4;
    case 324u: goto L_089B98AC;
    case 325u: goto L_089B98B4;
    case 326u: goto L_089B98B8;
    case 327u: goto L_089B98BC;
    case 328u: goto L_089B98DC;
    case 329u: goto L_089B98F8;
    case 330u: goto L_089B9910;
    case 331u: goto L_089B9930;
    case 332u: goto L_089B9948;
    case 333u: goto L_089B9950;
    case 334u: goto L_089B9960;
    case 335u: goto L_089B996C;
    case 336u: goto L_089B9970;
    case 337u: goto L_089B9978;
    case 338u: goto L_089B9984;
    case 339u: goto L_089B9988;
    case 340u: goto L_089B998C;
    case 341u: goto L_089B9994;
    case 342u: goto L_089B9998;
    case 343u: goto L_089B99A0;
    case 344u: goto L_089B99A8;
    case 345u: goto L_089B99B8;
    case 346u: goto L_089B99C4;
    case 347u: goto L_089B99C8;
    case 348u: goto L_089B99D0;
    case 349u: goto L_089B99DC;
    case 350u: goto L_089B99E0;
    case 351u: goto L_089B99E4;
    case 352u: goto L_089B99EC;
    case 353u: goto L_089B99F0;
    case 354u: goto L_089B99F8;
    case 355u: goto L_089B9A04;
    case 356u: goto L_089B9A0C;
    case 357u: goto L_089B9A14;
    case 358u: goto L_089B9A1C;
    case 359u: goto L_089B9A24;
    case 360u: goto L_089B9A2C;
    case 361u: goto L_089B9A34;
    case 362u: goto L_089B9A3C;
    case 363u: goto L_089B9A40;
    case 364u: goto L_089B9A48;
    case 365u: goto L_089B9A50;
    case 366u: goto L_089B9A60;
    case 367u: goto L_089B9A6C;
    case 368u: goto L_089B9A70;
    case 369u: goto L_089B9A78;
    case 370u: goto L_089B9A84;
    case 371u: goto L_089B9A88;
    case 372u: goto L_089B9A8C;
    case 373u: goto L_089B9A94;
    case 374u: goto L_089B9A98;
    case 375u: goto L_089B9AA0;
    case 376u: goto L_089B9AA8;
    case 377u: goto L_089B9AB8;
    case 378u: goto L_089B9AC4;
    case 379u: goto L_089B9AC8;
    case 380u: goto L_089B9AD0;
    case 381u: goto L_089B9ADC;
    case 382u: goto L_089B9AE0;
    case 383u: goto L_089B9AE4;
    case 384u: goto L_089B9AEC;
    case 385u: goto L_089B9AF0;
    case 386u: goto L_089B9AF8;
    case 387u: goto L_089B9B00;
    case 388u: goto L_089B9B18;
    case 389u: goto L_089B9B58;
    case 390u: goto L_089B9B70;
    case 391u: goto L_089B9B7C;
    case 392u: goto L_089B9B84;
    case 393u: goto L_089B9BB8;
    case 394u: goto L_089B9C30;
    case 395u: goto L_089B9C44;
    case 396u: goto L_089B9C4C;
    case 397u: goto L_089B9C74;
    case 398u: goto L_089B9C80;
    case 399u: goto L_089B9CA0;
    case 400u: goto L_089B9CCC;
    case 401u: goto L_089B9CF8;
    case 402u: goto L_089B9D18;
    case 403u: goto L_089B9D3C;
    case 404u: goto L_089B9D50;
    case 405u: goto L_089B9D54;
    case 406u: goto L_089B9D70;
    case 407u: goto L_089B9D78;
    case 408u: goto L_089B9DAC;
    case 409u: goto L_089B9DDC;
    case 410u: goto L_089B9E3C;
    case 411u: goto L_089B9E48;
    case 412u: goto L_089B9E54;
    case 413u: goto L_089B9E58;
    case 414u: goto L_089B9E64;
    case 415u: goto L_089B9E68;
    case 416u: goto L_089B9E7C;
    case 417u: goto L_089B9E88;
    case 418u: goto L_089B9E8C;
    case 419u: goto L_089B9E94;
    case 420u: goto L_089B9EA0;
    case 421u: goto L_089B9EA4;
    case 422u: goto L_089B9EA8;
    case 423u: goto L_089B9EB4;
    case 424u: goto L_089B9EC8;
    case 425u: goto L_089B9ED4;
    case 426u: goto L_089B9ED8;
    case 427u: goto L_089B9EE0;
    case 428u: goto L_089B9EEC;
    case 429u: goto L_089B9EF0;
    case 430u: goto L_089B9EF4;
    case 431u: goto L_089B9F00;
    case 432u: goto L_089B9F08;
    case 433u: goto L_089B9F18;
    case 434u: goto L_089B9F24;
    case 435u: goto L_089B9F28;
    case 436u: goto L_089B9F30;
    case 437u: goto L_089B9F3C;
    case 438u: goto L_089B9F40;
    case 439u: goto L_089B9F44;
    case 440u: goto L_089B9F50;
    case 441u: goto L_089B9F58;
    case 442u: goto L_089B9F64;
    case 443u: goto L_089B9F68;
    case 444u: goto L_089B9F70;
    case 445u: goto L_089B9F7C;
    case 446u: goto L_089B9F80;
    case 447u: goto L_089B9F84;
    case 448u: goto L_089B9F90;
    case 449u: goto L_089B9F98;
    case 450u: goto L_089B9FA8;
    case 451u: goto L_089B9FB4;
    case 452u: goto L_089B9FB8;
    case 453u: goto L_089B9FC0;
    case 454u: goto L_089B9FCC;
    case 455u: goto L_089B9FD0;
    case 456u: goto L_089B9FD4;
    case 457u: goto L_089B9FE0;
    case 458u: goto L_089B9FE8;
    case 459u: goto L_089B9FF4;
    case 460u: goto L_089B9FF8;
    case 461u: goto L_089BA000;
    case 462u: goto L_089BA00C;
    case 463u: goto L_089BA010;
    case 464u: goto L_089BA014;
    case 465u: goto L_089BA020;
    case 466u: goto L_089BA028;
    case 467u: goto L_089BA030;
    case 468u: goto L_089BA03C;
    case 469u: goto L_089BA040;
    case 470u: goto L_089BA048;
    case 471u: goto L_089BA054;
    case 472u: goto L_089BA058;
    case 473u: goto L_089BA060;
    case 474u: goto L_089BA06C;
    case 475u: goto L_089BA070;
    case 476u: goto L_089BA078;
    case 477u: goto L_089BA084;
    case 478u: goto L_089BA088;
    case 479u: goto L_089BA08C;
    case 480u: goto L_089BA09C;
    case 481u: goto L_089BA0A8;
    case 482u: goto L_089BA0B4;
    case 483u: goto L_089BA0B8;
    case 484u: goto L_089BA0C0;
    case 485u: goto L_089BA0CC;
    case 486u: goto L_089BA0D0;
    case 487u: goto L_089BA0D8;
    case 488u: goto L_089BA0E4;
    case 489u: goto L_089BA0E8;
    case 490u: goto L_089BA0F0;
    case 491u: goto L_089BA0FC;
    case 492u: goto L_089BA100;
    case 493u: goto L_089BA104;
    case 494u: goto L_089BA114;
    case 495u: goto L_089BA11C;
    case 496u: goto L_089BA120;
    case 497u: goto L_089BA128;
    case 498u: goto L_089BA134;
    case 499u: goto L_089BA138;
    case 500u: goto L_089BA140;
    case 501u: goto L_089BA14C;
    case 502u: goto L_089BA150;
    case 503u: goto L_089BA158;
    case 504u: goto L_089BA164;
    case 505u: goto L_089BA168;
    case 506u: goto L_089BA170;
    case 507u: goto L_089BA17C;
    case 508u: goto L_089BA180;
    case 509u: goto L_089BA184;
    case 510u: goto L_089BA194;
    case 511u: goto L_089BA198;
    case 512u: goto L_089BA1E0;
    case 513u: goto L_089BA1EC;
    case 514u: goto L_089BA1F0;
    case 515u: goto L_089BA20C;
    case 516u: goto L_089BA210;
    case 517u: goto L_089BA22C;
    case 518u: goto L_089BA234;
    case 519u: goto L_089BA278;
    case 520u: goto L_089BA284;
    case 521u: goto L_089BA28C;
    case 522u: goto L_089BA2D0;
    case 523u: goto L_089BA314;
    case 524u: goto L_089BA350;
    case 525u: goto L_089BA358;
    case 526u: goto L_089BA360;
    case 527u: goto L_089BA374;
    case 528u: goto L_089BA37C;
    case 529u: goto L_089BA384;
    case 530u: goto L_089BA38C;
    case 531u: goto L_089BA3A0;
    case 532u: goto L_089BA3AC;
    case 533u: goto L_089BA3B0;
    case 534u: goto L_089BA40C;
    case 535u: goto L_089BA42C;
    case 536u: goto L_089BA448;
    case 537u: goto L_089BA450;
    case 538u: goto L_089BA45C;
    case 539u: goto L_089BA460;
    case 540u: goto L_089BA468;
    case 541u: goto L_089BA474;
    case 542u: goto L_089BA478;
    case 543u: goto L_089BA47C;
    case 544u: goto L_089BA484;
    case 545u: goto L_089BA48C;
    case 546u: goto L_089BA498;
    case 547u: goto L_089BA49C;
    case 548u: goto L_089BA4A4;
    case 549u: goto L_089BA4B0;
    case 550u: goto L_089BA4B4;
    case 551u: goto L_089BA4B8;
    case 552u: goto L_089BA4BC;
    case 553u: goto L_089BA4C4;
    case 554u: goto L_089BA504;
    case 555u: goto L_089BA514;
    case 556u: goto L_089BA540;
    case 557u: goto L_089BA550;
    case 558u: goto L_089BA558;
    case 559u: goto L_089BA560;
    case 560u: goto L_089BA58C;
    case 561u: goto L_089BA5D0;
    case 562u: goto L_089BA5F0;
    case 563u: goto L_089BA638;
    case 564u: goto L_089BA64C;
    case 565u: goto L_089BA658;
    case 566u: goto L_089BA664;
    case 567u: goto L_089BA66C;
    case 568u: goto L_089BA674;
    case 569u: goto L_089BA6A0;
    case 570u: goto L_089BA6D4;
    case 571u: goto L_089BA6EC;
    case 572u: goto L_089BA6F0;
    case 573u: goto L_089BA6F8;
    case 574u: goto L_089BA70C;
    case 575u: goto L_089BA730;
    case 576u: goto L_089BA740;
    case 577u: goto L_089BA760;
    case 578u: goto L_089BA774;
    case 579u: goto L_089BA7A8;
    case 580u: goto L_089BA824;
    case 581u: goto L_089BA834;
    case 582u: goto L_089BA838;
    case 583u: goto L_089BA860;
    case 584u: goto L_089BA86C;
    case 585u: goto L_089BA88C;
    case 586u: goto L_089BA8B8;
    case 587u: goto L_089BA8E4;
    case 588u: goto L_089BA904;
    case 589u: goto L_089BA92C;
    case 590u: goto L_089BA93C;
    case 591u: goto L_089BA944;
    case 592u: goto L_089BA94C;
    case 593u: goto L_089BA980;
    case 594u: goto L_089BA9B0;
    case 595u: goto L_089BAA08;
    case 596u: goto L_089BAA14;
    case 597u: goto L_089BAA2C;
    case 598u: goto L_089BAA3C;
    case 599u: goto L_089BAA40;
    case 600u: goto L_089BAA44;
    case 601u: goto L_089BAA6C;
    case 602u: goto L_089BAA78;
    case 603u: goto L_089BAA7C;
    case 604u: goto L_089BAA84;
    case 605u: goto L_089BAA90;
    case 606u: goto L_089BAA94;
    case 607u: goto L_089BAA98;
    case 608u: goto L_089BAAA0;
    case 609u: goto L_089BAAAC;
    case 610u: goto L_089BAAB0;
    case 611u: goto L_089BAACC;
    case 612u: goto L_089BAAD0;
    case 613u: goto L_089BAAD8;
    case 614u: goto L_089BAAE0;
    case 615u: goto L_089BAAF0;
    case 616u: goto L_089BAAFC;
    case 617u: goto L_089BAB04;
    case 618u: goto L_089BAB0C;
    case 619u: goto L_089BAB1C;
    case 620u: goto L_089BAB24;
    case 621u: goto L_089BABB0;
    case 622u: goto L_089BABC8;
    case 623u: goto L_089BABEC;
    case 624u: goto L_089BABF8;
    case 625u: goto L_089BAC08;
    case 626u: goto L_089BAC14;
    case 627u: goto L_089BAC18;
    case 628u: goto L_089BAC34;
    case 629u: goto L_089BAC54;
    case 630u: goto L_089BAC5C;
    case 631u: goto L_089BAC68;
    case 632u: goto L_089BAC74;
    case 633u: goto L_089BAC7C;
    case 634u: goto L_089BAC84;
    case 635u: goto L_089BAC90;
    case 636u: goto L_089BAC94;
    case 637u: goto L_089BAD2C;
    case 638u: goto L_089BAD44;
    case 639u: goto L_089BAD58;
    case 640u: goto L_089BAD64;
    case 641u: goto L_089BAD68;
    case 642u: goto L_089BAD70;
    case 643u: goto L_089BAD7C;
    case 644u: goto L_089BAD80;
    case 645u: goto L_089BAD84;
    case 646u: goto L_089BAD8C;
    case 647u: goto L_089BADD0;
    case 648u: goto L_089BADE4;
    case 649u: goto L_089BAE14;
    case 650u: goto L_089BAE4C;
    case 651u: goto L_089BAE94;
    case 652u: goto L_089BAEB8;
    case 653u: goto L_089BAF00;
    case 654u: goto L_089BAF14;
    case 655u: goto L_089BAF20;
    case 656u: goto L_089BAF4C;
    case 657u: goto L_089BAF80;
    case 658u: goto L_089BAF98;
    case 659u: goto L_089BAF9C;
    case 660u: goto L_089BAFA4;
    case 661u: goto L_089BAFBC;
    case 662u: goto L_089BAFE0;
    case 663u: goto L_089BAFF0;
    case 664u: goto L_089BB010;
    case 665u: goto L_089BB024;
    case 666u: goto L_089BB058;
    case 667u: goto L_089BB08C;
    case 668u: goto L_089BB0B8;
    case 669u: goto L_089BB0D0;
    case 670u: goto L_089BB0D8;
    case 671u: goto L_089BB104;
    case 672u: goto L_089BB108;
    case 673u: goto L_089BB120;
    case 674u: goto L_089BB124;
    case 675u: goto L_089BB134;
    case 676u: goto L_089BB150;
    case 677u: goto L_089BB154;
    case 678u: goto L_089BB194;
    case 679u: goto L_089BB1A8;
    case 680u: goto L_089BB1CC;
    case 681u: goto L_089BB1D8;
    case 682u: goto L_089BB1DC;
    case 683u: goto L_089BB1E4;
    case 684u: goto L_089BB200;
    case 685u: goto L_089BB20C;
    case 686u: goto L_089BB218;
    case 687u: goto L_089BB220;
    case 688u: goto L_089BB238;
    case 689u: goto L_089BB240;
    case 690u: goto L_089BB248;
    case 691u: goto L_089BB254;
    case 692u: goto L_089BB270;
    case 693u: goto L_089BB27C;
    case 694u: goto L_089BB28C;
    case 695u: goto L_089BB294;
    case 696u: goto L_089BB2C8;
    case 697u: goto L_089BB2CC;
    case 698u: goto L_089BB2DC;
    case 699u: goto L_089BB2E4;
    case 700u: goto L_089BB2EC;
    case 701u: goto L_089BB318;
    case 702u: goto L_089BB320;
    case 703u: goto L_089BB354;
    case 704u: goto L_089BB3A0;
    case 705u: goto L_089BB3A4;
    case 706u: goto L_089BB3B4;
    case 707u: goto L_089BB3B8;
    case 708u: goto L_089BB3F8;
    case 709u: goto L_089BB408;
    case 710u: goto L_089BB410;
    case 711u: goto L_089BB430;
    case 712u: goto L_089BB438;
    case 713u: goto L_089BB448;
    case 714u: goto L_089BB44C;
    case 715u: goto L_089BB458;
    case 716u: goto L_089BB478;
    case 717u: goto L_089BB480;
    case 718u: goto L_089BB484;
    case 719u: goto L_089BB4B4;
    case 720u: goto L_089BB510;
    case 721u: goto L_089BB520;
    case 722u: goto L_089BB534;
    case 723u: goto L_089BB53C;
    case 724u: goto L_089BB570;
    case 725u: goto L_089BB578;
    case 726u: goto L_089BB59C;
    case 727u: goto L_089BB5A0;
    case 728u: goto L_089BB5B4;
    case 729u: goto L_089BB5D0;
    case 730u: goto L_089BB5E4;
    case 731u: goto L_089BB5EC;
    case 732u: goto L_089BB5FC;
    case 733u: goto L_089BB608;
    case 734u: goto L_089BB618;
    case 735u: goto L_089BB62C;
    case 736u: goto L_089BB64C;
    case 737u: goto L_089BB67C;
    case 738u: goto L_089BB690;
    case 739u: goto L_089BB6A0;
    case 740u: goto L_089BB6B8;
    case 741u: goto L_089BB6E4;
    case 742u: goto L_089BB704;
    case 743u: goto L_089BB73C;
    case 744u: goto L_089BB76C;
    case 745u: goto L_089BB774;
    case 746u: goto L_089BB790;
    case 747u: goto L_089BB7A4;
    case 748u: goto L_089BB7AC;
    case 749u: goto L_089BB7F0;
    case 750u: goto L_089BB808;
    case 751u: goto L_089BB814;
    case 752u: goto L_089BB820;
    case 753u: goto L_089BB838;
    case 754u: goto L_089BB868;
    case 755u: goto L_089BB894;
    case 756u: goto L_089BB8B4;
    case 757u: goto L_089BB8C0;
    case 758u: goto L_089BB8D8;
    case 759u: goto L_089BB8F8;
    case 760u: goto L_089BB904;
    case 761u: goto L_089BB908;
    case 762u: goto L_089BB910;
    case 763u: goto L_089BB930;
    case 764u: goto L_089BB940;
    case 765u: goto L_089BB964;
    case 766u: goto L_089BB968;
    case 767u: goto L_089BB990;
    case 768u: goto L_089BB998;
    case 769u: goto L_089BB9FC;
    case 770u: goto L_089BBA00;
    case 771u: goto L_089BBA34;
    case 772u: goto L_089BBA54;
    case 773u: goto L_089BBA68;
    case 774u: goto L_089BBA78;
    case 775u: goto L_089BBA88;
    case 776u: goto L_089BBA98;
    case 777u: goto L_089BBACC;
    case 778u: goto L_089BBB28;
    case 779u: goto L_089BBB2C;
    case 780u: goto L_089BBB34;
    case 781u: goto L_089BBB44;
    case 782u: goto L_089BBB54;
    case 783u: goto L_089BBB68;
    case 784u: goto L_089BBB80;
    case 785u: goto L_089BBB94;
    case 786u: goto L_089BBB9C;
    case 787u: goto L_089BBBB8;
    case 788u: goto L_089BBBD8;
    case 789u: goto L_089BBC0C;
    case 790u: goto L_089BBC80;
    case 791u: goto L_089BBCA4;
    case 792u: goto L_089BBD24;
    case 793u: goto L_089BBD5C;
    case 794u: goto L_089BBD68;
    case 795u: goto L_089BBD8C;
    case 796u: goto L_089BBD90;
    case 797u: goto L_089BBDA0;
    case 798u: goto L_089BBDAC;
    case 799u: goto L_089BBDB8;
    case 800u: goto L_089BBDC0;
    case 801u: goto L_089BBDC4;
    case 802u: goto L_089BBDCC;
    case 803u: goto L_089BBDD4;
    case 804u: goto L_089BBDE0;
    case 805u: goto L_089BBE4C;
    case 806u: goto L_089BBE6C;
    case 807u: goto L_089BBE94;
    case 808u: goto L_089BBEA8;
    case 809u: goto L_089BBEB8;
    case 810u: goto L_089BBEEC;
    case 811u: goto L_089BBF34;
    case 812u: goto L_089BBF38;
    case 813u: goto L_089BBF40;
    case 814u: goto L_089BBF50;
    case 815u: goto L_089BBF80;
    case 816u: goto L_089BBFA4;
    case 817u: goto L_089BBFB8;
    case 818u: goto L_089BBFC0;
    case 819u: goto L_089BBFD4;
    case 820u: goto L_089BBFDC;
    case 821u: goto L_089BBFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089B8004:
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    goto L_089B800C;
L_089B800C:
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[2];
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089B8034;
      }
      goto L_089B8018;
    }
L_089B8018:
    ctx.gpr[2] = (ctx.gpr[11] < ctx.gpr[10] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089B800C;
      }
      goto L_089B8024;
    }
L_089B8024:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_089B8028;
L_089B8028:
    ctx.gpr[8] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7FF4u>(ctx, &aot_mem); return;
      }
      goto L_089B8034;
    }
L_089B8034:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B803C:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_089B809C;
      }
      goto L_089B8058;
    }
L_089B8058:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    goto L_089B805C;
L_089B805C:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[2];
    ctx.gpr[11] = (0u | 0u);
      if (branch_taken) {
          goto L_089B8088;
      }
      goto L_089B8064;
    }
L_089B8064:
    ctx.gpr[9] = (ctx.gpr[11] < ctx.gpr[10] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089B8088;
      }
      goto L_089B8070;
    }
L_089B8070:
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089B809C;
      }
      goto L_089B807C;
    }
L_089B807C:
    ctx.gpr[3] = (ctx.gpr[11] < ctx.gpr[10] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089B8070;
      }
      goto L_089B8088;
    }
L_089B8088:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[9] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_089B805C;
      }
      goto L_089B809C;
    }
L_089B809C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B80A4:
    ctx.gpr[8] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[9] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_089B80E8;
      }
      goto L_089B80C4;
    }
L_089B80C4:
    if (ctx.gpr[8] == ctx.gpr[2]) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
        goto L_089B80D8;
    }
    goto L_089B80CC;
L_089B80CC:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089B80E8;
      }
      goto L_089B80D4;
    }
L_089B80D4:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_089B80D8;
L_089B80D8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[9] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_089B80C4;
      }
      goto L_089B80E8;
    }
L_089B80E8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B80F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089B8130;
      }
      goto L_089B8104;
    }
L_089B8104:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (ctx.gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089B8104;
      }
      goto L_089B8130;
    }
L_089B8130:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8138:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089B816C;
      }
      goto L_089B814C;
    }
L_089B814C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28)));
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
        goto L_089B815C;
    }
    goto L_089B815C;
L_089B815C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089B814C;
      }
      goto L_089B816C;
    }
L_089B816C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8174:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x089B81A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089B80F0;
L_089B81A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_089B8234;
      }
      goto L_089B81B4;
    }
L_089B81B4:
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[20] = (0u | 0u);
    goto L_089B81BC;
L_089B81BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089B81D0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_089B8138;
L_089B81D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
      if (branch_taken) {
          goto L_089B8200;
      }
      goto L_089B81DC;
    }
L_089B81DC:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089B8224;
    }
    goto L_089B81E4;
L_089B81E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089B8220;
      }
      goto L_089B8200;
    }
L_089B8200:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089B8224;
    }
    goto L_089B8208;
L_089B8208:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    goto L_089B8220;
L_089B8220:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089B8224;
L_089B8224:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089B81BC;
      }
      goto L_089B8234;
    }
L_089B8234:
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
L_089B8258:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[22] < ctx.gpr[5] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089B8320;
      }
      goto L_089B8290;
    }
L_089B8290:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[19] = (0u | 4u);
    goto L_089B8298;
L_089B8298:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089B82B8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089B9058;
L_089B82B8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_089B82BC;
L_089B82BC:
    if (ctx.gpr[17] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089B830C;
    }
    goto L_089B82C4;
L_089B82C4:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[17];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089B82E0;
      }
      goto L_089B82CC;
    }
L_089B82CC:
    ctx.gpr[31] = (0x089B82D4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_089B9058;
L_089B82D4:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089B82BC;
      }
      goto L_089B82E0;
    }
L_089B82E0:
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
L_089B830C:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(2));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[22] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089B8298;
      }
      goto L_089B8320;
    }
L_089B8320:
    ctx.gpr[2] = (0u | 1u);
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
L_089B834C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[22] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-24952)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089B841C;
      }
      goto L_089B839C;
    }
L_089B839C:
    ctx.gpr[20] = (0u | 0u);
    goto L_089B83A0;
L_089B83A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    if (ctx.gpr[23] == ctx.gpr[5]) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_089B8410;
    }
    goto L_089B83B8;
L_089B83B8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089B83C4u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089B9058;
L_089B83C4:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[30] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_089B83F0;
    }
    goto L_089B83D0;
L_089B83D0:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    goto L_089B83D4;
L_089B83D4:
    ctx.gpr[31] = (0x089B83DCu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_089B9058;
L_089B83DC:
    ctx.gpr[21] = (ctx.gpr[30] | 0u);
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[30] != 0u;
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
      if (branch_taken) {
          goto L_089B83D4;
      }
      goto L_089B83EC;
    }
L_089B83EC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_089B83F0;
L_089B83F0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089B8400u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8400u) goto L_089B8400;
    return;
L_089B8400:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[2]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-24952)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089B8410;
L_089B8410:
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089B83A0;
      }
      goto L_089B841C;
    }
L_089B841C:
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-24952), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_089B8458:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B84A0;
      }
      goto L_089B8484;
    }
L_089B8484:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B84C4;
      }
      goto L_089B84A0;
    }
L_089B84A0:
    ctx.gpr[31] = (0x089B84A8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089B80F0;
L_089B84A8:
    ctx.gpr[31] = (0x089B84B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089B8258;
L_089B84B0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B84EC;
      }
      goto L_089B84BC;
    }
L_089B84BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089B84E0;
      }
      goto L_089B84C4;
    }
L_089B84C4:
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
L_089B84E0:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089B84FC;
      }
      goto L_089B84EC;
    }
L_089B84EC:
    ctx.gpr[31] = (0x089B84F4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089B80F0;
L_089B84F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8520;
      }
      goto L_089B84FC;
    }
L_089B84FC:
    ctx.gpr[31] = (0x089B8504u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089B834C;
L_089B8504:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089B8510u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089B80F0;
L_089B8510:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B851Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089B834C;
L_089B851C:
    ctx.gpr[18] = (ctx.gpr[18] < ctx.gpr[2] ? 1u : 0u);
    goto L_089B8520;
L_089B8520:
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
L_089B853C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[8] = (0u | 1u);
      if (branch_taken) {
          goto L_089B85E4;
      }
      goto L_089B8584;
    }
L_089B8584:
    ctx.gpr[6] = (0u | 0u);
    goto L_089B8588;
L_089B8588:
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(28)));
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
        goto L_089B85D4;
    }
    goto L_089B859C;
L_089B859C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089B85B0;
      }
      goto L_089B85A8;
    }
L_089B85A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089B85B0;
      }
      goto L_089B85B0;
    }
L_089B85B0:
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
        goto L_089B85D4;
    }
    goto L_089B85B8;
L_089B85B8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_089B85D4;
L_089B85D4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089B8588;
      }
      goto L_089B85E4;
    }
L_089B85E4:
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8754;
      }
      goto L_089B85F0;
    }
L_089B85F0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-12));
    goto L_089B85F4;
L_089B85F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] & 1u);
    ctx.gpr[31] = (0x089B8640u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089B8458;
L_089B8640:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B8664;
      }
      goto L_089B8648;
    }
L_089B8648:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_089B8688;
    }
    goto L_089B865C;
L_089B865C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[19] ? 1u : 0u);
      if (branch_taken) {
          goto L_089B874C;
      }
      goto L_089B8664;
    }
L_089B8664:
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
L_089B8688:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[9] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089B8748;
      }
      goto L_089B86A8;
    }
L_089B86A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    if (ctx.gpr[20] != ctx.gpr[7]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
        goto L_089B8738;
    }
    goto L_089B86B8;
L_089B86B8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[5] == ctx.gpr[7]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
        goto L_089B8738;
    }
    goto L_089B86D8;
L_089B86D8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089B86EC;
      }
      goto L_089B86E4;
    }
L_089B86E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089B86EC;
      }
      goto L_089B86EC;
    }
L_089B86EC:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
      if (branch_taken) {
          goto L_089B8734;
      }
      goto L_089B86F4;
    }
L_089B86F4:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[8] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_089B8720;
      }
      goto L_089B8704;
    }
L_089B8704:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_089B8708;
L_089B8708:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[3];
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089B8720;
      }
      goto L_089B8714;
    }
L_089B8714:
    ctx.gpr[11] = (ctx.gpr[8] < ctx.gpr[10] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089B8708;
      }
      goto L_089B8720;
    }
L_089B8720:
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089B8734;
      }
      goto L_089B8728;
    }
L_089B8728:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
    goto L_089B8734;
L_089B8734:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    goto L_089B8738;
L_089B8738:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089B86A8;
      }
      goto L_089B8748;
    }
L_089B8748:
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[19] ? 1u : 0u);
    goto L_089B874C;
L_089B874C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-12));
      if (branch_taken) {
          goto L_089B85F4;
      }
      goto L_089B8754;
    }
L_089B8754:
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
L_089B8778:
    ctx.gpr[9] = (ctx.gpr[5] & 65535u);
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[10] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
      if (branch_taken) {
          goto L_089B87B4;
      }
      goto L_089B8794;
    }
L_089B8794:
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    goto L_089B8798;
L_089B8798:
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(40)));
    if (ctx.gpr[9] == ctx.gpr[11]) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
        goto L_089B87B8;
    }
    goto L_089B87A4;
L_089B87A4:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089B8798;
      }
      goto L_089B87B4;
    }
L_089B87B4:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_089B87B8;
L_089B87B8:
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[4];
    ctx.gpr[2] = (ctx.gpr[7] ^ 2u);
      if (branch_taken) {
          goto L_089B87E0;
      }
      goto L_089B87D4;
    }
L_089B87D4:
    ctx.gpr[2] = (ctx.gpr[7] ^ 1u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B87E0:
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B87EC:
    ctx.gpr[10] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[10] & 65535u);
    ctx.gpr[9] = (ctx.gpr[5] & 65535u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[10] = (ctx.gpr[5] < ctx.gpr[10] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089B885C;
      }
      goto L_089B8814;
    }
L_089B8814:
    ctx.gpr[11] = (ctx.gpr[4] | 0u);
    goto L_089B8818;
L_089B8818:
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_089B883C;
      }
      goto L_089B8824;
    }
L_089B8824:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_089B883C;
      }
      goto L_089B882C;
    }
L_089B882C:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_089B883C;
      }
      goto L_089B8834;
    }
L_089B8834:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[10]));
      if (branch_taken) {
          goto L_089B8848;
      }
      goto L_089B883C;
    }
L_089B883C:
    if (ctx.gpr[7] != ctx.gpr[10]) {
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
        goto L_089B884C;
    }
    goto L_089B8844;
L_089B8844:
    ctx.gpr[2] = (0u | 1u);
    goto L_089B8848;
L_089B8848:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_089B884C;
L_089B884C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[5] < ctx.gpr[10] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089B8818;
      }
      goto L_089B885C;
    }
L_089B885C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8864:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089B88C4;
      }
      goto L_089B8878;
    }
L_089B8878:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    goto L_089B887C;
L_089B887C:
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[11] < ctx.gpr[6] ? 1u : 0u);
    if (ctx.gpr[9] == 0u) {
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_089B88B8;
    }
    goto L_089B888C;
L_089B888C:
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    goto L_089B8894;
L_089B8894:
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[3];
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089B88A8;
      }
      goto L_089B88A0;
    }
L_089B88A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089B88B4;
      }
      goto L_089B88A8;
    }
L_089B88A8:
    ctx.gpr[3] = (ctx.gpr[11] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089B8894;
      }
      goto L_089B88B4;
    }
L_089B88B4:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_089B88B8;
L_089B88B8:
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089B887C;
      }
      goto L_089B88C4;
    }
L_089B88C4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B88CC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089B893C;
      }
      goto L_089B88E0;
    }
L_089B88E0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_089B88E4;
L_089B88E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[9] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
        goto L_089B890C;
    }
    goto L_089B88F4;
L_089B88F4:
    if (ctx.gpr[4] == ctx.gpr[9]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
        goto L_089B890C;
    }
    goto L_089B88FC;
L_089B88FC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
        goto L_089B892C;
    }
    goto L_089B8908;
L_089B8908:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    goto L_089B890C;
L_089B890C:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_089B8930;
    }
    goto L_089B8914;
L_089B8914:
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_089B8930;
    }
    goto L_089B891C;
L_089B891C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_089B8930;
    }
    goto L_089B8928;
L_089B8928:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_089B892C;
L_089B892C:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_089B8930;
L_089B8930:
    ctx.gpr[5] = (ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089B88E4;
      }
      goto L_089B893C;
    }
L_089B893C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8944:
    ctx.gpr[2] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (0u | 3u);
    goto L_089B8954;
L_089B8954:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(28)));
    if (ctx.gpr[4] == ctx.gpr[9]) {
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_089B89B0;
    }
    goto L_089B8960;
L_089B8960:
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(24)));
    if (ctx.gpr[2] == ctx.gpr[11]) {
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_089B89B0;
    }
    goto L_089B896C;
L_089B896C:
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(26)));
    if (ctx.gpr[2] == ctx.gpr[11]) {
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_089B89B0;
    }
    goto L_089B8978;
L_089B8978:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_089B898C;
      }
      goto L_089B8984;
    }
L_089B8984:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089B898C;
      }
      goto L_089B898C;
    }
L_089B898C:
    if (ctx.gpr[11] == 0u) {
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_089B89B0;
    }
    goto L_089B8994;
L_089B8994:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(48)));
    if (ctx.gpr[7] == ctx.gpr[3]) {
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_089B89B0;
    }
    goto L_089B89A0;
L_089B89A0:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[11] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B89BC;
      }
      goto L_089B89AC;
    }
L_089B89AC:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_089B89B0;
L_089B89B0:
    ctx.gpr[11] = (ctx.gpr[8] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089B8954;
      }
      goto L_089B89BC;
    }
L_089B89BC:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    ctx.gpr[2] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_089B8A24;
      }
      goto L_089B89C4;
    }
L_089B89C4:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (ctx.gpr[5] | 0u);
    goto L_089B89CC;
L_089B89CC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(28)));
    ctx.gpr[2] = (ctx.gpr[9] | 0u);
    if (ctx.gpr[4] == ctx.gpr[2]) {
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_089B8A14;
    }
    goto L_089B89DC;
L_089B89DC:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_089B89F0;
      }
      goto L_089B89E8;
    }
L_089B89E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089B89F0;
      }
      goto L_089B89F0;
    }
L_089B89F0:
    if (ctx.gpr[11] == 0u) {
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_089B8A14;
    }
    goto L_089B89F8;
L_089B89F8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(48)));
    if (ctx.gpr[7] == ctx.gpr[2]) {
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_089B8A14;
    }
    goto L_089B8A04;
L_089B8A04:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[2] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_089B8A24;
      }
      goto L_089B8A10;
    }
L_089B8A10:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_089B8A14;
L_089B8A14:
    ctx.gpr[11] = (ctx.gpr[8] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089B89CC;
      }
      goto L_089B8A20;
    }
L_089B8A20:
    ctx.gpr[2] = (ctx.gpr[9] | 0u);
    goto L_089B8A24;
L_089B8A24:
    if (ctx.gpr[8] == ctx.gpr[6]) {
    ctx.gpr[2] = (0u | 0u);
        goto L_089B8A2C;
    }
    goto L_089B8A2C;
L_089B8A2C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8A34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] - 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[10] | 0u);
    ctx.gpr[20] = (ctx.gpr[9] | 0u);
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x089B8A7Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_089B9058;
L_089B8A7C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089B8AB4;
      }
      goto L_089B8A8C;
    }
L_089B8A8C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42)));
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089B8B2C;
      }
      goto L_089B8AB4;
    }
L_089B8AB4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x089B8AC4u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_089B9058;
L_089B8AC4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089B8AF4;
      }
      goto L_089B8AD8;
    }
L_089B8AD8:
    ctx.gpr[31] = (0x089B8AE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 701u, 0x089B7FDCu>(ctx, &aot_mem) && ctx.pc == 0x089B8AE0u) goto L_089B8AE0;
    return;
L_089B8AE0:
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089B8B0C;
      }
      goto L_089B8AF4;
    }
L_089B8AF4:
    ctx.gpr[31] = (0x089B8AFCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 689u, 0x089B7F50u>(ctx, &aot_mem) && ctx.pc == 0x089B8AFCu) goto L_089B8AFC;
    return;
L_089B8AFC:
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    goto L_089B8B0C;
L_089B8B0C:
    ctx.gpr[31] = (0x089B8B14u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_089B803C;
L_089B8B14:
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089B8B28u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    goto L_089B80A4;
L_089B8B28:
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_089B8B2C;
L_089B8B2C:
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
L_089B8C50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089B8C64u);
    ctx.gpr[6] = (0u | 1u);
    goto L_089BB4B4;
L_089B8C64:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9058:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[10] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089B90BC;
      }
      goto L_089B906C;
    }
L_089B906C:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    goto L_089B9070;
L_089B9070:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
        goto L_089B90B0;
    }
    goto L_089B9080;
L_089B9080:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[5] == ctx.gpr[7]) {
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
        goto L_089B90B0;
    }
    goto L_089B908C;
L_089B908C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089B90B0;
      }
      goto L_089B9098;
    }
L_089B9098:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    ctx.gpr[2] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_089B90A8;
      }
      goto L_089B90A0;
    }
L_089B90A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089B90A8;
      }
      goto L_089B90A8;
    }
L_089B90A8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B90B0:
    ctx.gpr[6] = (ctx.gpr[10] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089B9070;
      }
      goto L_089B90BC;
    }
L_089B90BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B90F8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2222u << 16u);
      if (branch_taken) {
          goto L_089B910C;
      }
      goto L_089B9100;
    }
L_089B9100:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-24976));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_089B910C;
L_089B910C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_089B9120;
      }
      goto L_089B9114;
    }
L_089B9114:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24976));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_089B9120;
L_089B9120:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9128:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089B91D0;
      }
      goto L_089B9140;
    }
L_089B9140:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 1u);
      if (branch_taken) {
          goto L_089B9168;
      }
      goto L_089B914C;
    }
L_089B914C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2204u << 16u);
      if (branch_taken) {
          goto L_089B918C;
      }
      goto L_089B9154;
    }
L_089B9154:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24976));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089B9194;
      }
      goto L_089B9168;
    }
L_089B9168:
    ctx.gpr[31] = (0x089B9170u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 508u, 0x089B7080u>(ctx, &aot_mem) && ctx.pc == 0x089B9170u) goto L_089B9170;
    return;
L_089B9170:
    ctx.gpr[2] = (2222u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-24976));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B918C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10880));
    goto L_089B9194;
L_089B9194:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089B91A4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B91A4u) goto L_089B91A4;
    return;
L_089B91A4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B91D0;
      }
      goto L_089B91B0;
    }
L_089B91B0:
    ctx.gpr[31] = (0x089B91B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 508u, 0x089B7080u>(ctx, &aot_mem) && ctx.pc == 0x089B91B8u) goto L_089B91B8;
    return;
L_089B91B8:
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
L_089B91D0:
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
L_089B91E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_089B9228;
      }
      goto L_089B9204;
    }
L_089B9204:
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(18)));
    ctx.gpr[12] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18)));
    ctx.gpr[13] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(14)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[14] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(14)));
      if (branch_taken) {
          goto L_089B9230;
      }
      goto L_089B9220;
    }
L_089B9220:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9280;
      }
      goto L_089B9228;
    }
L_089B9228:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9230:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[15] = (0u | 255u);
      if (branch_taken) {
          goto L_089B9270;
      }
      goto L_089B923C;
    }
L_089B923C:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[24] = (0u | 256u);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(35)));
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    ctx.gpr[10] = (ctx.gpr[10] << 8u);
    ctx.gpr[10] = (ctx.gpr[10] & 3840u);
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[24];
    ctx.gpr[24] = (0u | 768u);
      if (branch_taken) {
          goto L_089B926C;
      }
      goto L_089B925C;
    }
L_089B925C:
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[24];
    ctx.gpr[24] = (0u | 1280u);
      if (branch_taken) {
          goto L_089B926C;
      }
      goto L_089B9264;
    }
L_089B9264:
    if (ctx.gpr[10] != ctx.gpr[24]) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(7)));
        goto L_089B9274;
    }
    goto L_089B926C;
L_089B926C:
    ctx.gpr[8] = (0u | 16u);
    goto L_089B9270;
L_089B9270:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(7)));
    goto L_089B9274;
L_089B9274:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[15];
    // nop
      if (branch_taken) {
          goto L_089B9280;
      }
      goto L_089B927C;
    }
L_089B927C:
    ctx.gpr[8] = (ctx.gpr[8] | 16u);
    goto L_089B9280;
L_089B9280:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089B92DC;
      }
      goto L_089B9288;
    }
L_089B9288:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[5] = (0u | 255u);
      if (branch_taken) {
          goto L_089B92C8;
      }
      goto L_089B9294;
    }
L_089B9294:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[15] = (0u | 256u);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(35)));
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    ctx.gpr[10] = (ctx.gpr[10] << 8u);
    ctx.gpr[10] = (ctx.gpr[10] & 3840u);
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[15];
    ctx.gpr[15] = (0u | 768u);
      if (branch_taken) {
          goto L_089B92C4;
      }
      goto L_089B92B4;
    }
L_089B92B4:
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[15];
    ctx.gpr[15] = (0u | 1280u);
      if (branch_taken) {
          goto L_089B92C4;
      }
      goto L_089B92BC;
    }
L_089B92BC:
    if (ctx.gpr[10] != ctx.gpr[15]) {
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(7)));
        goto L_089B92CC;
    }
    goto L_089B92C4;
L_089B92C4:
    ctx.gpr[9] = (0u | 16u);
    goto L_089B92C8;
L_089B92C8:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(7)));
    goto L_089B92CC;
L_089B92CC:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089B92DC;
      }
      goto L_089B92D4;
    }
L_089B92D4:
    ctx.gpr[9] = (ctx.gpr[9] | 16u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089B92DC;
L_089B92DC:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (0u | 8u);
        goto L_089B92E8;
    }
    goto L_089B92E8;
L_089B92E8:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    if (ctx.gpr[10] != 0u) {
    ctx.gpr[7] = (0u | 8u);
        goto L_089B92F8;
    }
    goto L_089B92F8;
L_089B92F8:
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[12]) ? 1u : 0u);
    if (ctx.gpr[11] != 0u) {
    ctx.gpr[10] = (0u | 4u);
        goto L_089B9308;
    }
    goto L_089B9308;
L_089B9308:
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[10]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    if (ctx.gpr[10] != 0u) {
    ctx.gpr[5] = (0u | 4u);
        goto L_089B9320;
    }
    goto L_089B9320;
L_089B9320:
    ctx.gpr[9] = (ctx.gpr[9] | ctx.gpr[7]);
    ctx.gpr[9] = (ctx.gpr[9] | ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[14]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (0u | 2u);
        goto L_089B9338;
    }
    goto L_089B9338;
L_089B9338:
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[14]) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (0u | 2u);
        goto L_089B934C;
    }
    goto L_089B934C;
L_089B934C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[9] | ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[8] | ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] - ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9370:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 3u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (2222u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[20] = (1u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1282));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[18] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(264)));
      if (branch_taken) {
          goto L_089B93F0;
      }
      goto L_089B93D4;
    }
L_089B93D4:
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_089B93D8;
L_089B93D8:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] | ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089B93D8;
      }
      goto L_089B93F0;
    }
L_089B93F0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(31));
    ctx.gpr[19] = (ctx.gpr[19] >> 3u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    jump_target = ctx.gpr[22];
    ctx.gpr[31] = (0x089B9404u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9404u) goto L_089B9404;
    return;
L_089B9404:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B95D8;
      }
      goto L_089B9410;
    }
L_089B9410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089B942Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B942Cu) goto L_089B942C;
    return;
L_089B942C:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_089B95C8;
      }
      goto L_089B9438;
    }
L_089B9438:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B9444u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089B9444u) goto L_089B9444;
    return;
L_089B9444:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[10] = (0u | 65535u);
      if (branch_taken) {
          goto L_089B95B8;
      }
      goto L_089B9454;
    }
L_089B9454:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[12] = (0u | 65535u);
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    goto L_089B9460;
L_089B9460:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089B9484;
      }
      goto L_089B946C;
    }
L_089B946C:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089B946C;
      }
      goto L_089B9484;
    }
L_089B9484:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089B95AC;
      }
      goto L_089B9494;
    }
L_089B9494:
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[5]);
    goto L_089B9498;
L_089B9498:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (ctx.gpr[7] & ctx.gpr[8]);
    ctx.gpr[11] = (ctx.gpr[11] & ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[10];
    ctx.gpr[3] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_089B959C;
      }
      goto L_089B94B8;
    }
L_089B94B8:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 5u));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[22] + ctx.gpr[7]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (ctx.gpr[3] & 31u);
    ctx.gpr[3] = (ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.gpr[13] = (ctx.gpr[11] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 5u));
      if (branch_taken) {
          goto L_089B959C;
      }
      goto L_089B94DC;
    }
L_089B94DC:
    ctx.gpr[13] = (ctx.gpr[13] << 2u);
    ctx.gpr[13] = (ctx.gpr[22] + ctx.gpr[13]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] & 31u);
    ctx.gpr[8] = (ctx.gpr[2] << (ctx.gpr[8] & 31u));
    ctx.gpr[8] = (ctx.gpr[13] & ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 5u));
      if (branch_taken) {
          goto L_089B959C;
      }
      goto L_089B94FC;
    }
L_089B94FC:
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[22] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] & 31u);
    ctx.gpr[9] = (ctx.gpr[2] << (ctx.gpr[9] & 31u));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (ctx.gpr[11] | ctx.gpr[3]);
      if (branch_taken) {
          goto L_089B959C;
      }
      goto L_089B951C;
    }
L_089B951C:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 5u));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[22] + ctx.gpr[8]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] & 31u);
    ctx.gpr[7] = (ctx.gpr[2] << (ctx.gpr[7] & 31u));
    ctx.gpr[7] = (ctx.gpr[9] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 5u));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[22] + ctx.gpr[8]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] & 31u);
    ctx.gpr[7] = (ctx.gpr[2] << (ctx.gpr[7] & 31u));
    ctx.gpr[7] = (ctx.gpr[9] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[12]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[12]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[12]));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_089B959C;
L_089B959C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_089B9498;
      }
      goto L_089B95AC;
    }
L_089B95AC:
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089B9460;
      }
      goto L_089B95B8;
    }
L_089B95B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089B95C8u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B95C8u) goto L_089B95C8;
    return;
L_089B95C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089B95D8u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B95D8u) goto L_089B95D8;
    return;
L_089B95D8:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_089B9608:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_089B961C;
      }
      goto L_089B9614;
    }
L_089B9614:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B961C:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] != ctx.gpr[4]) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_089B9660;
    }
    goto L_089B9638;
L_089B9638:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_089B9684;
      }
      goto L_089B9658;
    }
L_089B9658:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_089B9680;
      }
      goto L_089B9660;
    }
L_089B9660:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089B9670;
      }
      goto L_089B9668;
    }
L_089B9668:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_089B9670;
L_089B9670:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_089B9684;
      }
      goto L_089B9678;
    }
L_089B9678:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    goto L_089B9680;
L_089B9680:
    ctx.gpr[7] = (0u | 0u);
    goto L_089B9684;
L_089B9684:
    ctx.gpr[6] = (ctx.gpr[7] << 2u);
    goto L_089B9688;
L_089B9688:
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_089B96B8;
      }
      goto L_089B969C;
    }
L_089B969C:
    if (ctx.gpr[9] == ctx.gpr[4]) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
        goto L_089B96BC;
    }
    goto L_089B96A4;
L_089B96A4:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(24)));
    if (ctx.gpr[10] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
        goto L_089B96BC;
    }
    goto L_089B96B0;
L_089B96B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_089B96D4;
      }
      goto L_089B96B8;
    }
L_089B96B8:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    goto L_089B96BC;
L_089B96BC:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B96D4;
      }
      goto L_089B96C4;
    }
L_089B96C4:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B96D4;
      }
      goto L_089B96D0;
    }
L_089B96D0:
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    goto L_089B96D4;
L_089B96D4:
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
        goto L_089B977C;
    }
    goto L_089B96DC;
L_089B96DC:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.gpr[9] = (ctx.gpr[8] << 2u);
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[8] != ctx.gpr[6]) {
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_089B971C;
    }
    goto L_089B96F4;
L_089B96F4:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
        goto L_089B9740;
    }
    goto L_089B9714;
L_089B9714:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_089B973C;
      }
      goto L_089B971C;
    }
L_089B971C:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089B972C;
      }
      goto L_089B9724;
    }
L_089B9724:
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    goto L_089B972C;
L_089B972C:
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
        goto L_089B9740;
    }
    goto L_089B9734;
L_089B9734:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(16), ctx.gpr[9]);
    goto L_089B973C;
L_089B973C:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    goto L_089B9740;
L_089B9740:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[9]);
    if (ctx.gpr[9] != 0u) {
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
        goto L_089B9764;
    }
    goto L_089B9764;
L_089B9764:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_089B977C;
L_089B977C:
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[7] << 2u);
      if (branch_taken) {
          goto L_089B9688;
      }
      goto L_089B978C;
    }
L_089B978C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9794:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
      if (branch_taken) {
          goto L_089B9B84;
      }
      goto L_089B97DC;
    }
L_089B97DC:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[22] = (0u | 3u);
    ctx.gpr[23] = (static_cast<std::int32_t>(ctx.gpr[23]) < 4 ? 1u : 0u);
    ctx.gpr[17] = (0u | 0u);
    goto L_089B97EC;
L_089B97EC:
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089B9830;
      }
      goto L_089B97F8;
    }
L_089B97F8:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_089B9814;
    }
    goto L_089B9800;
L_089B9800:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_089B9814;
    }
    goto L_089B980C;
L_089B980C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089B9864;
      }
      goto L_089B9814;
    }
L_089B9814:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9864;
      }
      goto L_089B981C;
    }
L_089B981C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9864;
      }
      goto L_089B9828;
    }
L_089B9828:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089B9864;
      }
      goto L_089B9830;
    }
L_089B9830:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_089B984C;
    }
    goto L_089B9838;
L_089B9838:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_089B984C;
    }
    goto L_089B9844;
L_089B9844:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089B9864;
      }
      goto L_089B984C;
    }
L_089B984C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9864;
      }
      goto L_089B9854;
    }
L_089B9854:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9864;
      }
      goto L_089B9860;
    }
L_089B9860:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_089B9864;
L_089B9864:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9B84;
      }
      goto L_089B986C;
    }
L_089B986C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x089B9880u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089B9608;
L_089B9880:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[6];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089B9898;
      }
      goto L_089B9890;
    }
L_089B9890:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089B98B8;
      }
      goto L_089B9898;
    }
L_089B9898:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[16] != ctx.gpr[6]) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_089B98AC;
    }
    goto L_089B98A4;
L_089B98A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_089B98B8;
      }
      goto L_089B98AC;
    }
L_089B98AC:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[6];
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089B98BC;
      }
      goto L_089B98B4;
    }
L_089B98B4:
    ctx.gpr[18] = (0u | 2u);
    goto L_089B98B8;
L_089B98B8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089B98BC;
L_089B98BC:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[18]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[22]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089B98F8;
      }
      goto L_089B98DC;
    }
L_089B98DC:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[18]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[22]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
      if (branch_taken) {
          goto L_089B9910;
      }
      goto L_089B98F8;
    }
L_089B98F8:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[18]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[22]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[21] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_089B9910;
L_089B9910:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B9930u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 647u, 0x089B7D9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B9930u) goto L_089B9930;
    return;
L_089B9930:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[10] = (ctx.gpr[5] + ctx.gpr[10]);
      if (branch_taken) {
          goto L_089B99A0;
      }
      goto L_089B9948;
    }
L_089B9948:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_089B9994;
      }
      goto L_089B9950;
    }
L_089B9950:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089B9970;
      }
      goto L_089B9960;
    }
L_089B9960:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9970;
      }
      goto L_089B996C;
    }
L_089B996C:
    ctx.gpr[7] = (0u | 1u);
    goto L_089B9970;
L_089B9970:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_089B9988;
      }
      goto L_089B9978;
    }
L_089B9978:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(28)));
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
        goto L_089B998C;
    }
    goto L_089B9984;
L_089B9984:
    ctx.gpr[8] = (0u | 1u);
    goto L_089B9988;
L_089B9988:
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    goto L_089B998C;
L_089B998C:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9998;
      }
      goto L_089B9994;
    }
L_089B9994:
    ctx.gpr[6] = (0u | 1u);
    goto L_089B9998;
L_089B9998:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089B99F0;
      }
      goto L_089B99A0;
    }
L_089B99A0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_089B99EC;
      }
      goto L_089B99A8;
    }
L_089B99A8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089B99C8;
      }
      goto L_089B99B8;
    }
L_089B99B8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B99C8;
      }
      goto L_089B99C4;
    }
L_089B99C4:
    ctx.gpr[9] = (0u | 1u);
    goto L_089B99C8;
L_089B99C8:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_089B99E0;
      }
      goto L_089B99D0;
    }
L_089B99D0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_089B99E4;
      }
      goto L_089B99DC;
    }
L_089B99DC:
    ctx.gpr[6] = (0u | 1u);
    goto L_089B99E0;
L_089B99E0:
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[6]);
    goto L_089B99E4;
L_089B99E4:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B99F0;
      }
      goto L_089B99EC;
    }
L_089B99EC:
    ctx.gpr[8] = (0u | 1u);
    goto L_089B99F0;
L_089B99F0:
    if (ctx.gpr[8] == 0u) {
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[21]));
        goto L_089B9B70;
    }
    goto L_089B99F8;
L_089B99F8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[6] == ctx.gpr[18]) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_089B9A14;
    }
    goto L_089B9A04;
L_089B9A04:
    if (ctx.gpr[6] == ctx.gpr[16]) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_089B9A14;
    }
    goto L_089B9A0C;
L_089B9A0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089B9A40;
      }
      goto L_089B9A14;
    }
L_089B9A14:
    if (ctx.gpr[6] == ctx.gpr[18]) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_089B9A2C;
    }
    goto L_089B9A1C;
L_089B9A1C:
    if (ctx.gpr[6] == ctx.gpr[16]) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_089B9A2C;
    }
    goto L_089B9A24;
L_089B9A24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089B9A40;
      }
      goto L_089B9A2C;
    }
L_089B9A2C:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089B9A40;
      }
      goto L_089B9A34;
    }
L_089B9A34:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089B9A40;
      }
      goto L_089B9A3C;
    }
L_089B9A3C:
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    goto L_089B9A40;
L_089B9A40:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9AA0;
      }
      goto L_089B9A48;
    }
L_089B9A48:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_089B9A98;
      }
      goto L_089B9A50;
    }
L_089B9A50:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089B9A70;
      }
      goto L_089B9A60;
    }
L_089B9A60:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9A70;
      }
      goto L_089B9A6C;
    }
L_089B9A6C:
    ctx.gpr[7] = (0u | 1u);
    goto L_089B9A70;
L_089B9A70:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_089B9A88;
      }
      goto L_089B9A78;
    }
L_089B9A78:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(28)));
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
        goto L_089B9A8C;
    }
    goto L_089B9A84;
L_089B9A84:
    ctx.gpr[8] = (0u | 1u);
    goto L_089B9A88;
L_089B9A88:
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    goto L_089B9A8C;
L_089B9A8C:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9A98;
      }
      goto L_089B9A94;
    }
L_089B9A94:
    ctx.gpr[6] = (0u | 1u);
    goto L_089B9A98;
L_089B9A98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089B9AF0;
      }
      goto L_089B9AA0;
    }
L_089B9AA0:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_089B9AF0;
      }
      goto L_089B9AA8;
    }
L_089B9AA8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089B9AC8;
      }
      goto L_089B9AB8;
    }
L_089B9AB8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9AC8;
      }
      goto L_089B9AC4;
    }
L_089B9AC4:
    ctx.gpr[9] = (0u | 1u);
    goto L_089B9AC8;
L_089B9AC8:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_089B9AE0;
      }
      goto L_089B9AD0;
    }
L_089B9AD0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_089B9AE4;
      }
      goto L_089B9ADC;
    }
L_089B9ADC:
    ctx.gpr[6] = (0u | 1u);
    goto L_089B9AE0;
L_089B9AE0:
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[6]);
    goto L_089B9AE4;
L_089B9AE4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9AF0;
      }
      goto L_089B9AEC;
    }
L_089B9AEC:
    ctx.gpr[8] = (0u | 1u);
    goto L_089B9AF0;
L_089B9AF0:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] & 1u);
      if (branch_taken) {
          goto L_089B9B58;
      }
      goto L_089B9AF8;
    }
L_089B9AF8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_089B9B18;
      }
      goto L_089B9B00;
    }
L_089B9B00:
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[21]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B9B7C;
      }
      goto L_089B9B18;
    }
L_089B9B18:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[21]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B9B7C;
      }
      goto L_089B9B58;
    }
L_089B9B58:
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[21]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B9B7C;
      }
      goto L_089B9B70;
    }
L_089B9B70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_089B9B7C;
L_089B9B7C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089B97EC;
      }
      goto L_089B9B84;
    }
L_089B9B84:
    ctx.gpr[2] = (ctx.gpr[30] | 0u);
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
L_089B9BB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[31]);
    ctx.gpr[31] = (0x089B9C30u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 636u, 0x089B7C04u>(ctx, &aot_mem) && ctx.pc == 0x089B9C30u) goto L_089B9C30;
    return;
L_089B9C30:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
      if (branch_taken) {
          goto L_089B9CA0;
      }
      goto L_089B9C44;
    }
L_089B9C44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[16] = (0u | 1u);
    goto L_089B9C4C;
L_089B9C4C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
        goto L_089B9C80;
    }
    goto L_089B9C74;
L_089B9C74:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    goto L_089B9C80;
L_089B9C80:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089B9C4C;
      }
      goto L_089B9CA0;
    }
L_089B9CA0:
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-14416)));
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[6] + static_cast<std::uint32_t>(1282));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(280)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089B9CCCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9CCCu) goto L_089B9CCC;
    return;
L_089B9CCC:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[21]);
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089B9CF8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9CF8u) goto L_089B9CF8;
    return;
L_089B9CF8:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-14416)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(280)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089B9D18u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9D18u) goto L_089B9D18;
    return;
L_089B9D18:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089B9D3Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9D3Cu) goto L_089B9D3C;
    return;
L_089B9D3C:
    ctx.gpr[22] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[22] < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_089BA6F8;
      }
      goto L_089B9D50;
    }
L_089B9D50:
    ctx.gpr[18] = (0u | 3u);
    goto L_089B9D54;
L_089B9D54:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[30] = (0u | 3u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[30] = (0u | 0u);
        goto L_089B9D70;
    }
    goto L_089B9D70;
L_089B9D70:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
        goto L_089B9E48;
    }
    goto L_089B9D78;
L_089B9D78:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[20]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14416)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(280)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (3u << 16u);
    ctx.gpr[30] = (ctx.gpr[5] + static_cast<std::uint32_t>(1282));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089B9DACu);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9DACu) goto L_089B9DAC;
    return;
L_089B9DAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089B9DDCu);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9DDCu) goto L_089B9DDC;
    return;
L_089B9DDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[17] << 4u);
    ctx.gpr[6] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
        goto L_089B9E3C;
    }
    goto L_089B9E3C;
L_089B9E3C:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[22] < ctx.gpr[21] ? 1u : 0u);
      if (branch_taken) {
          goto L_089BA6F0;
      }
      goto L_089B9E48;
    }
L_089B9E48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
        goto L_089B9E68;
    }
    goto L_089B9E54;
L_089B9E54:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_089B9E58;
L_089B9E58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_089B9E58;
    }
    goto L_089B9E64;
L_089B9E64:
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    goto L_089B9E68;
L_089B9E68:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089B9E8C;
      }
      goto L_089B9E7C;
    }
L_089B9E7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9E8C;
      }
      goto L_089B9E88;
    }
L_089B9E88:
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_089B9E8C;
L_089B9E8C:
    { const bool branch_taken = ctx.gpr[14] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089B9EA4;
      }
      goto L_089B9E94;
    }
L_089B9E94:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B9EA8;
      }
      goto L_089B9EA0;
    }
L_089B9EA0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089B9EA4;
L_089B9EA4:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    goto L_089B9EA8;
L_089B9EA8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_089B9F08;
    }
    goto L_089B9EB4;
L_089B9EB4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089B9ED8;
      }
      goto L_089B9EC8;
    }
L_089B9EC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9ED8;
      }
      goto L_089B9ED4;
    }
L_089B9ED4:
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    goto L_089B9ED8;
L_089B9ED8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089B9EF0;
      }
      goto L_089B9EE0;
    }
L_089B9EE0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B9EF4;
      }
      goto L_089B9EEC;
    }
L_089B9EEC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089B9EF0;
L_089B9EF0:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    goto L_089B9EF4;
L_089B9EF4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_089B9F08;
    }
    goto L_089B9F00;
L_089B9F00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089BA198;
      }
      goto L_089B9F08;
    }
L_089B9F08:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089B9F28;
      }
      goto L_089B9F18;
    }
L_089B9F18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9F28;
      }
      goto L_089B9F24;
    }
L_089B9F24:
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_089B9F28;
L_089B9F28:
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089B9F40;
      }
      goto L_089B9F30;
    }
L_089B9F30:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B9F44;
      }
      goto L_089B9F3C;
    }
L_089B9F3C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089B9F40;
L_089B9F40:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    goto L_089B9F44;
L_089B9F44:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
        goto L_089B9F98;
    }
    goto L_089B9F50;
L_089B9F50:
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_089B9F68;
      }
      goto L_089B9F58;
    }
L_089B9F58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9F68;
      }
      goto L_089B9F64;
    }
L_089B9F64:
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_089B9F68;
L_089B9F68:
    { const bool branch_taken = ctx.gpr[14] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089B9F80;
      }
      goto L_089B9F70;
    }
L_089B9F70:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B9F84;
      }
      goto L_089B9F7C;
    }
L_089B9F7C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089B9F80;
L_089B9F80:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    goto L_089B9F84;
L_089B9F84:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
        goto L_089B9F98;
    }
    goto L_089B9F90;
L_089B9F90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_089BA198;
      }
      goto L_089B9F98;
    }
L_089B9F98:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089B9FB8;
      }
      goto L_089B9FA8;
    }
L_089B9FA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9FB8;
      }
      goto L_089B9FB4;
    }
L_089B9FB4:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089B9FB8;
L_089B9FB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089B9FD0;
      }
      goto L_089B9FC0;
    }
L_089B9FC0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B9FD4;
      }
      goto L_089B9FCC;
    }
L_089B9FCC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089B9FD0;
L_089B9FD0:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089B9FD4;
L_089B9FD4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BA028;
      }
      goto L_089B9FE0;
    }
L_089B9FE0:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089B9FF8;
      }
      goto L_089B9FE8;
    }
L_089B9FE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9FF8;
      }
      goto L_089B9FF4;
    }
L_089B9FF4:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089B9FF8;
L_089B9FF8:
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089BA010;
      }
      goto L_089BA000;
    }
L_089BA000:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089BA014;
      }
      goto L_089BA00C;
    }
L_089BA00C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089BA010;
L_089BA010:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089BA014;
L_089BA014:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BA028;
      }
      goto L_089BA020;
    }
L_089BA020:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089BA198;
      }
      goto L_089BA028;
    }
L_089BA028:
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_089BA040;
      }
      goto L_089BA030;
    }
L_089BA030:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BA040;
      }
      goto L_089BA03C;
    }
L_089BA03C:
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    goto L_089BA040;
L_089BA040:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_089BA058;
      }
      goto L_089BA048;
    }
L_089BA048:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BA058;
      }
      goto L_089BA054;
    }
L_089BA054:
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_089BA058;
L_089BA058:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089BA070;
      }
      goto L_089BA060;
    }
L_089BA060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BA070;
      }
      goto L_089BA06C;
    }
L_089BA06C:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089BA070;
L_089BA070:
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089BA088;
      }
      goto L_089BA078;
    }
L_089BA078:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089BA08C;
      }
      goto L_089BA084;
    }
L_089BA084:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089BA088;
L_089BA088:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089BA08C;
L_089BA08C:
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089BA120;
      }
      goto L_089BA09C;
    }
L_089BA09C:
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_089BA0B8;
      }
      goto L_089BA0A8;
    }
L_089BA0A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BA0B8;
      }
      goto L_089BA0B4;
    }
L_089BA0B4:
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    goto L_089BA0B8;
L_089BA0B8:
    { const bool branch_taken = ctx.gpr[14] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_089BA0D0;
      }
      goto L_089BA0C0;
    }
L_089BA0C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BA0D0;
      }
      goto L_089BA0CC;
    }
L_089BA0CC:
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_089BA0D0;
L_089BA0D0:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089BA0E8;
      }
      goto L_089BA0D8;
    }
L_089BA0D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BA0E8;
      }
      goto L_089BA0E4;
    }
L_089BA0E4:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089BA0E8;
L_089BA0E8:
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089BA100;
      }
      goto L_089BA0F0;
    }
L_089BA0F0:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089BA104;
      }
      goto L_089BA0FC;
    }
L_089BA0FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089BA100;
L_089BA100:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089BA104;
L_089BA104:
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[10] = (0u | 2u);
        goto L_089BA114;
    }
    goto L_089BA114;
L_089BA114:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_089BA198;
      }
      goto L_089BA11C;
    }
L_089BA11C:
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
    goto L_089BA120;
L_089BA120:
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_089BA138;
      }
      goto L_089BA128;
    }
L_089BA128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BA138;
      }
      goto L_089BA134;
    }
L_089BA134:
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    goto L_089BA138;
L_089BA138:
    { const bool branch_taken = ctx.gpr[14] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_089BA150;
      }
      goto L_089BA140;
    }
L_089BA140:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BA150;
      }
      goto L_089BA14C;
    }
L_089BA14C:
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_089BA150;
L_089BA150:
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089BA168;
      }
      goto L_089BA158;
    }
L_089BA158:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BA168;
      }
      goto L_089BA164;
    }
L_089BA164:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089BA168;
L_089BA168:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089BA180;
      }
      goto L_089BA170;
    }
L_089BA170:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089BA184;
      }
      goto L_089BA17C;
    }
L_089BA17C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089BA180;
L_089BA180:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089BA184;
L_089BA184:
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[10] = (0u | 0u);
        goto L_089BA194;
    }
    goto L_089BA194;
L_089BA194:
    ctx.gpr[4] = (ctx.gpr[10] | 0u);
    goto L_089BA198;
L_089BA198:
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    { const std::uint32_t dividend = ctx.gpr[19]; const std::uint32_t divisor = ctx.gpr[18]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    ctx.gpr[6] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[18]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[18]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.hi);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    goto L_089BA1E0;
L_089BA1E0:
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[21] ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
        goto L_089BA210;
    }
    goto L_089BA1EC;
L_089BA1EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_089BA1F0;
L_089BA1F0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089BA1F0;
      }
      goto L_089BA20C;
    }
L_089BA20C:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    goto L_089BA210;
L_089BA210:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(36)));
    ctx.gpr[30] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[17] = (static_cast<std::int32_t>(ctx.gpr[30]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089BA278;
      }
      goto L_089BA22C;
    }
L_089BA22C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089BA314;
      }
      goto L_089BA234;
    }
L_089BA234:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[18]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[16]; const std::uint32_t divisor = ctx.gpr[18]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[7] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[18]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.hi);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089BA350;
      }
      goto L_089BA278;
    }
L_089BA278:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089BA2D0;
      }
      goto L_089BA284;
    }
L_089BA284:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089BA314;
      }
      goto L_089BA28C;
    }
L_089BA28C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[18]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[16]; const std::uint32_t divisor = ctx.gpr[18]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[7] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[18]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.hi);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089BA350;
      }
      goto L_089BA2D0;
    }
L_089BA2D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[18]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[16]; const std::uint32_t divisor = ctx.gpr[18]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[7] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[18]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.hi);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089BA350;
      }
      goto L_089BA314;
    }
L_089BA314:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[18]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[16]; const std::uint32_t divisor = ctx.gpr[18]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[7] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[18]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    goto L_089BA350;
L_089BA350:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) > 0;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_089BA374;
      }
      goto L_089BA358;
    }
L_089BA358:
    if (static_cast<std::int32_t>(ctx.gpr[16]) < 0) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[16]);
        goto L_089BA3B0;
    }
    goto L_089BA360;
L_089BA360:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089BA3AC;
      }
      goto L_089BA374;
    }
L_089BA374:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089BA38C;
      }
      goto L_089BA37C;
    }
L_089BA37C:
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_089BA3A0;
    }
    goto L_089BA384;
L_089BA384:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[16]);
      if (branch_taken) {
          goto L_089BA3B0;
      }
      goto L_089BA38C;
    }
L_089BA38C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089BA3AC;
      }
      goto L_089BA3A0;
    }
L_089BA3A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    goto L_089BA3AC;
L_089BA3AC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[16]);
    goto L_089BA3B0;
L_089BA3B0:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[11] << 4u);
    ctx.gpr[8] = (ctx.gpr[11] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[22]);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089BA40Cu);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    goto L_089B9608;
L_089BA40C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x089BA42Cu);
    ctx.gpr[8] = (ctx.gpr[30] | 0u);
    goto L_089B9794;
L_089BA42C:
    ctx.gpr[22] = (ctx.gpr[16] + ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[12] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_089BA484;
      }
      goto L_089BA448;
    }
L_089BA448:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_089BA460;
      }
      goto L_089BA450;
    }
L_089BA450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BA460;
      }
      goto L_089BA45C;
    }
L_089BA45C:
    ctx.gpr[6] = (ctx.gpr[12] | 0u);
    goto L_089BA460;
L_089BA460:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089BA478;
      }
      goto L_089BA468;
    }
L_089BA468:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089BA47C;
      }
      goto L_089BA474;
    }
L_089BA474:
    ctx.gpr[4] = (ctx.gpr[12] | 0u);
    goto L_089BA478;
L_089BA478:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    goto L_089BA47C;
L_089BA47C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_089BA4BC;
      }
      goto L_089BA484;
    }
L_089BA484:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_089BA49C;
      }
      goto L_089BA48C;
    }
L_089BA48C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BA49C;
      }
      goto L_089BA498;
    }
L_089BA498:
    ctx.gpr[6] = (ctx.gpr[12] | 0u);
    goto L_089BA49C;
L_089BA49C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089BA4B4;
      }
      goto L_089BA4A4;
    }
L_089BA4A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089BA4B8;
      }
      goto L_089BA4B0;
    }
L_089BA4B0:
    ctx.gpr[4] = (ctx.gpr[12] | 0u);
    goto L_089BA4B4;
L_089BA4B4:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    goto L_089BA4B8;
L_089BA4B8:
    ctx.gpr[4] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    goto L_089BA4BC;
L_089BA4BC:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
        goto L_089BA658;
    }
    goto L_089BA4C4;
L_089BA4C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[30] | 0u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089BA504u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_089B9794;
L_089BA504:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_089BA540;
      }
      goto L_089BA514;
    }
L_089BA514:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_089BA540;
L_089BA540:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA558;
      }
      goto L_089BA550;
    }
L_089BA550:
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[22]);
    goto L_089BA558;
L_089BA558:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089BA1E0;
      }
      goto L_089BA560;
    }
L_089BA560:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14416)));
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (3u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(280)));
    ctx.gpr[19] = (ctx.gpr[6] + static_cast<std::uint32_t>(1282));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089BA58Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BA58Cu) goto L_089BA58C;
    return;
L_089BA58C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089BA5D0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BA5D0u) goto L_089BA5D0;
    return;
L_089BA5D0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[4] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[22] < ctx.gpr[21] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_089BA638;
      }
      goto L_089BA5F0;
    }
L_089BA5F0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[4] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_089BA5F0;
      }
      goto L_089BA638;
    }
L_089BA638:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089BA64Cu);
    ctx.gpr[6] = (ctx.gpr[8] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089BA64Cu) goto L_089BA64C;
    return;
L_089BA64C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089BA6F0;
      }
      goto L_089BA658;
    }
L_089BA658:
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA66C;
      }
      goto L_089BA664;
    }
L_089BA664:
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[22]);
    goto L_089BA66C;
L_089BA66C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089BA1E0;
      }
      goto L_089BA674;
    }
L_089BA674:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14416)));
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (3u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(280)));
    ctx.gpr[17] = (ctx.gpr[6] + static_cast<std::uint32_t>(1282));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089BA6A0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BA6A0u) goto L_089BA6A0;
    return;
L_089BA6A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089BA6D4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BA6D4u) goto L_089BA6D4;
    return;
L_089BA6D4:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089BA6ECu);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089BA6ECu) goto L_089BA6EC;
    return;
L_089BA6EC:
    ctx.gpr[17] = (ctx.gpr[22] < ctx.gpr[21] ? 1u : 0u);
    goto L_089BA6F0;
L_089BA6F0:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_089B9D54;
      }
      goto L_089BA6F8;
    }
L_089BA6F8:
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089BA70Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BA70Cu) goto L_089BA70C;
    return;
L_089BA70C:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-14416)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089BA730u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BA730u) goto L_089BA730;
    return;
L_089BA730:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089BA740u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BA740u) goto L_089BA740;
    return;
L_089BA740:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-14416)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089BA760u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BA760u) goto L_089BA760;
    return;
L_089BA760:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089BA774u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 625u, 0x089B7B18u>(ctx, &aot_mem) && ctx.pc == 0x089BA774u) goto L_089BA774;
    return;
L_089BA774:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BA7A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[30]);
    ctx.gpr[30] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[31]);
    ctx.gpr[31] = (0x089BA824u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 636u, 0x089B7C04u>(ctx, &aot_mem) && ctx.pc == 0x089BA824u) goto L_089BA824;
    return;
L_089BA824:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089BA88C;
      }
      goto L_089BA834;
    }
L_089BA834:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    goto L_089BA838;
L_089BA838:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
        goto L_089BA86C;
    }
    goto L_089BA860;
L_089BA860:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    goto L_089BA86C;
L_089BA86C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089BA838;
      }
      goto L_089BA88C;
    }
L_089BA88C:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-14416)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(280)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(1282));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089BA8B8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BA8B8u) goto L_089BA8B8;
    return;
L_089BA8B8:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089BA8E4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BA8E4u) goto L_089BA8E4;
    return;
L_089BA8E4:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-14416)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(280)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089BA904u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BA904u) goto L_089BA904;
    return;
L_089BA904:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089BA92Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BA92Cu) goto L_089BA92C;
    return;
L_089BA92C:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[23] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089BAFA4;
      }
      goto L_089BA93C;
    }
L_089BA93C:
    ctx.gpr[22] = (0u | 3u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_089BA944;
L_089BA944:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_089BAA14;
      }
      goto L_089BA94C;
    }
L_089BA94C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14416)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(280)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (3u << 16u);
    ctx.gpr[21] = (ctx.gpr[5] + static_cast<std::uint32_t>(1282));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089BA980u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BA980u) goto L_089BA980;
    return;
L_089BA980:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[22]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089BA9B0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BA9B0u) goto L_089BA9B0;
    return;
L_089BA9B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[17] << 4u);
    ctx.gpr[6] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
        goto L_089BAA08;
    }
    goto L_089BAA08;
L_089BAA08:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[23] < ctx.gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_089BAF9C;
      }
      goto L_089BAA14;
    }
L_089BAA14:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[16]);
    ctx.gpr[21] = (32768u << 16u);
    goto L_089BAA2C;
L_089BAA2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    if (ctx.gpr[17] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
        goto L_089BAC18;
    }
    goto L_089BAA3C;
L_089BAA3C:
    ctx.gpr[16] = (0u | 0u);
    goto L_089BAA40;
L_089BAA40:
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089BAA44;
L_089BAA44:
    { const std::uint32_t dividend = ctx.gpr[19]; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[15] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[15] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089BAA7C;
      }
      goto L_089BAA6C;
    }
L_089BAA6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BAA7C;
      }
      goto L_089BAA78;
    }
L_089BAA78:
    ctx.gpr[6] = (ctx.gpr[9] | 0u);
    goto L_089BAA7C;
L_089BAA7C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089BAA94;
      }
      goto L_089BAA84;
    }
L_089BAA84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089BAA98;
      }
      goto L_089BAA90;
    }
L_089BAA90:
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
    goto L_089BAA94;
L_089BAA94:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    goto L_089BAA98;
L_089BAA98:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089BABF8;
      }
      goto L_089BAAA0;
    }
L_089BAAA0:
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[18] ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_089BAAD0;
    }
    goto L_089BAAAC;
L_089BAAAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    goto L_089BAAB0;
L_089BAAB0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089BAAB0;
      }
      goto L_089BAACC;
    }
L_089BAACC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    goto L_089BAAD0;
L_089BAAD0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) > 0;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089BAAF0;
      }
      goto L_089BAAD8;
    }
L_089BAAD8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_089BAB24;
      }
      goto L_089BAAE0;
    }
L_089BAAE0:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[6]);
      if (branch_taken) {
          goto L_089BAB24;
      }
      goto L_089BAAF0;
    }
L_089BAAF0:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089BAB0C;
      }
      goto L_089BAAFC;
    }
L_089BAAFC:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_089BAB1C;
    }
    goto L_089BAB04;
L_089BAB04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BAB24;
      }
      goto L_089BAB0C;
    }
L_089BAB0C:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[6]);
      if (branch_taken) {
          goto L_089BAB24;
      }
      goto L_089BAB1C;
    }
L_089BAB1C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[6]);
    goto L_089BAB24;
L_089BAB24:
    { const std::uint32_t dividend = ctx.gpr[16]; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[8] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[9] = (ctx.gpr[19] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[15] + ctx.gpr[15]);
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[11] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[8]; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[8] = (ctx.gpr[11] + ctx.gpr[11]);
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.hi);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[31] = (0x089BABB0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[22]);
    goto L_089B9608;
L_089BABB0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x089BABC8u);
    ctx.gpr[8] = (0u | 1u);
    goto L_089B9794;
L_089BABC8:
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[23]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_089BABF8;
      }
      goto L_089BABEC;
    }
L_089BABEC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    goto L_089BABF8;
L_089BABF8:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089BAA44;
      }
      goto L_089BAC08;
    }
L_089BAC08:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_089BAA40;
      }
      goto L_089BAC14;
    }
L_089BAC14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    goto L_089BAC18;
L_089BAC18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089BAA2C;
      }
      goto L_089BAC34;
    }
L_089BAC34:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) > 0;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089BAC68;
      }
      goto L_089BAC54;
    }
L_089BAC54:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) < 0;
    // nop
      if (branch_taken) {
          goto L_089BAC94;
      }
      goto L_089BAC5C;
    }
L_089BAC5C:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089BAC94;
      }
      goto L_089BAC68;
    }
L_089BAC68:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[10]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[10]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089BAC84;
      }
      goto L_089BAC74;
    }
L_089BAC74:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
        goto L_089BAC90;
    }
    goto L_089BAC7C;
L_089BAC7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BAC94;
      }
      goto L_089BAC84;
    }
L_089BAC84:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089BAC94;
      }
      goto L_089BAC90;
    }
L_089BAC90:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    goto L_089BAC94;
L_089BAC94:
    { const std::uint32_t dividend = ctx.gpr[10]; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[8] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] << 4u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[11] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[9] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[8]; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[11] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[10]; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[11] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.hi);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[11] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[31] = (0x089BAD2Cu);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[22]);
    goto L_089B9608;
L_089BAD2C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089BAD44u);
    ctx.gpr[8] = (0u | 4u);
    goto L_089B9794;
L_089BAD44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[2]);
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089BAD68;
      }
      goto L_089BAD58;
    }
L_089BAD58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BAD68;
      }
      goto L_089BAD64;
    }
L_089BAD64:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089BAD68;
L_089BAD68:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089BAD80;
      }
      goto L_089BAD70;
    }
L_089BAD70:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
        goto L_089BAD84;
    }
    goto L_089BAD7C;
L_089BAD7C:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089BAD80;
L_089BAD80:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_089BAD84;
L_089BAD84:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
      if (branch_taken) {
          goto L_089BAF20;
      }
      goto L_089BAD8C;
    }
L_089BAD8C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BADD0u);
    ctx.gpr[8] = (0u | 4u);
    goto L_089B9794;
L_089BADD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[23] < ctx.gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_089BAE14;
      }
      goto L_089BADE4;
    }
L_089BADE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_089BAE14;
L_089BAE14:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[22]);
    ctx.gpr[21] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14416)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(280)));
    ctx.gpr[4] = (3u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(1282));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089BAE4Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BAE4Cu) goto L_089BAE4C;
    return;
L_089BAE4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089BAE94u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BAE94u) goto L_089BAE94;
    return;
L_089BAE94:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[4] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_089BAF00;
      }
      goto L_089BAEB8;
    }
L_089BAEB8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[4] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_089BAEB8;
      }
      goto L_089BAF00;
    }
L_089BAF00:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089BAF14u);
    ctx.gpr[6] = (ctx.gpr[8] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089BAF14u) goto L_089BAF14;
    return;
L_089BAF14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089BAF9C;
      }
      goto L_089BAF20;
    }
L_089BAF20:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14416)));
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (3u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(280)));
    ctx.gpr[17] = (ctx.gpr[6] + static_cast<std::uint32_t>(1282));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089BAF4Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BAF4Cu) goto L_089BAF4C;
    return;
L_089BAF4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089BAF80u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BAF80u) goto L_089BAF80;
    return;
L_089BAF80:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089BAF98u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089BAF98u) goto L_089BAF98;
    return;
L_089BAF98:
    ctx.gpr[17] = (ctx.gpr[23] < ctx.gpr[18] ? 1u : 0u);
    goto L_089BAF9C;
L_089BAF9C:
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_089BA944;
    }
    goto L_089BAFA4;
L_089BAFA4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089BAFBCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BAFBCu) goto L_089BAFBC;
    return;
L_089BAFBC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-14416)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089BAFE0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BAFE0u) goto L_089BAFE0;
    return;
L_089BAFE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089BAFF0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BAFF0u) goto L_089BAFF0;
    return;
L_089BAFF0:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-14416)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089BB010u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BB010u) goto L_089BB010;
    return;
L_089BB010:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x089BB024u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 625u, 0x089B7B18u>(ctx, &aot_mem) && ctx.pc == 0x089BB024u) goto L_089BB024;
    return;
L_089BB024:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BB058:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089BB0D8;
      }
      goto L_089BB08C;
    }
L_089BB08C:
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-14416)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(280)));
    ctx.gpr[21] = (3u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1282));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089BB0B8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BB0B8u) goto L_089BB0B8;
    return;
L_089BB0B8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089BB104;
      }
      goto L_089BB0D0;
    }
L_089BB0D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
      if (branch_taken) {
          goto L_089BB124;
      }
      goto L_089BB0D8;
    }
L_089BB0D8:
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
L_089BB104:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_089BB108;
L_089BB108:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_089BB108;
    }
    goto L_089BB120;
L_089BB120:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    goto L_089BB124;
L_089BB124:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089BB134u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BB134u) goto L_089BB134;
    return;
L_089BB134:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089BB194;
      }
      goto L_089BB150;
    }
L_089BB150:
    ctx.gpr[6] = (0u | 0u);
    goto L_089BB154;
L_089BB154:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089BB154;
      }
      goto L_089BB194;
    }
L_089BB194:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089BB1A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BB1A8u) goto L_089BB1A8;
    return;
L_089BB1A8:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-14416)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(284)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089BB1CCu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BB1CCu) goto L_089BB1CC;
    return;
L_089BB1CC:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    if (ctx.gpr[21] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
        goto L_089BB484;
    }
    goto L_089BB1D8;
L_089BB1D8:
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
    goto L_089BB1DC;
L_089BB1DC:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB240;
      }
      goto L_089BB1E4;
    }
L_089BB1E4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    goto L_089BB200;
L_089BB200:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[5] != ctx.gpr[4]) {
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
        goto L_089BB238;
    }
    goto L_089BB20C;
L_089BB20C:
    ctx.gpr[5] = (ctx.gpr[7] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB240;
      }
      goto L_089BB218;
    }
L_089BB218:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_089BB240;
      }
      goto L_089BB220;
    }
L_089BB220:
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089BB240;
      }
      goto L_089BB238;
    }
L_089BB238:
    if (ctx.gpr[22] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
        goto L_089BB200;
    }
    goto L_089BB240;
L_089BB240:
    if (ctx.gpr[22] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
        goto L_089BB3A4;
    }
    goto L_089BB248;
L_089BB248:
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB2E4;
      }
      goto L_089BB254;
    }
L_089BB254:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    goto L_089BB270;
L_089BB270:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] != ctx.gpr[6]) {
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
        goto L_089BB2DC;
    }
    goto L_089BB27C;
L_089BB27C:
    ctx.gpr[7] = (ctx.gpr[4] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089BB2C8;
      }
      goto L_089BB28C;
    }
L_089BB28C:
    if (ctx.gpr[17] == 0u) {
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
        goto L_089BB2CC;
    }
    goto L_089BB294;
L_089BB294:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089BB2E4;
      }
      goto L_089BB2C8;
    }
L_089BB2C8:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    goto L_089BB2CC;
L_089BB2CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089BB2E4;
      }
      goto L_089BB2DC;
    }
L_089BB2DC:
    if (ctx.gpr[22] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
        goto L_089BB270;
    }
    goto L_089BB2E4;
L_089BB2E4:
    if (ctx.gpr[22] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
        goto L_089BB3A4;
    }
    goto L_089BB2EC;
L_089BB2EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[4] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089BB320;
      }
      goto L_089BB318;
    }
L_089BB318:
    if (ctx.gpr[17] != 0u) {
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
        goto L_089BB354;
    }
    goto L_089BB320;
L_089BB320:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089BB3A0;
      }
      goto L_089BB354;
    }
L_089BB354:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_089BB3A0;
L_089BB3A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    goto L_089BB3A4;
L_089BB3A4:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089BB3F8;
      }
      goto L_089BB3B4;
    }
L_089BB3B4:
    ctx.gpr[6] = (0u | 0u);
    goto L_089BB3B8;
L_089BB3B8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089BB3B8;
      }
      goto L_089BB3F8;
    }
L_089BB3F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089BB408u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BB408u) goto L_089BB408;
    return;
L_089BB408:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[22];
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089BB438;
      }
      goto L_089BB410;
    }
L_089BB410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-14416)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(284)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089BB430u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BB430u) goto L_089BB430;
    return;
L_089BB430:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB478;
      }
      goto L_089BB438;
    }
L_089BB438:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[22];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089BB458;
      }
      goto L_089BB448;
    }
L_089BB448:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_089BB44C;
L_089BB44C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[6] != ctx.gpr[22]) {
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
        goto L_089BB44C;
    }
    goto L_089BB458;
L_089BB458:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-14416)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089BB478u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BB478u) goto L_089BB478;
    return;
L_089BB478:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_089BB1DC;
      }
      goto L_089BB480;
    }
L_089BB480:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_089BB484;
L_089BB484:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[2] = (0u | 1u);
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
L_089BB4B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[21] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    ctx.gpr[20] = (1u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1282));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089BB510u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BB510u) goto L_089BB510;
    return;
L_089BB510:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
      if (branch_taken) {
          goto L_089BB53C;
      }
      goto L_089BB520;
    }
L_089BB520:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[6] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (2227u << 16u);
      if (branch_taken) {
          goto L_089BB570;
      }
      goto L_089BB534;
    }
L_089BB534:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (2204u << 16u);
      if (branch_taken) {
          goto L_089BB5A0;
      }
      goto L_089BB53C;
    }
L_089BB53C:
    ctx.gpr[2] = (0u | 0u);
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
L_089BB570:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089BB578;
L_089BB578:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089BB578;
      }
      goto L_089BB59C;
    }
L_089BB59C:
    ctx.gpr[7] = (2204u << 16u);
    goto L_089BB5A0;
L_089BB5A0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089BB5B4u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-28184));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 326u, 0x08A9D348u>(ctx, &aot_mem) && ctx.pc == 0x089BB5B4u) goto L_089BB5B4;
    return;
L_089BB5B4:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[8] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(264)));
      if (branch_taken) {
          goto L_089BB618;
      }
      goto L_089BB5D0;
    }
L_089BB5D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[7] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089BB618;
      }
      goto L_089BB5E4;
    }
L_089BB5E4:
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_089BB5EC;
L_089BB5EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[5] == ctx.gpr[4]) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
        goto L_089BB608;
    }
    goto L_089BB5FC;
L_089BB5FC:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_089BB608;
L_089BB608:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[7] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089BB5EC;
      }
      goto L_089BB618;
    }
L_089BB618:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (257u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    jump_target = ctx.gpr[22];
    ctx.gpr[31] = (0x089BB62Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1282));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BB62Cu) goto L_089BB62C;
    return;
L_089BB62C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089BB64Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BB64Cu) goto L_089BB64C;
    return;
L_089BB64C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089BB704;
      }
      goto L_089BB67C;
    }
L_089BB67C:
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[10] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089BB704;
      }
      goto L_089BB690;
    }
L_089BB690:
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_089BB6A0;
L_089BB6A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[3] == ctx.gpr[4]) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[11]);
        goto L_089BB6E4;
    }
    goto L_089BB6B8;
L_089BB6B8:
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[10] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[11]);
    goto L_089BB6E4;
L_089BB6E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (ctx.gpr[7] | 0u);
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (ctx.gpr[10] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089BB6A0;
      }
      goto L_089BB704;
    }
L_089BB704:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (0u | 10u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[31] = (0x089BB73Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 76u, 0x089D0D08u>(ctx, &aot_mem) && ctx.pc == 0x089BB73Cu) goto L_089BB73C;
    return;
L_089BB73C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-14416)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-23940)));
      if (branch_taken) {
          goto L_089BB930;
      }
      goto L_089BB76C;
    }
L_089BB76C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    goto L_089BB774;
L_089BB774:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089BB790u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BB790u) goto L_089BB790;
    return;
L_089BB790:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089BB7F0;
      }
      goto L_089BB7A4;
    }
L_089BB7A4:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[23] + ctx.gpr[6]);
    goto L_089BB7AC;
L_089BB7AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_089BB7AC;
      }
      goto L_089BB7F0;
    }
L_089BB7F0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x089BB808u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_089B9BB8;
L_089BB808:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x089BB814u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089BB058;
L_089BB814:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-23940)));
      if (branch_taken) {
          goto L_089BB904;
      }
      goto L_089BB820;
    }
L_089BB820:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089BB838u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BB838u) goto L_089BB838;
    return;
L_089BB838:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_089BB894;
      }
      goto L_089BB868;
    }
L_089BB868:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089BB868;
      }
      goto L_089BB894;
    }
L_089BB894:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-23940)));
      if (branch_taken) {
          goto L_089BB820;
      }
      goto L_089BB8B4;
    }
L_089BB8B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
        goto L_089BB908;
    }
    goto L_089BB8C0;
L_089BB8C0:
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089BB8D8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BB8D8u) goto L_089BB8D8;
    return;
L_089BB8D8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-14416)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089BB8F8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BB8F8u) goto L_089BB8F8;
    return;
L_089BB8F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-23940)));
      if (branch_taken) {
          goto L_089BB8C0;
      }
      goto L_089BB904;
    }
L_089BB904:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    goto L_089BB908;
L_089BB908:
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089BB910u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BB910u) goto L_089BB910;
    return;
L_089BB910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-23940)));
      if (branch_taken) {
          goto L_089BB774;
      }
      goto L_089BB930;
    }
L_089BB930:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-14416)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089BB940u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 91u, 0x089D0DFCu>(ctx, &aot_mem) && ctx.pc == 0x089BB940u) goto L_089BB940;
    return;
L_089BB940:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-14416)));
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_089BB990;
      }
      goto L_089BB964;
    }
L_089BB964:
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    goto L_089BB968;
L_089BB968:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[5] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089BB968;
      }
      goto L_089BB990;
    }
L_089BB990:
    ctx.gpr[31] = (0x089BB998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 481u, 0x089B6D3Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB998u) goto L_089BB998;
    return;
L_089BB998:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-14416)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-14416)));
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[17] = (ctx.gpr[23] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[6]);
    ctx.gpr[18] = (ctx.gpr[4] << 2u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[17] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_089BBA68;
      }
      goto L_089BB9FC;
    }
L_089BB9FC:
    ctx.gpr[16] = (ctx.gpr[22] | 0u);
    goto L_089BBA00;
L_089BBA00:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089BBA34u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089BBA34u) goto L_089BBA34;
    return;
L_089BBA34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089BBA54u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BBA54u) goto L_089BBA54;
    return;
L_089BBA54:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089BBA00;
      }
      goto L_089BBA68;
    }
L_089BBA68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089BBA78u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BBA78u) goto L_089BBA78;
    return;
L_089BBA78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089BBA88u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BBA88u) goto L_089BBA88;
    return;
L_089BBA88:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089BBA98u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BBA98u) goto L_089BBA98;
    return;
L_089BBA98:
    ctx.gpr[2] = (ctx.gpr[23] | 0u);
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
L_089BBACC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[20]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[20] = (1u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1282));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
      if (branch_taken) {
          goto L_089BBB68;
      }
      goto L_089BBB28;
    }
L_089BBB28:
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_089BBB2C;
L_089BBB2C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (0u | 0u);
    goto L_089BBB34;
L_089BBB34:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[17] < ctx.gpr[7] ? 1u : 0u);
    if (ctx.gpr[10] != 0u) {
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
        goto L_089BBB44;
    }
    goto L_089BBB44;
L_089BBB44:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[9] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089BBB34;
      }
      goto L_089BBB54;
    }
L_089BBB54:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089BBB2C;
      }
      goto L_089BBB68;
    }
L_089BBB68:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089BBB80u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BBB80u) goto L_089BBB80;
    return;
L_089BBB80:
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
      if (branch_taken) {
          goto L_089BBBB8;
      }
      goto L_089BBB94;
    }
L_089BBB94:
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    goto L_089BBB9C;
L_089BBB9C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.gpr[7] = (ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089BBB9C;
      }
      goto L_089BBBB8;
    }
L_089BBBB8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
    ctx.gpr[6] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089BBBD8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BBBD8u) goto L_089BBBD8;
    return;
L_089BBBD8:
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[5] = (3u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(44));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089BBC0Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1282));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BBC0Cu) goto L_089BBC0C;
    return;
L_089BBC0C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[17] << 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[21] = (ctx.gpr[6] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(44));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[21] = (ctx.gpr[20] + ctx.gpr[21]);
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
      if (branch_taken) {
          goto L_089BBE94;
      }
      goto L_089BBC80;
    }
L_089BBC80:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(4));
    ctx.gpr[23] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    goto L_089BBCA4;
L_089BBCA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    goto L_089BBD24;
L_089BBD24:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[20] + ctx.gpr[6]);
    ctx.gpr[19] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
        goto L_089BBD68;
    }
    goto L_089BBD5C;
L_089BBD5C:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    goto L_089BBD68;
L_089BBD68:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089BBDCC;
      }
      goto L_089BBD8C;
    }
L_089BBD8C:
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[30]);
    goto L_089BBD90;
L_089BBD90:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(26)));
    if (ctx.gpr[19] != ctx.gpr[4]) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089BBDC4;
    }
    goto L_089BBDA0;
L_089BBDA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089BBDC4;
    }
    goto L_089BBDAC;
L_089BBDAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x089BBDB8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_089B8864;
L_089BBDB8:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_089BBDCC;
      }
      goto L_089BBDC0;
    }
L_089BBDC0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089BBDC4;
L_089BBDC4:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[18];
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[30]);
      if (branch_taken) {
          goto L_089BBD90;
      }
      goto L_089BBDCC;
    }
L_089BBDCC:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[18];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089BBDE0;
      }
      goto L_089BBDD4;
    }
L_089BBDD4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
      if (branch_taken) {
          goto L_089BBE4C;
      }
      goto L_089BBDE0;
    }
L_089BBDE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(ctx.gpr[19]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    goto L_089BBE4C;
L_089BBE4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[19] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089BBD24;
      }
      goto L_089BBE6C;
    }
L_089BBE6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(52));
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089BBCA4;
      }
      goto L_089BBE94;
    }
L_089BBE94:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089BBEA8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BBEA8u) goto L_089BBEA8;
    return;
L_089BBEA8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089BBEB8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BBEB8u) goto L_089BBEB8;
    return;
L_089BBEB8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BBEEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[23] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    goto L_089BBF34;
L_089BBF34:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    goto L_089BBF38;
L_089BBF38:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[18];
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 1u, 0x089BC000u>(ctx, &aot_mem); return;
      }
      goto L_089BBF40;
    }
L_089BBF40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 1u, 0x089BC000u>(ctx, &aot_mem); return;
      }
      goto L_089BBF50;
    }
L_089BBF50:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[21]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(46));
    ctx.gpr[31] = (0x089BBF80u);
    ctx.gpr[10] = (ctx.gpr[20] | 0u);
    goto L_089B8A34;
L_089BBF80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(46)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089BBFC0;
      }
      goto L_089BBFA4;
    }
L_089BBFA4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BBFB8u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    goto L_089B8778;
L_089BBFB8:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
        goto L_089BBFF4;
    }
    goto L_089BBFC0;
L_089BBFC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[23] != 0u) {
    ctx.gpr[23] = (ctx.gpr[23] ^ 3u);
        goto L_089BBFD4;
    }
    goto L_089BBFD4;
L_089BBFD4:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 1u, 0x089BC000u>(ctx, &aot_mem); return;
      }
      goto L_089BBFDC;
    }
L_089BBFDC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(-2)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[21]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 1u, 0x089BC000u>(ctx, &aot_mem); return;
      }
      goto L_089BBFF4;
    }
L_089BBFF4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[18];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_089BBF50;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 1u, 0x089BC000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0109(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0109_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_109(Runtime &runtime) {
    runtime.register_generated_unit(109u, 0x089B8000u, 16384u, &recomp_unit_0109, &recomp_unit_0109_entry);
    runtime.register_function(0x089B8004u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B800Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8018u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8024u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8028u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8034u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B803Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8058u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B805Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8064u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8070u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B807Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8088u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B809Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B80A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B80C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B80CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B80D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B80D8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B80E8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B80F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8104u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8130u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8138u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B814Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B815Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B816Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8174u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B81A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B81B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B81BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B81D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B81DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B81E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8200u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8208u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8220u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8224u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8234u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8258u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8290u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8298u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B82B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B82BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B82C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B82CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B82D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B82E0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B830Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8320u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B834Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B839Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B83A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B83B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B83C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B83D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B83D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B83DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B83ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B83F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8400u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8410u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B841Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8458u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8484u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B84A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B84A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B84B0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B84BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B84C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B84E0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B84ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B84F4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B84FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8504u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8510u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B851Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8520u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B853Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8584u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8588u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B859Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B85A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B85B0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B85B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B85D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B85E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B85F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B85F4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8640u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8648u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B865Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8664u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8688u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B86A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B86B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B86D8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B86E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B86ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B86F4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8704u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8708u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8714u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8720u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8728u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8734u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8738u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8748u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B874Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8754u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8778u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8794u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8798u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B87A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B87B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B87B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B87D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B87E0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B87ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8814u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8818u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8824u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B882Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8834u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B883Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8844u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8848u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B884Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B885Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8864u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8878u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B887Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B888Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8894u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B88A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B88A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B88B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B88B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B88C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B88CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B88E0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B88E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B88F4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B88FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8908u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B890Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8914u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B891Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8928u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B892Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8930u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B893Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8944u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8954u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8960u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B896Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8978u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8984u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B898Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8994u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B89A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B89ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B89B0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B89BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B89C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B89CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B89DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B89E8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B89F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B89F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8A04u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8A10u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8A14u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8A20u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8A24u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8A2Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8A34u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8A7Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8A8Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8AB4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8AC4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8AD8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8AE0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8AF4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8AFCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8B0Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8B14u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8B28u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8B2Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8C50u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8C64u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9058u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B906Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9070u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9080u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B908Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9098u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B90A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B90A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B90B0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B90BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B90F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9100u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B910Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9114u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9120u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9128u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9140u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B914Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9154u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9168u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9170u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B918Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9194u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B91A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B91B0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B91B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B91D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B91E8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9204u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9220u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9228u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9230u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B923Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B925Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9264u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B926Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9270u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9274u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B927Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9280u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9288u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9294u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B92B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B92BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B92C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B92C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B92CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B92D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B92DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B92E8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B92F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9308u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9320u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9338u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B934Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9370u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B93D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B93D8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B93F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9404u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9410u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B942Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9438u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9444u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9454u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9460u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B946Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9484u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9494u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9498u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B94B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B94DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B94FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B951Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B959Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B95ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B95B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B95C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B95D8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9608u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9614u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B961Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9638u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9658u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9660u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9668u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9670u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9678u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9680u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9684u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9688u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B969Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B96A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B96B0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B96B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B96BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B96C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B96D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B96D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B96DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B96F4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9714u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B971Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9724u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B972Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9734u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B973Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9740u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9764u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B977Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B978Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9794u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B97DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B97ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B97F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9800u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B980Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9814u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B981Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9828u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9830u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9838u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9844u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B984Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9854u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9860u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9864u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B986Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9880u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9890u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9898u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B98A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B98ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B98B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B98B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B98BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B98DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B98F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9910u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9930u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9948u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9950u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9960u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B996Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9970u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9978u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9984u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9988u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B998Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9994u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9998u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B99A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B99A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B99B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B99C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B99C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B99D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B99DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B99E0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B99E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B99ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B99F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B99F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A04u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A0Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A14u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A1Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A24u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A2Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A34u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A3Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A40u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A48u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A50u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A60u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A6Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A70u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A78u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A84u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A88u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A8Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A94u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A98u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9AA0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9AA8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9AB8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9AC4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9AC8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9AD0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9ADCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9AE0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9AE4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9AECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9AF0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9AF8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B00u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B18u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B58u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B70u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B7Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B84u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9BB8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9C30u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9C44u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9C4Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9C74u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9C80u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9CA0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9CCCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9CF8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9D18u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9D3Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9D50u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9D54u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9D70u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9D78u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9DACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9DDCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9E3Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9E48u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9E54u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9E58u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9E64u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9E68u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9E7Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9E88u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9E8Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9E94u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9EA0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9EA4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9EA8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9EB4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9EC8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9ED4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9ED8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9EE0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9EECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9EF0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9EF4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F00u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F08u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F18u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F24u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F28u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F30u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F3Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F40u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F44u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F50u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F58u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F64u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F68u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F70u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F7Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F80u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F84u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F90u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F98u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9FA8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9FB4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9FB8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9FC0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9FCCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9FD0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9FD4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9FE0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9FE8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9FF4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9FF8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA000u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA00Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA010u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA014u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA020u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA028u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA030u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA03Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA040u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA048u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA054u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA058u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA060u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA06Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA070u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA078u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA084u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA088u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA08Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA09Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA0A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA0B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA0B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA0C0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA0CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA0D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA0D8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA0E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA0E8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA0F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA0FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA100u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA104u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA114u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA11Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA120u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA128u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA134u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA138u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA140u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA14Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA150u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA158u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA164u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA168u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA170u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA17Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA180u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA184u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA194u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA198u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA1E0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA1ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA1F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA20Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA210u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA22Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA234u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA278u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA284u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA28Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA2D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA314u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA350u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA358u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA360u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA374u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA37Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA384u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA38Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA3A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA3ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA3B0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA40Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA42Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA448u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA450u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA45Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA460u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA468u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA474u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA478u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA47Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA484u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA48Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA498u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA49Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA4A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA4B0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA4B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA4B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA4BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA4C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA504u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA514u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA540u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA550u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA558u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA560u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA58Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA5D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA5F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA638u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA64Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA658u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA664u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA66Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA674u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA6A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA6D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA6ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA6F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA6F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA70Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA730u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA740u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA760u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA774u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA7A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA824u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA834u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA838u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA860u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA86Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA88Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA8B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA8E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA904u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA92Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA93Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA944u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA94Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA980u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA9B0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA08u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA14u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA2Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA3Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA40u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA44u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA6Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA78u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA7Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA84u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA90u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA94u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA98u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAAA0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAAACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAAB0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAACCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAAD0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAAD8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAAE0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAAF0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAAFCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAB04u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAB0Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAB1Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAB24u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BABB0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BABC8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BABECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BABF8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC08u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC14u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC18u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC34u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC54u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC5Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC68u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC74u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC7Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC84u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC90u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC94u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAD2Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAD44u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAD58u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAD64u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAD68u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAD70u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAD7Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAD80u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAD84u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAD8Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BADD0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BADE4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAE14u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAE4Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAE94u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAEB8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAF00u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAF14u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAF20u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAF4Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAF80u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAF98u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAF9Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAFA4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAFBCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAFE0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAFF0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB010u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB024u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB058u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB08Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB0B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB0D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB0D8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB104u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB108u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB120u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB124u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB134u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB150u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB154u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB194u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB1A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB1CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB1D8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB1DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB1E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB200u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB20Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB218u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB220u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB238u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB240u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB248u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB254u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB270u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB27Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB28Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB294u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB2C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB2CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB2DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB2E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB2ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB318u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB320u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB354u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB3A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB3A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB3B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB3B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB3F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB408u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB410u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB430u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB438u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB448u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB44Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB458u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB478u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB480u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB484u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB4B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB510u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB520u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB534u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB53Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB570u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB578u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB59Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB5A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB5B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB5D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB5E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB5ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB5FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB608u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB618u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB62Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB64Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB67Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB690u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB6A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB6B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB6E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB704u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB73Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB76Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB774u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB790u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB7A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB7ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB7F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB808u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB814u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB820u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB838u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB868u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB894u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB8B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB8C0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB8D8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB8F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB904u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB908u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB910u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB930u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB940u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB964u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB968u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB990u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB998u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB9FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA00u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA34u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA54u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA68u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA78u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA88u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA98u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBACCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBB28u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBB2Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBB34u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBB44u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBB54u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBB68u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBB80u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBB94u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBB9Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBBB8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBBD8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBC0Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBC80u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBCA4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBD24u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBD5Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBD68u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBD8Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBD90u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBDA0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBDACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBDB8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBDC0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBDC4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBDCCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBDD4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBDE0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBE4Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBE6Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBE94u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBEA8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBEB8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBEECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBF34u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBF38u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBF40u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBF50u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBF80u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBFA4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBFB8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBFC0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBFD4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBFDCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBFF4u, &recomp_unit_0109, "recomp_unit_0109");
}
} // namespace psprecomp

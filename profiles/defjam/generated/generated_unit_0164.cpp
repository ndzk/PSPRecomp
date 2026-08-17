#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0164[3841] = {
    1, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 7, 0, 8, 0, 0,
    9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 0,
    0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0,
    16, 0, 0, 0, 0, 0, 17, 0, 18, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 22, 0, 0, 23, 0, 0, 0, 0, 24, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 27, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 39, 0,
    0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 43, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    49, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0,
    54, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0,
    62, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68,
    0, 69, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 74, 0, 0, 0, 75, 76, 0, 77, 0, 78, 0, 79,
    0, 0, 0, 80, 0, 81, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 87, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 90, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 93, 94, 0, 95, 0, 0,
    0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0,
    0, 105, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0,
    0, 109, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 0, 0,
    0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0,
    121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 127, 0, 128, 0,
    0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 132, 0, 133, 0, 0, 134, 0, 0, 0, 135, 0,
    0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0,
    0, 147, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 152, 0, 0, 153, 0, 0, 154, 0, 0, 0, 155, 0, 0,
    156, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 163,
    0, 0, 0, 0, 164, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 169, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0,
    0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 181, 0, 0, 0, 182, 0, 0, 183, 0, 184, 0, 0, 185, 0, 0,
    0, 0, 186, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 200,
    0, 0, 0, 0, 201, 0, 0, 202, 0, 203, 0, 204, 0, 0, 205, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 209, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 210, 211, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0,
    0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 219, 220, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0,
    223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 0, 226, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 230,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 232, 0, 233, 0, 234, 0, 0, 235, 0, 0, 0, 236, 0, 237, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 242, 243, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0,
    0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 249, 250, 0, 0, 0, 0, 251, 0, 0, 252, 0, 0, 0, 253, 254, 0, 255, 0, 256,
    0, 0, 0, 257, 0, 258, 0, 0, 259, 0, 260, 261, 0, 0, 262, 0, 263, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0,
    0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 268, 0, 269, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 273, 0,
    274, 0, 275, 0, 276, 0, 277, 0, 278, 0, 279, 0, 280, 0, 0, 281, 0, 282, 0, 283, 0, 284, 0, 285, 0, 286, 0, 0, 0, 0, 0, 287,
    0, 288, 0, 0, 289, 0, 0, 0, 290, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 294, 0, 0, 295, 0, 296, 0, 0, 0,
    0, 0, 297, 0, 298, 0, 299, 0, 300, 0, 301, 0, 302, 0, 303, 0, 304, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 307, 0,
    0, 308, 0, 309, 0, 310, 0, 311, 0, 312, 0, 313, 0, 314, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0,
    0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 321, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 325, 0, 0, 326, 0, 0, 0, 0, 0,
    0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 330, 0, 331, 0, 0, 332, 0,
    0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0,
    337, 338, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 344, 345, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0,
    0, 348, 0, 349, 350, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 353, 354, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 358, 0, 359, 0, 0, 0, 360, 0, 361, 362, 0, 0, 0, 363,
    0, 0, 364, 0, 0, 0, 365, 0, 366, 0, 0, 367, 0, 0, 368, 0, 369, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 372, 0, 0, 373, 0,
    0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 378, 0, 379, 0,
    0, 0, 380, 0, 381, 382, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 386, 0, 0, 387, 0, 0, 388, 0, 389, 0, 0, 0, 0,
    390, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 393, 0, 0, 0, 394, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0,
    0, 397, 0, 0, 0, 398, 0, 0, 399, 0, 0, 400, 0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 406, 0, 407, 0, 0, 408, 0, 409, 0, 0, 0, 0, 0, 0, 410, 0,
    411, 0, 0, 0, 0, 412, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 415, 0, 416, 0, 417, 0, 418, 0,
    419, 420, 421, 0, 422, 0, 423, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 426, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 429, 0, 0, 430, 0, 431,
    0, 0, 432, 0, 433, 0, 0, 0, 0, 0, 0, 434, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 437, 0, 0, 0, 0,
    438, 0, 439, 0, 0, 440, 0, 441, 0, 442, 0, 443, 0, 444, 0, 445, 446, 447, 0, 448, 0, 449, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 451, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 455,
    0, 456, 0, 457, 0, 458, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461,
    0, 462, 0, 463, 0, 464, 0, 465, 0, 466, 467, 468, 0, 469, 0, 470, 0, 0, 471, 0, 472, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0,
    0, 474, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 476, 0, 477, 0, 478, 0, 479, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0,
    481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 483, 0, 484, 0, 485, 0, 486, 0, 487, 488, 489, 0, 490, 0, 491, 0, 0,
    492, 0, 493, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 497, 0, 498,
    0, 499, 0, 500, 0, 501, 0, 0, 0, 0, 502, 0, 0, 0, 503, 0, 504, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 506, 0, 507, 0, 508, 0, 509, 0, 510, 0, 511, 512, 513, 0, 514, 0, 515, 0, 0, 516, 0, 517, 0, 0, 0, 0, 0, 0,
    518, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 521, 0, 522,
    0, 523, 0, 524, 0, 525, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 529, 0, 0, 530,
    0, 0, 0, 0, 0, 531, 0, 532, 0, 533, 0, 534, 535, 536, 0, 537, 0, 538, 0, 0, 539, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 541, 0, 0, 0, 542, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0,
    546, 0, 0, 0, 0, 0, 547, 0, 548, 0, 549, 0, 550, 551, 552, 0, 553, 0, 554, 0, 0, 555, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 557, 0, 558, 0, 559, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 562, 0, 0, 0, 0, 563, 0, 0,
    0, 0, 0, 564, 0, 0, 0, 565, 0, 566, 0, 567, 0, 568, 0, 569, 0, 570, 0, 571, 0, 572, 573, 574, 0, 575, 0, 576, 0, 0, 577, 0,
    578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 580, 0, 581, 0, 582, 0, 583, 0, 584, 0, 585, 0, 586, 0, 0, 0,
    0, 0, 587, 0, 0, 0, 588, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0, 591, 0, 0, 592, 0, 593, 0,
    594, 0, 595, 0, 596, 0, 597, 0, 598, 0, 599, 600, 601, 0, 602, 0, 603, 0, 0, 604, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 608, 0, 609, 0, 0, 0, 0, 0, 0, 610, 0, 611, 0, 0,
    0, 0, 612, 0, 0, 0, 0, 0, 613, 0, 614, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 616, 0, 617, 0, 0, 0, 0, 618, 0, 0,
    0, 0, 0, 619, 0, 620, 0, 0, 621, 0, 622, 0, 623, 0, 624, 0, 625, 0, 626, 0, 627, 0, 628, 629, 630, 0, 631, 0, 632, 0, 0, 633,
    0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 636, 0, 637, 0, 638, 0, 639, 0, 640, 0, 0, 0, 0,
    0, 0, 641, 0, 0, 0, 642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 644, 0, 645, 0, 646, 0, 647, 0, 648, 649, 650, 0, 651,
    0, 652, 0, 0, 653, 0, 654, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 658, 0, 659, 0, 660, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 662,
    0, 0, 0, 0, 0, 0, 0, 0, 663, 0, 0, 664, 0, 0, 0, 665, 0, 666, 0, 0, 667, 0, 668, 0, 669, 0, 670, 0, 671, 0, 672, 673,
    674, 0, 675, 0, 676, 0, 0, 677, 0, 678, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 680, 0, 681, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 683, 0, 0, 0, 0, 0, 684, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 687, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 690, 0, 691, 0, 0, 0, 0, 692, 0, 0, 693,
    0, 0, 0, 694, 0, 0, 0, 0, 695, 0, 696, 0, 0, 0, 0, 0, 0, 0, 0, 697, 0, 0, 0, 0, 698, 0, 0, 0, 0, 0, 0, 0,
    699, 0, 700, 0, 0, 0, 0, 0, 0, 701, 0, 0, 0, 0, 702, 703, 0, 0, 0, 0, 0, 704, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0,
    0, 706, 0, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 708, 0, 0, 0, 0, 0, 0, 709, 0, 0, 0, 710, 0, 0, 0, 0, 0, 0, 711, 0, 712, 0, 0, 713, 0, 0, 0, 714, 0,
    0, 0, 0, 715, 0, 0, 0, 716, 0, 717, 0, 718, 719, 0, 720, 0, 721, 0, 0, 0, 722, 0, 723, 0, 0, 724, 0, 0, 0, 0, 0, 0,
    725, 0, 0, 0, 0, 0, 726, 0, 727, 0, 0, 0, 728, 0, 729, 0, 0, 0, 730, 0, 731, 0, 732, 0, 0, 733, 0, 734, 0, 735, 0, 0,
    0, 0, 0, 0, 736, 0, 737, 0, 738, 0, 0, 0, 0, 0, 0, 739, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 741, 0, 742, 0,
    743, 0, 744, 0, 0, 0, 0, 0, 0, 745, 0, 746, 0, 747, 0, 0, 0, 0, 0, 0, 748, 0, 0, 0, 0, 0, 749, 0, 0, 0, 0, 0,
    0, 750, 0, 751, 0, 752, 0, 0, 0, 753, 0, 754, 0, 0, 0, 755, 0, 0, 0, 756, 0, 0, 757, 0, 758, 0, 759, 0, 0, 760, 0, 0,
    0, 0, 761, 0, 0, 762, 0, 0, 763, 0, 764, 0, 765, 0, 766, 0, 767, 768, 0, 0, 0, 0, 769, 0, 0, 0, 0, 0, 770, 0, 0, 0,
    771, 0, 772, 0, 773, 0, 0, 0, 0, 0, 774, 0, 0, 0, 0, 0, 775, 0, 0, 0, 776, 0, 0, 0, 777, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 778, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 779, 0, 0, 0,
    780, 0, 0, 0, 0, 0, 0, 781, 0, 782, 0, 783, 0, 0, 0, 0, 784, 0, 0, 0, 0, 785, 0, 0, 786, 0, 787, 0, 788, 0, 789, 790,
    0, 0, 791, 0, 792, 793, 0, 0, 0, 0, 0, 0, 0, 0, 794, 0, 795, 0, 0, 796, 0, 0, 797, 0, 798, 799, 0, 800, 0, 0, 801, 0,
    802, 803, 804, 805, 0, 806, 0, 807, 0, 0, 808, 0, 0, 809, 0, 810, 811, 0, 812, 0, 0, 813, 0, 814, 815, 816, 817, 0, 818, 0, 0, 0,
    0, 819, 0, 0, 0, 0, 820, 0, 0, 0, 0, 0, 821, 0, 0, 822, 0, 823, 0, 0, 0, 0, 0, 0, 0, 824, 0, 0, 0, 825, 0, 0,
    0, 0, 0, 0, 0, 0, 826, 0, 0, 0, 0, 0, 827, 0, 0, 828, 0, 0, 0, 829, 0, 830, 0, 0, 0, 0, 0, 0, 0, 0, 831, 0,
    832, 0, 0, 0, 0, 0, 0, 0, 833, 0, 0, 0, 0, 0, 0, 0, 0, 0, 834, 0, 0, 835, 0, 0, 836, 0, 837, 0, 0, 838, 0, 839,
    0, 840, 0, 841, 0, 0, 0, 0, 0, 0, 0, 0, 0, 842, 843, 0, 0, 0, 0, 0, 844, 845, 0, 846, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 847, 0, 0, 0, 848, 0, 0, 0, 0, 0, 0, 0, 849, 0, 850, 0, 0, 0, 0, 0, 851, 0, 0, 852, 0, 0, 0, 853, 0,
    0, 854, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 855, 0, 856, 0, 857, 0, 858, 0, 0, 0, 0, 0, 0, 0, 0,
    859, 0, 860, 0, 0, 861, 0, 862, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 863, 0, 0, 864, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    865,
};
void recomp_unit_0164_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A942ECu;
        entry_id = (entry_delta < 15364u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0164[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A942EC;
    case 2u: goto L_08A942F8;
    case 3u: goto L_08A9430C;
    case 4u: goto L_08A94318;
    case 5u: goto L_08A94340;
    case 6u: goto L_08A9434C;
    case 7u: goto L_08A94358;
    case 8u: goto L_08A94360;
    case 9u: goto L_08A9436C;
    case 10u: goto L_08A94384;
    case 11u: goto L_08A943BC;
    case 12u: goto L_08A943D8;
    case 13u: goto L_08A943E0;
    case 14u: goto L_08A943FC;
    case 15u: goto L_08A94460;
    case 16u: goto L_08A9446C;
    case 17u: goto L_08A94484;
    case 18u: goto L_08A9448C;
    case 19u: goto L_08A94490;
    case 20u: goto L_08A94498;
    case 21u: goto L_08A944C8;
    case 22u: goto L_08A944F0;
    case 23u: goto L_08A944FC;
    case 24u: goto L_08A94510;
    case 25u: goto L_08A94518;
    case 26u: goto L_08A94524;
    case 27u: goto L_08A9453C;
    case 28u: goto L_08A94540;
    case 29u: goto L_08A94550;
    case 30u: goto L_08A94584;
    case 31u: goto L_08A945A0;
    case 32u: goto L_08A945B4;
    case 33u: goto L_08A945E4;
    case 34u: goto L_08A94680;
    case 35u: goto L_08A94698;
    case 36u: goto L_08A946B4;
    case 37u: goto L_08A946C8;
    case 38u: goto L_08A946E0;
    case 39u: goto L_08A946E4;
    case 40u: goto L_08A946F4;
    case 41u: goto L_08A94700;
    case 42u: goto L_08A94718;
    case 43u: goto L_08A94720;
    case 44u: goto L_08A94728;
    case 45u: goto L_08A94730;
    case 46u: goto L_08A9474C;
    case 47u: goto L_08A94774;
    case 48u: goto L_08A947A0;
    case 49u: goto L_08A947EC;
    case 50u: goto L_08A94804;
    case 51u: goto L_08A9480C;
    case 52u: goto L_08A94840;
    case 53u: goto L_08A94854;
    case 54u: goto L_08A9486C;
    case 55u: goto L_08A94870;
    case 56u: goto L_08A94880;
    case 57u: goto L_08A948A4;
    case 58u: goto L_08A948B0;
    case 59u: goto L_08A948BC;
    case 60u: goto L_08A948D4;
    case 61u: goto L_08A948E0;
    case 62u: goto L_08A948EC;
    case 63u: goto L_08A948F4;
    case 64u: goto L_08A94908;
    case 65u: goto L_08A9493C;
    case 66u: goto L_08A9496C;
    case 67u: goto L_08A949E0;
    case 68u: goto L_08A949E8;
    case 69u: goto L_08A949F0;
    case 70u: goto L_08A94A00;
    case 71u: goto L_08A94A0C;
    case 72u: goto L_08A94A24;
    case 73u: goto L_08A94A34;
    case 74u: goto L_08A94A3C;
    case 75u: goto L_08A94A4C;
    case 76u: goto L_08A94A50;
    case 77u: goto L_08A94A58;
    case 78u: goto L_08A94A60;
    case 79u: goto L_08A94A68;
    case 80u: goto L_08A94A78;
    case 81u: goto L_08A94A80;
    case 82u: goto L_08A94A8C;
    case 83u: goto L_08A94A98;
    case 84u: goto L_08A94AB0;
    case 85u: goto L_08A94AC4;
    case 86u: goto L_08A94AD4;
    case 87u: goto L_08A94AE4;
    case 88u: goto L_08A94B18;
    case 89u: goto L_08A94B20;
    case 90u: goto L_08A94B28;
    case 91u: goto L_08A94B38;
    case 92u: goto L_08A94B44;
    case 93u: goto L_08A94B54;
    case 94u: goto L_08A94B58;
    case 95u: goto L_08A94B60;
    case 96u: goto L_08A94B74;
    case 97u: goto L_08A94B80;
    case 98u: goto L_08A94B9C;
    case 99u: goto L_08A94BD0;
    case 100u: goto L_08A94BFC;
    case 101u: goto L_08A94C0C;
    case 102u: goto L_08A94C38;
    case 103u: goto L_08A94C48;
    case 104u: goto L_08A94C58;
    case 105u: goto L_08A94C70;
    case 106u: goto L_08A94C78;
    case 107u: goto L_08A94C8C;
    case 108u: goto L_08A94CE0;
    case 109u: goto L_08A94CF0;
    case 110u: goto L_08A94CFC;
    case 111u: goto L_08A94D04;
    case 112u: goto L_08A94D28;
    case 113u: goto L_08A94D30;
    case 114u: goto L_08A94D54;
    case 115u: goto L_08A94D5C;
    case 116u: goto L_08A94D80;
    case 117u: goto L_08A94DA4;
    case 118u: goto L_08A94DAC;
    case 119u: goto L_08A94DD0;
    case 120u: goto L_08A94DE0;
    case 121u: goto L_08A94DEC;
    case 122u: goto L_08A94E0C;
    case 123u: goto L_08A94E1C;
    case 124u: goto L_08A94E2C;
    case 125u: goto L_08A94E40;
    case 126u: goto L_08A94E48;
    case 127u: goto L_08A94E5C;
    case 128u: goto L_08A94E64;
    case 129u: goto L_08A94E74;
    case 130u: goto L_08A94EA4;
    case 131u: goto L_08A94EAC;
    case 132u: goto L_08A94EC0;
    case 133u: goto L_08A94EC8;
    case 134u: goto L_08A94ED4;
    case 135u: goto L_08A94EE4;
    case 136u: goto L_08A94EF4;
    case 137u: goto L_08A94F04;
    case 138u: goto L_08A94F1C;
    case 139u: goto L_08A94F2C;
    case 140u: goto L_08A94F44;
    case 141u: goto L_08A94F58;
    case 142u: goto L_08A94F94;
    case 143u: goto L_08A94FAC;
    case 144u: goto L_08A94FB4;
    case 145u: goto L_08A94FC8;
    case 146u: goto L_08A94FD8;
    case 147u: goto L_08A94FF0;
    case 148u: goto L_08A95000;
    case 149u: goto L_08A9500C;
    case 150u: goto L_08A9501C;
    case 151u: goto L_08A95028;
    case 152u: goto L_08A95038;
    case 153u: goto L_08A95044;
    case 154u: goto L_08A95050;
    case 155u: goto L_08A95060;
    case 156u: goto L_08A9506C;
    case 157u: goto L_08A95080;
    case 158u: goto L_08A9508C;
    case 159u: goto L_08A950A4;
    case 160u: goto L_08A950AC;
    case 161u: goto L_08A950D8;
    case 162u: goto L_08A950E0;
    case 163u: goto L_08A950E8;
    case 164u: goto L_08A950FC;
    case 165u: goto L_08A95108;
    case 166u: goto L_08A95110;
    case 167u: goto L_08A95148;
    case 168u: goto L_08A95150;
    case 169u: goto L_08A9517C;
    case 170u: goto L_08A95184;
    case 171u: goto L_08A9518C;
    case 172u: goto L_08A951B4;
    case 173u: goto L_08A951C0;
    case 174u: goto L_08A951E0;
    case 175u: goto L_08A951F4;
    case 176u: goto L_08A95218;
    case 177u: goto L_08A9522C;
    case 178u: goto L_08A95238;
    case 179u: goto L_08A952A0;
    case 180u: goto L_08A952A8;
    case 181u: goto L_08A952B0;
    case 182u: goto L_08A952C0;
    case 183u: goto L_08A952CC;
    case 184u: goto L_08A952D4;
    case 185u: goto L_08A952E0;
    case 186u: goto L_08A952F4;
    case 187u: goto L_08A95304;
    case 188u: goto L_08A9530C;
    case 189u: goto L_08A9532C;
    case 190u: goto L_08A9533C;
    case 191u: goto L_08A95344;
    case 192u: goto L_08A95378;
    case 193u: goto L_08A95384;
    case 194u: goto L_08A953C4;
    case 195u: goto L_08A9541C;
    case 196u: goto L_08A95428;
    case 197u: goto L_08A9542C;
    case 198u: goto L_08A95448;
    case 199u: goto L_08A95458;
    case 200u: goto L_08A95468;
    case 201u: goto L_08A9547C;
    case 202u: goto L_08A95488;
    case 203u: goto L_08A95490;
    case 204u: goto L_08A95498;
    case 205u: goto L_08A954A4;
    case 206u: goto L_08A954A8;
    case 207u: goto L_08A954C4;
    case 208u: goto L_08A954D8;
    case 209u: goto L_08A954DC;
    case 210u: goto L_08A95504;
    case 211u: goto L_08A95508;
    case 212u: goto L_08A95518;
    case 213u: goto L_08A95524;
    case 214u: goto L_08A95564;
    case 215u: goto L_08A95570;
    case 216u: goto L_08A9558C;
    case 217u: goto L_08A95598;
    case 218u: goto L_08A955B4;
    case 219u: goto L_08A955BC;
    case 220u: goto L_08A955C0;
    case 221u: goto L_08A955D4;
    case 222u: goto L_08A955E4;
    case 223u: goto L_08A955EC;
    case 224u: goto L_08A95614;
    case 225u: goto L_08A9561C;
    case 226u: goto L_08A95628;
    case 227u: goto L_08A95630;
    case 228u: goto L_08A95658;
    case 229u: goto L_08A95660;
    case 230u: goto L_08A95668;
    case 231u: goto L_08A956AC;
    case 232u: goto L_08A956B0;
    case 233u: goto L_08A956B8;
    case 234u: goto L_08A956C0;
    case 235u: goto L_08A956CC;
    case 236u: goto L_08A956DC;
    case 237u: goto L_08A956E4;
    case 238u: goto L_08A95718;
    case 239u: goto L_08A9572C;
    case 240u: goto L_08A9579C;
    case 241u: goto L_08A957AC;
    case 242u: goto L_08A957B8;
    case 243u: goto L_08A957BC;
    case 244u: goto L_08A957D0;
    case 245u: goto L_08A957DC;
    case 246u: goto L_08A957F0;
    case 247u: goto L_08A957FC;
    case 248u: goto L_08A95818;
    case 249u: goto L_08A95820;
    case 250u: goto L_08A95824;
    case 251u: goto L_08A95838;
    case 252u: goto L_08A95844;
    case 253u: goto L_08A95854;
    case 254u: goto L_08A95858;
    case 255u: goto L_08A95860;
    case 256u: goto L_08A95868;
    case 257u: goto L_08A95878;
    case 258u: goto L_08A95880;
    case 259u: goto L_08A9588C;
    case 260u: goto L_08A95894;
    case 261u: goto L_08A95898;
    case 262u: goto L_08A958A4;
    case 263u: goto L_08A958AC;
    case 264u: goto L_08A958B0;
    case 265u: goto L_08A958E4;
    case 266u: goto L_08A95908;
    case 267u: goto L_08A9591C;
    case 268u: goto L_08A95928;
    case 269u: goto L_08A95930;
    case 270u: goto L_08A95938;
    case 271u: goto L_08A95950;
    case 272u: goto L_08A9595C;
    case 273u: goto L_08A95964;
    case 274u: goto L_08A9596C;
    case 275u: goto L_08A95974;
    case 276u: goto L_08A9597C;
    case 277u: goto L_08A95984;
    case 278u: goto L_08A9598C;
    case 279u: goto L_08A95994;
    case 280u: goto L_08A9599C;
    case 281u: goto L_08A959A8;
    case 282u: goto L_08A959B0;
    case 283u: goto L_08A959B8;
    case 284u: goto L_08A959C0;
    case 285u: goto L_08A959C8;
    case 286u: goto L_08A959D0;
    case 287u: goto L_08A959E8;
    case 288u: goto L_08A959F0;
    case 289u: goto L_08A959FC;
    case 290u: goto L_08A95A0C;
    case 291u: goto L_08A95A18;
    case 292u: goto L_08A95A28;
    case 293u: goto L_08A95A3C;
    case 294u: goto L_08A95A48;
    case 295u: goto L_08A95A54;
    case 296u: goto L_08A95A5C;
    case 297u: goto L_08A95A74;
    case 298u: goto L_08A95A7C;
    case 299u: goto L_08A95A84;
    case 300u: goto L_08A95A8C;
    case 301u: goto L_08A95A94;
    case 302u: goto L_08A95A9C;
    case 303u: goto L_08A95AA4;
    case 304u: goto L_08A95AAC;
    case 305u: goto L_08A95AB8;
    case 306u: goto L_08A95ADC;
    case 307u: goto L_08A95AE4;
    case 308u: goto L_08A95AF0;
    case 309u: goto L_08A95AF8;
    case 310u: goto L_08A95B00;
    case 311u: goto L_08A95B08;
    case 312u: goto L_08A95B10;
    case 313u: goto L_08A95B18;
    case 314u: goto L_08A95B20;
    case 315u: goto L_08A95B28;
    case 316u: goto L_08A95B58;
    case 317u: goto L_08A95B74;
    case 318u: goto L_08A95B98;
    case 319u: goto L_08A95BA4;
    case 320u: goto L_08A95BC8;
    case 321u: goto L_08A95BD0;
    case 322u: goto L_08A95C10;
    case 323u: goto L_08A95C18;
    case 324u: goto L_08A95C44;
    case 325u: goto L_08A95C48;
    case 326u: goto L_08A95C54;
    case 327u: goto L_08A95C70;
    case 328u: goto L_08A95C94;
    case 329u: goto L_08A95CB4;
    case 330u: goto L_08A95CD0;
    case 331u: goto L_08A95CD8;
    case 332u: goto L_08A95CE4;
    case 333u: goto L_08A95D08;
    case 334u: goto L_08A95D2C;
    case 335u: goto L_08A95D48;
    case 336u: goto L_08A95D64;
    case 337u: goto L_08A95D6C;
    case 338u: goto L_08A95D70;
    case 339u: goto L_08A95D78;
    case 340u: goto L_08A95DA4;
    case 341u: goto L_08A95DC8;
    case 342u: goto L_08A95DFC;
    case 343u: goto L_08A95E18;
    case 344u: goto L_08A95E20;
    case 345u: goto L_08A95E24;
    case 346u: goto L_08A95E38;
    case 347u: goto L_08A95E4C;
    case 348u: goto L_08A95E70;
    case 349u: goto L_08A95E78;
    case 350u: goto L_08A95E7C;
    case 351u: goto L_08A95E88;
    case 352u: goto L_08A95EAC;
    case 353u: goto L_08A95EB4;
    case 354u: goto L_08A95EB8;
    case 355u: goto L_08A95EC0;
    case 356u: goto L_08A95EF8;
    case 357u: goto L_08A95F28;
    case 358u: goto L_08A95F34;
    case 359u: goto L_08A95F3C;
    case 360u: goto L_08A95F4C;
    case 361u: goto L_08A95F54;
    case 362u: goto L_08A95F58;
    case 363u: goto L_08A95F68;
    case 364u: goto L_08A95F74;
    case 365u: goto L_08A95F84;
    case 366u: goto L_08A95F8C;
    case 367u: goto L_08A95F98;
    case 368u: goto L_08A95FA4;
    case 369u: goto L_08A95FAC;
    case 370u: goto L_08A95FBC;
    case 371u: goto L_08A95FCC;
    case 372u: goto L_08A95FD8;
    case 373u: goto L_08A95FE4;
    case 374u: goto L_08A95FF8;
    case 375u: goto L_08A96008;
    case 376u: goto L_08A96020;
    case 377u: goto L_08A96050;
    case 378u: goto L_08A9605C;
    case 379u: goto L_08A96064;
    case 380u: goto L_08A96074;
    case 381u: goto L_08A9607C;
    case 382u: goto L_08A96080;
    case 383u: goto L_08A9608C;
    case 384u: goto L_08A9609C;
    case 385u: goto L_08A960AC;
    case 386u: goto L_08A960B8;
    case 387u: goto L_08A960C4;
    case 388u: goto L_08A960D0;
    case 389u: goto L_08A960D8;
    case 390u: goto L_08A960EC;
    case 391u: goto L_08A960FC;
    case 392u: goto L_08A9610C;
    case 393u: goto L_08A96118;
    case 394u: goto L_08A96128;
    case 395u: goto L_08A96134;
    case 396u: goto L_08A96164;
    case 397u: goto L_08A96170;
    case 398u: goto L_08A96180;
    case 399u: goto L_08A9618C;
    case 400u: goto L_08A96198;
    case 401u: goto L_08A961A0;
    case 402u: goto L_08A961BC;
    case 403u: goto L_08A961C8;
    case 404u: goto L_08A96208;
    case 405u: goto L_08A96220;
    case 406u: goto L_08A9622C;
    case 407u: goto L_08A96234;
    case 408u: goto L_08A96240;
    case 409u: goto L_08A96248;
    case 410u: goto L_08A96264;
    case 411u: goto L_08A9626C;
    case 412u: goto L_08A96280;
    case 413u: goto L_08A96288;
    case 414u: goto L_08A962C4;
    case 415u: goto L_08A962CC;
    case 416u: goto L_08A962D4;
    case 417u: goto L_08A962DC;
    case 418u: goto L_08A962E4;
    case 419u: goto L_08A962EC;
    case 420u: goto L_08A962F0;
    case 421u: goto L_08A962F4;
    case 422u: goto L_08A962FC;
    case 423u: goto L_08A96304;
    case 424u: goto L_08A96310;
    case 425u: goto L_08A96344;
    case 426u: goto L_08A96348;
    case 427u: goto L_08A9637C;
    case 428u: goto L_08A963BC;
    case 429u: goto L_08A963D4;
    case 430u: goto L_08A963E0;
    case 431u: goto L_08A963E8;
    case 432u: goto L_08A963F4;
    case 433u: goto L_08A963FC;
    case 434u: goto L_08A96418;
    case 435u: goto L_08A96420;
    case 436u: goto L_08A9644C;
    case 437u: goto L_08A96458;
    case 438u: goto L_08A9646C;
    case 439u: goto L_08A96474;
    case 440u: goto L_08A96480;
    case 441u: goto L_08A96488;
    case 442u: goto L_08A96490;
    case 443u: goto L_08A96498;
    case 444u: goto L_08A964A0;
    case 445u: goto L_08A964A8;
    case 446u: goto L_08A964AC;
    case 447u: goto L_08A964B0;
    case 448u: goto L_08A964B8;
    case 449u: goto L_08A964C0;
    case 450u: goto L_08A964CC;
    case 451u: goto L_08A96500;
    case 452u: goto L_08A96504;
    case 453u: goto L_08A96538;
    case 454u: goto L_08A96554;
    case 455u: goto L_08A96568;
    case 456u: goto L_08A96570;
    case 457u: goto L_08A96578;
    case 458u: goto L_08A96580;
    case 459u: goto L_08A96598;
    case 460u: goto L_08A965B4;
    case 461u: goto L_08A965E8;
    case 462u: goto L_08A965F0;
    case 463u: goto L_08A965F8;
    case 464u: goto L_08A96600;
    case 465u: goto L_08A96608;
    case 466u: goto L_08A96610;
    case 467u: goto L_08A96614;
    case 468u: goto L_08A96618;
    case 469u: goto L_08A96620;
    case 470u: goto L_08A96628;
    case 471u: goto L_08A96634;
    case 472u: goto L_08A9663C;
    case 473u: goto L_08A96654;
    case 474u: goto L_08A96670;
    case 475u: goto L_08A9668C;
    case 476u: goto L_08A966A0;
    case 477u: goto L_08A966A8;
    case 478u: goto L_08A966B0;
    case 479u: goto L_08A966B8;
    case 480u: goto L_08A966D0;
    case 481u: goto L_08A966EC;
    case 482u: goto L_08A96720;
    case 483u: goto L_08A96728;
    case 484u: goto L_08A96730;
    case 485u: goto L_08A96738;
    case 486u: goto L_08A96740;
    case 487u: goto L_08A96748;
    case 488u: goto L_08A9674C;
    case 489u: goto L_08A96750;
    case 490u: goto L_08A96758;
    case 491u: goto L_08A96760;
    case 492u: goto L_08A9676C;
    case 493u: goto L_08A96774;
    case 494u: goto L_08A9678C;
    case 495u: goto L_08A967A8;
    case 496u: goto L_08A967CC;
    case 497u: goto L_08A967E0;
    case 498u: goto L_08A967E8;
    case 499u: goto L_08A967F0;
    case 500u: goto L_08A967F8;
    case 501u: goto L_08A96800;
    case 502u: goto L_08A96814;
    case 503u: goto L_08A96824;
    case 504u: goto L_08A9682C;
    case 505u: goto L_08A9683C;
    case 506u: goto L_08A9687C;
    case 507u: goto L_08A96884;
    case 508u: goto L_08A9688C;
    case 509u: goto L_08A96894;
    case 510u: goto L_08A9689C;
    case 511u: goto L_08A968A4;
    case 512u: goto L_08A968A8;
    case 513u: goto L_08A968AC;
    case 514u: goto L_08A968B4;
    case 515u: goto L_08A968BC;
    case 516u: goto L_08A968C8;
    case 517u: goto L_08A968D0;
    case 518u: goto L_08A968EC;
    case 519u: goto L_08A9690C;
    case 520u: goto L_08A9694C;
    case 521u: goto L_08A96960;
    case 522u: goto L_08A96968;
    case 523u: goto L_08A96970;
    case 524u: goto L_08A96978;
    case 525u: goto L_08A96980;
    case 526u: goto L_08A96990;
    case 527u: goto L_08A969AC;
    case 528u: goto L_08A969C4;
    case 529u: goto L_08A969DC;
    case 530u: goto L_08A969E8;
    case 531u: goto L_08A96A00;
    case 532u: goto L_08A96A08;
    case 533u: goto L_08A96A10;
    case 534u: goto L_08A96A18;
    case 535u: goto L_08A96A1C;
    case 536u: goto L_08A96A20;
    case 537u: goto L_08A96A28;
    case 538u: goto L_08A96A30;
    case 539u: goto L_08A96A3C;
    case 540u: goto L_08A96A44;
    case 541u: goto L_08A96A7C;
    case 542u: goto L_08A96A8C;
    case 543u: goto L_08A96A9C;
    case 544u: goto L_08A96AB8;
    case 545u: goto L_08A96AC8;
    case 546u: goto L_08A96AEC;
    case 547u: goto L_08A96B04;
    case 548u: goto L_08A96B0C;
    case 549u: goto L_08A96B14;
    case 550u: goto L_08A96B1C;
    case 551u: goto L_08A96B20;
    case 552u: goto L_08A96B24;
    case 553u: goto L_08A96B2C;
    case 554u: goto L_08A96B34;
    case 555u: goto L_08A96B40;
    case 556u: goto L_08A96B48;
    case 557u: goto L_08A96B80;
    case 558u: goto L_08A96B88;
    case 559u: goto L_08A96B90;
    case 560u: goto L_08A96BA0;
    case 561u: goto L_08A96BBC;
    case 562u: goto L_08A96BCC;
    case 563u: goto L_08A96BE0;
    case 564u: goto L_08A96BF8;
    case 565u: goto L_08A96C08;
    case 566u: goto L_08A96C10;
    case 567u: goto L_08A96C18;
    case 568u: goto L_08A96C20;
    case 569u: goto L_08A96C28;
    case 570u: goto L_08A96C30;
    case 571u: goto L_08A96C38;
    case 572u: goto L_08A96C40;
    case 573u: goto L_08A96C44;
    case 574u: goto L_08A96C48;
    case 575u: goto L_08A96C50;
    case 576u: goto L_08A96C58;
    case 577u: goto L_08A96C64;
    case 578u: goto L_08A96C6C;
    case 579u: goto L_08A96CA4;
    case 580u: goto L_08A96CAC;
    case 581u: goto L_08A96CB4;
    case 582u: goto L_08A96CBC;
    case 583u: goto L_08A96CC4;
    case 584u: goto L_08A96CCC;
    case 585u: goto L_08A96CD4;
    case 586u: goto L_08A96CDC;
    case 587u: goto L_08A96CF4;
    case 588u: goto L_08A96D04;
    case 589u: goto L_08A96D14;
    case 590u: goto L_08A96D44;
    case 591u: goto L_08A96D50;
    case 592u: goto L_08A96D5C;
    case 593u: goto L_08A96D64;
    case 594u: goto L_08A96D6C;
    case 595u: goto L_08A96D74;
    case 596u: goto L_08A96D7C;
    case 597u: goto L_08A96D84;
    case 598u: goto L_08A96D8C;
    case 599u: goto L_08A96D94;
    case 600u: goto L_08A96D98;
    case 601u: goto L_08A96D9C;
    case 602u: goto L_08A96DA4;
    case 603u: goto L_08A96DAC;
    case 604u: goto L_08A96DB8;
    case 605u: goto L_08A96DC0;
    case 606u: goto L_08A96DF8;
    case 607u: goto L_08A96E28;
    case 608u: goto L_08A96E34;
    case 609u: goto L_08A96E3C;
    case 610u: goto L_08A96E58;
    case 611u: goto L_08A96E60;
    case 612u: goto L_08A96E74;
    case 613u: goto L_08A96E8C;
    case 614u: goto L_08A96E94;
    case 615u: goto L_08A96EA8;
    case 616u: goto L_08A96EC4;
    case 617u: goto L_08A96ECC;
    case 618u: goto L_08A96EE0;
    case 619u: goto L_08A96EF8;
    case 620u: goto L_08A96F00;
    case 621u: goto L_08A96F0C;
    case 622u: goto L_08A96F14;
    case 623u: goto L_08A96F1C;
    case 624u: goto L_08A96F24;
    case 625u: goto L_08A96F2C;
    case 626u: goto L_08A96F34;
    case 627u: goto L_08A96F3C;
    case 628u: goto L_08A96F44;
    case 629u: goto L_08A96F48;
    case 630u: goto L_08A96F4C;
    case 631u: goto L_08A96F54;
    case 632u: goto L_08A96F5C;
    case 633u: goto L_08A96F68;
    case 634u: goto L_08A96F70;
    case 635u: goto L_08A96FA8;
    case 636u: goto L_08A96FB8;
    case 637u: goto L_08A96FC0;
    case 638u: goto L_08A96FC8;
    case 639u: goto L_08A96FD0;
    case 640u: goto L_08A96FD8;
    case 641u: goto L_08A96FF4;
    case 642u: goto L_08A97004;
    case 643u: goto L_08A97030;
    case 644u: goto L_08A97038;
    case 645u: goto L_08A97040;
    case 646u: goto L_08A97048;
    case 647u: goto L_08A97050;
    case 648u: goto L_08A97058;
    case 649u: goto L_08A9705C;
    case 650u: goto L_08A97060;
    case 651u: goto L_08A97068;
    case 652u: goto L_08A97070;
    case 653u: goto L_08A9707C;
    case 654u: goto L_08A97084;
    case 655u: goto L_08A970BC;
    case 656u: goto L_08A970F8;
    case 657u: goto L_08A97114;
    case 658u: goto L_08A97128;
    case 659u: goto L_08A97130;
    case 660u: goto L_08A97138;
    case 661u: goto L_08A9714C;
    case 662u: goto L_08A97168;
    case 663u: goto L_08A9718C;
    case 664u: goto L_08A97198;
    case 665u: goto L_08A971A8;
    case 666u: goto L_08A971B0;
    case 667u: goto L_08A971BC;
    case 668u: goto L_08A971C4;
    case 669u: goto L_08A971CC;
    case 670u: goto L_08A971D4;
    case 671u: goto L_08A971DC;
    case 672u: goto L_08A971E4;
    case 673u: goto L_08A971E8;
    case 674u: goto L_08A971EC;
    case 675u: goto L_08A971F4;
    case 676u: goto L_08A971FC;
    case 677u: goto L_08A97208;
    case 678u: goto L_08A97210;
    case 679u: goto L_08A97228;
    case 680u: goto L_08A97244;
    case 681u: goto L_08A9724C;
    case 682u: goto L_08A97298;
    case 683u: goto L_08A972A0;
    case 684u: goto L_08A972B8;
    case 685u: goto L_08A9731C;
    case 686u: goto L_08A97330;
    case 687u: goto L_08A97378;
    case 688u: goto L_08A97390;
    case 689u: goto L_08A973B4;
    case 690u: goto L_08A973C0;
    case 691u: goto L_08A973C8;
    case 692u: goto L_08A973DC;
    case 693u: goto L_08A973E8;
    case 694u: goto L_08A973F8;
    case 695u: goto L_08A9740C;
    case 696u: goto L_08A97414;
    case 697u: goto L_08A97438;
    case 698u: goto L_08A9744C;
    case 699u: goto L_08A9746C;
    case 700u: goto L_08A97474;
    case 701u: goto L_08A97490;
    case 702u: goto L_08A974A4;
    case 703u: goto L_08A974A8;
    case 704u: goto L_08A974C0;
    case 705u: goto L_08A974D4;
    case 706u: goto L_08A974F0;
    case 707u: goto L_08A97510;
    case 708u: goto L_08A97578;
    case 709u: goto L_08A97594;
    case 710u: goto L_08A975A4;
    case 711u: goto L_08A975C0;
    case 712u: goto L_08A975C8;
    case 713u: goto L_08A975D4;
    case 714u: goto L_08A975E4;
    case 715u: goto L_08A975F8;
    case 716u: goto L_08A97608;
    case 717u: goto L_08A97610;
    case 718u: goto L_08A97618;
    case 719u: goto L_08A9761C;
    case 720u: goto L_08A97624;
    case 721u: goto L_08A9762C;
    case 722u: goto L_08A9763C;
    case 723u: goto L_08A97644;
    case 724u: goto L_08A97650;
    case 725u: goto L_08A9766C;
    case 726u: goto L_08A97684;
    case 727u: goto L_08A9768C;
    case 728u: goto L_08A9769C;
    case 729u: goto L_08A976A4;
    case 730u: goto L_08A976B4;
    case 731u: goto L_08A976BC;
    case 732u: goto L_08A976C4;
    case 733u: goto L_08A976D0;
    case 734u: goto L_08A976D8;
    case 735u: goto L_08A976E0;
    case 736u: goto L_08A976FC;
    case 737u: goto L_08A97704;
    case 738u: goto L_08A9770C;
    case 739u: goto L_08A97728;
    case 740u: goto L_08A97740;
    case 741u: goto L_08A9775C;
    case 742u: goto L_08A97764;
    case 743u: goto L_08A9776C;
    case 744u: goto L_08A97774;
    case 745u: goto L_08A97790;
    case 746u: goto L_08A97798;
    case 747u: goto L_08A977A0;
    case 748u: goto L_08A977BC;
    case 749u: goto L_08A977D4;
    case 750u: goto L_08A977F0;
    case 751u: goto L_08A977F8;
    case 752u: goto L_08A97800;
    case 753u: goto L_08A97810;
    case 754u: goto L_08A97818;
    case 755u: goto L_08A97828;
    case 756u: goto L_08A97838;
    case 757u: goto L_08A97844;
    case 758u: goto L_08A9784C;
    case 759u: goto L_08A97854;
    case 760u: goto L_08A97860;
    case 761u: goto L_08A97874;
    case 762u: goto L_08A97880;
    case 763u: goto L_08A9788C;
    case 764u: goto L_08A97894;
    case 765u: goto L_08A9789C;
    case 766u: goto L_08A978A4;
    case 767u: goto L_08A978AC;
    case 768u: goto L_08A978B0;
    case 769u: goto L_08A978C4;
    case 770u: goto L_08A978DC;
    case 771u: goto L_08A978EC;
    case 772u: goto L_08A978F4;
    case 773u: goto L_08A978FC;
    case 774u: goto L_08A97914;
    case 775u: goto L_08A9792C;
    case 776u: goto L_08A9793C;
    case 777u: goto L_08A9794C;
    case 778u: goto L_08A97984;
    case 779u: goto L_08A979DC;
    case 780u: goto L_08A979EC;
    case 781u: goto L_08A97A08;
    case 782u: goto L_08A97A10;
    case 783u: goto L_08A97A18;
    case 784u: goto L_08A97A2C;
    case 785u: goto L_08A97A40;
    case 786u: goto L_08A97A4C;
    case 787u: goto L_08A97A54;
    case 788u: goto L_08A97A5C;
    case 789u: goto L_08A97A64;
    case 790u: goto L_08A97A68;
    case 791u: goto L_08A97A74;
    case 792u: goto L_08A97A7C;
    case 793u: goto L_08A97A80;
    case 794u: goto L_08A97AA4;
    case 795u: goto L_08A97AAC;
    case 796u: goto L_08A97AB8;
    case 797u: goto L_08A97AC4;
    case 798u: goto L_08A97ACC;
    case 799u: goto L_08A97AD0;
    case 800u: goto L_08A97AD8;
    case 801u: goto L_08A97AE4;
    case 802u: goto L_08A97AEC;
    case 803u: goto L_08A97AF0;
    case 804u: goto L_08A97AF4;
    case 805u: goto L_08A97AF8;
    case 806u: goto L_08A97B00;
    case 807u: goto L_08A97B08;
    case 808u: goto L_08A97B14;
    case 809u: goto L_08A97B20;
    case 810u: goto L_08A97B28;
    case 811u: goto L_08A97B2C;
    case 812u: goto L_08A97B34;
    case 813u: goto L_08A97B40;
    case 814u: goto L_08A97B48;
    case 815u: goto L_08A97B4C;
    case 816u: goto L_08A97B50;
    case 817u: goto L_08A97B54;
    case 818u: goto L_08A97B5C;
    case 819u: goto L_08A97B70;
    case 820u: goto L_08A97B84;
    case 821u: goto L_08A97B9C;
    case 822u: goto L_08A97BA8;
    case 823u: goto L_08A97BB0;
    case 824u: goto L_08A97BD0;
    case 825u: goto L_08A97BE0;
    case 826u: goto L_08A97C04;
    case 827u: goto L_08A97C1C;
    case 828u: goto L_08A97C28;
    case 829u: goto L_08A97C38;
    case 830u: goto L_08A97C40;
    case 831u: goto L_08A97C64;
    case 832u: goto L_08A97C6C;
    case 833u: goto L_08A97C8C;
    case 834u: goto L_08A97CB4;
    case 835u: goto L_08A97CC0;
    case 836u: goto L_08A97CCC;
    case 837u: goto L_08A97CD4;
    case 838u: goto L_08A97CE0;
    case 839u: goto L_08A97CE8;
    case 840u: goto L_08A97CF0;
    case 841u: goto L_08A97CF8;
    case 842u: goto L_08A97D20;
    case 843u: goto L_08A97D24;
    case 844u: goto L_08A97D3C;
    case 845u: goto L_08A97D40;
    case 846u: goto L_08A97D48;
    case 847u: goto L_08A97D78;
    case 848u: goto L_08A97D88;
    case 849u: goto L_08A97DA8;
    case 850u: goto L_08A97DB0;
    case 851u: goto L_08A97DC8;
    case 852u: goto L_08A97DD4;
    case 853u: goto L_08A97DE4;
    case 854u: goto L_08A97DF0;
    case 855u: goto L_08A97E30;
    case 856u: goto L_08A97E38;
    case 857u: goto L_08A97E40;
    case 858u: goto L_08A97E48;
    case 859u: goto L_08A97E6C;
    case 860u: goto L_08A97E74;
    case 861u: goto L_08A97E80;
    case 862u: goto L_08A97E88;
    case 863u: goto L_08A97EB4;
    case 864u: goto L_08A97EC0;
    case 865u: goto L_08A97EEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A942EC:
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5760));
    goto L_08A942F8;
L_08A942F8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A942F8;
      }
      goto L_08A9430C;
    }
L_08A9430C:
    ctx.gpr[4] = (2222u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12184), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A94318:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2223u << 16u);
    ctx.gpr[16] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-5760));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(11824));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_08A94340;
L_08A94340:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08A94360;
    }
    goto L_08A9434C;
L_08A9434C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08A94358u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A94358u) goto L_08A94358;
    return;
L_08A94358:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A94360;
L_08A94360:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A94340;
      }
      goto L_08A9436C;
    }
L_08A9436C:
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
L_08A94384:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A943BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9152));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 350u, 0x08A8DB0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A943BCu) goto L_08A943BC;
    return;
L_08A943BC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A943D8u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 492u, 0x08A8E5C4u>(ctx, &aot_mem) && ctx.pc == 0x08A943D8u) goto L_08A943D8;
    return;
L_08A943D8:
    ctx.gpr[31] = (0x08A943E0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08AB4784u;
    return;
L_08A943E0:
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
L_08A943FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[30]);
    ctx.gpr[30] = (0u | 32u);
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16));
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(-17));
    { const std::uint32_t dividend = ctx.gpr[7]; const std::uint32_t divisor = ctx.gpr[30]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[9]; const std::uint32_t divisor = ctx.gpr[30]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[23] = (ctx.lo);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A9448C;
      }
      goto L_08A94460;
    }
L_08A94460:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[23]) < 65 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A94490;
      }
      goto L_08A9446C;
    }
L_08A9446C:
    ctx.gpr[22] = (2222u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12184)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[8]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08A944C8;
      }
      goto L_08A94484;
    }
L_08A94484:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A94540;
      }
      goto L_08A9448C;
    }
L_08A9448C:
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    goto L_08A94490;
L_08A94490:
    ctx.gpr[31] = (0x08A94498u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    goto L_08A94384;
L_08A94498:
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
L_08A944C8:
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[16] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5760));
    ctx.gpr[21] = (2221u << 16u);
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[18] << 5u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-9144));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(11824));
    ctx.gpr[20] = (1u << 16u);
    goto L_08A944F0;
L_08A944F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08A94518;
    }
    goto L_08A944FC;
L_08A944FC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A94510u);
    ctx.gpr[6] = (0u | 256u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A94510u) goto L_08A94510;
    return;
L_08A94510:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08A94518;
L_08A94518:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A94524u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    goto L_08A94384;
L_08A94524:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(12184), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A944F0;
      }
      goto L_08A9453C;
    }
L_08A9453C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08A94540;
L_08A94540:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A945B4;
      }
      goto L_08A94550;
    }
L_08A94550:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[30]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (2223u << 16u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[30]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[18] = (ctx.gpr[6] << 11u);
    ctx.gpr[18] = (0u + ctx.gpr[18]);
    ctx.gpr[30] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5760));
    ctx.gpr[16] = (ctx.lo);
    goto L_08A94584;
L_08A94584:
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08A945A0u);
    ctx.gpr[6] = (0u | 2048u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 118u, 0x08AB1300u>(ctx, &aot_mem) && ctx.pc == 0x08A945A0u) goto L_08A945A0;
    return;
L_08A945A0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2048));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(2048));
      if (branch_taken) {
          goto L_08A94584;
      }
      goto L_08A945B4;
    }
L_08A945B4:
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
L_08A945E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-352));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[5] << 16u);
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[30]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[30] << 8u);
    ctx.gpr[6] = (ctx.gpr[30] << 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[23]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[23] = (2223u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-14008)));
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(260)));
    ctx.gpr[6] = (ctx.gpr[4] & 2047u);
    ctx.gpr[4] = (ctx.gpr[4] >> 11u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(292), static_cast<std::uint16_t>(ctx.gpr[30]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[30] << 8u);
    ctx.gpr[10] = (ctx.gpr[30] << 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[6]);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[8]);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08A948A4;
      }
      goto L_08A94680;
    }
L_08A94680:
    ctx.gpr[5] = (2223u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13952));
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[6]);
    goto L_08A94698;
L_08A94698:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[20] = (0u | 4u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
        goto L_08A946B4;
    }
    goto L_08A946B4;
L_08A946B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(256)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[31] = (0x08A946C8u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    goto L_08A943FC;
L_08A946C8:
    ctx.gpr[4] = (ctx.gpr[20] << 11u);
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A94880;
      }
      goto L_08A946E0;
    }
L_08A946E0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    goto L_08A946E4;
L_08A946E4:
    ctx.gpr[18] = (ctx.gpr[20] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[22]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A94728;
      }
      goto L_08A946F4;
    }
L_08A946F4:
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[5]) >= 0) {
    ctx.gpr[5] = (ctx.gpr[5] & 2047u);
        goto L_08A94718;
    }
    goto L_08A94700;
L_08A94700:
    ctx.gpr[5] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 2047u);
    ctx.gpr[5] = (0u - ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(2048));
      if (branch_taken) {
          goto L_08A94720;
      }
      goto L_08A94718;
    }
L_08A94718:
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(2048));
    goto L_08A94720;
L_08A94720:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A94870;
      }
      goto L_08A94728;
    }
L_08A94728:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
        goto L_08A9486C;
    }
    goto L_08A94730;
L_08A94730:
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14012)));
    ctx.gpr[6] = (2223u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-14016)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9480C;
      }
      goto L_08A9474C;
    }
L_08A9474C:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(308), static_cast<std::uint16_t>(ctx.gpr[30]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[16] << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-14016), ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A94774u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08A94774u) goto L_08A94774;
    return;
L_08A94774:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (ctx.gpr[19] << 8u);
    ctx.gpr[5] = (ctx.gpr[19] << 4u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-14008)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(260), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A947A0u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08A947A0u) goto L_08A947A0;
    return;
L_08A947A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-14008)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(292))))));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(256), ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(264), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(266), static_cast<std::uint16_t>(ctx.gpr[21]));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(268), static_cast<std::uint16_t>(ctx.gpr[21]));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(25));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    ctx.gpr[5] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(270), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(33));
    ctx.gpr[31] = (0x08A947ECu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08A947ECu) goto L_08A947EC;
    return;
L_08A947EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-14008)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(266))))));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[21];
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(308))))));
      if (branch_taken) {
          goto L_08A94840;
      }
      goto L_08A94804;
    }
L_08A94804:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(266), static_cast<std::uint16_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_08A94854;
      }
      goto L_08A9480C;
    }
L_08A9480C:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A94840:
    ctx.gpr[5] = (ctx.gpr[30] << 8u);
    ctx.gpr[6] = (ctx.gpr[30] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(268), static_cast<std::uint16_t>(ctx.gpr[16]));
    goto L_08A94854;
L_08A94854:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(268), static_cast<std::uint16_t>(ctx.gpr[21]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(266), static_cast<std::uint16_t>(ctx.gpr[21]));
    ctx.gpr[30] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_08A9486C;
L_08A9486C:
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    goto L_08A94870;
L_08A94870:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
        goto L_08A946E4;
    }
    goto L_08A94880;
L_08A94880:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-14008)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08A94698;
      }
      goto L_08A948A4;
    }
L_08A948A4:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(266))))));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[21];
    ctx.gpr[19] = (2221u << 16u);
      if (branch_taken) {
          goto L_08A94908;
      }
      goto L_08A948B0;
    }
L_08A948B0:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-9120));
    ctx.gpr[17] = (ctx.gpr[16] << 8u);
    goto L_08A948BC;
L_08A948BC:
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(270))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A948F4;
      }
      goto L_08A948D4;
    }
L_08A948D4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A948E0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08A948E0u) goto L_08A948E0;
    return;
L_08A948E0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A948ECu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A945E4;
L_08A948EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9493C;
      }
      goto L_08A948F4;
    }
L_08A948F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-14008)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(268))))));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[21];
    ctx.gpr[17] = (ctx.gpr[16] << 8u);
      if (branch_taken) {
          goto L_08A948BC;
      }
      goto L_08A94908;
    }
L_08A94908:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9493C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9496C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (ctx.gpr[6] & 2047u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[30]);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[18] = (ctx.gpr[6] >> 11u);
    ctx.gpr[9] = (0u < ctx.gpr[9] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[30] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[21] | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[19] = (0u | 47u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[9]);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[8]);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-13952));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    goto L_08A949E0;
L_08A949E0:
    if (ctx.gpr[4] == ctx.gpr[19]) {
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
        goto L_08A94A00;
    }
    goto L_08A949E8;
L_08A949E8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08A94A00;
      }
      goto L_08A949F0;
    }
L_08A949F0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08A949E0;
      }
      goto L_08A94A00;
    }
L_08A94A00:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A94A0Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x08A94A0Cu) goto L_08A94A0C;
    return;
L_08A94A0C:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[17] + ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(8193) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A94A3C;
      }
      goto L_08A94A24;
    }
L_08A94A24:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x08A94A34u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    goto L_08A943FC;
L_08A94A34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08A94A50;
      }
      goto L_08A94A3C;
    }
L_08A94A3C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A94A4Cu);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    goto L_08A943FC;
L_08A94A4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08A94A50;
L_08A94A50:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[4] ? 1u : 0u);
    goto L_08A94A58;
L_08A94A58:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] < static_cast<std::uint32_t>(8192) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A94B9C;
      }
      goto L_08A94A60;
    }
L_08A94A60:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[20] + ctx.gpr[30]);
      if (branch_taken) {
          goto L_08A94B9C;
      }
      goto L_08A94A68;
    }
L_08A94A68:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08A94A78u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 628u, 0x08A9E368u>(ctx, &aot_mem) && ctx.pc == 0x08A94A78u) goto L_08A94A78;
    return;
L_08A94A78:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_08A94B54;
      }
      goto L_08A94A80;
    }
L_08A94A80:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[4] != ctx.gpr[23]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08A94B58;
    }
    goto L_08A94A8C;
L_08A94A8C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08A94AB0;
    }
    goto L_08A94A98;
L_08A94A98:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (ctx.gpr[21] | 0u);
    ctx.gpr[16] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08A94B18;
      }
      goto L_08A94AB0;
    }
L_08A94AB0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A94AC4u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08A94AC4u) goto L_08A94AC4;
    return;
L_08A94AC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A94AD4u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    goto L_08A943FC;
L_08A94AD4:
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A94AE4u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08A94AE4u) goto L_08A94AE4;
    return;
L_08A94AE4:
    ctx.gpr[2] = (0u | 1u);
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
L_08A94B18:
    if (ctx.gpr[4] == ctx.gpr[19]) {
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
        goto L_08A94B38;
    }
    goto L_08A94B20;
L_08A94B20:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08A94B38;
      }
      goto L_08A94B28;
    }
L_08A94B28:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08A94B18;
      }
      goto L_08A94B38;
    }
L_08A94B38:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A94B44u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x08A94B44u) goto L_08A94B44;
    return;
L_08A94B44:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[17] + ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A94B54;
L_08A94B54:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08A94B58;
L_08A94B58:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[18] = (ctx.gpr[4] & 1u);
      if (branch_taken) {
          goto L_08A94B74;
      }
      goto L_08A94B60;
    }
L_08A94B60:
    ctx.gpr[5] = (0u - ctx.gpr[18]);
    ctx.gpr[5] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A94B80;
      }
      goto L_08A94B74;
    }
L_08A94B74:
    ctx.gpr[5] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    goto L_08A94B80;
L_08A94B80:
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A94A58;
      }
      goto L_08A94B9C;
    }
L_08A94B9C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
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
L_08A94BD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A94BFCu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A942EC;
L_08A94BFC:
    ctx.gpr[18] = (2223u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-14008)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A94D80;
      }
      goto L_08A94C0C;
    }
L_08A94C0C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-14008), ctx.gpr[19]);
    ctx.gpr[19] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-14012), ctx.gpr[17]);
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[17] = (2223u << 16u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13952));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-14016), 0u);
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A94C38u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_08A943FC;
L_08A94C38:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(140));
    ctx.gpr[31] = (0x08A94C48u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08A94C48u) goto L_08A94C48;
    return;
L_08A94C48:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(132));
    ctx.gpr[31] = (0x08A94C58u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08A94C58u) goto L_08A94C58;
    return;
L_08A94C58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[31] = (0x08A94C70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A9496C;
L_08A94C70:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A94D54;
      }
      goto L_08A94C78;
    }
L_08A94C78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-14016)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-14012)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] << 16u);
      if (branch_taken) {
          goto L_08A94D28;
      }
      goto L_08A94C8C;
    }
L_08A94C8C:
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[19] << 8u);
    ctx.gpr[7] = (ctx.gpr[19] << 4u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-14008)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-14016), ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(260), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(264), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(256), ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(266), static_cast<std::uint16_t>(ctx.gpr[16]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(268), static_cast<std::uint16_t>(ctx.gpr[16]));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(270), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[31] = (0x08A94CE0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9116));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08A94CE0u) goto L_08A94CE0;
    return;
L_08A94CE0:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A94CF0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9112));
    goto L_08A945E4;
L_08A94CF0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94DA4;
      }
      goto L_08A94CFC;
    }
L_08A94CFC:
    ctx.gpr[31] = (0x08A94D04u);
    // nop
    goto L_08A94318;
L_08A94D04:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A94D28:
    ctx.gpr[31] = (0x08A94D30u);
    // nop
    goto L_08A94318;
L_08A94D30:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A94D54:
    ctx.gpr[31] = (0x08A94D5Cu);
    // nop
    goto L_08A94318;
L_08A94D5C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A94D80:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A94DA4:
    ctx.gpr[31] = (0x08A94DACu);
    // nop
    goto L_08A94318;
L_08A94DAC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-14016)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A94DD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A94DE0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 690u, 0x08A8F428u>(ctx, &aot_mem) && ctx.pc == 0x08A94DE0u) goto L_08A94DE0;
    return;
L_08A94DE0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A94DEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A94E0Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 650u, 0x08A8EFB0u>(ctx, &aot_mem) && ctx.pc == 0x08A94E0Cu) goto L_08A94E0C;
    return;
L_08A94E0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A94E1Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 690u, 0x08A8F428u>(ctx, &aot_mem) && ctx.pc == 0x08A94E1Cu) goto L_08A94E1C;
    return;
L_08A94E1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A94E2Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 657u, 0x08A8F0BCu>(ctx, &aot_mem) && ctx.pc == 0x08A94E2Cu) goto L_08A94E2C;
    return;
L_08A94E2C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A94E40:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A94E48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A94E5Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 3u, 0x08A88164u>(ctx, &aot_mem) && ctx.pc == 0x08A94E5Cu) goto L_08A94E5C;
    return;
L_08A94E5C:
    ctx.gpr[31] = (0x08A94E64u);
    ctx.gpr[4] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 9u, 0x08A88200u>(ctx, &aot_mem) && ctx.pc == 0x08A94E64u) goto L_08A94E64;
    return;
L_08A94E64:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A94E74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (29811u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28520));
    ctx.gpr[6] = (0u | 14897u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A94EA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9E0F4u>(ctx, &aot_mem) && ctx.pc == 0x08A94EA4u) goto L_08A94EA4;
    return;
L_08A94EA4:
    ctx.gpr[31] = (0x08A94EACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x08A94EACu) goto L_08A94EAC;
    return;
L_08A94EAC:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (0u | 92u);
      if (branch_taken) {
          goto L_08A94EE4;
      }
      goto L_08A94EC0;
    }
L_08A94EC0:
    ctx.gpr[6] = (0u | 47u);
    ctx.gpr[8] = (ctx.gpr[29] + ctx.gpr[4]);
    goto L_08A94EC8;
L_08A94EC8:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[9] == ctx.gpr[7]) {
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[6]));
        goto L_08A94ED4;
    }
    goto L_08A94ED4;
L_08A94ED4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (ctx.gpr[29] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A94EC8;
      }
      goto L_08A94EE4;
    }
L_08A94EE4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1539u);
    ctx.gpr[31] = (0x08A94EF4u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08AB47DCu;
    return;
L_08A94EF4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A94F04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A94F1Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 650u, 0x08A8EFB0u>(ctx, &aot_mem) && ctx.pc == 0x08A94F1Cu) goto L_08A94F1C;
    return;
L_08A94F1C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A94F2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A94F44u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 663u, 0x08A8F178u>(ctx, &aot_mem) && ctx.pc == 0x08A94F44u) goto L_08A94F44;
    return;
L_08A94F44:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A94F58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    ctx.gpr[18] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A94FB4;
      }
      goto L_08A94F94;
    }
L_08A94F94:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A94FACu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 492u, 0x08A8E5C4u>(ctx, &aot_mem) && ctx.pc == 0x08A94FACu) goto L_08A94FAC;
    return;
L_08A94FAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94FD8;
      }
      goto L_08A94FB4;
    }
L_08A94FB4:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A94FC8u);
    ctx.gpr[8] = (0u | 0u);
    ctx.pc = 0x08AB47E4u;
    return;
L_08A94FC8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A94FD8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08AB476Cu;
    return;
L_08A94FD8:
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
L_08A94FF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A95000u);
    // nop
    ctx.pc = 0x08AB475Cu;
    return;
L_08A95000:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9500C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9501Cu);
    // nop
    ctx.pc = 0x08AB4784u;
    return;
L_08A9501C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A95028:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A95038u);
    // nop
    ctx.pc = 0x08AB4784u;
    return;
L_08A95038:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A95044:
    ctx.gpr[5] = (2223u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-5504), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A95050:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A95060u);
    // nop
    ctx.pc = 0x08AB467Cu;
    return;
L_08A95060:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9506C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A95080u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5504)));
    ctx.pc = 0x08AB454Cu;
    return;
L_08A95080:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9508C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A950A4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5504)));
    ctx.pc = 0x08AB4604u;
    return;
L_08A950A4:
    ctx.gpr[31] = (0x08A950ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5504)));
    ctx.pc = 0x08AB4684u;
    return;
L_08A950AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A950D8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[2] < ctx.gpr[6] ? 1u : 0u);
    goto L_08A950E0;
L_08A950E0:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A95108;
      }
      goto L_08A950E8;
    }
L_08A950E8:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A95108;
      }
      goto L_08A950FC;
    }
L_08A950FC:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[2] < ctx.gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A950E0;
      }
      goto L_08A95108;
    }
L_08A95108:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A95110:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12200)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08A95184;
      }
      goto L_08A95148;
    }
L_08A95148:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[9] = (0u | 144u);
      if (branch_taken) {
          goto L_08A9517C;
      }
      goto L_08A95150;
    }
L_08A95150:
    ctx.gpr[10] = (0u | 251u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[9] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[10] = (ctx.gpr[4] >> 24u);
    ctx.gpr[11] = (ctx.gpr[4] >> 16u);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[10] = (ctx.gpr[4] >> 8u);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A9517C;
L_08A9517C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 6u);
      if (branch_taken) {
          goto L_08A951B4;
      }
      goto L_08A95184;
    }
L_08A95184:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (0u | 5u);
      if (branch_taken) {
          goto L_08A951B4;
      }
      goto L_08A9518C;
    }
L_08A9518C:
    ctx.gpr[9] = (0u | 16u);
    ctx.gpr[10] = (0u | 251u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[9] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[10] = (ctx.gpr[4] >> 16u);
    ctx.gpr[11] = (ctx.gpr[4] >> 8u);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A951B4;
L_08A951B4:
    ctx.gpr[9] = (0u | 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[9] = (ctx.gpr[6] + ctx.gpr[16]);
        goto L_08A951C0;
    }
    goto L_08A951C0;
L_08A951C0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[10] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[6] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08A951E0u);
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
    goto L_08A95238;
L_08A951E0:
    ctx.gpr[2] = (ctx.gpr[16] + ctx.gpr[2]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A951F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[9] = (ctx.gpr[7] & 255u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
        goto L_08A95218;
    }
    goto L_08A95218;
L_08A95218:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A9522Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_08A95110;
L_08A9522C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A95238:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12204)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[23]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    ctx.gpr[23] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[8]);
    ctx.gpr[7] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (0u | 0u);
        goto L_08A952A0;
    }
    goto L_08A952A0;
L_08A952A0:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
        goto L_08A952B0;
    }
    goto L_08A952A8;
L_08A952A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A952CC;
      }
      goto L_08A952B0;
    }
L_08A952B0:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12196)));
    ctx.gpr[31] = (0x08A952C0u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 161u, 0x08AB195Cu>(ctx, &aot_mem) && ctx.pc == 0x08A952C0u) goto L_08A952C0;
    return;
L_08A952C0:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (2222u << 16u);
    goto L_08A952CC;
L_08A952CC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A95344;
      }
      goto L_08A952D4;
    }
L_08A952D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12208)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A95304;
      }
      goto L_08A952E0;
    }
L_08A952E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[31] = (0x08A952F4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 161u, 0x08AB195Cu>(ctx, &aot_mem) && ctx.pc == 0x08A952F4u) goto L_08A952F4;
    return;
L_08A952F4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08A95304;
      }
      goto L_08A95304;
    }
L_08A95304:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A95344;
      }
      goto L_08A9530C;
    }
L_08A9530C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12196)));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[31] = (0x08A9532Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08A9532Cu) goto L_08A9532C;
    return;
L_08A9532C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A95378;
      }
      goto L_08A9533C;
    }
L_08A9533C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08A957BC;
      }
      goto L_08A95344;
    }
L_08A95344:
    ctx.gpr[2] = (0u | 0u);
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
L_08A95378:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    goto L_08A95384;
L_08A95384:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[7] = (ctx.gpr[19] - ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[22] = (ctx.gpr[18] | 0u);
    ctx.gpr[17] = (0u | 1028u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 1028 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
        goto L_08A953C4;
    }
    goto L_08A953C4;
L_08A953C4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[6] = (~(ctx.gpr[6] | 0u));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] ^ 170u);
    ctx.gpr[6] = (ctx.gpr[6] << 8u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12196)));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[6]);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[30] = (ctx.gpr[17] | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
        goto L_08A9541C;
    }
    goto L_08A9541C;
L_08A9541C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[22] < ctx.gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A95508;
      }
      goto L_08A95428;
    }
L_08A95428:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08A9542C;
L_08A9542C:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A954DC;
      }
      goto L_08A95448;
    }
L_08A95448:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A95458u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    goto L_08A950D8;
L_08A95458:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A954DC;
      }
      goto L_08A95468;
    }
L_08A95468:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(1024) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (ctx.gpr[16] < static_cast<std::uint32_t>(16384) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A95490;
      }
      goto L_08A9547C;
    }
L_08A9547C:
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (ctx.gpr[16] < static_cast<std::uint32_t>(16384) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A95490;
      }
      goto L_08A95488;
    }
L_08A95488:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08A954A8;
      }
      goto L_08A95490;
    }
L_08A95490:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_08A954A8;
      }
      goto L_08A95498;
    }
L_08A95498:
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(68) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A954A8;
      }
      goto L_08A954A4;
    }
L_08A954A4:
    ctx.gpr[4] = (0u | 3u);
    goto L_08A954A8;
L_08A954A8:
    ctx.gpr[6] = (ctx.gpr[18] - ctx.gpr[22]);
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (2222u << 16u);
        goto L_08A954DC;
    }
    goto L_08A954C4;
L_08A954C4:
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(1028) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A95504;
      }
      goto L_08A954D8;
    }
L_08A954D8:
    ctx.gpr[4] = (2222u << 16u);
    goto L_08A954DC;
L_08A954DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08A9542C;
    }
    goto L_08A95504;
L_08A95504:
    ctx.gpr[6] = (ctx.gpr[22] < ctx.gpr[18] ? 1u : 0u);
    goto L_08A95508;
L_08A95508:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (2222u << 16u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A95524;
      }
      goto L_08A95518;
    }
L_08A95518:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
        goto L_08A95564;
    }
    goto L_08A95524;
L_08A95524:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[10] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A957AC;
      }
      goto L_08A95564;
    }
L_08A95564:
    ctx.gpr[4] = (ctx.gpr[23] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08A955D4;
      }
      goto L_08A95570;
    }
L_08A95570:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[4] = (ctx.gpr[23] & ctx.gpr[4]);
    ctx.gpr[16] = (0u | 112u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(113) ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
        goto L_08A9558C;
    }
    goto L_08A9558C;
L_08A9558C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.gpr[23] = (ctx.gpr[23] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A955BC;
      }
      goto L_08A95598;
    }
L_08A95598:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] >> 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(223));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A955B4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08A955B4u) goto L_08A955B4;
    return;
L_08A955B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A955C0;
      }
      goto L_08A955BC;
    }
L_08A955BC:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[16]);
    goto L_08A955C0;
L_08A955C0:
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[23] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A95570;
      }
      goto L_08A955D4;
    }
L_08A955D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[6];
    ctx.gpr[16] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A9561C;
      }
      goto L_08A955E4;
    }
L_08A955E4:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] >> 8u);
      if (branch_taken) {
          goto L_08A95614;
      }
      goto L_08A955EC;
    }
L_08A955EC:
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-3));
    ctx.gpr[6] = (ctx.gpr[6] << 5u);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[23]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A956B0;
      }
      goto L_08A95614;
    }
L_08A95614:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A956B0;
      }
      goto L_08A9561C;
    }
L_08A9561C:
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A95660;
      }
      goto L_08A95628;
    }
L_08A95628:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(124));
      if (branch_taken) {
          goto L_08A95658;
      }
      goto L_08A95630;
    }
L_08A95630:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[23] << 6u);
    ctx.gpr[8] = (ctx.gpr[4] >> 8u);
    ctx.gpr[7] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[20] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A956B0;
      }
      goto L_08A95658;
    }
L_08A95658:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A956B0;
      }
      goto L_08A95660;
    }
L_08A95660:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-5));
      if (branch_taken) {
          goto L_08A956AC;
      }
      goto L_08A95668;
    }
L_08A95668:
    ctx.gpr[6] = (ctx.gpr[4] >> 16u);
    ctx.gpr[8] = (ctx.gpr[7] >> 8u);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[23]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(192));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[4] >> 8u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[20] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A956B0;
      }
      goto L_08A956AC;
    }
L_08A956AC:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    goto L_08A956B0;
L_08A956B0:
    if (ctx.gpr[23] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
        goto L_08A956DC;
    }
    goto L_08A956B8;
L_08A956B8:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A956CC;
      }
      goto L_08A956C0;
    }
L_08A956C0:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A956CCu);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08A956CCu) goto L_08A956CC;
    return;
L_08A956CC:
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[23]);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    goto L_08A956DC;
L_08A956DC:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08A95718;
    }
    goto L_08A956E4;
L_08A956E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A9579C;
      }
      goto L_08A95718;
    }
L_08A95718:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08A9579C;
      }
      goto L_08A9572C;
    }
L_08A9572C:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    ctx.gpr[9] = (ctx.gpr[9] << 16u);
    ctx.gpr[10] = (~(ctx.gpr[10] | 0u));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1)));
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    ctx.gpr[9] = (ctx.gpr[9] | ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[11] ^ 170u);
    ctx.gpr[10] = (ctx.gpr[10] << 8u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12196)));
    ctx.gpr[9] = (ctx.gpr[9] ^ ctx.gpr[10]);
    { const std::uint32_t dividend = ctx.gpr[9]; const std::uint32_t divisor = ctx.gpr[11]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[9] = (ctx.gpr[19] - ctx.gpr[6]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (ctx.gpr[9] & ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] << 2u);
    ctx.gpr[10] = (ctx.gpr[7] + ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    ctx.gpr[2] = (ctx.hi);
    ctx.gpr[2] = (ctx.gpr[2] << 2u);
    ctx.gpr[2] = (ctx.gpr[8] + ctx.gpr[2]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
      if (branch_taken) {
          goto L_08A9572C;
      }
      goto L_08A9579C;
    }
L_08A9579C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A957AC;
L_08A957AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
        goto L_08A95384;
    }
    goto L_08A957B8;
L_08A957B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    goto L_08A957BC;
L_08A957BC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[23] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A95838;
      }
      goto L_08A957D0;
    }
L_08A957D0:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_08A957DC;
L_08A957DC:
    ctx.gpr[4] = (ctx.gpr[23] & ctx.gpr[18]);
    ctx.gpr[16] = (0u | 112u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(113) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
        goto L_08A957F0;
    }
    goto L_08A957F0;
L_08A957F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[23] = (ctx.gpr[23] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A95820;
      }
      goto L_08A957FC;
    }
L_08A957FC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] >> 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(223));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A95818u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08A95818u) goto L_08A95818;
    return;
L_08A95818:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[17] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A95824;
      }
      goto L_08A95820;
    }
L_08A95820:
    ctx.gpr[20] = (ctx.gpr[17] + ctx.gpr[16]);
    goto L_08A95824;
L_08A95824:
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[23] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A957DC;
      }
      goto L_08A95838;
    }
L_08A95838:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A95854;
      }
      goto L_08A95844;
    }
L_08A95844:
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(252));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A95858;
      }
      goto L_08A95854;
    }
L_08A95854:
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    goto L_08A95858;
L_08A95858:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A95880;
      }
      goto L_08A95860;
    }
L_08A95860:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[16] = (ctx.gpr[17] + ctx.gpr[23]);
      if (branch_taken) {
          goto L_08A95878;
      }
      goto L_08A95868;
    }
L_08A95868:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A95878u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08A95878u) goto L_08A95878;
    return;
L_08A95878:
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (2222u << 16u);
    goto L_08A95880;
L_08A95880:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12204)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A95898;
      }
      goto L_08A9588C;
    }
L_08A9588C:
    ctx.gpr[31] = (0x08A95894u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 228u, 0x08AB1F4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A95894u) goto L_08A95894;
    return;
L_08A95894:
    ctx.gpr[4] = (2222u << 16u);
    goto L_08A95898;
L_08A95898:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12208)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
        goto L_08A958B0;
    }
    goto L_08A958A4;
L_08A958A4:
    ctx.gpr[31] = (0x08A958ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 228u, 0x08AB1F4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A958ACu) goto L_08A958AC;
    return;
L_08A958AC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_08A958B0;
L_08A958B0:
    ctx.gpr[2] = (ctx.gpr[20] - ctx.gpr[2]);
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
L_08A958E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[8] = (0u | 251u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A959F0;
      }
      goto L_08A95908;
    }
L_08A95908:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 254u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 144 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 181 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9598C;
      }
      goto L_08A9591C;
    }
L_08A9591C:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 48 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 16 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A95950;
      }
      goto L_08A95928;
    }
L_08A95928:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 31 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A959F0;
      }
      goto L_08A95930;
    }
L_08A95930:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-16));
      if (branch_taken) {
          goto L_08A959F0;
      }
      goto L_08A95938;
    }
L_08A95938:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2221u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-9104)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A95950:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 70 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 53 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A959F0;
      }
      goto L_08A9595C;
    }
L_08A9595C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-48));
      if (branch_taken) {
          goto L_08A959F0;
      }
      goto L_08A95964;
    }
L_08A95964:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A959F0;
      }
      goto L_08A9596C;
    }
L_08A9596C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A959F0;
      }
      goto L_08A95974;
    }
L_08A95974:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A959F0;
      }
      goto L_08A9597C;
    }
L_08A9597C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A959F0;
      }
      goto L_08A95984;
    }
L_08A95984:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A959F0;
      }
      goto L_08A9598C;
    }
L_08A9598C:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 159 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A959F0;
      }
      goto L_08A95994;
    }
L_08A95994:
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-144));
        goto L_08A959D0;
    }
    goto L_08A9599C;
L_08A9599C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 176 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-176));
      if (branch_taken) {
          goto L_08A959F0;
      }
      goto L_08A959A8;
    }
L_08A959A8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A959F0;
      }
      goto L_08A959B0;
    }
L_08A959B0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A959F0;
      }
      goto L_08A959B8;
    }
L_08A959B8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A959F0;
      }
      goto L_08A959C0;
    }
L_08A959C0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A959F0;
      }
      goto L_08A959C8;
    }
L_08A959C8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A959F0;
      }
      goto L_08A959D0;
    }
L_08A959D0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2221u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-9040)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A959E8:
    ctx.gpr[31] = (0x08A959F0u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08A95B98;
L_08A959F0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A959FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A95A0Cu);
    // nop
    goto L_08A958E4;
L_08A95A0C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A95A18:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (0u | 251u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A95B74;
      }
      goto L_08A95A28;
    }
L_08A95A28:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 254u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 144 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 181 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A95ADC;
      }
      goto L_08A95A3C;
    }
L_08A95A3C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 48 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 70 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A95A74;
      }
      goto L_08A95A48;
    }
L_08A95A48:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 31 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A95B74;
      }
      goto L_08A95A54;
    }
L_08A95A54:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16));
      if (branch_taken) {
          goto L_08A95B74;
      }
      goto L_08A95A5C;
    }
L_08A95A5C:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2221u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-8976)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A95A74:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 53 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A95AAC;
      }
      goto L_08A95A7C;
    }
L_08A95A7C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-48));
      if (branch_taken) {
          goto L_08A95B74;
      }
      goto L_08A95A84;
    }
L_08A95A84:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A95AB8;
      }
      goto L_08A95A8C;
    }
L_08A95A8C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A95B74;
      }
      goto L_08A95A94;
    }
L_08A95A94:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A95AB8;
      }
      goto L_08A95A9C;
    }
L_08A95A9C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A95B74;
      }
      goto L_08A95AA4;
    }
L_08A95AA4:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A95AB8;
      }
      goto L_08A95AAC;
    }
L_08A95AAC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 71 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A95B74;
      }
      goto L_08A95AB8;
    }
L_08A95AB8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[6] = (ctx.gpr[6] << 8u);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A95ADC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u | 198u);
      if (branch_taken) {
          goto L_08A95B20;
      }
      goto L_08A95AE4;
    }
L_08A95AE4:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 159 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 176 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A95B58;
      }
      goto L_08A95AF0;
    }
L_08A95AF0:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-176));
      if (branch_taken) {
          goto L_08A95B74;
      }
      goto L_08A95AF8;
    }
L_08A95AF8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A95B28;
      }
      goto L_08A95B00;
    }
L_08A95B00:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A95B74;
      }
      goto L_08A95B08;
    }
L_08A95B08:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A95B28;
      }
      goto L_08A95B10;
    }
L_08A95B10:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A95B74;
      }
      goto L_08A95B18;
    }
L_08A95B18:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A95B28;
      }
      goto L_08A95B20;
    }
L_08A95B20:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A95B74;
      }
      goto L_08A95B28;
    }
L_08A95B28:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (ctx.gpr[5] << 24u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[2] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (ctx.gpr[7] << 8u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A95B58:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-144));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2221u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-8912)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A95B74:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A95B98:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A95EAC;
      }
      goto L_08A95BA4;
    }
L_08A95BA4:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] << 8u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[8] & 32768u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[8] = (ctx.gpr[8] & 256u);
      if (branch_taken) {
          goto L_08A95C10;
      }
      goto L_08A95BC8;
    }
L_08A95BC8:
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
        goto L_08A95BD0;
    }
    goto L_08A95BD0;
L_08A95BD0:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] << 8u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] << 8u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] << 8u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (ctx.gpr[8] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A95C44;
      }
      goto L_08A95C10;
    }
L_08A95C10:
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(3));
        goto L_08A95C18;
    }
    goto L_08A95C18;
L_08A95C18:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] << 8u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] << 8u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (ctx.gpr[8] + ctx.gpr[2]);
    ctx.gpr[10] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08A95C44;
L_08A95C44:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_08A95C48;
L_08A95C48:
    ctx.gpr[8] = (ctx.gpr[9] & 128u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08A95CD8;
      }
      goto L_08A95C54;
    }
L_08A95C54:
    ctx.gpr[11] = (ctx.gpr[9] & 3u);
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[12] | 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[10] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A95C94;
      }
      goto L_08A95C70;
    }
L_08A95C70:
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[10] | 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[11] = (ctx.gpr[12] | 0u);
    ctx.gpr[12] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[12] | 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[10] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A95C70;
      }
      goto L_08A95C94;
    }
L_08A95C94:
    ctx.gpr[8] = (ctx.gpr[9] & 96u);
    ctx.gpr[8] = (ctx.gpr[8] << 3u);
    ctx.gpr[13] = (ctx.gpr[8] + ctx.gpr[13]);
    ctx.gpr[8] = (ctx.gpr[9] & 28u);
    ctx.gpr[11] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
    ctx.gpr[13] = (ctx.gpr[11] - ctx.gpr[13]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
    goto L_08A95CB4;
L_08A95CB4:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A95CB4;
      }
      goto L_08A95CD0;
    }
L_08A95CD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A95C48;
      }
      goto L_08A95CD8;
    }
L_08A95CD8:
    ctx.gpr[8] = (ctx.gpr[9] & 64u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (ctx.gpr[9] & 32u);
      if (branch_taken) {
          goto L_08A95D70;
      }
      goto L_08A95CE4;
    }
L_08A95CE4:
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> 6u));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[12] | 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[10] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A95D2C;
      }
      goto L_08A95D08;
    }
L_08A95D08:
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[10] | 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[11] = (ctx.gpr[12] | 0u);
    ctx.gpr[12] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[12] | 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[10] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A95D08;
      }
      goto L_08A95D2C;
    }
L_08A95D2C:
    ctx.gpr[8] = (ctx.gpr[13] & 63u);
    ctx.gpr[8] = (ctx.gpr[8] << 8u);
    ctx.gpr[13] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[3]);
    ctx.gpr[9] = (ctx.gpr[9] & 63u);
    ctx.gpr[13] = (ctx.gpr[13] - ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(3));
    goto L_08A95D48;
L_08A95D48:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A95D48;
      }
      goto L_08A95D64;
    }
L_08A95D64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A95C48;
      }
      goto L_08A95D6C;
    }
L_08A95D6C:
    ctx.gpr[8] = (ctx.gpr[9] & 32u);
    goto L_08A95D70;
L_08A95D70:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (ctx.gpr[9] & 31u);
      if (branch_taken) {
          goto L_08A95E24;
      }
      goto L_08A95D78;
    }
L_08A95D78:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[14] = (ctx.gpr[9] & 3u);
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (ctx.gpr[14] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[12] | 0u);
    { const bool branch_taken = ctx.gpr[14] == 0u;
    ctx.gpr[10] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A95DC8;
      }
      goto L_08A95DA4;
    }
L_08A95DA4:
    ctx.gpr[14] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[10] | 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[14]));
    ctx.gpr[14] = (ctx.gpr[12] | 0u);
    ctx.gpr[12] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[12] | 0u);
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.gpr[10] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A95DA4;
      }
      goto L_08A95DC8;
    }
L_08A95DC8:
    ctx.gpr[8] = (ctx.gpr[9] & 16u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 4u));
    ctx.gpr[8] = (ctx.gpr[8] << 16u);
    ctx.gpr[13] = (ctx.gpr[13] << 8u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[13]);
    ctx.gpr[9] = (ctx.gpr[9] & 12u);
    ctx.gpr[13] = (ctx.gpr[8] + ctx.gpr[3]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] << 8u);
    ctx.gpr[12] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[11]);
    ctx.gpr[13] = (ctx.gpr[12] - ctx.gpr[13]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    goto L_08A95DFC;
L_08A95DFC:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A95DFC;
      }
      goto L_08A95E18;
    }
L_08A95E18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A95C48;
      }
      goto L_08A95E20;
    }
L_08A95E20:
    ctx.gpr[8] = (ctx.gpr[9] & 31u);
    goto L_08A95E24;
L_08A95E24:
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.gpr[11] = (ctx.gpr[8] < static_cast<std::uint32_t>(113) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[9] = (ctx.gpr[9] & 3u);
      if (branch_taken) {
          goto L_08A95E7C;
      }
      goto L_08A95E38;
    }
L_08A95E38:
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    ctx.gpr[12] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[12] | 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[10] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A95C44;
      }
      goto L_08A95E4C;
    }
L_08A95E4C:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[10] | 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[12] | 0u);
    ctx.gpr[12] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[12] | 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[10] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A95E4C;
      }
      goto L_08A95E70;
    }
L_08A95E70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A95C48;
      }
      goto L_08A95E78;
    }
L_08A95E78:
    ctx.gpr[9] = (ctx.gpr[9] & 3u);
    goto L_08A95E7C;
L_08A95E7C:
    ctx.gpr[12] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[8] = (ctx.gpr[12] | 0u);
      if (branch_taken) {
          goto L_08A95EAC;
      }
      goto L_08A95E88;
    }
L_08A95E88:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[12] | 0u);
    ctx.gpr[12] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[10] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[12] | 0u);
      if (branch_taken) {
          goto L_08A95E88;
      }
      goto L_08A95EAC;
    }
L_08A95EAC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A95EB8;
      }
      goto L_08A95EB4;
    }
L_08A95EB4:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A95EB8;
L_08A95EB8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A95EC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A95EF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (16201u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4056));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (32640u << 16u);
      if (branch_taken) {
          goto L_08A95F84;
      }
      goto L_08A95F28;
    }
L_08A95F28:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A95F74;
      }
      goto L_08A95F34;
    }
L_08A95F34:
    ctx.gpr[31] = (0x08A95F3Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 180u, 0x08A9957Cu>(ctx, &aot_mem) && ctx.pc == 0x08A95F3Cu) goto L_08A95F3C;
    return;
L_08A95F3C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[2] & 3u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A95F98;
      }
      goto L_08A95F4C;
    }
L_08A95F4C:
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A95FCC;
    }
    goto L_08A95F54;
L_08A95F54:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A95F58;
L_08A95F58:
    ctx.gpr[4] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A95F68u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 362u, 0x08A9A49Cu>(ctx, &aot_mem) && ctx.pc == 0x08A95F68u) goto L_08A95F68;
    return;
L_08A95F68:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A95F74:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A95F84:
    ctx.gpr[31] = (0x08A95F8Cu);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 236u, 0x08A99B30u>(ctx, &aot_mem) && ctx.pc == 0x08A95F8Cu) goto L_08A95F8C;
    return;
L_08A95F8C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A95F98:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A95FE4;
      }
      goto L_08A95FA4;
    }
L_08A95FA4:
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A95F58;
    }
    goto L_08A95FAC;
L_08A95FAC:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A95FBCu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 236u, 0x08A99B30u>(ctx, &aot_mem) && ctx.pc == 0x08A95FBCu) goto L_08A95FBC;
    return;
L_08A95FBC:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) ^ 0x80000000u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A95FCC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A95FD8u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 236u, 0x08A99B30u>(ctx, &aot_mem) && ctx.pc == 0x08A95FD8u) goto L_08A95FD8;
    return;
L_08A95FD8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A95FE4:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A95FF8u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 362u, 0x08A9A49Cu>(ctx, &aot_mem) && ctx.pc == 0x08A95FF8u) goto L_08A95FF8;
    return;
L_08A95FF8:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) ^ 0x80000000u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96008:
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96020:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (16201u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4056));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (32640u << 16u);
      if (branch_taken) {
          goto L_08A960AC;
      }
      goto L_08A96050;
    }
L_08A96050:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9609C;
      }
      goto L_08A9605C;
    }
L_08A9605C:
    ctx.gpr[31] = (0x08A96064u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 180u, 0x08A9957Cu>(ctx, &aot_mem) && ctx.pc == 0x08A96064u) goto L_08A96064;
    return;
L_08A96064:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[2] & 3u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A960C4;
      }
      goto L_08A96074;
    }
L_08A96074:
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A960FC;
    }
    goto L_08A9607C;
L_08A9607C:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A96080;
L_08A96080:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A9608Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 236u, 0x08A99B30u>(ctx, &aot_mem) && ctx.pc == 0x08A9608Cu) goto L_08A9608C;
    return;
L_08A9608C:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) ^ 0x80000000u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9609C:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A960AC:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08A960B8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 362u, 0x08A9A49Cu>(ctx, &aot_mem) && ctx.pc == 0x08A960B8u) goto L_08A960B8;
    return;
L_08A960B8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A960C4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A96118;
      }
      goto L_08A960D0;
    }
L_08A960D0:
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A96080;
    }
    goto L_08A960D8;
L_08A960D8:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A960ECu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 362u, 0x08A9A49Cu>(ctx, &aot_mem) && ctx.pc == 0x08A960ECu) goto L_08A960EC;
    return;
L_08A960EC:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) ^ 0x80000000u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A960FC:
    ctx.gpr[4] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A9610Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 362u, 0x08A9A49Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9610Cu) goto L_08A9610C;
    return;
L_08A9610C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96118:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A96128u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 236u, 0x08A99B30u>(ctx, &aot_mem) && ctx.pc == 0x08A96128u) goto L_08A96128;
    return;
L_08A96128:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96134:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (16201u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4058));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (32640u << 16u);
      if (branch_taken) {
          goto L_08A96180;
      }
      goto L_08A96164;
    }
L_08A96164:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A96198;
      }
      goto L_08A96170;
    }
L_08A96170:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96180:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08A9618Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 369u, 0x08A9A59Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9618Cu) goto L_08A9618C;
    return;
L_08A9618C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96198:
    ctx.gpr[31] = (0x08A961A0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 180u, 0x08A9957Cu>(ctx, &aot_mem) && ctx.pc == 0x08A961A0u) goto L_08A961A0;
    return;
L_08A961A0:
    ctx.gpr[4] = (ctx.gpr[2] & 1u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[5] = (0u | 1u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A961BCu);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 369u, 0x08A9A59Cu>(ctx, &aot_mem) && ctx.pc == 0x08A961BCu) goto L_08A961BC;
    return;
L_08A961BC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A961C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[21]);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A96208u);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    goto L_08A97510;
L_08A96208:
    ctx.gpr[30] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(12304)));
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A96344;
      }
      goto L_08A96220;
    }
L_08A96220:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A9622Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 465u, 0x08A9B064u>(ctx, &aot_mem) && ctx.pc == 0x08A9622Cu) goto L_08A9622C;
    return;
L_08A9622C:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[3] = (ctx.gpr[23] | 0u);
        goto L_08A96348;
    }
    goto L_08A96234;
L_08A96234:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A96240u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 465u, 0x08A9B064u>(ctx, &aot_mem) && ctx.pc == 0x08A96240u) goto L_08A96240;
    return;
L_08A96240:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A96344;
      }
      goto L_08A96248;
    }
L_08A96248:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12220)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12216)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A96264u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 63u, 0x08AAC46Cu>(ctx, &aot_mem) && ctx.pc == 0x08A96264u) goto L_08A96264;
    return;
L_08A96264:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[3] = (ctx.gpr[23] | 0u);
        goto L_08A96348;
    }
    goto L_08A9626C;
L_08A9626C:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A96280u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 63u, 0x08AAC46Cu>(ctx, &aot_mem) && ctx.pc == 0x08A96280u) goto L_08A96280;
    return;
L_08A96280:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[3] = (ctx.gpr[23] | 0u);
        goto L_08A96348;
    }
    goto L_08A96288;
L_08A96288:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8848));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(12304)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A962D4;
      }
      goto L_08A962C4;
    }
L_08A962C4:
    ctx.gpr[31] = (0x08A962CCu);
    ctx.gpr[16] = (0u | 33u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 533u, 0x08A9B6ACu>(ctx, &aot_mem) && ctx.pc == 0x08A962CCu) goto L_08A962CC;
    return;
L_08A962CC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A962F0;
      }
      goto L_08A962D4;
    }
L_08A962D4:
    ctx.gpr[31] = (0x08A962DCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08A97244;
L_08A962DC:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_08A962F4;
    }
    goto L_08A962E4;
L_08A962E4:
    ctx.gpr[31] = (0x08A962ECu);
    ctx.gpr[16] = (0u | 33u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 533u, 0x08A9B6ACu>(ctx, &aot_mem) && ctx.pc == 0x08A962ECu) goto L_08A962EC;
    return;
L_08A962EC:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08A962F0;
L_08A962F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_08A962F4;
L_08A962F4:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
        goto L_08A96310;
    }
    goto L_08A962FC;
L_08A962FC:
    ctx.gpr[31] = (0x08A96304u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 533u, 0x08A9B6ACu>(ctx, &aot_mem) && ctx.pc == 0x08A96304u) goto L_08A96304;
    return;
L_08A96304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08A96310;
L_08A96310:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
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
L_08A96344:
    ctx.gpr[3] = (ctx.gpr[23] | 0u);
    goto L_08A96348;
L_08A96348:
    ctx.gpr[2] = (ctx.gpr[22] | 0u);
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
L_08A9637C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[21]);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A963BCu);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    goto L_08A97984;
L_08A963BC:
    ctx.gpr[30] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(12304)));
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A96500;
      }
      goto L_08A963D4;
    }
L_08A963D4:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A963E0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 465u, 0x08A9B064u>(ctx, &aot_mem) && ctx.pc == 0x08A963E0u) goto L_08A963E0;
    return;
L_08A963E0:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[3] = (ctx.gpr[23] | 0u);
        goto L_08A96504;
    }
    goto L_08A963E8;
L_08A963E8:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A963F4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 465u, 0x08A9B064u>(ctx, &aot_mem) && ctx.pc == 0x08A963F4u) goto L_08A963F4;
    return;
L_08A963F4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A96500;
      }
      goto L_08A963FC;
    }
L_08A963FC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12228)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12224)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A96418u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 63u, 0x08AAC46Cu>(ctx, &aot_mem) && ctx.pc == 0x08A96418u) goto L_08A96418;
    return;
L_08A96418:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A96500;
      }
      goto L_08A96420;
    }
L_08A96420:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8840));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(12304)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
      if (branch_taken) {
          goto L_08A96458;
      }
      goto L_08A9644C;
    }
L_08A9644C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
      if (branch_taken) {
          goto L_08A96474;
      }
      goto L_08A96458;
    }
L_08A96458:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9646Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 30u, 0x08AAC248u>(ctx, &aot_mem) && ctx.pc == 0x08A9646Cu) goto L_08A9646C;
    return;
L_08A9646C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    goto L_08A96474;
L_08A96474:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A96490;
      }
      goto L_08A96480;
    }
L_08A96480:
    ctx.gpr[31] = (0x08A96488u);
    ctx.gpr[16] = (0u | 33u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 533u, 0x08A9B6ACu>(ctx, &aot_mem) && ctx.pc == 0x08A96488u) goto L_08A96488;
    return;
L_08A96488:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A964AC;
      }
      goto L_08A96490;
    }
L_08A96490:
    ctx.gpr[31] = (0x08A96498u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08A97244;
L_08A96498:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_08A964B0;
    }
    goto L_08A964A0;
L_08A964A0:
    ctx.gpr[31] = (0x08A964A8u);
    ctx.gpr[16] = (0u | 33u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 533u, 0x08A9B6ACu>(ctx, &aot_mem) && ctx.pc == 0x08A964A8u) goto L_08A964A8;
    return;
L_08A964A8:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08A964AC;
L_08A964AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_08A964B0;
L_08A964B0:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
        goto L_08A964CC;
    }
    goto L_08A964B8;
L_08A964B8:
    ctx.gpr[31] = (0x08A964C0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 533u, 0x08A9B6ACu>(ctx, &aot_mem) && ctx.pc == 0x08A964C0u) goto L_08A964C0;
    return;
L_08A964C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08A964CC;
L_08A964CC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
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
L_08A96500:
    ctx.gpr[3] = (ctx.gpr[23] | 0u);
    goto L_08A96504;
L_08A96504:
    ctx.gpr[2] = (ctx.gpr[22] | 0u);
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
L_08A96538:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A96554u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A97DF0;
L_08A96554:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12304)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A96654;
      }
      goto L_08A96568;
    }
L_08A96568:
    ctx.gpr[31] = (0x08A96570u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 510u, 0x08A9B49Cu>(ctx, &aot_mem) && ctx.pc == 0x08A96570u) goto L_08A96570;
    return;
L_08A96570:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A96654;
      }
      goto L_08A96578;
    }
L_08A96578:
    ctx.gpr[31] = (0x08A96580u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A96008;
L_08A96580:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A96654;
      }
      goto L_08A96598;
    }
L_08A96598:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8832));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A965B4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 663u, 0x08AABA60u>(ctx, &aot_mem) && ctx.pc == 0x08A965B4u) goto L_08A965B4;
    return;
L_08A965B4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12236)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12232)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12304)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A965F8;
      }
      goto L_08A965E8;
    }
L_08A965E8:
    ctx.gpr[31] = (0x08A965F0u);
    ctx.gpr[16] = (0u | 33u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 533u, 0x08A9B6ACu>(ctx, &aot_mem) && ctx.pc == 0x08A965F0u) goto L_08A965F0;
    return;
L_08A965F0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A96614;
      }
      goto L_08A965F8;
    }
L_08A965F8:
    ctx.gpr[31] = (0x08A96600u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08A97244;
L_08A96600:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_08A96618;
    }
    goto L_08A96608;
L_08A96608:
    ctx.gpr[31] = (0x08A96610u);
    ctx.gpr[16] = (0u | 33u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 533u, 0x08A9B6ACu>(ctx, &aot_mem) && ctx.pc == 0x08A96610u) goto L_08A96610;
    return;
L_08A96610:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08A96614;
L_08A96614:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_08A96618;
L_08A96618:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
        goto L_08A96634;
    }
    goto L_08A96620;
L_08A96620:
    ctx.gpr[31] = (0x08A96628u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 533u, 0x08A9B6ACu>(ctx, &aot_mem) && ctx.pc == 0x08A96628u) goto L_08A96628;
    return;
L_08A96628:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08A96634;
L_08A96634:
    ctx.gpr[31] = (0x08A9663Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A9663Cu) goto L_08A9663C;
    return;
L_08A9663C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96654:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96670:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9668Cu);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 7u, 0x08A98254u>(ctx, &aot_mem) && ctx.pc == 0x08A9668Cu) goto L_08A9668C;
    return;
L_08A9668C:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12304)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A9678C;
      }
      goto L_08A966A0;
    }
L_08A966A0:
    ctx.gpr[31] = (0x08A966A8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 510u, 0x08A9B49Cu>(ctx, &aot_mem) && ctx.pc == 0x08A966A8u) goto L_08A966A8;
    return;
L_08A966A8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9678C;
      }
      goto L_08A966B0;
    }
L_08A966B0:
    ctx.gpr[31] = (0x08A966B8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A96008;
L_08A966B8:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A9678C;
      }
      goto L_08A966D0;
    }
L_08A966D0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8824));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A966ECu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 663u, 0x08AABA60u>(ctx, &aot_mem) && ctx.pc == 0x08A966ECu) goto L_08A966EC;
    return;
L_08A966EC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12244)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12240)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12304)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A96730;
      }
      goto L_08A96720;
    }
L_08A96720:
    ctx.gpr[31] = (0x08A96728u);
    ctx.gpr[16] = (0u | 33u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 533u, 0x08A9B6ACu>(ctx, &aot_mem) && ctx.pc == 0x08A96728u) goto L_08A96728;
    return;
L_08A96728:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A9674C;
      }
      goto L_08A96730;
    }
L_08A96730:
    ctx.gpr[31] = (0x08A96738u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08A97244;
L_08A96738:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_08A96750;
    }
    goto L_08A96740;
L_08A96740:
    ctx.gpr[31] = (0x08A96748u);
    ctx.gpr[16] = (0u | 33u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 533u, 0x08A9B6ACu>(ctx, &aot_mem) && ctx.pc == 0x08A96748u) goto L_08A96748;
    return;
L_08A96748:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08A9674C;
L_08A9674C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_08A96750;
L_08A96750:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
        goto L_08A9676C;
    }
    goto L_08A96758;
L_08A96758:
    ctx.gpr[31] = (0x08A96760u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 533u, 0x08A9B6ACu>(ctx, &aot_mem) && ctx.pc == 0x08A96760u) goto L_08A96760;
    return;
L_08A96760:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08A9676C;
L_08A9676C:
    ctx.gpr[31] = (0x08A96774u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A96774u) goto L_08A96774;
    return;
L_08A96774:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9678C:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A967A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A967CCu);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 25u, 0x08A98624u>(ctx, &aot_mem) && ctx.pc == 0x08A967CCu) goto L_08A967CC;
    return;
L_08A967CC:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12304)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A968EC;
      }
      goto L_08A967E0;
    }
L_08A967E0:
    ctx.gpr[31] = (0x08A967E8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 510u, 0x08A9B49Cu>(ctx, &aot_mem) && ctx.pc == 0x08A967E8u) goto L_08A967E8;
    return;
L_08A967E8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A968EC;
      }
      goto L_08A967F0;
    }
L_08A967F0:
    ctx.gpr[31] = (0x08A967F8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 510u, 0x08A9B49Cu>(ctx, &aot_mem) && ctx.pc == 0x08A967F8u) goto L_08A967F8;
    return;
L_08A967F8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A968EC;
      }
      goto L_08A96800;
    }
L_08A96800:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[12])) && ctx.fpr[20] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A968EC;
      }
      goto L_08A96814;
    }
L_08A96814:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[12])) && ctx.fpr[22] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A968EC;
      }
      goto L_08A96824;
    }
L_08A96824:
    ctx.gpr[31] = (0x08A9682Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 663u, 0x08AABA60u>(ctx, &aot_mem) && ctx.pc == 0x08A9682Cu) goto L_08A9682C;
    return;
L_08A9682C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A9683Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 663u, 0x08AABA60u>(ctx, &aot_mem) && ctx.pc == 0x08A9683Cu) goto L_08A9683C;
    return;
L_08A9683C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12252)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8816));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12248)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12304)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A9688C;
      }
      goto L_08A9687C;
    }
L_08A9687C:
    ctx.gpr[31] = (0x08A96884u);
    ctx.gpr[16] = (0u | 33u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 533u, 0x08A9B6ACu>(ctx, &aot_mem) && ctx.pc == 0x08A96884u) goto L_08A96884;
    return;
L_08A96884:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A968A8;
      }
      goto L_08A9688C;
    }
L_08A9688C:
    ctx.gpr[31] = (0x08A96894u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08A97244;
L_08A96894:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_08A968AC;
    }
    goto L_08A9689C;
L_08A9689C:
    ctx.gpr[31] = (0x08A968A4u);
    ctx.gpr[16] = (0u | 33u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 533u, 0x08A9B6ACu>(ctx, &aot_mem) && ctx.pc == 0x08A968A4u) goto L_08A968A4;
    return;
L_08A968A4:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08A968A8;
L_08A968A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_08A968AC;
L_08A968AC:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
        goto L_08A968C8;
    }
    goto L_08A968B4;
L_08A968B4:
    ctx.gpr[31] = (0x08A968BCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 533u, 0x08A9B6ACu>(ctx, &aot_mem) && ctx.pc == 0x08A968BCu) goto L_08A968BC;
    return;
L_08A968BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08A968C8;
L_08A968C8:
    ctx.gpr[31] = (0x08A968D0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A968D0u) goto L_08A968D0;
    return;
L_08A968D0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A968EC:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9690C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9694Cu);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 85u, 0x08A989B8u>(ctx, &aot_mem) && ctx.pc == 0x08A9694Cu) goto L_08A9694C;
    return;
L_08A9694C:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12304)));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A970BC;
      }
      goto L_08A96960;
    }
L_08A96960:
    ctx.gpr[31] = (0x08A96968u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 510u, 0x08A9B49Cu>(ctx, &aot_mem) && ctx.pc == 0x08A96968u) goto L_08A96968;
    return;
L_08A96968:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A970BC;
      }
      goto L_08A96970;
    }
L_08A96970:
    ctx.gpr[31] = (0x08A96978u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 510u, 0x08A9B49Cu>(ctx, &aot_mem) && ctx.pc == 0x08A96978u) goto L_08A96978;
    return;
L_08A96978:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[26] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A96A7C;
      }
      goto L_08A96980;
    }
L_08A96980:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[26])) && ctx.fpr[22] == ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A970BC;
      }
      goto L_08A96990;
    }
L_08A96990:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8808));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A969ACu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 663u, 0x08AABA60u>(ctx, &aot_mem) && ctx.pc == 0x08A969ACu) goto L_08A969AC;
    return;
L_08A969AC:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[31] = (0x08A969C4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 663u, 0x08AABA60u>(ctx, &aot_mem) && ctx.pc == 0x08A969C4u) goto L_08A969C4;
    return;
L_08A969C4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12304)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A969E8;
      }
      goto L_08A969DC;
    }
L_08A969DC:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A96A00;
      }
      goto L_08A969E8;
    }
L_08A969E8:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12260)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12256)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A96A1C;
      }
      goto L_08A96A00;
    }
L_08A96A00:
    ctx.gpr[31] = (0x08A96A08u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08A97244;
L_08A96A08:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_08A96A20;
    }
    goto L_08A96A10;
L_08A96A10:
    ctx.gpr[31] = (0x08A96A18u);
    ctx.gpr[16] = (0u | 33u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 533u, 0x08A9B6ACu>(ctx, &aot_mem) && ctx.pc == 0x08A96A18u) goto L_08A96A18;
    return;
L_08A96A18:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08A96A1C;
L_08A96A1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_08A96A20;
L_08A96A20:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
        goto L_08A96A3C;
    }
    goto L_08A96A28;
L_08A96A28:
    ctx.gpr[31] = (0x08A96A30u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 533u, 0x08A9B6ACu>(ctx, &aot_mem) && ctx.pc == 0x08A96A30u) goto L_08A96A30;
    return;
L_08A96A30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08A96A3C;
L_08A96A3C:
    ctx.gpr[31] = (0x08A96A44u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A96A44u) goto L_08A96A44;
    return;
L_08A96A44:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96A7C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[26])) && ctx.fpr[20] == ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A96CA4;
      }
      goto L_08A96A8C;
    }
L_08A96A8C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[26])) && ctx.fpr[22] == ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A96B80;
      }
      goto L_08A96A9C;
    }
L_08A96A9C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8808));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A96AB8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 663u, 0x08AABA60u>(ctx, &aot_mem) && ctx.pc == 0x08A96AB8u) goto L_08A96AB8;
    return;
L_08A96AB8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A96AC8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 663u, 0x08AABA60u>(ctx, &aot_mem) && ctx.pc == 0x08A96AC8u) goto L_08A96AC8;
    return;
L_08A96AC8:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12268)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12264)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12304)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A96B04;
      }
      goto L_08A96AEC;
    }
L_08A96AEC:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12260)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12256)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A96B20;
      }
      goto L_08A96B04;
    }
L_08A96B04:
    ctx.gpr[31] = (0x08A96B0Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08A97244;
L_08A96B0C:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_08A96B24;
    }
    goto L_08A96B14;
L_08A96B14:
    ctx.gpr[31] = (0x08A96B1Cu);
    ctx.gpr[16] = (0u | 33u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 533u, 0x08A9B6ACu>(ctx, &aot_mem) && ctx.pc == 0x08A96B1Cu) goto L_08A96B1C;
    return;
L_08A96B1C:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08A96B20;
L_08A96B20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_08A96B24;
L_08A96B24:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
        goto L_08A96B40;
    }
    goto L_08A96B2C;
L_08A96B2C:
    ctx.gpr[31] = (0x08A96B34u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 533u, 0x08A9B6ACu>(ctx, &aot_mem) && ctx.pc == 0x08A96B34u) goto L_08A96B34;
    return;
L_08A96B34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08A96B40;
L_08A96B40:
    ctx.gpr[31] = (0x08A96B48u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A96B48u) goto L_08A96B48;
    return;
L_08A96B48:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96B80:
    ctx.gpr[31] = (0x08A96B88u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08A974F0;
L_08A96B88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A970BC;
      }
      goto L_08A96B90;
    }
L_08A96B90:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A970BC;
      }
      goto L_08A96BA0;
    }
L_08A96BA0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8808));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A96BBCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 663u, 0x08AABA60u>(ctx, &aot_mem) && ctx.pc == 0x08A96BBCu) goto L_08A96BBC;
    return;
L_08A96BBC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A96BCCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 663u, 0x08AABA60u>(ctx, &aot_mem) && ctx.pc == 0x08A96BCCu) goto L_08A96BCC;
    return;
L_08A96BCC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12304)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[16] = (0u | 2u);
      if (branch_taken) {
          goto L_08A96BF8;
      }
      goto L_08A96BE0;
    }
L_08A96BE0:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12268)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12264)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A96C10;
      }
      goto L_08A96BF8;
    }
L_08A96BF8:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(14092)));
    ctx.gpr[31] = (0x08A96C08u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(14088)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 95u, 0x08AAC678u>(ctx, &aot_mem) && ctx.pc == 0x08A96C08u) goto L_08A96C08;
    return;
L_08A96C08:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    goto L_08A96C10;
L_08A96C10:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A96C28;
      }
      goto L_08A96C18;
    }
L_08A96C18:
    ctx.gpr[31] = (0x08A96C20u);
    ctx.gpr[16] = (0u | 33u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 533u, 0x08A9B6ACu>(ctx, &aot_mem) && ctx.pc == 0x08A96C20u) goto L_08A96C20;
    return;
L_08A96C20:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A96C44;
      }
      goto L_08A96C28;
    }
L_08A96C28:
    ctx.gpr[31] = (0x08A96C30u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08A97244;
L_08A96C30:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_08A96C48;
    }
    goto L_08A96C38;
L_08A96C38:
    ctx.gpr[31] = (0x08A96C40u);
    ctx.gpr[16] = (0u | 33u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 533u, 0x08A9B6ACu>(ctx, &aot_mem) && ctx.pc == 0x08A96C40u) goto L_08A96C40;
    return;
L_08A96C40:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08A96C44;
L_08A96C44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_08A96C48;
L_08A96C48:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
        goto L_08A96C64;
    }
    goto L_08A96C50;
L_08A96C50:
    ctx.gpr[31] = (0x08A96C58u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 533u, 0x08A9B6ACu>(ctx, &aot_mem) && ctx.pc == 0x08A96C58u) goto L_08A96C58;
    return;
L_08A96C58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08A96C64;
L_08A96C64:
    ctx.gpr[31] = (0x08A96C6Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A96C6Cu) goto L_08A96C6C;
    return;
L_08A96C6C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96CA4:
    ctx.gpr[31] = (0x08A96CACu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_08A974F0;
L_08A96CAC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A96FA8;
      }
      goto L_08A96CB4;
    }
L_08A96CB4:
    ctx.gpr[31] = (0x08A96CBCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A974F0;
L_08A96CBC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96FA8;
      }
      goto L_08A96CC4;
    }
L_08A96CC4:
    ctx.gpr[31] = (0x08A96CCCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08A974F0;
L_08A96CCC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96FA8;
      }
      goto L_08A96CD4;
    }
L_08A96CD4:
    ctx.gpr[31] = (0x08A96CDCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 510u, 0x08A9B49Cu>(ctx, &aot_mem) && ctx.pc == 0x08A96CDCu) goto L_08A96CDC;
    return;
L_08A96CDC:
    ctx.gpr[18] = (2221u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12304)));
    ctx.gpr[31] = (0x08A96CF4u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-8808));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 663u, 0x08AABA60u>(ctx, &aot_mem) && ctx.pc == 0x08A96CF4u) goto L_08A96CF4;
    return;
L_08A96CF4:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A96D04u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 663u, 0x08AABA60u>(ctx, &aot_mem) && ctx.pc == 0x08A96D04u) goto L_08A96D04;
    return;
L_08A96D04:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[19] = (0u | 2u);
      if (branch_taken) {
          goto L_08A96DF8;
      }
      goto L_08A96D14;
    }
L_08A96D14:
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12268)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12264)));
      if (branch_taken) {
          goto L_08A96D50;
      }
      goto L_08A96D44;
    }
L_08A96D44:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A96D64;
      }
      goto L_08A96D50;
    }
L_08A96D50:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A96D5Cu);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 30u, 0x08AAC248u>(ctx, &aot_mem) && ctx.pc == 0x08A96D5Cu) goto L_08A96D5C;
    return;
L_08A96D5C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    goto L_08A96D64;
L_08A96D64:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A96D7C;
      }
      goto L_08A96D6C;
    }
L_08A96D6C:
    ctx.gpr[31] = (0x08A96D74u);
    ctx.gpr[16] = (0u | 33u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 533u, 0x08A9B6ACu>(ctx, &aot_mem) && ctx.pc == 0x08A96D74u) goto L_08A96D74;
    return;
L_08A96D74:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A96D98;
      }
      goto L_08A96D7C;
    }
L_08A96D7C:
    ctx.gpr[31] = (0x08A96D84u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08A97244;
L_08A96D84:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_08A96D9C;
    }
    goto L_08A96D8C;
L_08A96D8C:
    ctx.gpr[31] = (0x08A96D94u);
    ctx.gpr[16] = (0u | 33u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 533u, 0x08A9B6ACu>(ctx, &aot_mem) && ctx.pc == 0x08A96D94u) goto L_08A96D94;
    return;
L_08A96D94:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08A96D98;
L_08A96D98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_08A96D9C;
L_08A96D9C:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
        goto L_08A96DB8;
    }
    goto L_08A96DA4;
L_08A96DA4:
    ctx.gpr[31] = (0x08A96DACu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 533u, 0x08A9B6ACu>(ctx, &aot_mem) && ctx.pc == 0x08A96DACu) goto L_08A96DAC;
    return;
L_08A96DAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08A96DB8;
L_08A96DB8:
    ctx.gpr[31] = (0x08A96DC0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A96DC0u) goto L_08A96DC0;
    return;
L_08A96DC0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96DF8:
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12284)));
    ctx.gpr[31] = (0x08A96E28u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12280)));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 722u, 0x08AABED0u>(ctx, &aot_mem) && ctx.pc == 0x08A96E28u) goto L_08A96E28;
    return;
L_08A96E28:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A96E34u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A96E34u) goto L_08A96E34;
    return;
L_08A96E34:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A96EA8;
      }
      goto L_08A96E3C;
    }
L_08A96E3C:
    ctx.gpr[4] = (2222u << 16u);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[26]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12276)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12272)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A96F14;
      }
      goto L_08A96E58;
    }
L_08A96E58:
    ctx.gpr[31] = (0x08A96E60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 663u, 0x08AABA60u>(ctx, &aot_mem) && ctx.pc == 0x08A96E60u) goto L_08A96E60;
    return;
L_08A96E60:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A96E74u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08A9724C;
L_08A96E74:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12304)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A96E8Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 63u, 0x08AAC46Cu>(ctx, &aot_mem) && ctx.pc == 0x08A96E8Cu) goto L_08A96E8C;
    return;
L_08A96E8C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A96F14;
      }
      goto L_08A96E94;
    }
L_08A96E94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12292)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12288)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A96F14;
      }
      goto L_08A96EA8;
    }
L_08A96EA8:
    ctx.gpr[18] = (2222u << 16u);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[26]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(14092)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(14088)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A96F14;
      }
      goto L_08A96EC4;
    }
L_08A96EC4:
    ctx.gpr[31] = (0x08A96ECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 663u, 0x08AABA60u>(ctx, &aot_mem) && ctx.pc == 0x08A96ECCu) goto L_08A96ECC;
    return;
L_08A96ECC:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A96EE0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08A9724C;
L_08A96EE0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12304)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A96EF8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 63u, 0x08AAC46Cu>(ctx, &aot_mem) && ctx.pc == 0x08A96EF8u) goto L_08A96EF8;
    return;
L_08A96EF8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96F14;
      }
      goto L_08A96F00;
    }
L_08A96F00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(14092)));
    ctx.gpr[31] = (0x08A96F0Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(14088)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 95u, 0x08AAC678u>(ctx, &aot_mem) && ctx.pc == 0x08A96F0Cu) goto L_08A96F0C;
    return;
L_08A96F0C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    goto L_08A96F14;
L_08A96F14:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A96F2C;
      }
      goto L_08A96F1C;
    }
L_08A96F1C:
    ctx.gpr[31] = (0x08A96F24u);
    ctx.gpr[16] = (0u | 34u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 533u, 0x08A9B6ACu>(ctx, &aot_mem) && ctx.pc == 0x08A96F24u) goto L_08A96F24;
    return;
L_08A96F24:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A96F48;
      }
      goto L_08A96F2C;
    }
L_08A96F2C:
    ctx.gpr[31] = (0x08A96F34u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08A97244;
L_08A96F34:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_08A96F4C;
    }
    goto L_08A96F3C;
L_08A96F3C:
    ctx.gpr[31] = (0x08A96F44u);
    ctx.gpr[16] = (0u | 34u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 533u, 0x08A9B6ACu>(ctx, &aot_mem) && ctx.pc == 0x08A96F44u) goto L_08A96F44;
    return;
L_08A96F44:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08A96F48;
L_08A96F48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_08A96F4C;
L_08A96F4C:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
        goto L_08A96F68;
    }
    goto L_08A96F54;
L_08A96F54:
    ctx.gpr[31] = (0x08A96F5Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 533u, 0x08A9B6ACu>(ctx, &aot_mem) && ctx.pc == 0x08A96F5Cu) goto L_08A96F5C;
    return;
L_08A96F5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08A96F68;
L_08A96F68:
    ctx.gpr[31] = (0x08A96F70u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A96F70u) goto L_08A96F70;
    return;
L_08A96F70:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96FA8:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[24]) || std::isnan(ctx.fpr[26])) && ctx.fpr[24] == ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A970BC;
      }
      goto L_08A96FB8;
    }
L_08A96FB8:
    ctx.gpr[31] = (0x08A96FC0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A974F0;
L_08A96FC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A970BC;
      }
      goto L_08A96FC8;
    }
L_08A96FC8:
    ctx.gpr[31] = (0x08A96FD0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08A974F0;
L_08A96FD0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_08A970BC;
      }
      goto L_08A96FD8;
    }
L_08A96FD8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8808));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A96FF4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 663u, 0x08AABA60u>(ctx, &aot_mem) && ctx.pc == 0x08A96FF4u) goto L_08A96FF4;
    return;
L_08A96FF4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A97004u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 663u, 0x08AABA60u>(ctx, &aot_mem) && ctx.pc == 0x08A97004u) goto L_08A97004;
    return;
L_08A97004:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12268)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12264)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12304)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A97040;
      }
      goto L_08A97030;
    }
L_08A97030:
    ctx.gpr[31] = (0x08A97038u);
    ctx.gpr[16] = (0u | 34u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 533u, 0x08A9B6ACu>(ctx, &aot_mem) && ctx.pc == 0x08A97038u) goto L_08A97038;
    return;
L_08A97038:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A9705C;
      }
      goto L_08A97040;
    }
L_08A97040:
    ctx.gpr[31] = (0x08A97048u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08A97244;
L_08A97048:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_08A97060;
    }
    goto L_08A97050;
L_08A97050:
    ctx.gpr[31] = (0x08A97058u);
    ctx.gpr[16] = (0u | 34u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 533u, 0x08A9B6ACu>(ctx, &aot_mem) && ctx.pc == 0x08A97058u) goto L_08A97058;
    return;
L_08A97058:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08A9705C;
L_08A9705C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_08A97060;
L_08A97060:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
        goto L_08A9707C;
    }
    goto L_08A97068;
L_08A97068:
    ctx.gpr[31] = (0x08A97070u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 533u, 0x08A9B6ACu>(ctx, &aot_mem) && ctx.pc == 0x08A97070u) goto L_08A97070;
    return;
L_08A97070:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08A9707C;
L_08A9707C:
    ctx.gpr[31] = (0x08A97084u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A97084u) goto L_08A97084;
    return;
L_08A97084:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A970BC:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A970F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A97114u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 214u, 0x08A999F0u>(ctx, &aot_mem) && ctx.pc == 0x08A97114u) goto L_08A97114;
    return;
L_08A97114:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12304)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A97228;
      }
      goto L_08A97128;
    }
L_08A97128:
    ctx.gpr[31] = (0x08A97130u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 510u, 0x08A9B49Cu>(ctx, &aot_mem) && ctx.pc == 0x08A97130u) goto L_08A97130;
    return;
L_08A97130:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97228;
      }
      goto L_08A97138;
    }
L_08A97138:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A97228;
      }
      goto L_08A9714C;
    }
L_08A9714C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8800));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A97168u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 663u, 0x08AABA60u>(ctx, &aot_mem) && ctx.pc == 0x08A97168u) goto L_08A97168;
    return;
L_08A97168:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12304)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12300)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12296)));
      if (branch_taken) {
          goto L_08A97198;
      }
      goto L_08A9718C;
    }
L_08A9718C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A971B0;
      }
      goto L_08A97198;
    }
L_08A97198:
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A971A8u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 30u, 0x08AAC248u>(ctx, &aot_mem) && ctx.pc == 0x08A971A8u) goto L_08A971A8;
    return;
L_08A971A8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    goto L_08A971B0;
L_08A971B0:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A971CC;
      }
      goto L_08A971BC;
    }
L_08A971BC:
    ctx.gpr[31] = (0x08A971C4u);
    ctx.gpr[16] = (0u | 33u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 533u, 0x08A9B6ACu>(ctx, &aot_mem) && ctx.pc == 0x08A971C4u) goto L_08A971C4;
    return;
L_08A971C4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A971E8;
      }
      goto L_08A971CC;
    }
L_08A971CC:
    ctx.gpr[31] = (0x08A971D4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08A97244;
L_08A971D4:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_08A971EC;
    }
    goto L_08A971DC;
L_08A971DC:
    ctx.gpr[31] = (0x08A971E4u);
    ctx.gpr[16] = (0u | 33u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 533u, 0x08A9B6ACu>(ctx, &aot_mem) && ctx.pc == 0x08A971E4u) goto L_08A971E4;
    return;
L_08A971E4:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08A971E8;
L_08A971E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_08A971EC;
L_08A971EC:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
        goto L_08A97208;
    }
    goto L_08A971F4;
L_08A971F4:
    ctx.gpr[31] = (0x08A971FCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 533u, 0x08A9B6ACu>(ctx, &aot_mem) && ctx.pc == 0x08A971FCu) goto L_08A971FC;
    return;
L_08A971FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08A97208;
L_08A97208:
    ctx.gpr[31] = (0x08A97210u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A97210u) goto L_08A97210;
    return;
L_08A97210:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97228:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97244:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9724C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 20u));
    ctx.gpr[8] = (ctx.gpr[8] & 2047u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1023));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[16] & 1u);
    ctx.gpr[3] = (ctx.gpr[5] | 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 20 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A973DC;
      }
      goto L_08A97298;
    }
L_08A97298:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) >= 0;
    ctx.gpr[4] = (16u << 16u);
      if (branch_taken) {
          goto L_08A97378;
      }
      goto L_08A972A0;
    }
L_08A972A0:
    ctx.gpr[17] = (32768u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16u << 16u);
      if (branch_taken) {
          goto L_08A97474;
      }
      goto L_08A972B8;
    }
L_08A972B8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] | ctx.gpr[4]);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[7] = (65534u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] >> 12u);
    ctx.gpr[6] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12312));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A9731Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 712u, 0x08AABDF4u>(ctx, &aot_mem) && ctx.pc == 0x08A9731Cu) goto L_08A9731C;
    return;
L_08A9731C:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A97330u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 717u, 0x08AABE5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A97330u) goto L_08A97330;
    return;
L_08A97330:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] << 31u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
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
L_08A97378:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> (ctx.gpr[8] & 31u)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[10] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A97474;
      }
      goto L_08A97390;
    }
L_08A97390:
    ctx.gpr[9] = (ctx.gpr[16] << 3u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(12312));
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A974A4;
      }
      goto L_08A973B4;
    }
L_08A973B4:
    ctx.gpr[5] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[5];
    ctx.gpr[4] = (~(ctx.gpr[4] | 0u));
      if (branch_taken) {
          goto L_08A973C8;
      }
      goto L_08A973C0;
    }
L_08A973C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (16384u << 16u);
      if (branch_taken) {
          goto L_08A974A4;
      }
      goto L_08A973C8;
    }
L_08A973C8:
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[4]);
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> (ctx.gpr[8] & 31u)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A974A4;
      }
      goto L_08A973DC;
    }
L_08A973DC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[8]) < 52 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-20));
        goto L_08A97438;
    }
    goto L_08A973E8;
L_08A973E8:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (0u | 1024u);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A97414;
      }
      goto L_08A973F8;
    }
L_08A973F8:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A9740Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 712u, 0x08AABDF4u>(ctx, &aot_mem) && ctx.pc == 0x08A9740Cu) goto L_08A9740C;
    return;
L_08A9740C:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08A97414;
L_08A97414:
    ctx.gpr[3] = (ctx.gpr[5] | 0u);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
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
L_08A97438:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] >> (ctx.gpr[8] & 31u));
    ctx.gpr[5] = (ctx.gpr[7] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[9] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A97474;
      }
      goto L_08A9744C;
    }
L_08A9744C:
    ctx.gpr[5] = (ctx.gpr[16] << 3u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(12312));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (ctx.gpr[7] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A97490;
      }
      goto L_08A9746C;
    }
L_08A9746C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A974A8;
      }
      goto L_08A97474;
    }
L_08A97474:
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
L_08A97490:
    ctx.gpr[4] = (~(ctx.gpr[4] | 0u));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> (ctx.gpr[8] & 31u)));
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[4]);
    goto L_08A974A4;
L_08A974A4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    goto L_08A974A8;
L_08A974A8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A974C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 712u, 0x08AABDF4u>(ctx, &aot_mem) && ctx.pc == 0x08A974C0u) goto L_08A974C0;
    return;
L_08A974C0:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A974D4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 717u, 0x08AABE5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A974D4u) goto L_08A974D4;
    return;
L_08A974D4:
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
L_08A974F0:
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (32640u << 16u);
    ctx.gpr[2] = (ctx.gpr[4] - ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] >> 31u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97510:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (32768u << 16u);
    ctx.gpr[15] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (0u - ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[11] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[12] = (ctx.gpr[10] & ctx.gpr[15]);
    ctx.gpr[8] = (ctx.gpr[8] >> 31u);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (ctx.gpr[12] | ctx.gpr[8]);
    ctx.gpr[24] = (32752u << 16u);
    ctx.gpr[25] = (ctx.gpr[24] < ctx.gpr[8] ? 1u : 0u);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[15] = (ctx.gpr[13] & ctx.gpr[15]);
    ctx.gpr[3] = (ctx.gpr[5] | 0u);
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[25] != 0u;
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A975E4;
      }
      goto L_08A97578;
    }
L_08A97578:
    ctx.gpr[4] = (0u - ctx.gpr[14]);
    ctx.gpr[4] = (ctx.gpr[14] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] >> 31u);
    ctx.gpr[4] = (ctx.gpr[15] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[24] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (16368u << 16u);
      if (branch_taken) {
          goto L_08A975E4;
      }
      goto L_08A97594;
    }
L_08A97594:
    ctx.gpr[4] = (ctx.gpr[10] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> 31u));
      if (branch_taken) {
          goto L_08A975C8;
      }
      goto L_08A975A4;
    }
L_08A975A4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 30u));
    ctx.gpr[16] = (ctx.gpr[4] & 1u);
    ctx.gpr[4] = (ctx.gpr[5] & 2u);
    ctx.gpr[16] = (ctx.gpr[16] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[15] | ctx.gpr[14]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A97608;
      }
      goto L_08A975C0;
    }
L_08A975C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[12] | ctx.gpr[11]);
      if (branch_taken) {
          goto L_08A9761C;
      }
      goto L_08A975C8;
    }
L_08A975C8:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A975D4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 386u, 0x08A9A7FCu>(ctx, &aot_mem) && ctx.pc == 0x08A975D4u) goto L_08A975D4;
    return;
L_08A975D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A975E4:
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x08A975F8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 712u, 0x08AABDF4u>(ctx, &aot_mem) && ctx.pc == 0x08A975F8u) goto L_08A975F8;
    return;
L_08A975F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97608:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9763C;
      }
      goto L_08A97610;
    }
L_08A97610:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A9762C;
      }
      goto L_08A97618;
    }
L_08A97618:
    ctx.gpr[4] = (ctx.gpr[12] | ctx.gpr[11]);
    goto L_08A9761C;
L_08A9761C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97684;
      }
      goto L_08A97624;
    }
L_08A97624:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (32752u << 16u);
      if (branch_taken) {
          goto L_08A976B4;
      }
      goto L_08A9762C;
    }
L_08A9762C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9763C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A9766C;
      }
      goto L_08A97644;
    }
L_08A97644:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[12] | ctx.gpr[11]);
      if (branch_taken) {
          goto L_08A9761C;
      }
      goto L_08A97650;
    }
L_08A97650:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12380)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12376)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9766C:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12364)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12360)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97684:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[13]) >= 0;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A9769C;
      }
      goto L_08A9768C;
    }
L_08A9768C:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12388)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12384)));
      if (branch_taken) {
          goto L_08A976A4;
      }
      goto L_08A9769C;
    }
L_08A9769C:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12356)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12352)));
    goto L_08A976A4;
L_08A976A4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A976B4:
    { const bool branch_taken = ctx.gpr[12] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A977F0;
      }
      goto L_08A976BC;
    }
L_08A976BC:
    { const bool branch_taken = ctx.gpr[15] != ctx.gpr[4];
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9775C;
      }
      goto L_08A976C4;
    }
L_08A976C4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A976FC;
      }
      goto L_08A976D0;
    }
L_08A976D0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A977F0;
      }
      goto L_08A976D8;
    }
L_08A976D8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) > 0;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A97728;
      }
      goto L_08A976E0;
    }
L_08A976E0:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12348)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12344)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A976FC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A97740;
      }
      goto L_08A97704;
    }
L_08A97704:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A977F0;
      }
      goto L_08A9770C;
    }
L_08A9770C:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12412)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12408)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97728:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12396)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12392)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97740:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12404)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12400)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9775C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A97790;
      }
      goto L_08A97764;
    }
L_08A97764:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A977F0;
      }
      goto L_08A9776C;
    }
L_08A9776C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) > 0;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A977BC;
      }
      goto L_08A97774;
    }
L_08A97774:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12340)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12336)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97790:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A977D4;
      }
      goto L_08A97798;
    }
L_08A97798:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A977F0;
      }
      goto L_08A977A0;
    }
L_08A977A0:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12380)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12376)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A977BC:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12420)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12416)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A977D4:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12364)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12360)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A977F0:
    { const bool branch_taken = ctx.gpr[15] != ctx.gpr[4];
    ctx.gpr[12] = (ctx.gpr[15] - ctx.gpr[12]);
      if (branch_taken) {
          goto L_08A97828;
      }
      goto L_08A977F8;
    }
L_08A977F8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[13]) >= 0;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A97810;
      }
      goto L_08A97800;
    }
L_08A97800:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12388)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12384)));
      if (branch_taken) {
          goto L_08A97818;
      }
      goto L_08A97810;
    }
L_08A97810:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12356)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12352)));
    goto L_08A97818;
L_08A97818:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97828:
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 20u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[12]) < 61 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A97844;
      }
      goto L_08A97838;
    }
L_08A97838:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12356)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12352)));
      if (branch_taken) {
          goto L_08A9789C;
      }
      goto L_08A97844;
    }
L_08A97844:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) >= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[12]) < -60 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A97860;
      }
      goto L_08A9784C;
    }
L_08A9784C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A97860;
      }
      goto L_08A97854;
    }
L_08A97854:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12340)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12336)));
      if (branch_taken) {
          goto L_08A97894;
      }
      goto L_08A97860;
    }
L_08A97860:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A97874u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 30u, 0x08AAC248u>(ctx, &aot_mem) && ctx.pc == 0x08A97874u) goto L_08A97874;
    return;
L_08A97874:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A97880u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08A95EC0;
L_08A97880:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A9788Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 386u, 0x08A9A7FCu>(ctx, &aot_mem) && ctx.pc == 0x08A9788Cu) goto L_08A9788C;
    return;
L_08A9788C:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08A97894;
L_08A97894:
    ctx.gpr[3] = (ctx.gpr[5] | 0u);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    goto L_08A9789C;
L_08A9789C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) > 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A978EC;
      }
      goto L_08A978A4;
    }
L_08A978A4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A9793C;
      }
      goto L_08A978AC;
    }
L_08A978AC:
    ctx.gpr[4] = (2222u << 16u);
    goto L_08A978B0;
L_08A978B0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12372)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12368)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A978C4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 717u, 0x08AABE5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A978C4u) goto L_08A978C4;
    return;
L_08A978C4:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12364)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12360)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A978DCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 717u, 0x08AABE5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A978DCu) goto L_08A978DC;
    return;
L_08A978DC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A978EC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9794C;
      }
      goto L_08A978F4;
    }
L_08A978F4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A978B0;
      }
      goto L_08A978FC;
    }
L_08A978FC:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12372)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12368)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A97914u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 717u, 0x08AABE5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A97914u) goto L_08A97914;
    return;
L_08A97914:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12364)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12360)));
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A9792Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 717u, 0x08AABE5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9792Cu) goto L_08A9792C;
    return;
L_08A9792C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9793C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9794C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.gpr[5] = (32768u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97984:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (32768u << 16u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[12] = (32768u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[12] = (ctx.gpr[13] & ctx.gpr[12]);
    ctx.gpr[14] = (ctx.gpr[14] & ctx.gpr[8]);
    ctx.gpr[13] = (ctx.gpr[13] ^ ctx.gpr[12]);
    ctx.gpr[3] = (ctx.gpr[5] | 0u);
    ctx.gpr[15] = (ctx.gpr[14] | ctx.gpr[11]);
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[15] == 0u;
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A97A18;
      }
      goto L_08A979DC;
    }
L_08A979DC:
    ctx.gpr[4] = (32752u << 16u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[11]);
      if (branch_taken) {
          goto L_08A97A18;
      }
      goto L_08A979EC;
    }
L_08A979EC:
    ctx.gpr[4] = (ctx.gpr[11] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] >> 31u);
    ctx.gpr[4] = (ctx.gpr[14] | ctx.gpr[4]);
    ctx.gpr[5] = (32752u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[14]) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A97A18;
      }
      goto L_08A97A08;
    }
L_08A97A08:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[14]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A97A4C;
      }
      goto L_08A97A10;
    }
L_08A97A10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (16u << 16u);
      if (branch_taken) {
          goto L_08A97A68;
      }
      goto L_08A97A18;
    }
L_08A97A18:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A97A2Cu);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 722u, 0x08AABED0u>(ctx, &aot_mem) && ctx.pc == 0x08A97A2Cu) goto L_08A97A2C;
    return;
L_08A97A2C:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A97A40u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 30u, 0x08AAC248u>(ctx, &aot_mem) && ctx.pc == 0x08A97A40u) goto L_08A97A40;
    return;
L_08A97A40:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97A4C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[10] < ctx.gpr[11] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A97DE4;
      }
      goto L_08A97A54;
    }
L_08A97A54:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97DE4;
      }
      goto L_08A97A5C;
    }
L_08A97A5C:
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[11];
    ctx.gpr[4] = (ctx.gpr[12] >> 31u);
      if (branch_taken) {
          goto L_08A97A80;
      }
      goto L_08A97A64;
    }
L_08A97A64:
    ctx.gpr[4] = (16u << 16u);
    goto L_08A97A68;
L_08A97A68:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97AA4;
      }
      goto L_08A97A74;
    }
L_08A97A74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> 20u));
      if (branch_taken) {
          goto L_08A97AF0;
      }
      goto L_08A97A7C;
    }
L_08A97A7C:
    ctx.gpr[4] = (ctx.gpr[12] >> 31u);
    goto L_08A97A80;
L_08A97A80:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12432));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97AA4:
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[5] = (ctx.gpr[13] << 11u);
      if (branch_taken) {
          goto L_08A97AD0;
      }
      goto L_08A97AAC;
    }
L_08A97AAC:
    ctx.gpr[5] = (ctx.gpr[10] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1043));
      if (branch_taken) {
          goto L_08A97AF4;
      }
      goto L_08A97AB8;
    }
L_08A97AB8:
    ctx.gpr[5] = (ctx.gpr[5] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A97AB8;
      }
      goto L_08A97AC4;
    }
L_08A97AC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[14]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A97AF8;
      }
      goto L_08A97ACC;
    }
L_08A97ACC:
    ctx.gpr[5] = (ctx.gpr[13] << 11u);
    goto L_08A97AD0;
L_08A97AD0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1022));
      if (branch_taken) {
          goto L_08A97AF4;
      }
      goto L_08A97AD8;
    }
L_08A97AD8:
    ctx.gpr[5] = (ctx.gpr[5] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A97AD8;
      }
      goto L_08A97AE4;
    }
L_08A97AE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[14]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A97AF8;
      }
      goto L_08A97AEC;
    }
L_08A97AEC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> 20u));
    goto L_08A97AF0;
L_08A97AF0:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1023));
    goto L_08A97AF4;
L_08A97AF4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[14]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    goto L_08A97AF8;
L_08A97AF8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[14]) >> 20u));
      if (branch_taken) {
          goto L_08A97B4C;
      }
      goto L_08A97B00;
    }
L_08A97B00:
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.gpr[7] = (ctx.gpr[14] << 11u);
      if (branch_taken) {
          goto L_08A97B2C;
      }
      goto L_08A97B08;
    }
L_08A97B08:
    ctx.gpr[7] = (ctx.gpr[11] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1043));
      if (branch_taken) {
          goto L_08A97B50;
      }
      goto L_08A97B14;
    }
L_08A97B14:
    ctx.gpr[7] = (ctx.gpr[7] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A97B14;
      }
      goto L_08A97B20;
    }
L_08A97B20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < -1022 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A97B54;
      }
      goto L_08A97B28;
    }
L_08A97B28:
    ctx.gpr[7] = (ctx.gpr[14] << 11u);
    goto L_08A97B2C;
L_08A97B2C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1022));
      if (branch_taken) {
          goto L_08A97B50;
      }
      goto L_08A97B34;
    }
L_08A97B34:
    ctx.gpr[7] = (ctx.gpr[7] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A97B34;
      }
      goto L_08A97B40;
    }
L_08A97B40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < -1022 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A97B54;
      }
      goto L_08A97B48;
    }
L_08A97B48:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[14]) >> 20u));
    goto L_08A97B4C;
L_08A97B4C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1023));
    goto L_08A97B50;
L_08A97B50:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < -1022 ? 1u : 0u);
    goto L_08A97B54;
L_08A97B54:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < -1022 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A97B70;
      }
      goto L_08A97B5C;
    }
L_08A97B5C:
    ctx.gpr[8] = (16u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[13] = (ctx.gpr[13] & ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[13] = (ctx.gpr[13] | ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A97BA8;
      }
      goto L_08A97B70;
    }
L_08A97B70:
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1022));
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[6]);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (0u | 32u);
      if (branch_taken) {
          goto L_08A97B9C;
      }
      goto L_08A97B84;
    }
L_08A97B84:
    ctx.gpr[9] = (ctx.gpr[9] - ctx.gpr[8]);
    ctx.gpr[13] = (ctx.gpr[13] << (ctx.gpr[8] & 31u));
    ctx.gpr[9] = (ctx.gpr[10] >> (ctx.gpr[9] & 31u));
    ctx.gpr[13] = (ctx.gpr[13] | ctx.gpr[9]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[10] << (ctx.gpr[8] & 31u));
      if (branch_taken) {
          goto L_08A97BA8;
      }
      goto L_08A97B9C;
    }
L_08A97B9C:
    ctx.gpr[13] = (ctx.gpr[8] + static_cast<std::uint32_t>(-32));
    ctx.gpr[13] = (ctx.gpr[10] << (ctx.gpr[13] & 31u));
    ctx.gpr[10] = (0u | 0u);
    goto L_08A97BA8;
L_08A97BA8:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1022));
      if (branch_taken) {
          goto L_08A97BD0;
      }
      goto L_08A97BB0;
    }
L_08A97BB0:
    ctx.gpr[8] = (16u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[14] = (ctx.gpr[14] & ctx.gpr[8]);
    ctx.gpr[14] = (ctx.gpr[14] | ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[10] < ctx.gpr[11] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[13] - ctx.gpr[14]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[10] - ctx.gpr[11]);
      if (branch_taken) {
          goto L_08A97C1C;
      }
      goto L_08A97BD0;
    }
L_08A97BD0:
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[5]);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (0u | 32u);
      if (branch_taken) {
          goto L_08A97C04;
      }
      goto L_08A97BE0;
    }
L_08A97BE0:
    ctx.gpr[9] = (ctx.gpr[9] - ctx.gpr[8]);
    ctx.gpr[14] = (ctx.gpr[14] << (ctx.gpr[8] & 31u));
    ctx.gpr[9] = (ctx.gpr[11] >> (ctx.gpr[9] & 31u));
    ctx.gpr[14] = (ctx.gpr[14] | ctx.gpr[9]);
    ctx.gpr[11] = (ctx.gpr[11] << (ctx.gpr[8] & 31u));
    ctx.gpr[8] = (ctx.gpr[10] < ctx.gpr[11] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[13] - ctx.gpr[14]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[10] - ctx.gpr[11]);
      if (branch_taken) {
          goto L_08A97C1C;
      }
      goto L_08A97C04;
    }
L_08A97C04:
    ctx.gpr[14] = (ctx.gpr[8] + static_cast<std::uint32_t>(-32));
    ctx.gpr[14] = (ctx.gpr[11] << (ctx.gpr[14] & 31u));
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[10] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[13] - ctx.gpr[14]);
    ctx.gpr[2] = (ctx.gpr[10] | 0u);
    goto L_08A97C1C;
L_08A97C1C:
    ctx.gpr[3] = (ctx.gpr[6] - ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[6] = (ctx.gpr[3] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A97CC0;
      }
      goto L_08A97C28;
    }
L_08A97C28:
    ctx.gpr[3] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
        goto L_08A97C38;
    }
    goto L_08A97C38;
L_08A97C38:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) >= 0;
    ctx.gpr[9] = (ctx.gpr[8] | ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A97C64;
      }
      goto L_08A97C40;
    }
L_08A97C40:
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[13]);
    ctx.gpr[8] = (ctx.gpr[10] >> 31u);
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[8]);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[8] = (ctx.gpr[10] < ctx.gpr[11] ? 1u : 0u);
    ctx.gpr[3] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (ctx.gpr[13] - ctx.gpr[14]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[10] - ctx.gpr[11]);
      if (branch_taken) {
          goto L_08A97CB4;
      }
      goto L_08A97C64;
    }
L_08A97C64:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[13] = (ctx.gpr[8] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_08A97C8C;
      }
      goto L_08A97C6C;
    }
L_08A97C6C:
    ctx.gpr[8] = (ctx.gpr[2] >> 31u);
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[8]);
    ctx.gpr[10] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[8] = (ctx.gpr[10] < ctx.gpr[11] ? 1u : 0u);
    ctx.gpr[3] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (ctx.gpr[13] - ctx.gpr[14]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[10] - ctx.gpr[11]);
      if (branch_taken) {
          goto L_08A97CB4;
      }
      goto L_08A97C8C;
    }
L_08A97C8C:
    ctx.gpr[4] = (ctx.gpr[12] >> 31u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12432));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97CB4:
    ctx.gpr[15] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[15] != 0u;
    ctx.gpr[6] = (ctx.gpr[3] | 0u);
      if (branch_taken) {
          goto L_08A97C28;
      }
      goto L_08A97CC0;
    }
L_08A97CC0:
    ctx.gpr[6] = (ctx.gpr[9] | 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[6] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
        goto L_08A97CCC;
    }
    goto L_08A97CCC;
L_08A97CCC:
    if (static_cast<std::int32_t>(ctx.gpr[6]) < 0) {
    ctx.gpr[6] = (ctx.gpr[13] | ctx.gpr[10]);
        goto L_08A97CE0;
    }
    goto L_08A97CD4;
L_08A97CD4:
    ctx.gpr[13] = (ctx.gpr[6] | 0u);
    ctx.gpr[10] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[13] | ctx.gpr[10]);
    goto L_08A97CE0;
L_08A97CE0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A97CF8;
      }
      goto L_08A97CE8;
    }
L_08A97CE8:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[13]);
        goto L_08A97D24;
    }
    goto L_08A97CF0;
L_08A97CF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97D40;
      }
      goto L_08A97CF8;
    }
L_08A97CF8:
    ctx.gpr[4] = (ctx.gpr[12] >> 31u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12432));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97D20:
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[13]);
    goto L_08A97D24;
L_08A97D24:
    ctx.gpr[6] = (ctx.gpr[10] >> 31u);
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[6]);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A97D20;
      }
      goto L_08A97D3C;
    }
L_08A97D3C:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < -1022 ? 1u : 0u);
    goto L_08A97D40;
L_08A97D40:
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1022));
        goto L_08A97D78;
    }
    goto L_08A97D48;
L_08A97D48:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1023));
    ctx.gpr[4] = (ctx.gpr[13] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 20u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[10]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97D78:
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 32 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A97DA8;
      }
      goto L_08A97D88;
    }
L_08A97D88:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[13] << (ctx.gpr[4] & 31u));
    ctx.gpr[10] = (ctx.gpr[10] >> (ctx.gpr[5] & 31u));
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> (ctx.gpr[5] & 31u)));
    ctx.gpr[10] = (ctx.gpr[10] | ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[13] = (ctx.gpr[13] | ctx.gpr[12]);
      if (branch_taken) {
          goto L_08A97DD4;
      }
      goto L_08A97DA8;
    }
L_08A97DA8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 32u);
      if (branch_taken) {
          goto L_08A97DC8;
      }
      goto L_08A97DB0;
    }
L_08A97DB0:
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[13] << (ctx.gpr[4] & 31u));
    ctx.gpr[10] = (ctx.gpr[10] >> (ctx.gpr[5] & 31u));
    ctx.gpr[10] = (ctx.gpr[4] | ctx.gpr[10]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[13] = (ctx.gpr[12] | ctx.gpr[12]);
      if (branch_taken) {
          goto L_08A97DD4;
      }
      goto L_08A97DC8;
    }
L_08A97DC8:
    ctx.gpr[10] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> (ctx.gpr[10] & 31u)));
    ctx.gpr[13] = (ctx.gpr[12] | ctx.gpr[12]);
    goto L_08A97DD4;
L_08A97DD4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08A97DE4;
L_08A97DE4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97DF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[6] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A97E6C;
      }
      goto L_08A97E30;
    }
L_08A97E30:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (16457u << 16u);
      if (branch_taken) {
          goto L_08A97E40;
      }
      goto L_08A97E38;
    }
L_08A97E38:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A97E48;
      }
      goto L_08A97E40;
    }
L_08A97E40:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A97E48;
L_08A97E48:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97E6C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (16128u << 16u);
      if (branch_taken) {
          goto L_08A97E88;
      }
      goto L_08A97E74;
    }
L_08A97E74:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (8960u << 16u);
        goto L_08A97EB4;
    }
    goto L_08A97E80;
L_08A97E80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (14353u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 2u, 0x08A9800Cu>(ctx, &aot_mem); return;
      }
      goto L_08A97E88;
    }
L_08A97E88:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[0];
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97EB4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (16329u << 16u);
      if (branch_taken) {
          goto L_08A97EEC;
      }
      goto L_08A97EC0;
    }
L_08A97EC0:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97EEC:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (14353u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 61192u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (14927u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 32516u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (48420u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4422u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15950u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 2728u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[5] = (48944u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15773u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 50734u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[16];
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[5] | 13153u);
    ctx.gpr[5] = (48806u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[5] | 45200u);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    ctx.gpr[5] = (15914u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16385u << 16u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[17];
    ctx.gpr[4] = (ctx.gpr[4] | 22317u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 43691u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49177u << 16u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[18];
    ctx.gpr[4] = (ctx.gpr[4] | 53561u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[17];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[18];
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    ctx.gpr[4] = (13218u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8552u);
    ctx.gpr[5] = (16329u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4058u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[12];
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.pc = 0x08A98000u; return;
}

void recomp_unit_0164(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0164_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_164(Runtime &runtime) {
    runtime.register_generated_unit(164u, 0x08A94000u, 16384u, &recomp_unit_0164, &recomp_unit_0164_entry);
    runtime.register_function(0x08A942ECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A942F8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9430Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94318u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94340u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9434Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94358u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94360u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9436Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94384u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A943BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A943D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A943E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A943FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94460u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9446Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94484u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9448Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94490u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94498u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A944C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A944F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A944FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94510u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94518u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94524u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9453Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94540u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94550u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94584u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A945A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A945B4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A945E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94680u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94698u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A946B4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A946C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A946E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A946E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A946F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94700u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94718u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94720u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94728u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94730u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9474Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94774u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A947A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A947ECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94804u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9480Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94840u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94854u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9486Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94870u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94880u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A948A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A948B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A948BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A948D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A948E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A948ECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A948F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94908u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9493Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9496Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A949E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A949E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A949F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A00u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A0Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A24u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A34u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A3Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A4Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A50u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A58u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A60u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A68u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A78u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A80u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A8Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A98u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94AB0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94AC4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94AD4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94AE4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94B18u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94B20u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94B28u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94B38u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94B44u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94B54u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94B58u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94B60u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94B74u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94B80u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94B9Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94BD0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94BFCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94C0Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94C38u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94C48u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94C58u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94C70u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94C78u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94C8Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94CE0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94CF0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94CFCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94D04u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94D28u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94D30u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94D54u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94D5Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94D80u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94DA4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94DACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94DD0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94DE0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94DECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94E0Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94E1Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94E2Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94E40u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94E48u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94E5Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94E64u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94E74u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94EA4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94EACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94EC0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94EC8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94ED4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94EE4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94EF4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F04u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F1Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F2Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F44u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F58u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F94u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94FACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94FB4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94FC8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94FD8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94FF0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95000u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9500Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9501Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95028u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95038u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95044u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95050u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95060u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9506Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95080u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9508Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A950A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A950ACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A950D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A950E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A950E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A950FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95108u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95110u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95148u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95150u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9517Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95184u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9518Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A951B4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A951C0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A951E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A951F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95218u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9522Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95238u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A952A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A952A8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A952B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A952C0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A952CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A952D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A952E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A952F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95304u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9530Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9532Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9533Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95344u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95378u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95384u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A953C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9541Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95428u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9542Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95448u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95458u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95468u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9547Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95488u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95490u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95498u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A954A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A954A8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A954C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A954D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A954DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95504u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95508u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95518u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95524u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95564u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95570u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9558Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95598u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A955B4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A955BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A955C0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A955D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A955E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A955ECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95614u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9561Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95628u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95630u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95658u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95660u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95668u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A956ACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A956B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A956B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A956C0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A956CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A956DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A956E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95718u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9572Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9579Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A957ACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A957B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A957BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A957D0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A957DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A957F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A957FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95818u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95820u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95824u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95838u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95844u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95854u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95858u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95860u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95868u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95878u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95880u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9588Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95894u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95898u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A958A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A958ACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A958B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A958E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95908u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9591Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95928u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95930u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95938u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95950u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9595Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95964u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9596Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95974u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9597Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95984u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9598Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95994u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9599Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A959A8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A959B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A959B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A959C0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A959C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A959D0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A959E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A959F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A959FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95A0Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95A18u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95A28u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95A3Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95A48u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95A54u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95A5Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95A74u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95A7Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95A84u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95A8Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95A94u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95A9Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95AA4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95AACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95AB8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95ADCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95AE4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95AF0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95AF8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95B00u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95B08u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95B10u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95B18u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95B20u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95B28u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95B58u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95B74u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95B98u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95BA4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95BC8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95BD0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95C10u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95C18u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95C44u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95C48u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95C54u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95C70u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95C94u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95CB4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95CD0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95CD8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95CE4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95D08u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95D2Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95D48u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95D64u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95D6Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95D70u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95D78u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95DA4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95DC8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95DFCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95E18u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95E20u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95E24u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95E38u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95E4Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95E70u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95E78u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95E7Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95E88u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95EACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95EB4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95EB8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95EC0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95EF8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95F28u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95F34u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95F3Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95F4Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95F54u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95F58u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95F68u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95F74u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95F84u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95F8Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95F98u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95FA4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95FACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95FBCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95FCCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95FD8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95FE4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95FF8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96008u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96020u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96050u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9605Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96064u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96074u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9607Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96080u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9608Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9609Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A960ACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A960B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A960C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A960D0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A960D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A960ECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A960FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9610Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96118u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96128u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96134u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96164u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96170u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96180u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9618Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96198u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A961A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A961BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A961C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96208u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96220u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9622Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96234u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96240u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96248u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96264u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9626Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96280u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96288u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A962C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A962CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A962D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A962DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A962E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A962ECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A962F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A962F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A962FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96304u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96310u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96344u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96348u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9637Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A963BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A963D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A963E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A963E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A963F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A963FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96418u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96420u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9644Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96458u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9646Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96474u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96480u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96488u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96490u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96498u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A964A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A964A8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A964ACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A964B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A964B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A964C0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A964CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96500u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96504u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96538u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96554u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96568u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96570u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96578u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96580u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96598u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A965B4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A965E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A965F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A965F8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96600u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96608u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96610u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96614u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96618u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96620u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96628u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96634u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9663Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96654u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96670u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9668Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A966A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A966A8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A966B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A966B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A966D0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A966ECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96720u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96728u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96730u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96738u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96740u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96748u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9674Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96750u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96758u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96760u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9676Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96774u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9678Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A967A8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A967CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A967E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A967E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A967F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A967F8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96800u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96814u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96824u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9682Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9683Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9687Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96884u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9688Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96894u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9689Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A968A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A968A8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A968ACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A968B4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A968BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A968C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A968D0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A968ECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9690Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9694Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96960u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96968u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96970u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96978u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96980u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96990u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A969ACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A969C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A969DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A969E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A00u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A08u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A10u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A18u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A1Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A20u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A28u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A30u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A3Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A44u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A7Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A8Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A9Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96AB8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96AC8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96AECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B04u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B0Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B14u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B1Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B20u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B24u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B2Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B34u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B40u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B48u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B80u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B88u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B90u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96BA0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96BBCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96BCCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96BE0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96BF8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C08u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C10u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C18u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C20u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C28u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C30u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C38u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C40u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C44u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C48u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C50u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C58u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C64u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C6Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96CA4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96CACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96CB4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96CBCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96CC4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96CCCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96CD4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96CDCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96CF4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D04u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D14u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D44u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D50u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D5Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D64u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D6Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D74u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D7Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D84u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D8Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D94u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D98u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D9Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96DA4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96DACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96DB8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96DC0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96DF8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E28u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E34u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E3Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E58u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E60u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E74u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E8Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E94u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96EA8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96EC4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96ECCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96EE0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96EF8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F00u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F0Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F14u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F1Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F24u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F2Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F34u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F3Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F44u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F48u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F4Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F54u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F5Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F68u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F70u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96FA8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96FB8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96FC0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96FC8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96FD0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96FD8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96FF4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97004u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97030u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97038u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97040u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97048u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97050u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97058u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9705Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97060u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97068u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97070u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9707Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97084u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A970BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A970F8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97114u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97128u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97130u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97138u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9714Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97168u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9718Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97198u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A971A8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A971B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A971BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A971C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A971CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A971D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A971DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A971E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A971E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A971ECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A971F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A971FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97208u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97210u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97228u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97244u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9724Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97298u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A972A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A972B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9731Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97330u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97378u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97390u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A973B4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A973C0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A973C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A973DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A973E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A973F8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9740Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97414u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97438u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9744Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9746Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97474u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97490u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A974A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A974A8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A974C0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A974D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A974F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97510u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97578u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97594u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A975A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A975C0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A975C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A975D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A975E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A975F8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97608u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97610u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97618u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9761Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97624u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9762Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9763Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97644u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97650u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9766Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97684u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9768Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9769Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A976A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A976B4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A976BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A976C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A976D0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A976D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A976E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A976FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97704u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9770Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97728u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97740u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9775Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97764u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9776Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97774u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97790u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97798u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A977A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A977BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A977D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A977F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A977F8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97800u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97810u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97818u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97828u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97838u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97844u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9784Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97854u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97860u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97874u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97880u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9788Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97894u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9789Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A978A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A978ACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A978B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A978C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A978DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A978ECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A978F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A978FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97914u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9792Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9793Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9794Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97984u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A979DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A979ECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A08u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A10u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A18u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A2Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A40u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A4Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A54u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A5Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A64u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A68u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A74u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A7Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A80u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97AA4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97AACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97AB8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97AC4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97ACCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97AD0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97AD8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97AE4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97AECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97AF0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97AF4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97AF8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B00u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B08u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B14u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B20u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B28u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B2Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B34u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B40u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B48u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B4Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B50u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B54u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B5Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B70u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B84u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B9Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97BA8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97BB0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97BD0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97BE0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C04u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C1Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C28u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C38u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C40u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C64u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C6Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C8Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97CB4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97CC0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97CCCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97CD4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97CE0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97CE8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97CF0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97CF8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D20u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D24u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D3Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D40u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D48u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D78u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D88u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97DA8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97DB0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97DC8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97DD4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97DE4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97DF0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E30u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E38u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E40u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E48u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E6Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E74u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E80u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E88u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97EB4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97EC0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97EECu, &recomp_unit_0164, "recomp_unit_0164");
}
} // namespace psprecomp

#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0057[4094] = {
    1, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 4, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0,
    0, 9, 0, 0, 10, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 15, 0, 0, 16, 0, 17, 0, 18, 0, 0,
    0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 25, 0,
    0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 31, 0,
    32, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 36, 0, 37, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0,
    42, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 47, 0, 0, 48, 0, 49, 0, 50,
    0, 51, 0, 52, 0, 53, 54, 0, 0, 0, 0, 0, 55, 56, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 59, 0, 60, 0, 61, 62, 0, 63,
    0, 0, 0, 64, 0, 0, 65, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    71, 0, 0, 72, 0, 0, 73, 0, 0, 74, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0,
    0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 85, 0,
    86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91,
    0, 92, 0, 93, 0, 0, 0, 94, 0, 95, 0, 96, 0, 97, 0, 0, 0, 98, 0, 99, 0, 100, 0, 0, 101, 0, 102, 0, 103, 104, 0, 0,
    0, 0, 0, 0, 0, 105, 106, 0, 0, 107, 0, 108, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 113, 0, 0, 0,
    0, 114, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 120, 0, 121, 0, 122, 0, 123, 124, 0,
    125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 129, 0, 130, 131, 132, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0,
    0, 135, 0, 136, 0, 137, 0, 138, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 147, 0, 0, 148,
    0, 0, 0, 0, 149, 0, 0, 150, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0,
    0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0,
    0, 0, 0, 168, 0, 0, 169, 0, 170, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 173, 0, 174, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 176, 0, 0, 177, 0, 0, 0, 178, 0, 0, 179, 0, 180, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 184, 0,
    0, 185, 0, 186, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 192, 0, 193, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 198, 0,
    199, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 202, 0, 203, 0, 0, 204, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 208, 0,
    209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 213, 0, 0, 214, 0, 215, 0, 216, 0,
    217, 0, 218, 0, 219, 220, 0, 0, 0, 0, 0, 221, 222, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 225, 0, 226, 0, 227, 228, 0, 229, 0,
    0, 0, 230, 0, 0, 231, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0,
    242, 0, 243, 0, 0, 244, 0, 0, 245, 0, 246, 0, 247, 0, 248, 0, 0, 249, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251,
    0, 0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 256, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 257, 0, 258, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 267, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0,
    0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0,
    0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 277, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 280, 0, 281, 0, 282, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 285, 0, 0, 286, 0, 287, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0,
    0, 290, 0, 0, 0, 291, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 294, 0, 295, 0, 0, 0, 296, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 298, 0, 299, 0, 300, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0,
    303, 0, 304, 0, 0, 305, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 309, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 311, 0, 0, 312, 0, 313, 0, 0, 314, 0, 315, 0, 316, 0, 317, 318, 0, 0, 0, 0, 0, 319, 320, 0, 0, 321,
    0, 0, 0, 0, 322, 0, 0, 323, 0, 324, 0, 325, 326, 0, 327, 0, 0, 0, 328, 0, 0, 329, 0, 330, 0, 331, 0, 0, 0, 0, 0, 0,
    0, 332, 0, 333, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 336, 0, 0, 0, 337, 0,
    338, 0, 0, 339, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 343, 0, 0, 0, 0,
    0, 344, 0, 345, 0, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 348, 0, 0, 349, 0, 350, 0, 351, 0, 0, 352, 0, 0, 0, 0, 0, 0,
    0, 353, 0, 0, 354, 0, 0, 355, 0, 356, 0, 0, 357, 0, 0, 358, 0, 359, 0, 360, 0, 361, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0,
    0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 0, 369, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0,
    0, 0, 0, 373, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 377, 0, 378, 0, 0, 0, 379, 0,
    0, 0, 380, 0, 0, 381, 0, 382, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 385, 0, 0, 0, 386, 0, 0, 387, 0,
    388, 0, 389, 0, 0, 0, 0, 0, 0, 390, 0, 0, 391, 0, 0, 0, 392, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394,
    0, 395, 0, 396, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 399, 0, 400, 0, 401, 0, 0,
    0, 402, 0, 0, 0, 403, 0, 0, 404, 0, 405, 0, 0, 406, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 410, 0, 411, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 413, 0, 414, 0, 0, 415, 0, 416, 0, 0, 0, 0, 0, 417, 0, 418, 0, 419,
    0, 420, 0, 421, 422, 0, 0, 0, 0, 423, 424, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 427, 0, 428, 0, 429, 430, 0, 431, 0, 0, 0,
    432, 0, 0, 433, 0, 434, 0, 435, 0, 0, 0, 0, 0, 0, 0, 436, 0, 437, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0,
    442, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 446, 0, 0, 447, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 450, 0, 451, 0, 0, 0, 452,
    0, 0, 0, 453, 0, 0, 454, 0, 455, 0, 456, 0, 0, 0, 0, 0, 0, 457, 0, 0, 458, 0, 0, 0, 459, 0, 0, 460, 0, 461, 0, 462,
    0, 0, 0, 0, 0, 0, 463, 0, 0, 464, 0, 0, 0, 465, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 468, 0,
    469, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 472, 0, 473, 0, 474, 0, 0,
    0, 475, 0, 0, 0, 476, 0, 0, 477, 0, 0, 478, 0, 479, 0, 0, 0, 0, 0, 480, 0, 0, 0, 481, 0, 482, 0, 483, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 485, 0, 0, 486, 0, 487, 0, 488, 0, 489, 490, 0, 0, 0, 0, 0, 491, 492,
    0, 0, 493, 0, 0, 0, 0, 494, 0, 0, 495, 0, 496, 0, 497, 498, 0, 499, 0, 0, 0, 500, 0, 0, 501, 0, 502, 0, 503, 0, 0, 0,
    0, 0, 0, 0, 504, 0, 505, 0, 506, 0, 0, 0, 507, 0, 0, 0, 0, 508, 0, 509, 0, 0, 0, 510, 0, 0, 0, 511, 0, 0, 0, 512,
    0, 0, 0, 513, 0, 0, 0, 514, 0, 0, 0, 515, 0, 0, 0, 516, 0, 0, 0, 517, 0, 0, 0, 518, 0, 0, 0, 519, 0, 0, 0, 520,
    0, 0, 0, 521, 0, 0, 0, 522, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 531, 0, 0, 0, 532, 0, 0, 0, 533, 0, 0, 0, 534, 0, 0, 0, 535,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 537, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0,
    540, 0, 541, 0, 542, 0, 543, 0, 544, 0, 0, 545, 0, 546, 0, 547, 0, 548, 0, 549, 0, 550, 0, 0, 551, 0, 552, 0, 553, 0, 554, 0,
    555, 0, 556, 0, 557, 0, 558, 0, 0, 559, 0, 560, 0, 561, 0, 562, 0, 563, 0, 564, 0, 0, 565, 0, 566, 0, 567, 0, 568, 0, 569, 0,
    0, 570, 0, 571, 0, 572, 0, 573, 0, 574, 0, 575, 0, 0, 576, 577, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 579, 0, 580, 0, 0,
    0, 581, 0, 0, 0, 582, 0, 0, 0, 0, 583, 0, 0, 0, 584, 0, 0, 0, 585, 0, 0, 0, 586, 0, 0, 0, 587, 0, 0, 0, 588, 0,
    0, 0, 589, 0, 0, 0, 590, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 593, 0, 0, 0, 594, 0, 0, 0, 0,
    0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 597, 0, 0, 598, 0, 599, 0, 600, 0, 601, 0, 0, 602, 0, 0, 0, 0,
    0, 0, 0, 603, 0, 0, 604, 0, 605, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 0, 0, 0, 0, 0, 608, 0,
    0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 611, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 613, 0, 0, 0,
    0, 0, 0, 0, 0, 614, 0, 0, 0, 615, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 618, 0, 619, 0, 0, 620, 0, 621,
    0, 0, 0, 622, 0, 623, 0, 0, 624, 0, 0, 0, 625, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 628,
    0, 0, 0, 629, 0, 0, 630, 0, 0, 0, 631, 0, 0, 632, 0, 0, 0, 633, 0, 0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 637, 0, 0, 638, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 641, 0, 0, 0, 642, 0, 643, 0, 0, 0, 0, 0, 0, 644,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 646, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0,
    0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 650, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0,
    0, 653, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0,
    0, 0, 0, 0, 0, 657, 0, 0, 0, 658, 0, 659, 0, 0, 660, 0, 661, 0, 662, 0, 663, 0, 0, 0, 664, 0, 0, 0, 665, 0, 666, 0,
    0, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 668, 669, 0, 0, 0, 0, 0, 0, 0, 0, 0, 670, 0, 0,
    0, 0, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 672, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 675, 0,
    0, 0, 0, 0, 0, 676, 0, 0, 0, 677, 678, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 679, 680,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 681, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 684, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0,
    0, 687, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 690, 0, 0, 0, 0, 691, 0, 0, 0,
    692, 0, 693, 0, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0,
    696, 0, 0, 697, 0, 0, 0, 0, 0, 0, 0, 0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 700, 0, 0, 0, 701, 0,
    0, 0, 0, 0, 0, 702, 0, 0, 0, 0, 0, 0, 703, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 705, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    707, 0, 0, 0, 708, 0, 709, 0, 0, 710, 0, 711, 0, 712, 0, 713, 0, 0, 0, 0, 0, 714, 0, 0, 0, 715, 0, 716, 0, 0, 0, 0,
    0, 0, 717, 0, 0, 0, 0, 718, 0, 0, 0, 719, 0, 0, 0, 720, 0, 0, 0, 721, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 722, 723, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 724, 0, 0, 0, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0, 0, 0, 726, 0, 0, 0, 727, 0, 0, 0, 0, 0,
    0, 728, 0, 0, 0, 0, 0, 0, 729, 0, 0, 0, 0, 0, 0, 730, 0, 0, 0, 731, 732, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 733, 734, 0, 0, 0, 0, 0, 0, 0, 0, 0, 735, 0, 0, 0, 0, 736, 0, 0, 0, 0, 0, 0, 0, 737, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 738, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 739, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 740, 0, 0, 0, 741, 0, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 743, 0, 0, 0, 0, 0,
    744, 0, 0, 0, 0, 745, 0, 0, 0, 746, 0, 747, 0, 0, 0, 0, 0, 0, 748, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 749, 0, 0, 0, 0, 750, 0, 0, 751, 0, 0, 0, 0, 0, 0, 0, 0, 752, 0, 0, 0, 0, 0, 0, 0, 0, 753, 0,
    0, 0, 0, 754, 0, 0, 0, 755, 0, 0, 0, 0, 0, 0, 756, 0, 0, 0, 0, 0, 0, 757, 0, 0, 0, 758, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 759, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 760, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 761, 0, 0, 0, 762, 0, 763, 0, 0, 764, 0, 765, 0, 766, 0, 767, 0, 0, 0, 768, 0, 0, 0, 769, 0, 770, 0, 0, 0, 0, 0,
    0, 771, 0, 0, 0, 772, 0, 0, 0, 773, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 774, 775, 0, 0, 0, 0, 0, 0, 0, 0, 0, 776, 0, 0, 0, 0, 0, 0, 0, 0, 777, 0, 0, 0, 0, 0, 0, 778, 0, 0,
    0, 779, 0, 0, 0, 0, 0, 0, 780, 0, 0, 0, 0, 0, 0, 781, 0, 0, 0, 0, 0, 0, 782, 0, 0, 0, 783, 784, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 785, 786, 0, 0, 0, 0, 0, 0, 0, 0, 0, 787, 0, 0, 0, 0, 788, 0, 0,
    0, 0, 0, 0, 0, 789, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 790, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 791, 0, 0, 792, 0, 0, 793, 0, 0, 794, 0, 0, 0, 0, 0, 0, 0, 0, 795, 0, 0, 0, 0, 796, 0, 0, 0, 0, 797, 0,
    0, 0, 0, 798, 0, 0, 0, 799, 0, 0, 0, 800, 0, 0, 0, 0, 0, 0, 801, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 802, 0, 0, 0, 803, 0, 804, 0, 0, 0, 0, 0, 0, 0, 0, 805, 0, 0, 0, 0, 0, 0, 0, 0, 806, 0, 0, 0, 0,
    807, 0, 0, 0, 808, 0, 0, 0, 0, 0, 0, 809, 0, 0, 0, 0, 0, 0, 810, 0, 0, 0, 811, 0, 0, 0, 0, 0, 0, 0, 0, 812,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 813, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 814, 0, 0, 0, 815, 0, 816,
};
void recomp_unit_0057_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088E8000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0057[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088E8000;
    case 2u: goto L_088E8010;
    case 3u: goto L_088E8020;
    case 4u: goto L_088E802C;
    case 5u: goto L_088E8034;
    case 6u: goto L_088E803C;
    case 7u: goto L_088E8068;
    case 8u: goto L_088E8074;
    case 9u: goto L_088E8084;
    case 10u: goto L_088E8090;
    case 11u: goto L_088E8098;
    case 12u: goto L_088E80A0;
    case 13u: goto L_088E80BC;
    case 14u: goto L_088E80C8;
    case 15u: goto L_088E80D8;
    case 16u: goto L_088E80E4;
    case 17u: goto L_088E80EC;
    case 18u: goto L_088E80F4;
    case 19u: goto L_088E8110;
    case 20u: goto L_088E811C;
    case 21u: goto L_088E812C;
    case 22u: goto L_088E8138;
    case 23u: goto L_088E8168;
    case 24u: goto L_088E8170;
    case 25u: goto L_088E8178;
    case 26u: goto L_088E8188;
    case 27u: goto L_088E81C8;
    case 28u: goto L_088E81D0;
    case 29u: goto L_088E81E0;
    case 30u: goto L_088E81F0;
    case 31u: goto L_088E81F8;
    case 32u: goto L_088E8200;
    case 33u: goto L_088E8208;
    case 34u: goto L_088E8218;
    case 35u: goto L_088E8228;
    case 36u: goto L_088E8234;
    case 37u: goto L_088E823C;
    case 38u: goto L_088E8248;
    case 39u: goto L_088E8250;
    case 40u: goto L_088E8268;
    case 41u: goto L_088E8278;
    case 42u: goto L_088E8280;
    case 43u: goto L_088E8288;
    case 44u: goto L_088E829C;
    case 45u: goto L_088E82CC;
    case 46u: goto L_088E82D8;
    case 47u: goto L_088E82E0;
    case 48u: goto L_088E82EC;
    case 49u: goto L_088E82F4;
    case 50u: goto L_088E82FC;
    case 51u: goto L_088E8304;
    case 52u: goto L_088E830C;
    case 53u: goto L_088E8314;
    case 54u: goto L_088E8318;
    case 55u: goto L_088E8330;
    case 56u: goto L_088E8334;
    case 57u: goto L_088E8340;
    case 58u: goto L_088E8354;
    case 59u: goto L_088E8360;
    case 60u: goto L_088E8368;
    case 61u: goto L_088E8370;
    case 62u: goto L_088E8374;
    case 63u: goto L_088E837C;
    case 64u: goto L_088E838C;
    case 65u: goto L_088E8398;
    case 66u: goto L_088E83A0;
    case 67u: goto L_088E83A8;
    case 68u: goto L_088E83C8;
    case 69u: goto L_088E83D0;
    case 70u: goto L_088E83D8;
    case 71u: goto L_088E8400;
    case 72u: goto L_088E840C;
    case 73u: goto L_088E8418;
    case 74u: goto L_088E8424;
    case 75u: goto L_088E8428;
    case 76u: goto L_088E8444;
    case 77u: goto L_088E845C;
    case 78u: goto L_088E8470;
    case 79u: goto L_088E8488;
    case 80u: goto L_088E849C;
    case 81u: goto L_088E84B4;
    case 82u: goto L_088E84C8;
    case 83u: goto L_088E84E0;
    case 84u: goto L_088E84F0;
    case 85u: goto L_088E84F8;
    case 86u: goto L_088E8500;
    case 87u: goto L_088E8518;
    case 88u: goto L_088E8528;
    case 89u: goto L_088E8534;
    case 90u: goto L_088E856C;
    case 91u: goto L_088E857C;
    case 92u: goto L_088E8584;
    case 93u: goto L_088E858C;
    case 94u: goto L_088E859C;
    case 95u: goto L_088E85A4;
    case 96u: goto L_088E85AC;
    case 97u: goto L_088E85B4;
    case 98u: goto L_088E85C4;
    case 99u: goto L_088E85CC;
    case 100u: goto L_088E85D4;
    case 101u: goto L_088E85E0;
    case 102u: goto L_088E85E8;
    case 103u: goto L_088E85F0;
    case 104u: goto L_088E85F4;
    case 105u: goto L_088E8614;
    case 106u: goto L_088E8618;
    case 107u: goto L_088E8624;
    case 108u: goto L_088E862C;
    case 109u: goto L_088E8634;
    case 110u: goto L_088E8644;
    case 111u: goto L_088E8658;
    case 112u: goto L_088E8668;
    case 113u: goto L_088E8670;
    case 114u: goto L_088E8684;
    case 115u: goto L_088E8694;
    case 116u: goto L_088E869C;
    case 117u: goto L_088E86B0;
    case 118u: goto L_088E86C0;
    case 119u: goto L_088E86C8;
    case 120u: goto L_088E86DC;
    case 121u: goto L_088E86E4;
    case 122u: goto L_088E86EC;
    case 123u: goto L_088E86F4;
    case 124u: goto L_088E86F8;
    case 125u: goto L_088E8700;
    case 126u: goto L_088E8714;
    case 127u: goto L_088E8730;
    case 128u: goto L_088E8738;
    case 129u: goto L_088E8740;
    case 130u: goto L_088E8748;
    case 131u: goto L_088E874C;
    case 132u: goto L_088E8750;
    case 133u: goto L_088E8758;
    case 134u: goto L_088E8768;
    case 135u: goto L_088E8784;
    case 136u: goto L_088E878C;
    case 137u: goto L_088E8794;
    case 138u: goto L_088E879C;
    case 139u: goto L_088E87A4;
    case 140u: goto L_088E87AC;
    case 141u: goto L_088E87C8;
    case 142u: goto L_088E87D0;
    case 143u: goto L_088E87D8;
    case 144u: goto L_088E882C;
    case 145u: goto L_088E8858;
    case 146u: goto L_088E8868;
    case 147u: goto L_088E8870;
    case 148u: goto L_088E887C;
    case 149u: goto L_088E8890;
    case 150u: goto L_088E889C;
    case 151u: goto L_088E88A4;
    case 152u: goto L_088E88AC;
    case 153u: goto L_088E88CC;
    case 154u: goto L_088E88E4;
    case 155u: goto L_088E8910;
    case 156u: goto L_088E895C;
    case 157u: goto L_088E8968;
    case 158u: goto L_088E89C8;
    case 159u: goto L_088E89F4;
    case 160u: goto L_088E8A10;
    case 161u: goto L_088E8A1C;
    case 162u: goto L_088E8A48;
    case 163u: goto L_088E8A68;
    case 164u: goto L_088E8AAC;
    case 165u: goto L_088E8AC4;
    case 166u: goto L_088E8AD0;
    case 167u: goto L_088E8AEC;
    case 168u: goto L_088E8B0C;
    case 169u: goto L_088E8B18;
    case 170u: goto L_088E8B20;
    case 171u: goto L_088E8B30;
    case 172u: goto L_088E8B40;
    case 173u: goto L_088E8B4C;
    case 174u: goto L_088E8B54;
    case 175u: goto L_088E8B5C;
    case 176u: goto L_088E8B88;
    case 177u: goto L_088E8B94;
    case 178u: goto L_088E8BA4;
    case 179u: goto L_088E8BB0;
    case 180u: goto L_088E8BB8;
    case 181u: goto L_088E8BC0;
    case 182u: goto L_088E8BDC;
    case 183u: goto L_088E8BE8;
    case 184u: goto L_088E8BF8;
    case 185u: goto L_088E8C04;
    case 186u: goto L_088E8C0C;
    case 187u: goto L_088E8C14;
    case 188u: goto L_088E8C30;
    case 189u: goto L_088E8C3C;
    case 190u: goto L_088E8C4C;
    case 191u: goto L_088E8C58;
    case 192u: goto L_088E8C88;
    case 193u: goto L_088E8C90;
    case 194u: goto L_088E8C98;
    case 195u: goto L_088E8CA8;
    case 196u: goto L_088E8CE8;
    case 197u: goto L_088E8CF0;
    case 198u: goto L_088E8CF8;
    case 199u: goto L_088E8D00;
    case 200u: goto L_088E8D10;
    case 201u: goto L_088E8D20;
    case 202u: goto L_088E8D2C;
    case 203u: goto L_088E8D34;
    case 204u: goto L_088E8D40;
    case 205u: goto L_088E8D48;
    case 206u: goto L_088E8D60;
    case 207u: goto L_088E8D70;
    case 208u: goto L_088E8D78;
    case 209u: goto L_088E8D80;
    case 210u: goto L_088E8D94;
    case 211u: goto L_088E8DC8;
    case 212u: goto L_088E8DD4;
    case 213u: goto L_088E8DDC;
    case 214u: goto L_088E8DE8;
    case 215u: goto L_088E8DF0;
    case 216u: goto L_088E8DF8;
    case 217u: goto L_088E8E00;
    case 218u: goto L_088E8E08;
    case 219u: goto L_088E8E10;
    case 220u: goto L_088E8E14;
    case 221u: goto L_088E8E2C;
    case 222u: goto L_088E8E30;
    case 223u: goto L_088E8E3C;
    case 224u: goto L_088E8E50;
    case 225u: goto L_088E8E5C;
    case 226u: goto L_088E8E64;
    case 227u: goto L_088E8E6C;
    case 228u: goto L_088E8E70;
    case 229u: goto L_088E8E78;
    case 230u: goto L_088E8E88;
    case 231u: goto L_088E8E94;
    case 232u: goto L_088E8E9C;
    case 233u: goto L_088E8EA4;
    case 234u: goto L_088E8EC4;
    case 235u: goto L_088E8ECC;
    case 236u: goto L_088E8ED4;
    case 237u: goto L_088E8F20;
    case 238u: goto L_088E8F28;
    case 239u: goto L_088E8F38;
    case 240u: goto L_088E8F68;
    case 241u: goto L_088E8F74;
    case 242u: goto L_088E8F80;
    case 243u: goto L_088E8F88;
    case 244u: goto L_088E8F94;
    case 245u: goto L_088E8FA0;
    case 246u: goto L_088E8FA8;
    case 247u: goto L_088E8FB0;
    case 248u: goto L_088E8FB8;
    case 249u: goto L_088E8FC4;
    case 250u: goto L_088E8FD0;
    case 251u: goto L_088E8FFC;
    case 252u: goto L_088E900C;
    case 253u: goto L_088E9014;
    case 254u: goto L_088E9044;
    case 255u: goto L_088E9058;
    case 256u: goto L_088E9060;
    case 257u: goto L_088E908C;
    case 258u: goto L_088E9094;
    case 259u: goto L_088E909C;
    case 260u: goto L_088E90BC;
    case 261u: goto L_088E90DC;
    case 262u: goto L_088E9114;
    case 263u: goto L_088E9120;
    case 264u: goto L_088E916C;
    case 265u: goto L_088E9194;
    case 266u: goto L_088E91B0;
    case 267u: goto L_088E91B8;
    case 268u: goto L_088E91C4;
    case 269u: goto L_088E91F0;
    case 270u: goto L_088E920C;
    case 271u: goto L_088E9248;
    case 272u: goto L_088E9260;
    case 273u: goto L_088E926C;
    case 274u: goto L_088E9288;
    case 275u: goto L_088E92A8;
    case 276u: goto L_088E92B4;
    case 277u: goto L_088E92BC;
    case 278u: goto L_088E92CC;
    case 279u: goto L_088E92DC;
    case 280u: goto L_088E92E8;
    case 281u: goto L_088E92F0;
    case 282u: goto L_088E92F8;
    case 283u: goto L_088E9324;
    case 284u: goto L_088E9330;
    case 285u: goto L_088E9340;
    case 286u: goto L_088E934C;
    case 287u: goto L_088E9354;
    case 288u: goto L_088E935C;
    case 289u: goto L_088E9378;
    case 290u: goto L_088E9384;
    case 291u: goto L_088E9394;
    case 292u: goto L_088E93A0;
    case 293u: goto L_088E93D0;
    case 294u: goto L_088E93D8;
    case 295u: goto L_088E93E0;
    case 296u: goto L_088E93F0;
    case 297u: goto L_088E943C;
    case 298u: goto L_088E9444;
    case 299u: goto L_088E944C;
    case 300u: goto L_088E9454;
    case 301u: goto L_088E9464;
    case 302u: goto L_088E9474;
    case 303u: goto L_088E9480;
    case 304u: goto L_088E9488;
    case 305u: goto L_088E9494;
    case 306u: goto L_088E949C;
    case 307u: goto L_088E94B4;
    case 308u: goto L_088E94C4;
    case 309u: goto L_088E94CC;
    case 310u: goto L_088E94D4;
    case 311u: goto L_088E9518;
    case 312u: goto L_088E9524;
    case 313u: goto L_088E952C;
    case 314u: goto L_088E9538;
    case 315u: goto L_088E9540;
    case 316u: goto L_088E9548;
    case 317u: goto L_088E9550;
    case 318u: goto L_088E9554;
    case 319u: goto L_088E956C;
    case 320u: goto L_088E9570;
    case 321u: goto L_088E957C;
    case 322u: goto L_088E9590;
    case 323u: goto L_088E959C;
    case 324u: goto L_088E95A4;
    case 325u: goto L_088E95AC;
    case 326u: goto L_088E95B0;
    case 327u: goto L_088E95B8;
    case 328u: goto L_088E95C8;
    case 329u: goto L_088E95D4;
    case 330u: goto L_088E95DC;
    case 331u: goto L_088E95E4;
    case 332u: goto L_088E9604;
    case 333u: goto L_088E960C;
    case 334u: goto L_088E9614;
    case 335u: goto L_088E9660;
    case 336u: goto L_088E9668;
    case 337u: goto L_088E9678;
    case 338u: goto L_088E9680;
    case 339u: goto L_088E968C;
    case 340u: goto L_088E9694;
    case 341u: goto L_088E96BC;
    case 342u: goto L_088E96E0;
    case 343u: goto L_088E96EC;
    case 344u: goto L_088E9704;
    case 345u: goto L_088E970C;
    case 346u: goto L_088E9718;
    case 347u: goto L_088E9734;
    case 348u: goto L_088E973C;
    case 349u: goto L_088E9748;
    case 350u: goto L_088E9750;
    case 351u: goto L_088E9758;
    case 352u: goto L_088E9764;
    case 353u: goto L_088E9784;
    case 354u: goto L_088E9790;
    case 355u: goto L_088E979C;
    case 356u: goto L_088E97A4;
    case 357u: goto L_088E97B0;
    case 358u: goto L_088E97BC;
    case 359u: goto L_088E97C4;
    case 360u: goto L_088E97CC;
    case 361u: goto L_088E97D4;
    case 362u: goto L_088E97F4;
    case 363u: goto L_088E9814;
    case 364u: goto L_088E984C;
    case 365u: goto L_088E9858;
    case 366u: goto L_088E9898;
    case 367u: goto L_088E98C0;
    case 368u: goto L_088E98DC;
    case 369u: goto L_088E98E8;
    case 370u: goto L_088E9914;
    case 371u: goto L_088E9930;
    case 372u: goto L_088E9974;
    case 373u: goto L_088E998C;
    case 374u: goto L_088E9998;
    case 375u: goto L_088E99B4;
    case 376u: goto L_088E99D4;
    case 377u: goto L_088E99E0;
    case 378u: goto L_088E99E8;
    case 379u: goto L_088E99F8;
    case 380u: goto L_088E9A08;
    case 381u: goto L_088E9A14;
    case 382u: goto L_088E9A1C;
    case 383u: goto L_088E9A24;
    case 384u: goto L_088E9A50;
    case 385u: goto L_088E9A5C;
    case 386u: goto L_088E9A6C;
    case 387u: goto L_088E9A78;
    case 388u: goto L_088E9A80;
    case 389u: goto L_088E9A88;
    case 390u: goto L_088E9AA4;
    case 391u: goto L_088E9AB0;
    case 392u: goto L_088E9AC0;
    case 393u: goto L_088E9ACC;
    case 394u: goto L_088E9AFC;
    case 395u: goto L_088E9B04;
    case 396u: goto L_088E9B0C;
    case 397u: goto L_088E9B1C;
    case 398u: goto L_088E9B5C;
    case 399u: goto L_088E9B64;
    case 400u: goto L_088E9B6C;
    case 401u: goto L_088E9B74;
    case 402u: goto L_088E9B84;
    case 403u: goto L_088E9B94;
    case 404u: goto L_088E9BA0;
    case 405u: goto L_088E9BA8;
    case 406u: goto L_088E9BB4;
    case 407u: goto L_088E9BBC;
    case 408u: goto L_088E9BD4;
    case 409u: goto L_088E9BE4;
    case 410u: goto L_088E9BEC;
    case 411u: goto L_088E9BF4;
    case 412u: goto L_088E9C30;
    case 413u: goto L_088E9C38;
    case 414u: goto L_088E9C40;
    case 415u: goto L_088E9C4C;
    case 416u: goto L_088E9C54;
    case 417u: goto L_088E9C6C;
    case 418u: goto L_088E9C74;
    case 419u: goto L_088E9C7C;
    case 420u: goto L_088E9C84;
    case 421u: goto L_088E9C8C;
    case 422u: goto L_088E9C90;
    case 423u: goto L_088E9CA4;
    case 424u: goto L_088E9CA8;
    case 425u: goto L_088E9CB4;
    case 426u: goto L_088E9CC8;
    case 427u: goto L_088E9CD4;
    case 428u: goto L_088E9CDC;
    case 429u: goto L_088E9CE4;
    case 430u: goto L_088E9CE8;
    case 431u: goto L_088E9CF0;
    case 432u: goto L_088E9D00;
    case 433u: goto L_088E9D0C;
    case 434u: goto L_088E9D14;
    case 435u: goto L_088E9D1C;
    case 436u: goto L_088E9D3C;
    case 437u: goto L_088E9D44;
    case 438u: goto L_088E9D4C;
    case 439u: goto L_088E9D70;
    case 440u: goto L_088E9DD0;
    case 441u: goto L_088E9DF8;
    case 442u: goto L_088E9E00;
    case 443u: goto L_088E9E0C;
    case 444u: goto L_088E9E38;
    case 445u: goto L_088E9E54;
    case 446u: goto L_088E9E90;
    case 447u: goto L_088E9E9C;
    case 448u: goto L_088E9EB8;
    case 449u: goto L_088E9ED8;
    case 450u: goto L_088E9EE4;
    case 451u: goto L_088E9EEC;
    case 452u: goto L_088E9EFC;
    case 453u: goto L_088E9F0C;
    case 454u: goto L_088E9F18;
    case 455u: goto L_088E9F20;
    case 456u: goto L_088E9F28;
    case 457u: goto L_088E9F44;
    case 458u: goto L_088E9F50;
    case 459u: goto L_088E9F60;
    case 460u: goto L_088E9F6C;
    case 461u: goto L_088E9F74;
    case 462u: goto L_088E9F7C;
    case 463u: goto L_088E9F98;
    case 464u: goto L_088E9FA4;
    case 465u: goto L_088E9FB4;
    case 466u: goto L_088E9FC0;
    case 467u: goto L_088E9FF0;
    case 468u: goto L_088E9FF8;
    case 469u: goto L_088EA000;
    case 470u: goto L_088EA010;
    case 471u: goto L_088EA05C;
    case 472u: goto L_088EA064;
    case 473u: goto L_088EA06C;
    case 474u: goto L_088EA074;
    case 475u: goto L_088EA084;
    case 476u: goto L_088EA094;
    case 477u: goto L_088EA0A0;
    case 478u: goto L_088EA0AC;
    case 479u: goto L_088EA0B4;
    case 480u: goto L_088EA0CC;
    case 481u: goto L_088EA0DC;
    case 482u: goto L_088EA0E4;
    case 483u: goto L_088EA0EC;
    case 484u: goto L_088EA130;
    case 485u: goto L_088EA138;
    case 486u: goto L_088EA144;
    case 487u: goto L_088EA14C;
    case 488u: goto L_088EA154;
    case 489u: goto L_088EA15C;
    case 490u: goto L_088EA160;
    case 491u: goto L_088EA178;
    case 492u: goto L_088EA17C;
    case 493u: goto L_088EA188;
    case 494u: goto L_088EA19C;
    case 495u: goto L_088EA1A8;
    case 496u: goto L_088EA1B0;
    case 497u: goto L_088EA1B8;
    case 498u: goto L_088EA1BC;
    case 499u: goto L_088EA1C4;
    case 500u: goto L_088EA1D4;
    case 501u: goto L_088EA1E0;
    case 502u: goto L_088EA1E8;
    case 503u: goto L_088EA1F0;
    case 504u: goto L_088EA210;
    case 505u: goto L_088EA218;
    case 506u: goto L_088EA220;
    case 507u: goto L_088EA230;
    case 508u: goto L_088EA244;
    case 509u: goto L_088EA24C;
    case 510u: goto L_088EA25C;
    case 511u: goto L_088EA26C;
    case 512u: goto L_088EA27C;
    case 513u: goto L_088EA28C;
    case 514u: goto L_088EA29C;
    case 515u: goto L_088EA2AC;
    case 516u: goto L_088EA2BC;
    case 517u: goto L_088EA2CC;
    case 518u: goto L_088EA2DC;
    case 519u: goto L_088EA2EC;
    case 520u: goto L_088EA2FC;
    case 521u: goto L_088EA30C;
    case 522u: goto L_088EA31C;
    case 523u: goto L_088EA334;
    case 524u: goto L_088EA368;
    case 525u: goto L_088EA39C;
    case 526u: goto L_088EA3D0;
    case 527u: goto L_088EA404;
    case 528u: goto L_088EA444;
    case 529u: goto L_088EA478;
    case 530u: goto L_088EA4B4;
    case 531u: goto L_088EA4BC;
    case 532u: goto L_088EA4CC;
    case 533u: goto L_088EA4DC;
    case 534u: goto L_088EA4EC;
    case 535u: goto L_088EA4FC;
    case 536u: goto L_088EA6B4;
    case 537u: goto L_088EA6C4;
    case 538u: goto L_088EA6D0;
    case 539u: goto L_088EA6F4;
    case 540u: goto L_088EA700;
    case 541u: goto L_088EA708;
    case 542u: goto L_088EA710;
    case 543u: goto L_088EA718;
    case 544u: goto L_088EA720;
    case 545u: goto L_088EA72C;
    case 546u: goto L_088EA734;
    case 547u: goto L_088EA73C;
    case 548u: goto L_088EA744;
    case 549u: goto L_088EA74C;
    case 550u: goto L_088EA754;
    case 551u: goto L_088EA760;
    case 552u: goto L_088EA768;
    case 553u: goto L_088EA770;
    case 554u: goto L_088EA778;
    case 555u: goto L_088EA780;
    case 556u: goto L_088EA788;
    case 557u: goto L_088EA790;
    case 558u: goto L_088EA798;
    case 559u: goto L_088EA7A4;
    case 560u: goto L_088EA7AC;
    case 561u: goto L_088EA7B4;
    case 562u: goto L_088EA7BC;
    case 563u: goto L_088EA7C4;
    case 564u: goto L_088EA7CC;
    case 565u: goto L_088EA7D8;
    case 566u: goto L_088EA7E0;
    case 567u: goto L_088EA7E8;
    case 568u: goto L_088EA7F0;
    case 569u: goto L_088EA7F8;
    case 570u: goto L_088EA804;
    case 571u: goto L_088EA80C;
    case 572u: goto L_088EA814;
    case 573u: goto L_088EA81C;
    case 574u: goto L_088EA824;
    case 575u: goto L_088EA82C;
    case 576u: goto L_088EA838;
    case 577u: goto L_088EA83C;
    case 578u: goto L_088EA84C;
    case 579u: goto L_088EA86C;
    case 580u: goto L_088EA874;
    case 581u: goto L_088EA884;
    case 582u: goto L_088EA894;
    case 583u: goto L_088EA8A8;
    case 584u: goto L_088EA8B8;
    case 585u: goto L_088EA8C8;
    case 586u: goto L_088EA8D8;
    case 587u: goto L_088EA8E8;
    case 588u: goto L_088EA8F8;
    case 589u: goto L_088EA908;
    case 590u: goto L_088EA918;
    case 591u: goto L_088EA928;
    case 592u: goto L_088EA954;
    case 593u: goto L_088EA95C;
    case 594u: goto L_088EA96C;
    case 595u: goto L_088EA990;
    case 596u: goto L_088EA9A8;
    case 597u: goto L_088EA9BC;
    case 598u: goto L_088EA9C8;
    case 599u: goto L_088EA9D0;
    case 600u: goto L_088EA9D8;
    case 601u: goto L_088EA9E0;
    case 602u: goto L_088EA9EC;
    case 603u: goto L_088EAA0C;
    case 604u: goto L_088EAA18;
    case 605u: goto L_088EAA20;
    case 606u: goto L_088EAA34;
    case 607u: goto L_088EAA50;
    case 608u: goto L_088EAA78;
    case 609u: goto L_088EAA94;
    case 610u: goto L_088EAAB4;
    case 611u: goto L_088EAAC4;
    case 612u: goto L_088EAAD8;
    case 613u: goto L_088EAAF0;
    case 614u: goto L_088EAB14;
    case 615u: goto L_088EAB24;
    case 616u: goto L_088EAB30;
    case 617u: goto L_088EAB58;
    case 618u: goto L_088EAB60;
    case 619u: goto L_088EAB68;
    case 620u: goto L_088EAB74;
    case 621u: goto L_088EAB7C;
    case 622u: goto L_088EAB8C;
    case 623u: goto L_088EAB94;
    case 624u: goto L_088EABA0;
    case 625u: goto L_088EABB0;
    case 626u: goto L_088EABC8;
    case 627u: goto L_088EABE0;
    case 628u: goto L_088EABFC;
    case 629u: goto L_088EAC0C;
    case 630u: goto L_088EAC18;
    case 631u: goto L_088EAC28;
    case 632u: goto L_088EAC34;
    case 633u: goto L_088EAC44;
    case 634u: goto L_088EAC50;
    case 635u: goto L_088EAC88;
    case 636u: goto L_088EACC8;
    case 637u: goto L_088EACDC;
    case 638u: goto L_088EACE8;
    case 639u: goto L_088EAD1C;
    case 640u: goto L_088EAD34;
    case 641u: goto L_088EAD48;
    case 642u: goto L_088EAD58;
    case 643u: goto L_088EAD60;
    case 644u: goto L_088EAD7C;
    case 645u: goto L_088EADC4;
    case 646u: goto L_088EADD4;
    case 647u: goto L_088EADE0;
    case 648u: goto L_088EAE04;
    case 649u: goto L_088EAE28;
    case 650u: goto L_088EAE3C;
    case 651u: goto L_088EAE4C;
    case 652u: goto L_088EAE68;
    case 653u: goto L_088EAE84;
    case 654u: goto L_088EAE94;
    case 655u: goto L_088EAEC8;
    case 656u: goto L_088EAEF4;
    case 657u: goto L_088EAF14;
    case 658u: goto L_088EAF24;
    case 659u: goto L_088EAF2C;
    case 660u: goto L_088EAF38;
    case 661u: goto L_088EAF40;
    case 662u: goto L_088EAF48;
    case 663u: goto L_088EAF50;
    case 664u: goto L_088EAF60;
    case 665u: goto L_088EAF70;
    case 666u: goto L_088EAF78;
    case 667u: goto L_088EAF94;
    case 668u: goto L_088EAFC8;
    case 669u: goto L_088EAFCC;
    case 670u: goto L_088EAFF4;
    case 671u: goto L_088EB018;
    case 672u: goto L_088EB030;
    case 673u: goto L_088EB040;
    case 674u: goto L_088EB05C;
    case 675u: goto L_088EB078;
    case 676u: goto L_088EB094;
    case 677u: goto L_088EB0A4;
    case 678u: goto L_088EB0A8;
    case 679u: goto L_088EB0F8;
    case 680u: goto L_088EB0FC;
    case 681u: goto L_088EB124;
    case 682u: goto L_088EB138;
    case 683u: goto L_088EB158;
    case 684u: goto L_088EB188;
    case 685u: goto L_088EB1C0;
    case 686u: goto L_088EB1F0;
    case 687u: goto L_088EB204;
    case 688u: goto L_088EB210;
    case 689u: goto L_088EB244;
    case 690u: goto L_088EB25C;
    case 691u: goto L_088EB270;
    case 692u: goto L_088EB280;
    case 693u: goto L_088EB288;
    case 694u: goto L_088EB2A4;
    case 695u: goto L_088EB2EC;
    case 696u: goto L_088EB300;
    case 697u: goto L_088EB30C;
    case 698u: goto L_088EB330;
    case 699u: goto L_088EB354;
    case 700u: goto L_088EB368;
    case 701u: goto L_088EB378;
    case 702u: goto L_088EB394;
    case 703u: goto L_088EB3B0;
    case 704u: goto L_088EB3C0;
    case 705u: goto L_088EB3F4;
    case 706u: goto L_088EB420;
    case 707u: goto L_088EB480;
    case 708u: goto L_088EB490;
    case 709u: goto L_088EB498;
    case 710u: goto L_088EB4A4;
    case 711u: goto L_088EB4AC;
    case 712u: goto L_088EB4B4;
    case 713u: goto L_088EB4BC;
    case 714u: goto L_088EB4D4;
    case 715u: goto L_088EB4E4;
    case 716u: goto L_088EB4EC;
    case 717u: goto L_088EB508;
    case 718u: goto L_088EB51C;
    case 719u: goto L_088EB52C;
    case 720u: goto L_088EB53C;
    case 721u: goto L_088EB54C;
    case 722u: goto L_088EB5EC;
    case 723u: goto L_088EB5F0;
    case 724u: goto L_088EB618;
    case 725u: goto L_088EB63C;
    case 726u: goto L_088EB658;
    case 727u: goto L_088EB668;
    case 728u: goto L_088EB684;
    case 729u: goto L_088EB6A0;
    case 730u: goto L_088EB6BC;
    case 731u: goto L_088EB6CC;
    case 732u: goto L_088EB6D0;
    case 733u: goto L_088EB718;
    case 734u: goto L_088EB71C;
    case 735u: goto L_088EB744;
    case 736u: goto L_088EB758;
    case 737u: goto L_088EB778;
    case 738u: goto L_088EB7A8;
    case 739u: goto L_088EB7E0;
    case 740u: goto L_088EB818;
    case 741u: goto L_088EB828;
    case 742u: goto L_088EB834;
    case 743u: goto L_088EB868;
    case 744u: goto L_088EB880;
    case 745u: goto L_088EB894;
    case 746u: goto L_088EB8A4;
    case 747u: goto L_088EB8AC;
    case 748u: goto L_088EB8C8;
    case 749u: goto L_088EB910;
    case 750u: goto L_088EB924;
    case 751u: goto L_088EB930;
    case 752u: goto L_088EB954;
    case 753u: goto L_088EB978;
    case 754u: goto L_088EB98C;
    case 755u: goto L_088EB99C;
    case 756u: goto L_088EB9B8;
    case 757u: goto L_088EB9D4;
    case 758u: goto L_088EB9E4;
    case 759u: goto L_088EBA18;
    case 760u: goto L_088EBA48;
    case 761u: goto L_088EBA84;
    case 762u: goto L_088EBA94;
    case 763u: goto L_088EBA9C;
    case 764u: goto L_088EBAA8;
    case 765u: goto L_088EBAB0;
    case 766u: goto L_088EBAB8;
    case 767u: goto L_088EBAC0;
    case 768u: goto L_088EBAD0;
    case 769u: goto L_088EBAE0;
    case 770u: goto L_088EBAE8;
    case 771u: goto L_088EBB04;
    case 772u: goto L_088EBB14;
    case 773u: goto L_088EBB24;
    case 774u: goto L_088EBB88;
    case 775u: goto L_088EBB8C;
    case 776u: goto L_088EBBB4;
    case 777u: goto L_088EBBD8;
    case 778u: goto L_088EBBF4;
    case 779u: goto L_088EBC04;
    case 780u: goto L_088EBC20;
    case 781u: goto L_088EBC3C;
    case 782u: goto L_088EBC58;
    case 783u: goto L_088EBC68;
    case 784u: goto L_088EBC6C;
    case 785u: goto L_088EBCB4;
    case 786u: goto L_088EBCB8;
    case 787u: goto L_088EBCE0;
    case 788u: goto L_088EBCF4;
    case 789u: goto L_088EBD14;
    case 790u: goto L_088EBD44;
    case 791u: goto L_088EBD88;
    case 792u: goto L_088EBD94;
    case 793u: goto L_088EBDA0;
    case 794u: goto L_088EBDAC;
    case 795u: goto L_088EBDD0;
    case 796u: goto L_088EBDE4;
    case 797u: goto L_088EBDF8;
    case 798u: goto L_088EBE0C;
    case 799u: goto L_088EBE1C;
    case 800u: goto L_088EBE2C;
    case 801u: goto L_088EBE48;
    case 802u: goto L_088EBE8C;
    case 803u: goto L_088EBE9C;
    case 804u: goto L_088EBEA4;
    case 805u: goto L_088EBEC8;
    case 806u: goto L_088EBEEC;
    case 807u: goto L_088EBF00;
    case 808u: goto L_088EBF10;
    case 809u: goto L_088EBF2C;
    case 810u: goto L_088EBF48;
    case 811u: goto L_088EBF58;
    case 812u: goto L_088EBF7C;
    case 813u: goto L_088EBFB0;
    case 814u: goto L_088EBFDC;
    case 815u: goto L_088EBFEC;
    case 816u: goto L_088EBFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088E8000:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8010:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E8020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 334u, 0x088E6600u>(ctx, &aot_mem) && ctx.pc == 0x088E8020u) goto L_088E8020;
    return;
L_088E8020:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E802C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8034:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E803C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E8068u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(440), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 332u, 0x088E6538u>(ctx, &aot_mem) && ctx.pc == 0x088E8068u) goto L_088E8068;
    return;
L_088E8068:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8074:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E8084u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 334u, 0x088E6600u>(ctx, &aot_mem) && ctx.pc == 0x088E8084u) goto L_088E8084;
    return;
L_088E8084:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8090:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8098:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E80A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x088E80BCu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 332u, 0x088E6538u>(ctx, &aot_mem) && ctx.pc == 0x088E80BCu) goto L_088E80BC;
    return;
L_088E80BC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E80C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E80D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 334u, 0x088E6600u>(ctx, &aot_mem) && ctx.pc == 0x088E80D8u) goto L_088E80D8;
    return;
L_088E80D8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E80E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E80EC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E80F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E8110u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(436), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 332u, 0x088E6538u>(ctx, &aot_mem) && ctx.pc == 0x088E8110u) goto L_088E8110;
    return;
L_088E8110:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E811C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E812Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 334u, 0x088E6600u>(ctx, &aot_mem) && ctx.pc == 0x088E812Cu) goto L_088E812C;
    return;
L_088E812C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8138:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[17]);
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088E8268;
      }
      goto L_088E8168;
    }
L_088E8168:
    ctx.gpr[31] = (0x088E8170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088E8170u) goto L_088E8170;
    return;
L_088E8170:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[19] = (2221u << 16u);
      if (branch_taken) {
          goto L_088E8268;
      }
      goto L_088E8178;
    }
L_088E8178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088E8228;
      }
      goto L_088E8188;
    }
L_088E8188:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(1236));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(488)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(464)));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(464), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[31] = (0x088E81C8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(464)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 546u, 0x08832944u>(ctx, &aot_mem) && ctx.pc == 0x088E81C8u) goto L_088E81C8;
    return;
L_088E81C8:
    ctx.gpr[31] = (0x088E81D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 672u, 0x088E7B10u>(ctx, &aot_mem) && ctx.pc == 0x088E81D0u) goto L_088E81D0;
    return;
L_088E81D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(488)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_088E81F8;
      }
      goto L_088E81E0;
    }
L_088E81E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088E81F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E81F0u) goto L_088E81F0;
    return;
L_088E81F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(488), 0u);
    goto L_088E81F8;
L_088E81F8:
    ctx.gpr[31] = (0x088E8200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 201u, 0x08834E80u>(ctx, &aot_mem) && ctx.pc == 0x088E8200u) goto L_088E8200;
    return;
L_088E8200:
    ctx.gpr[31] = (0x088E8208u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088E8208u) goto L_088E8208;
    return;
L_088E8208:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x088E8218u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E8218u) goto L_088E8218;
    return;
L_088E8218:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(444), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088E8268;
      }
      goto L_088E8228;
    }
L_088E8228:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(448)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088E8248;
      }
      goto L_088E8234;
    }
L_088E8234:
    ctx.gpr[31] = (0x088E823Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 756u, 0x088338F8u>(ctx, &aot_mem) && ctx.pc == 0x088E823Cu) goto L_088E823C;
    return;
L_088E823C:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x088E8248u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088E8248u) goto L_088E8248;
    return;
L_088E8248:
    ctx.gpr[31] = (0x088E8250u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088E8250u) goto L_088E8250;
    return;
L_088E8250:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[31] = (0x088E8268u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E8268u) goto L_088E8268;
    return;
L_088E8268:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 64u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_088E8334;
    }
    goto L_088E8278;
L_088E8278:
    ctx.gpr[31] = (0x088E8280u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088E8280u) goto L_088E8280;
    return;
L_088E8280:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[19] = (2221u << 16u);
      if (branch_taken) {
          goto L_088E8330;
      }
      goto L_088E8288;
    }
L_088E8288:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E830C;
      }
      goto L_088E829C;
    }
L_088E829C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(1236));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(488)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088E82FC;
      }
      goto L_088E82CC;
    }
L_088E82CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(448)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_088E82EC;
      }
      goto L_088E82D8;
    }
L_088E82D8:
    ctx.gpr[31] = (0x088E82E0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 756u, 0x088338F8u>(ctx, &aot_mem) && ctx.pc == 0x088E82E0u) goto L_088E82E0;
    return;
L_088E82E0:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x088E82ECu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088E82ECu) goto L_088E82EC;
    return;
L_088E82EC:
    ctx.gpr[31] = (0x088E82F4u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088E82F4u) goto L_088E82F4;
    return;
L_088E82F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088E8318;
      }
      goto L_088E82FC;
    }
L_088E82FC:
    ctx.gpr[31] = (0x088E8304u);
    ctx.gpr[4] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088E8304u) goto L_088E8304;
    return;
L_088E8304:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088E8318;
      }
      goto L_088E830C;
    }
L_088E830C:
    ctx.gpr[31] = (0x088E8314u);
    ctx.gpr[4] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088E8314u) goto L_088E8314;
    return;
L_088E8314:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    goto L_088E8318;
L_088E8318:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x088E8330u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E8330u) goto L_088E8330;
    return;
L_088E8330:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088E8334;
L_088E8334:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E8374;
      }
      goto L_088E8340;
    }
L_088E8340:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088E8368;
      }
      goto L_088E8354;
    }
L_088E8354:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(436), ctx.gpr[17]);
    ctx.gpr[31] = (0x088E8360u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E8360u) goto L_088E8360;
    return;
L_088E8360:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_088E8374;
      }
      goto L_088E8368;
    }
L_088E8368:
    ctx.gpr[31] = (0x088E8370u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E8370u) goto L_088E8370;
    return;
L_088E8370:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088E8374;
L_088E8374:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088E83A8;
      }
      goto L_088E837C;
    }
L_088E837C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E83A0;
      }
      goto L_088E838C;
    }
L_088E838C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(436), 0u);
    ctx.gpr[31] = (0x088E8398u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E8398u) goto L_088E8398;
    return;
L_088E8398:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E83A8;
      }
      goto L_088E83A0;
    }
L_088E83A0:
    ctx.gpr[31] = (0x088E83A8u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E83A8u) goto L_088E83A8;
    return;
L_088E83A8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E83C8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E83D0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E83D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(492)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_088E8424;
      }
      goto L_088E8400;
    }
L_088E8400:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(496)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (2222u << 16u);
      if (branch_taken) {
          goto L_088E8428;
      }
      goto L_088E840C;
    }
L_088E840C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(500)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (2222u << 16u);
      if (branch_taken) {
          goto L_088E8428;
      }
      goto L_088E8418;
    }
L_088E8418:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_088E84F0;
    }
    goto L_088E8424;
L_088E8424:
    ctx.gpr[18] = (2222u << 16u);
    goto L_088E8428;
L_088E8428:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (3u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(8376));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088E8444u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E8444u) goto L_088E8444;
    return;
L_088E8444:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(492), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E845Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088E845Cu) goto L_088E845C;
    return;
L_088E845C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 18648u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088E8470u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E8470u) goto L_088E8470;
    return;
L_088E8470:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(496), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E8488u);
    ctx.gpr[6] = (0u | 18648u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088E8488u) goto L_088E8488;
    return;
L_088E8488:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 4200u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088E849Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E849Cu) goto L_088E849C;
    return;
L_088E849C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(500), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E84B4u);
    ctx.gpr[6] = (0u | 4200u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088E84B4u) goto L_088E84B4;
    return;
L_088E84B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 14904u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088E84C8u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E84C8u) goto L_088E84C8;
    return;
L_088E84C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(504), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E84E0u);
    ctx.gpr[6] = (0u | 14904u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088E84E0u) goto L_088E84E0;
    return;
L_088E84E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(516)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_088E84F0;
L_088E84F0:
    ctx.gpr[31] = (0x088E84F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 178u, 0x08944D00u>(ctx, &aot_mem) && ctx.pc == 0x088E84F8u) goto L_088E84F8;
    return;
L_088E84F8:
    ctx.gpr[31] = (0x088E8500u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 332u, 0x088E6538u>(ctx, &aot_mem) && ctx.pc == 0x088E8500u) goto L_088E8500;
    return;
L_088E8500:
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
L_088E8518:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E8528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 334u, 0x088E6600u>(ctx, &aot_mem) && ctx.pc == 0x088E8528u) goto L_088E8528;
    return;
L_088E8528:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8534:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(516)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088E87A4;
      }
      goto L_088E856C;
    }
L_088E856C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 128u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[19] = (0u | 8u);
      if (branch_taken) {
          goto L_088E8614;
      }
      goto L_088E857C;
    }
L_088E857C:
    ctx.gpr[31] = (0x088E8584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088E8584u) goto L_088E8584;
    return;
L_088E8584:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_088E8618;
    }
    goto L_088E858C;
L_088E858C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_088E85AC;
      }
      goto L_088E859C;
    }
L_088E859C:
    ctx.gpr[31] = (0x088E85A4u);
    ctx.gpr[4] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088E85A4u) goto L_088E85A4;
    return;
L_088E85A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088E85F4;
      }
      goto L_088E85AC;
    }
L_088E85AC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E85CC;
      }
      goto L_088E85B4;
    }
L_088E85B4:
    ctx.gpr[4] = (0u | 21u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[31] = (0x088E85C4u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088E85C4u) goto L_088E85C4;
    return;
L_088E85C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088E85F4;
      }
      goto L_088E85CC;
    }
L_088E85CC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.gpr[4] = (0u | 24u);
      if (branch_taken) {
          goto L_088E85E8;
      }
      goto L_088E85D4;
    }
L_088E85D4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[31] = (0x088E85E0u);
    ctx.gpr[4] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088E85E0u) goto L_088E85E0;
    return;
L_088E85E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088E85F4;
      }
      goto L_088E85E8;
    }
L_088E85E8:
    ctx.gpr[31] = (0x088E85F0u);
    ctx.gpr[4] = (0u | 27u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088E85F0u) goto L_088E85F0;
    return;
L_088E85F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    goto L_088E85F4;
L_088E85F4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x088E8614u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E8614u) goto L_088E8614;
    return;
L_088E8614:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088E8618;
L_088E8618:
    ctx.gpr[5] = (0u | 64u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088E86F8;
    }
    goto L_088E8624;
L_088E8624:
    ctx.gpr[31] = (0x088E862Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088E862Cu) goto L_088E862C;
    return;
L_088E862C:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088E86F8;
    }
    goto L_088E8634;
L_088E8634:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(492)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(496)));
        goto L_088E8668;
    }
    goto L_088E8644;
L_088E8644:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088E8658u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E8658u) goto L_088E8658;
    return;
L_088E8658:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(492), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(496)));
    goto L_088E8668;
L_088E8668:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(500)));
        goto L_088E8694;
    }
    goto L_088E8670;
L_088E8670:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088E8684u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E8684u) goto L_088E8684;
    return;
L_088E8684:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(496), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(500)));
    goto L_088E8694;
L_088E8694:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(504)));
        goto L_088E86C0;
    }
    goto L_088E869C;
L_088E869C:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088E86B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E86B0u) goto L_088E86B0;
    return;
L_088E86B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(500), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(504)));
    goto L_088E86C0;
L_088E86C0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_088E86E4;
      }
      goto L_088E86C8;
    }
L_088E86C8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088E86DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E86DCu) goto L_088E86DC;
    return;
L_088E86DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(504), 0u);
    goto L_088E86E4;
L_088E86E4:
    ctx.gpr[31] = (0x088E86ECu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088E86ECu) goto L_088E86EC;
    return;
L_088E86EC:
    ctx.gpr[31] = (0x088E86F4u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E86F4u) goto L_088E86F4;
    return;
L_088E86F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088E86F8;
L_088E86F8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_088E8750;
      }
      goto L_088E8700;
    }
L_088E8700:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088E8740;
      }
      goto L_088E8714;
    }
L_088E8714:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x088E8730u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 178u, 0x08944D00u>(ctx, &aot_mem) && ctx.pc == 0x088E8730u) goto L_088E8730;
    return;
L_088E8730:
    ctx.gpr[31] = (0x088E8738u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E8738u) goto L_088E8738;
    return;
L_088E8738:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088E874C;
      }
      goto L_088E8740;
    }
L_088E8740:
    ctx.gpr[31] = (0x088E8748u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E8748u) goto L_088E8748;
    return;
L_088E8748:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088E874C;
L_088E874C:
    ctx.gpr[5] = (0u | 4u);
    goto L_088E8750;
L_088E8750:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E87AC;
      }
      goto L_088E8758;
    }
L_088E8758:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088E8794;
      }
      goto L_088E8768;
    }
L_088E8768:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x088E8784u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 178u, 0x08944D00u>(ctx, &aot_mem) && ctx.pc == 0x088E8784u) goto L_088E8784;
    return;
L_088E8784:
    ctx.gpr[31] = (0x088E878Cu);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E878Cu) goto L_088E878C;
    return;
L_088E878C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E87AC;
      }
      goto L_088E8794;
    }
L_088E8794:
    ctx.gpr[31] = (0x088E879Cu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E879Cu) goto L_088E879C;
    return;
L_088E879C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E87AC;
      }
      goto L_088E87A4;
    }
L_088E87A4:
    ctx.gpr[31] = (0x088E87ACu);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 387u, 0x088EDFDCu>(ctx, &aot_mem) && ctx.pc == 0x088E87ACu) goto L_088E87AC;
    return;
L_088E87AC:
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
L_088E87C8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E87D0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E87D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[23]);
    ctx.gpr[23] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(356));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(352), 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E882Cu);
    ctx.gpr[6] = (0u | 80u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088E882Cu) goto L_088E882C;
    return;
L_088E882C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(2808));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(492)));
    ctx.gpr[20] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(680)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088E88E4;
      }
      goto L_088E8858;
    }
L_088E8858:
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
    goto L_088E8868;
L_088E8868:
    ctx.gpr[31] = (0x088E8870u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 728u, 0x088336E8u>(ctx, &aot_mem) && ctx.pc == 0x088E8870u) goto L_088E8870;
    return;
L_088E8870:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[18];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088E88A4;
      }
      goto L_088E887C;
    }
L_088E887C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(492)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2805)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E88A4;
      }
      goto L_088E8890;
    }
L_088E8890:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(62)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088E88A4;
      }
      goto L_088E889C;
    }
L_088E889C:
    ctx.gpr[22] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(449), static_cast<std::uint8_t>(ctx.gpr[16]));
    goto L_088E88A4;
L_088E88A4:
    if (ctx.gpr[22] != ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(492)));
        goto L_088E88CC;
    }
    goto L_088E88AC;
L_088E88AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(356), ctx.gpr[21]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(352), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(492)));
    goto L_088E88CC;
L_088E88CC:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(680)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088E8868;
      }
      goto L_088E88E4;
    }
L_088E88E4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8910:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1008));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(984), ctx.gpr[18]);
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(980), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(448)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(976), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(988), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(992), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(996), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(356)));
      if (branch_taken) {
          goto L_088E8A10;
      }
      goto L_088E895C;
    }
L_088E895C:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(940));
    ctx.gpr[31] = (0x088E8968u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 770u, 0x08833A00u>(ctx, &aot_mem) && ctx.pc == 0x088E8968u) goto L_088E8968;
    return;
L_088E8968:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(940), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(2808));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(942), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(943), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(492)));
    ctx.gpr[6] = (ctx.gpr[16] << 8u);
    ctx.gpr[20] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (ctx.gpr[16] - ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(944), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(492)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(948));
    ctx.gpr[31] = (0x088E89C8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(740));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E89C8u) goto L_088E89C8;
    return;
L_088E89C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(957));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(492)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[20]);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088E89F4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(749));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E89F4u) goto L_088E89F4;
    return;
L_088E89F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(492)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2805)));
    ctx.gpr[31] = (0x088E8A10u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(974), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 773u, 0x08833A2Cu>(ctx, &aot_mem) && ctx.pc == 0x088E8A10u) goto L_088E8A10;
    return;
L_088E8A10:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x088E8A1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 51u, 0x0883439Cu>(ctx, &aot_mem) && ctx.pc == 0x088E8A1Cu) goto L_088E8A1C;
    return;
L_088E8A1C:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(444)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[7] << (ctx.gpr[5] & 31u));
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(444), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x088E8A48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 54u, 0x088343C8u>(ctx, &aot_mem) && ctx.pc == 0x088E8A48u) goto L_088E8A48;
    return;
L_088E8A48:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(976)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(980)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(984)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(988)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(992)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(996)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8A68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(440), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(436), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E8AACu);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(448), static_cast<std::uint8_t>(0u));
    goto L_088EA220;
L_088E8AAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(60));
    ctx.gpr[31] = (0x088E8AC4u);
    ctx.gpr[6] = (0u | 292u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088E8AC4u) goto L_088E8AC4;
    return;
L_088E8AC4:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 0u);
    goto L_088E8AD0;
L_088E8AD0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(492)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(468)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
        goto L_088E8B0C;
    }
    goto L_088E8AEC;
L_088E8AEC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(56)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(56)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_088E8B0C;
L_088E8B0C:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 73 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2808));
      if (branch_taken) {
          goto L_088E8AD0;
      }
      goto L_088E8B18;
    }
L_088E8B18:
    ctx.gpr[31] = (0x088E8B20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 332u, 0x088E6538u>(ctx, &aot_mem) && ctx.pc == 0x088E8B20u) goto L_088E8B20;
    return;
L_088E8B20:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8B30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E8B40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 334u, 0x088E6600u>(ctx, &aot_mem) && ctx.pc == 0x088E8B40u) goto L_088E8B40;
    return;
L_088E8B40:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8B4C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8B54:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8B5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E8B88u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(440), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 332u, 0x088E6538u>(ctx, &aot_mem) && ctx.pc == 0x088E8B88u) goto L_088E8B88;
    return;
L_088E8B88:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8B94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E8BA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 334u, 0x088E6600u>(ctx, &aot_mem) && ctx.pc == 0x088E8BA4u) goto L_088E8BA4;
    return;
L_088E8BA4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8BB0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8BB8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8BC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x088E8BDCu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 332u, 0x088E6538u>(ctx, &aot_mem) && ctx.pc == 0x088E8BDCu) goto L_088E8BDC;
    return;
L_088E8BDC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8BE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E8BF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 334u, 0x088E6600u>(ctx, &aot_mem) && ctx.pc == 0x088E8BF8u) goto L_088E8BF8;
    return;
L_088E8BF8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8C04:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8C0C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8C14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E8C30u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(436), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 332u, 0x088E6538u>(ctx, &aot_mem) && ctx.pc == 0x088E8C30u) goto L_088E8C30;
    return;
L_088E8C30:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8C3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E8C4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 334u, 0x088E6600u>(ctx, &aot_mem) && ctx.pc == 0x088E8C4Cu) goto L_088E8C4C;
    return;
L_088E8C4C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8C58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088E8D60;
      }
      goto L_088E8C88;
    }
L_088E8C88:
    ctx.gpr[31] = (0x088E8C90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088E8C90u) goto L_088E8C90;
    return;
L_088E8C90:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[19] = (2221u << 16u);
      if (branch_taken) {
          goto L_088E8D60;
      }
      goto L_088E8C98;
    }
L_088E8C98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088E8D20;
      }
      goto L_088E8CA8;
    }
L_088E8CA8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(2808));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(492)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(464)));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(464), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[31] = (0x088E8CE8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(464)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 546u, 0x08832944u>(ctx, &aot_mem) && ctx.pc == 0x088E8CE8u) goto L_088E8CE8;
    return;
L_088E8CE8:
    ctx.gpr[31] = (0x088E8CF0u);
    // nop
    goto L_088E8910;
L_088E8CF0:
    ctx.gpr[31] = (0x088E8CF8u);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088E8CF8u) goto L_088E8CF8;
    return;
L_088E8CF8:
    ctx.gpr[31] = (0x088E8D00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 201u, 0x08834E80u>(ctx, &aot_mem) && ctx.pc == 0x088E8D00u) goto L_088E8D00;
    return;
L_088E8D00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x088E8D10u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E8D10u) goto L_088E8D10;
    return;
L_088E8D10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(444), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088E8D60;
      }
      goto L_088E8D20;
    }
L_088E8D20:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(448)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088E8D40;
      }
      goto L_088E8D2C;
    }
L_088E8D2C:
    ctx.gpr[31] = (0x088E8D34u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 770u, 0x08833A00u>(ctx, &aot_mem) && ctx.pc == 0x088E8D34u) goto L_088E8D34;
    return;
L_088E8D34:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[31] = (0x088E8D40u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088E8D40u) goto L_088E8D40;
    return;
L_088E8D40:
    ctx.gpr[31] = (0x088E8D48u);
    ctx.gpr[4] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088E8D48u) goto L_088E8D48;
    return;
L_088E8D48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[31] = (0x088E8D60u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E8D60u) goto L_088E8D60;
    return;
L_088E8D60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 64u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_088E8E30;
    }
    goto L_088E8D70;
L_088E8D70:
    ctx.gpr[31] = (0x088E8D78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088E8D78u) goto L_088E8D78;
    return;
L_088E8D78:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[19] = (2221u << 16u);
      if (branch_taken) {
          goto L_088E8E2C;
      }
      goto L_088E8D80;
    }
L_088E8D80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8E08;
      }
      goto L_088E8D94;
    }
L_088E8D94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(2808));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(492)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8DF8;
      }
      goto L_088E8DC8;
    }
L_088E8DC8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(448)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_088E8DE8;
      }
      goto L_088E8DD4;
    }
L_088E8DD4:
    ctx.gpr[31] = (0x088E8DDCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 770u, 0x08833A00u>(ctx, &aot_mem) && ctx.pc == 0x088E8DDCu) goto L_088E8DDC;
    return;
L_088E8DDC:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[31] = (0x088E8DE8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088E8DE8u) goto L_088E8DE8;
    return;
L_088E8DE8:
    ctx.gpr[31] = (0x088E8DF0u);
    ctx.gpr[4] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088E8DF0u) goto L_088E8DF0;
    return;
L_088E8DF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088E8E14;
      }
      goto L_088E8DF8;
    }
L_088E8DF8:
    ctx.gpr[31] = (0x088E8E00u);
    ctx.gpr[4] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088E8E00u) goto L_088E8E00;
    return;
L_088E8E00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088E8E14;
      }
      goto L_088E8E08;
    }
L_088E8E08:
    ctx.gpr[31] = (0x088E8E10u);
    ctx.gpr[4] = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088E8E10u) goto L_088E8E10;
    return;
L_088E8E10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    goto L_088E8E14;
L_088E8E14:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x088E8E2Cu);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E8E2Cu) goto L_088E8E2C;
    return;
L_088E8E2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088E8E30;
L_088E8E30:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E8E70;
      }
      goto L_088E8E3C;
    }
L_088E8E3C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088E8E64;
      }
      goto L_088E8E50;
    }
L_088E8E50:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(436), ctx.gpr[17]);
    ctx.gpr[31] = (0x088E8E5Cu);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E8E5Cu) goto L_088E8E5C;
    return;
L_088E8E5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_088E8E70;
      }
      goto L_088E8E64;
    }
L_088E8E64:
    ctx.gpr[31] = (0x088E8E6Cu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E8E6Cu) goto L_088E8E6C;
    return;
L_088E8E6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088E8E70;
L_088E8E70:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088E8EA4;
      }
      goto L_088E8E78;
    }
L_088E8E78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8E9C;
      }
      goto L_088E8E88;
    }
L_088E8E88:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(436), 0u);
    ctx.gpr[31] = (0x088E8E94u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E8E94u) goto L_088E8E94;
    return;
L_088E8E94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E8EA4;
      }
      goto L_088E8E9C;
    }
L_088E8E9C:
    ctx.gpr[31] = (0x088E8EA4u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E8EA4u) goto L_088E8EA4;
    return;
L_088E8EA4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8EC4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8ECC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E8ED4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[19]);
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(352), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[6] = (0u | 80u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(356));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E8F20u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088E8F20u) goto L_088E8F20;
    return;
L_088E8F20:
    ctx.gpr[31] = (0x088E8F28u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 728u, 0x088336E8u>(ctx, &aot_mem) && ctx.pc == 0x088E8F28u) goto L_088E8F28;
    return;
L_088E8F28:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_088E8FB0;
      }
      goto L_088E8F38;
    }
L_088E8F38:
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[7] = (0u - ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(496)));
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1031)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E8F80;
      }
      goto L_088E8F68;
    }
L_088E8F68:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_088E8FB0;
      }
      goto L_088E8F74;
    }
L_088E8F74:
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(449), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088E8FB0;
      }
      goto L_088E8F80;
    }
L_088E8F80:
    if (ctx.gpr[5] != ctx.gpr[16]) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(58)));
        goto L_088E8FA0;
    }
    goto L_088E8F88;
L_088E8F88:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(57)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_088E8FB0;
      }
      goto L_088E8F94;
    }
L_088E8F94:
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(449), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088E8FB0;
      }
      goto L_088E8FA0;
    }
L_088E8FA0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_088E8FB0;
      }
      goto L_088E8FA8;
    }
L_088E8FA8:
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(449), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_088E8FB0;
L_088E8FB0:
    ctx.gpr[31] = (0x088E8FB8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 798u, 0x08833C24u>(ctx, &aot_mem) && ctx.pc == 0x088E8FB8u) goto L_088E8FB8;
    return;
L_088E8FB8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088E9094;
      }
      goto L_088E8FC4;
    }
L_088E8FC4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(98)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[18] << 2u);
      if (branch_taken) {
          goto L_088E900C;
      }
      goto L_088E8FD0;
    }
L_088E8FD0:
    ctx.gpr[8] = (0u - ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(496)));
    ctx.gpr[6] = (ctx.gpr[6] << 6u);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1032)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E900C;
      }
      goto L_088E8FFC;
    }
L_088E8FFC:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(454), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(98)));
    goto L_088E900C;
L_088E900C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_088E9058;
      }
      goto L_088E9014;
    }
L_088E9014:
    ctx.gpr[6] = (ctx.gpr[18] << 2u);
    ctx.gpr[8] = (0u - ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(496)));
    ctx.gpr[6] = (ctx.gpr[6] << 6u);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1033)));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (0u | 2u);
        goto L_088E9058;
    }
    goto L_088E9044;
L_088E9044:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(454), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(98)));
    ctx.gpr[4] = (0u | 2u);
    goto L_088E9058;
L_088E9058:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
      if (branch_taken) {
          goto L_088E9094;
      }
      goto L_088E9060;
    }
L_088E9060:
    ctx.gpr[7] = (0u - ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(496)));
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1034)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_088E9094;
      }
      goto L_088E908C;
    }
L_088E908C:
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(454), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_088E9094;
L_088E9094:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088E90BC;
      }
      goto L_088E909C;
    }
L_088E909C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(356), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(352), ctx.gpr[5]);
    goto L_088E90BC;
L_088E90BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E90DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1008));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(984), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(448)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(980), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(988), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(992), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(996), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_088E91B8;
      }
      goto L_088E9114;
    }
L_088E9114:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(940));
    ctx.gpr[31] = (0x088E9120u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 783u, 0x08833B08u>(ctx, &aot_mem) && ctx.pc == 0x088E9120u) goto L_088E9120;
    return;
L_088E9120:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(940), static_cast<std::uint16_t>(ctx.gpr[16]));
    ctx.gpr[6] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (0u - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(942), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(496)));
    ctx.gpr[6] = (ctx.gpr[6] << 6u);
    ctx.gpr[19] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(948));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(944), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(496)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[31] = (0x088E916Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(784));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E916Cu) goto L_088E916C;
    return;
L_088E916C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(957));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(496)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[19]);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088E9194u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(793));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E9194u) goto L_088E9194;
    return;
L_088E9194:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(974));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(496)));
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[31] = (0x088E91B0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1031));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088E91B0u) goto L_088E91B0;
    return;
L_088E91B0:
    ctx.gpr[31] = (0x088E91B8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 786u, 0x08833B34u>(ctx, &aot_mem) && ctx.pc == 0x088E91B8u) goto L_088E91B8;
    return;
L_088E91B8:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x088E91C4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 51u, 0x0883439Cu>(ctx, &aot_mem) && ctx.pc == 0x088E91C4u) goto L_088E91C4;
    return;
L_088E91C4:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(588)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[7] << (ctx.gpr[5] & 31u));
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(588), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x088E91F0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 54u, 0x088343C8u>(ctx, &aot_mem) && ctx.pc == 0x088E91F0u) goto L_088E91F0;
    return;
L_088E91F0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(980)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(984)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(988)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(992)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(996)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E920C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(440), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E9248u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(448), static_cast<std::uint8_t>(0u));
    goto L_088EA220;
L_088E9248:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(60));
    ctx.gpr[31] = (0x088E9260u);
    ctx.gpr[6] = (0u | 292u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088E9260u) goto L_088E9260;
    return;
L_088E9260:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 0u);
    goto L_088E926C;
L_088E926C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(496)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(468)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
        goto L_088E92A8;
    }
    goto L_088E9288;
L_088E9288:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(56)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(56)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_088E92A8;
L_088E92A8:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 18 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1036));
      if (branch_taken) {
          goto L_088E926C;
      }
      goto L_088E92B4;
    }
L_088E92B4:
    ctx.gpr[31] = (0x088E92BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 332u, 0x088E6538u>(ctx, &aot_mem) && ctx.pc == 0x088E92BCu) goto L_088E92BC;
    return;
L_088E92BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E92CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E92DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 334u, 0x088E6600u>(ctx, &aot_mem) && ctx.pc == 0x088E92DCu) goto L_088E92DC;
    return;
L_088E92DC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E92E8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E92F0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E92F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(440), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E9324u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 332u, 0x088E6538u>(ctx, &aot_mem) && ctx.pc == 0x088E9324u) goto L_088E9324;
    return;
L_088E9324:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9330:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E9340u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 334u, 0x088E6600u>(ctx, &aot_mem) && ctx.pc == 0x088E9340u) goto L_088E9340;
    return;
L_088E9340:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E934C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9354:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E935C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E9378u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(436), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 332u, 0x088E6538u>(ctx, &aot_mem) && ctx.pc == 0x088E9378u) goto L_088E9378;
    return;
L_088E9378:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9384:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E9394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 334u, 0x088E6600u>(ctx, &aot_mem) && ctx.pc == 0x088E9394u) goto L_088E9394;
    return;
L_088E9394:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E93A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088E94B4;
      }
      goto L_088E93D0;
    }
L_088E93D0:
    ctx.gpr[31] = (0x088E93D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088E93D8u) goto L_088E93D8;
    return;
L_088E93D8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[19] = (2221u << 16u);
      if (branch_taken) {
          goto L_088E94B4;
      }
      goto L_088E93E0;
    }
L_088E93E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088E9474;
      }
      goto L_088E93F0;
    }
L_088E93F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(496)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[8] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(464), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[31] = (0x088E943Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(464)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 546u, 0x08832944u>(ctx, &aot_mem) && ctx.pc == 0x088E943Cu) goto L_088E943C;
    return;
L_088E943C:
    ctx.gpr[31] = (0x088E9444u);
    // nop
    goto L_088E90DC;
L_088E9444:
    ctx.gpr[31] = (0x088E944Cu);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088E944Cu) goto L_088E944C;
    return;
L_088E944C:
    ctx.gpr[31] = (0x088E9454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 201u, 0x08834E80u>(ctx, &aot_mem) && ctx.pc == 0x088E9454u) goto L_088E9454;
    return;
L_088E9454:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x088E9464u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E9464u) goto L_088E9464;
    return;
L_088E9464:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(444), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088E94B4;
      }
      goto L_088E9474;
    }
L_088E9474:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(448)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088E9494;
      }
      goto L_088E9480;
    }
L_088E9480:
    ctx.gpr[31] = (0x088E9488u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 783u, 0x08833B08u>(ctx, &aot_mem) && ctx.pc == 0x088E9488u) goto L_088E9488;
    return;
L_088E9488:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[31] = (0x088E9494u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088E9494u) goto L_088E9494;
    return;
L_088E9494:
    ctx.gpr[31] = (0x088E949Cu);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088E949Cu) goto L_088E949C;
    return;
L_088E949C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[31] = (0x088E94B4u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E94B4u) goto L_088E94B4;
    return;
L_088E94B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 64u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_088E9570;
    }
    goto L_088E94C4;
L_088E94C4:
    ctx.gpr[31] = (0x088E94CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088E94CCu) goto L_088E94CC;
    return;
L_088E94CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[19] = (2221u << 16u);
      if (branch_taken) {
          goto L_088E956C;
      }
      goto L_088E94D4;
    }
L_088E94D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(496)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9548;
      }
      goto L_088E9518;
    }
L_088E9518:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(448)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_088E9538;
      }
      goto L_088E9524;
    }
L_088E9524:
    ctx.gpr[31] = (0x088E952Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 783u, 0x08833B08u>(ctx, &aot_mem) && ctx.pc == 0x088E952Cu) goto L_088E952C;
    return;
L_088E952C:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[31] = (0x088E9538u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088E9538u) goto L_088E9538;
    return;
L_088E9538:
    ctx.gpr[31] = (0x088E9540u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088E9540u) goto L_088E9540;
    return;
L_088E9540:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088E9554;
      }
      goto L_088E9548;
    }
L_088E9548:
    ctx.gpr[31] = (0x088E9550u);
    ctx.gpr[4] = (0u | 22u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088E9550u) goto L_088E9550;
    return;
L_088E9550:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    goto L_088E9554;
L_088E9554:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x088E956Cu);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E956Cu) goto L_088E956C;
    return;
L_088E956C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088E9570;
L_088E9570:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E95B0;
      }
      goto L_088E957C;
    }
L_088E957C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088E95A4;
      }
      goto L_088E9590;
    }
L_088E9590:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(436), ctx.gpr[17]);
    ctx.gpr[31] = (0x088E959Cu);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E959Cu) goto L_088E959C;
    return;
L_088E959C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_088E95B0;
      }
      goto L_088E95A4;
    }
L_088E95A4:
    ctx.gpr[31] = (0x088E95ACu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E95ACu) goto L_088E95AC;
    return;
L_088E95AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088E95B0;
L_088E95B0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088E95E4;
      }
      goto L_088E95B8;
    }
L_088E95B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E95DC;
      }
      goto L_088E95C8;
    }
L_088E95C8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(436), 0u);
    ctx.gpr[31] = (0x088E95D4u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E95D4u) goto L_088E95D4;
    return;
L_088E95D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E95E4;
      }
      goto L_088E95DC;
    }
L_088E95DC:
    ctx.gpr[31] = (0x088E95E4u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E95E4u) goto L_088E95E4;
    return;
L_088E95E4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9604:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E960C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9614:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[20]);
    ctx.gpr[20] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(352), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[6] = (0u | 80u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(356));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E9660u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088E9660u) goto L_088E9660;
    return;
L_088E9660:
    ctx.gpr[31] = (0x088E9668u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 4u, 0x08834038u>(ctx, &aot_mem) && ctx.pc == 0x088E9668u) goto L_088E9668;
    return;
L_088E9668:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[4] != ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18704)));
        goto L_088E9694;
    }
    goto L_088E9678;
L_088E9678:
    ctx.gpr[31] = (0x088E9680u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 783u, 0x08833B08u>(ctx, &aot_mem) && ctx.pc == 0x088E9680u) goto L_088E9680;
    return;
L_088E9680:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(52))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_088E96BC;
      }
      goto L_088E968C;
    }
L_088E968C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9750;
      }
      goto L_088E9694;
    }
L_088E9694:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(457), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E96BC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(600));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(500)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(599)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E9704;
      }
      goto L_088E96E0;
    }
L_088E96E0:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(87)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E9704;
      }
      goto L_088E96EC;
    }
L_088E96EC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(500)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(453), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(599)));
    goto L_088E9704;
L_088E9704:
    if (ctx.gpr[4] != ctx.gpr[16]) {
    ctx.gpr[5] = (0u | 2u);
        goto L_088E9734;
    }
    goto L_088E970C;
L_088E970C:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (0u | 2u);
        goto L_088E9734;
    }
    goto L_088E9718;
L_088E9718:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(500)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(453), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(599)));
    ctx.gpr[5] = (0u | 2u);
    goto L_088E9734;
L_088E9734:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E9750;
      }
      goto L_088E973C;
    }
L_088E973C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(89)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088E9750;
      }
      goto L_088E9748;
    }
L_088E9748:
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(453), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088E9750;
L_088E9750:
    ctx.gpr[31] = (0x088E9758u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 728u, 0x088336E8u>(ctx, &aot_mem) && ctx.pc == 0x088E9758u) goto L_088E9758;
    return;
L_088E9758:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(600));
      if (branch_taken) {
          goto L_088E97CC;
      }
      goto L_088E9764;
    }
L_088E9764:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(500)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(599)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E979C;
      }
      goto L_088E9784;
    }
L_088E9784:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(135)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088E97CC;
      }
      goto L_088E9790;
    }
L_088E9790:
    ctx.gpr[18] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(449), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E97CC;
      }
      goto L_088E979C;
    }
L_088E979C:
    if (ctx.gpr[4] != ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(137)));
        goto L_088E97BC;
    }
    goto L_088E97A4;
L_088E97A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088E97CC;
      }
      goto L_088E97B0;
    }
L_088E97B0:
    ctx.gpr[18] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(449), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E97CC;
      }
      goto L_088E97BC;
    }
L_088E97BC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088E97CC;
      }
      goto L_088E97C4;
    }
L_088E97C4:
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(449), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088E97CC;
L_088E97CC:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088E97F4;
      }
      goto L_088E97D4;
    }
L_088E97D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(356), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(352), ctx.gpr[5]);
    goto L_088E97F4;
L_088E97F4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9814:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1008));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(980), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(448)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(976), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(984), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(988), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(992), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_088E98DC;
      }
      goto L_088E984C;
    }
L_088E984C:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(940));
    ctx.gpr[31] = (0x088E9858u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 798u, 0x08833C24u>(ctx, &aot_mem) && ctx.pc == 0x088E9858u) goto L_088E9858;
    return;
L_088E9858:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(600));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(940), static_cast<std::uint16_t>(ctx.gpr[16]));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(942), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(500)));
    ctx.gpr[19] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(948));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(944), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(500)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[31] = (0x088E9898u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(352));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E9898u) goto L_088E9898;
    return;
L_088E9898:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(957));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(500)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[19]);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088E98C0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(361));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E98C0u) goto L_088E98C0;
    return;
L_088E98C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(500)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(599)));
    ctx.gpr[31] = (0x088E98DCu);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(974), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 801u, 0x08833C50u>(ctx, &aot_mem) && ctx.pc == 0x088E98DCu) goto L_088E98DC;
    return;
L_088E98DC:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x088E98E8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 51u, 0x0883439Cu>(ctx, &aot_mem) && ctx.pc == 0x088E98E8u) goto L_088E98E8;
    return;
L_088E98E8:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(624)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[7] << (ctx.gpr[5] & 31u));
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(624), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x088E9914u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 54u, 0x088343C8u>(ctx, &aot_mem) && ctx.pc == 0x088E9914u) goto L_088E9914;
    return;
L_088E9914:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(976)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(980)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(984)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(988)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(992)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9930:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(440), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(436), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E9974u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(448), static_cast<std::uint8_t>(0u));
    goto L_088EA220;
L_088E9974:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(60));
    ctx.gpr[31] = (0x088E998Cu);
    ctx.gpr[6] = (0u | 292u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088E998Cu) goto L_088E998C;
    return;
L_088E998C:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 0u);
    goto L_088E9998;
L_088E9998:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(500)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(468)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
        goto L_088E99D4;
    }
    goto L_088E99B4;
L_088E99B4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(56)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(56)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_088E99D4;
L_088E99D4:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(600));
      if (branch_taken) {
          goto L_088E9998;
      }
      goto L_088E99E0;
    }
L_088E99E0:
    ctx.gpr[31] = (0x088E99E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 332u, 0x088E6538u>(ctx, &aot_mem) && ctx.pc == 0x088E99E8u) goto L_088E99E8;
    return;
L_088E99E8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E99F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E9A08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 334u, 0x088E6600u>(ctx, &aot_mem) && ctx.pc == 0x088E9A08u) goto L_088E9A08;
    return;
L_088E9A08:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9A14:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9A1C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9A24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(440), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E9A50u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 332u, 0x088E6538u>(ctx, &aot_mem) && ctx.pc == 0x088E9A50u) goto L_088E9A50;
    return;
L_088E9A50:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9A5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E9A6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 334u, 0x088E6600u>(ctx, &aot_mem) && ctx.pc == 0x088E9A6Cu) goto L_088E9A6C;
    return;
L_088E9A6C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9A78:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9A80:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9A88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E9AA4u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(436), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 332u, 0x088E6538u>(ctx, &aot_mem) && ctx.pc == 0x088E9AA4u) goto L_088E9AA4;
    return;
L_088E9AA4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9AB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E9AC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 334u, 0x088E6600u>(ctx, &aot_mem) && ctx.pc == 0x088E9AC0u) goto L_088E9AC0;
    return;
L_088E9AC0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9ACC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088E9BD4;
      }
      goto L_088E9AFC;
    }
L_088E9AFC:
    ctx.gpr[31] = (0x088E9B04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088E9B04u) goto L_088E9B04;
    return;
L_088E9B04:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[19] = (2221u << 16u);
      if (branch_taken) {
          goto L_088E9BD4;
      }
      goto L_088E9B0C;
    }
L_088E9B0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088E9B94;
      }
      goto L_088E9B1C;
    }
L_088E9B1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(600));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(500)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(464)));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(464), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[31] = (0x088E9B5Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(464)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 546u, 0x08832944u>(ctx, &aot_mem) && ctx.pc == 0x088E9B5Cu) goto L_088E9B5C;
    return;
L_088E9B5C:
    ctx.gpr[31] = (0x088E9B64u);
    // nop
    goto L_088E9814;
L_088E9B64:
    ctx.gpr[31] = (0x088E9B6Cu);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088E9B6Cu) goto L_088E9B6C;
    return;
L_088E9B6C:
    ctx.gpr[31] = (0x088E9B74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 201u, 0x08834E80u>(ctx, &aot_mem) && ctx.pc == 0x088E9B74u) goto L_088E9B74;
    return;
L_088E9B74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x088E9B84u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E9B84u) goto L_088E9B84;
    return;
L_088E9B84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(444), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088E9BD4;
      }
      goto L_088E9B94;
    }
L_088E9B94:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(448)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088E9BB4;
      }
      goto L_088E9BA0;
    }
L_088E9BA0:
    ctx.gpr[31] = (0x088E9BA8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 798u, 0x08833C24u>(ctx, &aot_mem) && ctx.pc == 0x088E9BA8u) goto L_088E9BA8;
    return;
L_088E9BA8:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x088E9BB4u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088E9BB4u) goto L_088E9BB4;
    return;
L_088E9BB4:
    ctx.gpr[31] = (0x088E9BBCu);
    ctx.gpr[4] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088E9BBCu) goto L_088E9BBC;
    return;
L_088E9BBC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[31] = (0x088E9BD4u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E9BD4u) goto L_088E9BD4;
    return;
L_088E9BD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 64u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_088E9CA8;
    }
    goto L_088E9BE4;
L_088E9BE4:
    ctx.gpr[31] = (0x088E9BECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088E9BECu) goto L_088E9BEC;
    return;
L_088E9BEC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[19] = (2221u << 16u);
      if (branch_taken) {
          goto L_088E9CA4;
      }
      goto L_088E9BF4;
    }
L_088E9BF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(600));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(500)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(448)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088E9C74;
      }
      goto L_088E9C30;
    }
L_088E9C30:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_088E9C4C;
      }
      goto L_088E9C38;
    }
L_088E9C38:
    ctx.gpr[31] = (0x088E9C40u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 798u, 0x08833C24u>(ctx, &aot_mem) && ctx.pc == 0x088E9C40u) goto L_088E9C40;
    return;
L_088E9C40:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x088E9C4Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088E9C4Cu) goto L_088E9C4C;
    return;
L_088E9C4C:
    ctx.gpr[31] = (0x088E9C54u);
    ctx.gpr[4] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088E9C54u) goto L_088E9C54;
    return;
L_088E9C54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[31] = (0x088E9C6Cu);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E9C6Cu) goto L_088E9C6C;
    return;
L_088E9C6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088E9C90;
      }
      goto L_088E9C74;
    }
L_088E9C74:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 6u);
      if (branch_taken) {
          goto L_088E9C84;
      }
      goto L_088E9C7C;
    }
L_088E9C7C:
    ctx.gpr[31] = (0x088E9C84u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088E9C84u) goto L_088E9C84;
    return;
L_088E9C84:
    ctx.gpr[31] = (0x088E9C8Cu);
    ctx.gpr[4] = (0u | 25u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088E9C8Cu) goto L_088E9C8C;
    return;
L_088E9C8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    goto L_088E9C90;
L_088E9C90:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x088E9CA4u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E9CA4u) goto L_088E9CA4;
    return;
L_088E9CA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088E9CA8;
L_088E9CA8:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E9CE8;
      }
      goto L_088E9CB4;
    }
L_088E9CB4:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088E9CDC;
      }
      goto L_088E9CC8;
    }
L_088E9CC8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(436), ctx.gpr[17]);
    ctx.gpr[31] = (0x088E9CD4u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E9CD4u) goto L_088E9CD4;
    return;
L_088E9CD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_088E9CE8;
      }
      goto L_088E9CDC;
    }
L_088E9CDC:
    ctx.gpr[31] = (0x088E9CE4u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E9CE4u) goto L_088E9CE4;
    return;
L_088E9CE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088E9CE8;
L_088E9CE8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088E9D1C;
      }
      goto L_088E9CF0;
    }
L_088E9CF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9D14;
      }
      goto L_088E9D00;
    }
L_088E9D00:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(436), 0u);
    ctx.gpr[31] = (0x088E9D0Cu);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E9D0Cu) goto L_088E9D0C;
    return;
L_088E9D0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E9D1C;
      }
      goto L_088E9D14;
    }
L_088E9D14:
    ctx.gpr[31] = (0x088E9D1Cu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088E9D1Cu) goto L_088E9D1C;
    return;
L_088E9D1C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9D3C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9D44:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9D4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1008));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(976), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(980), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(984), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(988), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(992), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E9D70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 811u, 0x08833D24u>(ctx, &aot_mem) && ctx.pc == 0x088E9D70u) goto L_088E9D70;
    return;
L_088E9D70:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[6] = (ctx.gpr[18] << 3u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (0u + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(504)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[19] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[31] = (0x088E9DD0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(400));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E9DD0u) goto L_088E9DD0;
    return;
L_088E9DD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(33));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088E9DF8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(409));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088E9DF8u) goto L_088E9DF8;
    return;
L_088E9DF8:
    ctx.gpr[31] = (0x088E9E00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 814u, 0x08833D50u>(ctx, &aot_mem) && ctx.pc == 0x088E9E00u) goto L_088E9E00;
    return;
L_088E9E00:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[31] = (0x088E9E0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 51u, 0x0883439Cu>(ctx, &aot_mem) && ctx.pc == 0x088E9E0Cu) goto L_088E9E0C;
    return;
L_088E9E0C:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(674)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[7] << (ctx.gpr[5] & 31u));
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(674), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x088E9E38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 54u, 0x088343C8u>(ctx, &aot_mem) && ctx.pc == 0x088E9E38u) goto L_088E9E38;
    return;
L_088E9E38:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(976)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(980)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(984)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(988)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(992)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9E54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(440), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(60));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E9E90u);
    ctx.gpr[6] = (0u | 292u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088E9E90u) goto L_088E9E90;
    return;
L_088E9E90:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 0u);
    goto L_088E9E9C;
L_088E9E9C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(504)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(468)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
        goto L_088E9ED8;
    }
    goto L_088E9EB8;
L_088E9EB8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(56)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(56)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_088E9ED8;
L_088E9ED8:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 23 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(648));
      if (branch_taken) {
          goto L_088E9E9C;
      }
      goto L_088E9EE4;
    }
L_088E9EE4:
    ctx.gpr[31] = (0x088E9EECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 332u, 0x088E6538u>(ctx, &aot_mem) && ctx.pc == 0x088E9EECu) goto L_088E9EEC;
    return;
L_088E9EEC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9EFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E9F0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 334u, 0x088E6600u>(ctx, &aot_mem) && ctx.pc == 0x088E9F0Cu) goto L_088E9F0C;
    return;
L_088E9F0C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9F18:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9F20:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9F28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x088E9F44u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 332u, 0x088E6538u>(ctx, &aot_mem) && ctx.pc == 0x088E9F44u) goto L_088E9F44;
    return;
L_088E9F44:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9F50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E9F60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 334u, 0x088E6600u>(ctx, &aot_mem) && ctx.pc == 0x088E9F60u) goto L_088E9F60;
    return;
L_088E9F60:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9F6C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9F74:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9F7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E9F98u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(436), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 332u, 0x088E6538u>(ctx, &aot_mem) && ctx.pc == 0x088E9F98u) goto L_088E9F98;
    return;
L_088E9F98:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9FA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E9FB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 334u, 0x088E6600u>(ctx, &aot_mem) && ctx.pc == 0x088E9FB4u) goto L_088E9FB4;
    return;
L_088E9FB4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E9FC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088EA0CC;
      }
      goto L_088E9FF0;
    }
L_088E9FF0:
    ctx.gpr[31] = (0x088E9FF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088E9FF8u) goto L_088E9FF8;
    return;
L_088E9FF8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[19] = (2221u << 16u);
      if (branch_taken) {
          goto L_088EA0CC;
      }
      goto L_088EA000;
    }
L_088EA000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088EA094;
      }
      goto L_088EA010;
    }
L_088EA010:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[8] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(464), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[31] = (0x088EA05Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(464)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 546u, 0x08832944u>(ctx, &aot_mem) && ctx.pc == 0x088EA05Cu) goto L_088EA05C;
    return;
L_088EA05C:
    ctx.gpr[31] = (0x088EA064u);
    // nop
    goto L_088E9D4C;
L_088EA064:
    ctx.gpr[31] = (0x088EA06Cu);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088EA06Cu) goto L_088EA06C;
    return;
L_088EA06C:
    ctx.gpr[31] = (0x088EA074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 201u, 0x08834E80u>(ctx, &aot_mem) && ctx.pc == 0x088EA074u) goto L_088EA074;
    return;
L_088EA074:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x088EA084u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088EA084u) goto L_088EA084;
    return;
L_088EA084:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(444), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088EA0CC;
      }
      goto L_088EA094;
    }
L_088EA094:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x088EA0A0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 811u, 0x08833D24u>(ctx, &aot_mem) && ctx.pc == 0x088EA0A0u) goto L_088EA0A0;
    return;
L_088EA0A0:
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x088EA0ACu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088EA0ACu) goto L_088EA0AC;
    return;
L_088EA0AC:
    ctx.gpr[31] = (0x088EA0B4u);
    ctx.gpr[4] = (0u | 27u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088EA0B4u) goto L_088EA0B4;
    return;
L_088EA0B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[31] = (0x088EA0CCu);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088EA0CCu) goto L_088EA0CC;
    return;
L_088EA0CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 64u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_088EA17C;
    }
    goto L_088EA0DC;
L_088EA0DC:
    ctx.gpr[31] = (0x088EA0E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088EA0E4u) goto L_088EA0E4;
    return;
L_088EA0E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[19] = (2221u << 16u);
      if (branch_taken) {
          goto L_088EA178;
      }
      goto L_088EA0EC;
    }
L_088EA0EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_088EA154;
      }
      goto L_088EA130;
    }
L_088EA130:
    ctx.gpr[31] = (0x088EA138u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 811u, 0x08833D24u>(ctx, &aot_mem) && ctx.pc == 0x088EA138u) goto L_088EA138;
    return;
L_088EA138:
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x088EA144u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088EA144u) goto L_088EA144;
    return;
L_088EA144:
    ctx.gpr[31] = (0x088EA14Cu);
    ctx.gpr[4] = (0u | 27u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088EA14Cu) goto L_088EA14C;
    return;
L_088EA14C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088EA160;
      }
      goto L_088EA154;
    }
L_088EA154:
    ctx.gpr[31] = (0x088EA15Cu);
    ctx.gpr[4] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088EA15Cu) goto L_088EA15C;
    return;
L_088EA15C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    goto L_088EA160;
L_088EA160:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x088EA178u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088EA178u) goto L_088EA178;
    return;
L_088EA178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088EA17C;
L_088EA17C:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EA1BC;
      }
      goto L_088EA188;
    }
L_088EA188:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088EA1B0;
      }
      goto L_088EA19C;
    }
L_088EA19C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(436), ctx.gpr[17]);
    ctx.gpr[31] = (0x088EA1A8u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088EA1A8u) goto L_088EA1A8;
    return;
L_088EA1A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_088EA1BC;
      }
      goto L_088EA1B0;
    }
L_088EA1B0:
    ctx.gpr[31] = (0x088EA1B8u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088EA1B8u) goto L_088EA1B8;
    return;
L_088EA1B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088EA1BC;
L_088EA1BC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088EA1F0;
      }
      goto L_088EA1C4;
    }
L_088EA1C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA1E8;
      }
      goto L_088EA1D4;
    }
L_088EA1D4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(436), 0u);
    ctx.gpr[31] = (0x088EA1E0u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088EA1E0u) goto L_088EA1E0;
    return;
L_088EA1E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EA1F0;
      }
      goto L_088EA1E8;
    }
L_088EA1E8:
    ctx.gpr[31] = (0x088EA1F0u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088EA1F0u) goto L_088EA1F0;
    return;
L_088EA1F0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA210:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA218:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA220:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_088EA230;
L_088EA230:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(449), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088EA230;
      }
      goto L_088EA244;
    }
L_088EA244:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA24C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA25C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA26C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA27C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA28C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA29C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA2AC:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA2BC:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA2CC:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA2DC:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA2EC:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA2FC:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(60));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA30C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(26) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088EA4B4;
      }
      goto L_088EA31C;
    }
L_088EA31C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-3800)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA334:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(2484));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(480)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA368:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(8360));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(484)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA39C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(1236));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(488)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA3D0:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(2808));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(492)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA404:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(496)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA444:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(600));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(500)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA478:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    goto L_088EA4B4;
L_088EA4B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA4BC:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA4CC:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(356));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA4DC:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(436)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA4EC:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(440)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA4FC:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(464)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA6B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088EA6C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 381u, 0x088E6854u>(ctx, &aot_mem) && ctx.pc == 0x088EA6C4u) goto L_088EA6C4;
    return;
L_088EA6C4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA6D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088EA718;
      }
      goto L_088EA6F4;
    }
L_088EA6F4:
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 21u);
      if (branch_taken) {
          goto L_088EA718;
      }
      goto L_088EA700;
    }
L_088EA700:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 24u);
      if (branch_taken) {
          goto L_088EA718;
      }
      goto L_088EA708;
    }
L_088EA708:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 27u);
      if (branch_taken) {
          goto L_088EA718;
      }
      goto L_088EA710;
    }
L_088EA710:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 7u);
      if (branch_taken) {
          goto L_088EA734;
      }
      goto L_088EA718;
    }
L_088EA718:
    ctx.gpr[31] = (0x088EA720u);
    ctx.gpr[16] = (0u | 4u);
    goto L_088EA2EC;
L_088EA720:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 5 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (0u | 5u);
        goto L_088EA72C;
    }
    goto L_088EA72C;
L_088EA72C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088EA83C;
      }
      goto L_088EA734;
    }
L_088EA734:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 12u);
      if (branch_taken) {
          goto L_088EA744;
      }
      goto L_088EA73C;
    }
L_088EA73C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_088EA83C;
      }
      goto L_088EA744;
    }
L_088EA744:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_088EA768;
      }
      goto L_088EA74C;
    }
L_088EA74C:
    ctx.gpr[31] = (0x088EA754u);
    ctx.gpr[16] = (0u | 2u);
    goto L_088EA2EC;
L_088EA754:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 5 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (0u | 3u);
        goto L_088EA760;
    }
    goto L_088EA760;
L_088EA760:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088EA83C;
      }
      goto L_088EA768;
    }
L_088EA768:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 18u);
      if (branch_taken) {
          goto L_088EA790;
      }
      goto L_088EA770;
    }
L_088EA770:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 22u);
      if (branch_taken) {
          goto L_088EA790;
      }
      goto L_088EA778;
    }
L_088EA778:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 25u);
      if (branch_taken) {
          goto L_088EA790;
      }
      goto L_088EA780;
    }
L_088EA780:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 28u);
      if (branch_taken) {
          goto L_088EA790;
      }
      goto L_088EA788;
    }
L_088EA788:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_088EA7AC;
      }
      goto L_088EA790;
    }
L_088EA790:
    ctx.gpr[31] = (0x088EA798u);
    ctx.gpr[16] = (0u | 4u);
    goto L_088EA30C;
L_088EA798:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 5 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (0u | 5u);
        goto L_088EA7A4;
    }
    goto L_088EA7A4;
L_088EA7A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088EA83C;
      }
      goto L_088EA7AC;
    }
L_088EA7AC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 13u);
      if (branch_taken) {
          goto L_088EA7BC;
      }
      goto L_088EA7B4;
    }
L_088EA7B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_088EA83C;
      }
      goto L_088EA7BC;
    }
L_088EA7BC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_088EA7E0;
      }
      goto L_088EA7C4;
    }
L_088EA7C4:
    ctx.gpr[31] = (0x088EA7CCu);
    ctx.gpr[16] = (0u | 2u);
    goto L_088EA30C;
L_088EA7CC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 5 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (0u | 3u);
        goto L_088EA7D8;
    }
    goto L_088EA7D8;
L_088EA7D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088EA83C;
      }
      goto L_088EA7E0;
    }
L_088EA7E0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 19u);
      if (branch_taken) {
          goto L_088EA7F0;
      }
      goto L_088EA7E8;
    }
L_088EA7E8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 9u);
      if (branch_taken) {
          goto L_088EA80C;
      }
      goto L_088EA7F0;
    }
L_088EA7F0:
    ctx.gpr[31] = (0x088EA7F8u);
    ctx.gpr[16] = (0u | 4u);
    goto L_088EA4BC;
L_088EA7F8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 5 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (0u | 5u);
        goto L_088EA804;
    }
    goto L_088EA804;
L_088EA804:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088EA83C;
      }
      goto L_088EA80C;
    }
L_088EA80C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 14u);
      if (branch_taken) {
          goto L_088EA81C;
      }
      goto L_088EA814;
    }
L_088EA814:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_088EA83C;
      }
      goto L_088EA81C;
    }
L_088EA81C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EA83C;
      }
      goto L_088EA824;
    }
L_088EA824:
    ctx.gpr[31] = (0x088EA82Cu);
    ctx.gpr[16] = (0u | 2u);
    goto L_088EA4BC;
L_088EA82C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 5 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (0u | 3u);
        goto L_088EA838;
    }
    goto L_088EA838;
L_088EA838:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_088EA83C;
L_088EA83C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA84C:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(449)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[2] = (0u | 1u);
        goto L_088EA86C;
    }
    goto L_088EA86C;
L_088EA86C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA874:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(459)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA884:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(460)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA894:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA8A8:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(480)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA8B8:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(484)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA8C8:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(488)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA8D8:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(492)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA8E8:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(496)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA8F8:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(500)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA908:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA918:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EA928:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(512)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088EA9BC;
      }
      goto L_088EA954;
    }
L_088EA954:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088EAA34;
      }
      goto L_088EA95C;
    }
L_088EA95C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088EA96Cu);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088EA96Cu) goto L_088EA96C;
    return;
L_088EA96C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18572)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18576));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18708)));
    ctx.gpr[31] = (0x088EA990u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 605u, 0x0897A8A0u>(ctx, &aot_mem) && ctx.pc == 0x088EA990u) goto L_088EA990;
    return;
L_088EA990:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(512)));
    ctx.gpr[6] = (0u | 130u);
    ctx.gpr[31] = (0x088EA9A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 465u, 0x08809CF0u>(ctx, &aot_mem) && ctx.pc == 0x088EA9A8u) goto L_088EA9A8;
    return;
L_088EA9A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(512)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088EAA34;
      }
      goto L_088EA9BC;
    }
L_088EA9BC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088EA9D8;
      }
      goto L_088EA9C8;
    }
L_088EA9C8:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (0u | 1u);
        goto L_088EAA34;
    }
    goto L_088EA9D0;
L_088EA9D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EAA34;
      }
      goto L_088EA9D8;
    }
L_088EA9D8:
    ctx.gpr[31] = (0x088EA9E0u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 469u, 0x08809D90u>(ctx, &aot_mem) && ctx.pc == 0x088EA9E0u) goto L_088EA9E0;
    return;
L_088EA9E0:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088EAA34;
      }
      goto L_088EA9EC;
    }
L_088EA9EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(512)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(512)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    ctx.gpr[31] = (0x088EAA0Cu);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 881u, 0x0882F7DCu>(ctx, &aot_mem) && ctx.pc == 0x088EAA0Cu) goto L_088EAA0C;
    return;
L_088EAA0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[31] = (0x088EAA18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 761u, 0x0882EFC4u>(ctx, &aot_mem) && ctx.pc == 0x088EAA18u) goto L_088EAA18;
    return;
L_088EAA18:
    ctx.gpr[31] = (0x088EAA20u);
    // nop
    goto L_088EAB14;
L_088EAA20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(520), ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(444), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088EAA34;
      }
      goto L_088EAA34;
    }
L_088EAA34:
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
L_088EAA50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 144u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088EAA78u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EAA78u) goto L_088EAA78;
    return;
L_088EAA78:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(512), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088EAA94u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088EAA94u) goto L_088EAA94;
    return;
L_088EAA94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(512)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 16u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088EAAB4u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EAAB4u) goto L_088EAAB4;
    return;
L_088EAAB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088EAAC4u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(508), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 741u, 0x0882EE90u>(ctx, &aot_mem) && ctx.pc == 0x088EAAC4u) goto L_088EAAC4;
    return;
L_088EAAC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 144u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088EAAD8u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EAAD8u) goto L_088EAAD8;
    return;
L_088EAAD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(516), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088EAAF0u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088EAAF0u) goto L_088EAAF0;
    return;
L_088EAAF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(516)));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EAB14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088EAB24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 124u, 0x088F46D4u>(ctx, &aot_mem) && ctx.pc == 0x088EAB24u) goto L_088EAB24;
    return;
L_088EAB24:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EAB30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(520)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    if (ctx.gpr[6] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(512)));
        goto L_088EAB7C;
    }
    goto L_088EAB58;
L_088EAB58:
    ctx.gpr[31] = (0x088EAB60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 128u, 0x088F4750u>(ctx, &aot_mem) && ctx.pc == 0x088EAB60u) goto L_088EAB60;
    return;
L_088EAB60:
    ctx.gpr[31] = (0x088EAB68u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 761u, 0x0882EFC4u>(ctx, &aot_mem) && ctx.pc == 0x088EAB68u) goto L_088EAB68;
    return;
L_088EAB68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[31] = (0x088EAB74u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 742u, 0x0882EEA8u>(ctx, &aot_mem) && ctx.pc == 0x088EAB74u) goto L_088EAB74;
    return;
L_088EAB74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(512)));
    goto L_088EAB7C;
L_088EAB7C:
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[17] = (2222u << 16u);
      if (branch_taken) {
          goto L_088EABA0;
      }
      goto L_088EAB8C;
    }
L_088EAB8C:
    ctx.gpr[31] = (0x088EAB94u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x088EAB94u) goto L_088EAB94;
    return;
L_088EAB94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(512)));
    ctx.gpr[17] = (2222u << 16u);
    goto L_088EABA0;
L_088EABA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088EABB0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EABB0u) goto L_088EABB0;
    return;
L_088EABB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(512), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088EABC8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EABC8u) goto L_088EABC8;
    return;
L_088EABC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(508), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088EABE0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(516)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EABE0u) goto L_088EABE0;
    return;
L_088EABE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(516), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EABFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088EAC0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 131u, 0x088F4790u>(ctx, &aot_mem) && ctx.pc == 0x088EAC0Cu) goto L_088EAC0C;
    return;
L_088EAC0C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EAC18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088EAC28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 142u, 0x088F4830u>(ctx, &aot_mem) && ctx.pc == 0x088EAC28u) goto L_088EAC28;
    return;
L_088EAC28:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EAC34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088EAC44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 143u, 0x088F4838u>(ctx, &aot_mem) && ctx.pc == 0x088EAC44u) goto L_088EAC44;
    return;
L_088EAC44:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EAC50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088EB158;
      }
      goto L_088EAC88;
    }
L_088EAC88:
    ctx.gpr[4] = (0u | 13u);
    ctx.gpr[5] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088EACC8u);
    ctx.gpr[6] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088EACC8u) goto L_088EACC8;
    return;
L_088EACC8:
    ctx.gpr[6] = (5u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088EACDCu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-17180));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088EACDCu) goto L_088EACDC;
    return;
L_088EACDC:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[29]);
    goto L_088EACE8;
L_088EACE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17024));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    ctx.gpr[17] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088EAD1Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EAD1Cu) goto L_088EAD1C;
    return;
L_088EAD1C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088EAD34u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088EAD34u) goto L_088EAD34;
    return;
L_088EAD34:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088EAD48u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 123u, 0x088ECCD0u>(ctx, &aot_mem) && ctx.pc == 0x088EAD48u) goto L_088EAD48;
    return;
L_088EAD48:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088EB124;
      }
      goto L_088EAD58;
    }
L_088EAD58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    goto L_088EAD60;
L_088EAD60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
        goto L_088EB0FC;
    }
    goto L_088EAD7C;
L_088EAD7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(2484));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[6]);
    ctx.gpr[8] = (ctx.lo);
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[7]);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    goto L_088EADC4;
L_088EADC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x088EADD4u);
    ctx.gpr[6] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 543u, 0x08A9DEE8u>(ctx, &aot_mem) && ctx.pc == 0x088EADD4u) goto L_088EADD4;
    return;
L_088EADD4:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_088EAE94;
      }
      goto L_088EADE0;
    }
L_088EADE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[31] = (0x088EAE04u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EAE04u) goto L_088EAE04;
    return;
L_088EAE04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(88));
    ctx.gpr[31] = (0x088EAE28u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EAE28u) goto L_088EAE28;
    return;
L_088EAE28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8004)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_088EAE84;
      }
      goto L_088EAE3C;
    }
L_088EAE3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8073));
    goto L_088EAE4C;
L_088EAE4C:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(749));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088EAE68u);
    ctx.gpr[6] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EAE68u) goto L_088EAE68;
    return;
L_088EAE68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8004)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(300));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1491));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_088EAE4C;
      }
      goto L_088EAE84;
    }
L_088EAE84:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088EB0A8;
      }
      goto L_088EAE94;
    }
L_088EAE94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2484));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[19] + static_cast<std::uint32_t>(2484));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.gpr[31] = (0x088EAEC8u);
    ctx.gpr[6] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EAEC8u) goto L_088EAEC8;
    return;
L_088EAEC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.gpr[30] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8004)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(680), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088EAFCC;
      }
      goto L_088EAEF4;
    }
L_088EAEF4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[23] = (ctx.gpr[16] + static_cast<std::uint32_t>(684));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(8008));
    ctx.gpr[22] = (ctx.gpr[16] + static_cast<std::uint32_t>(724));
    ctx.gpr[21] = (ctx.gpr[17] + static_cast<std::uint32_t>(8048));
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(740));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(8064));
    goto L_088EAF14;
L_088EAF14:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088EAF24u);
    ctx.gpr[6] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EAF24u) goto L_088EAF24;
    return;
L_088EAF24:
    ctx.gpr[31] = (0x088EAF2Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088EAF2Cu) goto L_088EAF2C;
    return;
L_088EAF2C:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EAF40;
      }
      goto L_088EAF38;
    }
L_088EAF38:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(723), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088EAF50;
      }
      goto L_088EAF40;
    }
L_088EAF40:
    ctx.gpr[31] = (0x088EAF48u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088EAF48u) goto L_088EAF48;
    return;
L_088EAF48:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(684), static_cast<std::uint8_t>(0u));
    goto L_088EAF50;
L_088EAF50:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088EAF60u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EAF60u) goto L_088EAF60;
    return;
L_088EAF60:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088EAF70u);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EAF70u) goto L_088EAF70;
    return;
L_088EAF70:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    goto L_088EAF78;
L_088EAF78:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(9433)));
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(970), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 14 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088EAF78;
      }
      goto L_088EAF94;
    }
L_088EAF94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8004)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(300));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(300));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1491));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1491));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(300));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1491));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(300));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1491));
      if (branch_taken) {
          goto L_088EAF14;
      }
      goto L_088EAFC8;
    }
L_088EAFC8:
    ctx.gpr[4] = (0u | 0u);
    goto L_088EAFCC;
L_088EAFCC:
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(52), 0u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[31] = (0x088EAFF4u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EAFF4u) goto L_088EAFF4;
    return;
L_088EAFF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(88));
    ctx.gpr[31] = (0x088EB018u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EB018u) goto L_088EB018;
    return;
L_088EB018:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8004)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_088EB078;
      }
      goto L_088EB030;
    }
L_088EB030:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8073));
    goto L_088EB040;
L_088EB040:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(749));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088EB05Cu);
    ctx.gpr[6] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EB05Cu) goto L_088EB05C;
    return;
L_088EB05C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8004)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(300));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1491));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_088EB040;
      }
      goto L_088EB078;
    }
L_088EB078:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088EB094u);
    ctx.gpr[6] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088EB094u) goto L_088EB094;
    return;
L_088EB094:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088EB0A4u);
    ctx.gpr[6] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EB0A4u) goto L_088EB0A4;
    return;
L_088EB0A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    goto L_088EB0A8;
L_088EB0A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(100));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(100));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(100));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(100));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[10] + static_cast<std::uint32_t>(17));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[7]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088EADC4;
      }
      goto L_088EB0F8;
    }
L_088EB0F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    goto L_088EB0FC;
L_088EB0FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(17024));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088EAD60;
      }
      goto L_088EB124;
    }
L_088EB124:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088EB138u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EB138u) goto L_088EB138;
    return;
L_088EB138:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088EACE8;
      }
      goto L_088EB158;
    }
L_088EB158:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EB188:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088EB778;
      }
      goto L_088EB1C0;
    }
L_088EB1C0:
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088EB1F0u);
    ctx.gpr[6] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088EB1F0u) goto L_088EB1F0;
    return;
L_088EB1F0:
    ctx.gpr[6] = (7u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088EB204u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(9408));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088EB204u) goto L_088EB204;
    return;
L_088EB204:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[29]);
    goto L_088EB210;
L_088EB210:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17024));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    ctx.gpr[17] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088EB244u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EB244u) goto L_088EB244;
    return;
L_088EB244:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088EB25Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088EB25Cu) goto L_088EB25C;
    return;
L_088EB25C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088EB270u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 123u, 0x088ECCD0u>(ctx, &aot_mem) && ctx.pc == 0x088EB270u) goto L_088EB270;
    return;
L_088EB270:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088EB744;
      }
      goto L_088EB280;
    }
L_088EB280:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    goto L_088EB288;
L_088EB288:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
        goto L_088EB71C;
    }
    goto L_088EB2A4;
L_088EB2A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(8360));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[6]);
    ctx.gpr[8] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[5]);
    goto L_088EB2EC;
L_088EB2EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (0x088EB300u);
    ctx.gpr[6] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 543u, 0x08A9DEE8u>(ctx, &aot_mem) && ctx.pc == 0x088EB300u) goto L_088EB300;
    return;
L_088EB300:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
      if (branch_taken) {
          goto L_088EB3C0;
      }
      goto L_088EB30C;
    }
L_088EB30C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[31] = (0x088EB330u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EB330u) goto L_088EB330;
    return;
L_088EB330:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(88));
    ctx.gpr[31] = (0x088EB354u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EB354u) goto L_088EB354;
    return;
L_088EB354:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8004)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_088EB3B0;
      }
      goto L_088EB368;
    }
L_088EB368:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8073));
    goto L_088EB378;
L_088EB378:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(845));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088EB394u);
    ctx.gpr[6] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EB394u) goto L_088EB394;
    return;
L_088EB394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8004)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(379));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1491));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_088EB378;
      }
      goto L_088EB3B0;
    }
L_088EB3B0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088EB6D0;
      }
      goto L_088EB3C0;
    }
L_088EB3C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8360));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[19] + static_cast<std::uint32_t>(8360));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.gpr[31] = (0x088EB3F4u);
    ctx.gpr[6] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EB3F4u) goto L_088EB3F4;
    return;
L_088EB3F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.gpr[20] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8004)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(776), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088EB5F0;
      }
      goto L_088EB420;
    }
L_088EB420:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(820));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(8048));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(836));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(8064));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1107));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(9447));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(1116));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(9456));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(780));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(8008));
    ctx.gpr[30] = (ctx.gpr[16] + static_cast<std::uint32_t>(1133));
    ctx.gpr[23] = (ctx.gpr[17] + static_cast<std::uint32_t>(9473));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[7]);
    ctx.gpr[22] = (ctx.gpr[16] + static_cast<std::uint32_t>(1142));
    ctx.gpr[21] = (ctx.gpr[17] + static_cast<std::uint32_t>(9482));
    goto L_088EB480;
L_088EB480:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088EB490u);
    ctx.gpr[6] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EB490u) goto L_088EB490;
    return;
L_088EB490:
    ctx.gpr[31] = (0x088EB498u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088EB498u) goto L_088EB498;
    return;
L_088EB498:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EB4AC;
      }
      goto L_088EB4A4;
    }
L_088EB4A4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(819), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088EB4BC;
      }
      goto L_088EB4AC;
    }
L_088EB4AC:
    ctx.gpr[31] = (0x088EB4B4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088EB4B4u) goto L_088EB4B4;
    return;
L_088EB4B4:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(780), static_cast<std::uint8_t>(0u));
    goto L_088EB4BC;
L_088EB4BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[19]);
    ctx.gpr[31] = (0x088EB4D4u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EB4D4u) goto L_088EB4D4;
    return;
L_088EB4D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x088EB4E4u);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EB4E4u) goto L_088EB4E4;
    return;
L_088EB4E4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    goto L_088EB4EC;
L_088EB4EC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(9433)));
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1100), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088EB4EC;
      }
      goto L_088EB508;
    }
L_088EB508:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x088EB51Cu);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EB51Cu) goto L_088EB51C;
    return;
L_088EB51C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x088EB52Cu);
    ctx.gpr[6] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EB52Cu) goto L_088EB52C;
    return;
L_088EB52C:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088EB53Cu);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EB53Cu) goto L_088EB53C;
    return;
L_088EB53C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088EB54Cu);
    ctx.gpr[6] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EB54Cu) goto L_088EB54C;
    return;
L_088EB54C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(379));
    ctx.gpr[18] = (ctx.gpr[7] + static_cast<std::uint32_t>(1491));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1491));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(379));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(1491));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(379));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1491));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(379));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1491));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8004)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(379));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(379));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1491));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(379));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1491));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(379));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1491));
      if (branch_taken) {
          goto L_088EB480;
      }
      goto L_088EB5EC;
    }
L_088EB5EC:
    ctx.gpr[4] = (0u | 0u);
    goto L_088EB5F0;
L_088EB5F0:
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(52), 0u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[31] = (0x088EB618u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EB618u) goto L_088EB618;
    return;
L_088EB618:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(88));
    ctx.gpr[31] = (0x088EB63Cu);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EB63Cu) goto L_088EB63C;
    return;
L_088EB63C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8004)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_088EB6A0;
      }
      goto L_088EB658;
    }
L_088EB658:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8073));
    goto L_088EB668;
L_088EB668:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(845));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088EB684u);
    ctx.gpr[6] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EB684u) goto L_088EB684;
    return;
L_088EB684:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8004)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(379));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1491));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_088EB668;
      }
      goto L_088EB6A0;
    }
L_088EB6A0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088EB6BCu);
    ctx.gpr[6] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088EB6BCu) goto L_088EB6BC;
    return;
L_088EB6BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088EB6CCu);
    ctx.gpr[6] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EB6CCu) goto L_088EB6CC;
    return;
L_088EB6CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    goto L_088EB6D0;
L_088EB6D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(100));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(100));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(100));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[9] + static_cast<std::uint32_t>(17));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[8]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(100));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[7]);
      if (branch_taken) {
          goto L_088EB2EC;
      }
      goto L_088EB718;
    }
L_088EB718:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    goto L_088EB71C;
L_088EB71C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[6] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(17024));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088EB288;
      }
      goto L_088EB744;
    }
L_088EB744:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088EB758u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EB758u) goto L_088EB758;
    return;
L_088EB758:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088EB210;
      }
      goto L_088EB778;
    }
L_088EB778:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EB7A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088EBD14;
      }
      goto L_088EB7E0;
    }
L_088EB7E0:
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088EB818u);
    ctx.gpr[6] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088EB818u) goto L_088EB818;
    return;
L_088EB818:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (0u | 40788u);
    ctx.gpr[31] = (0x088EB828u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088EB828u) goto L_088EB828;
    return;
L_088EB828:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[29]);
    goto L_088EB834;
L_088EB834:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17024));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    ctx.gpr[17] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088EB868u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EB868u) goto L_088EB868;
    return;
L_088EB868:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088EB880u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088EB880u) goto L_088EB880;
    return;
L_088EB880:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088EB894u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 123u, 0x088ECCD0u>(ctx, &aot_mem) && ctx.pc == 0x088EB894u) goto L_088EB894;
    return;
L_088EB894:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088EBCE0;
      }
      goto L_088EB8A4;
    }
L_088EB8A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    goto L_088EB8AC;
L_088EB8AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
        goto L_088EBCB8;
    }
    goto L_088EB8C8;
L_088EB8C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(1236));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[6]);
    ctx.gpr[8] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[5]);
    goto L_088EB910;
L_088EB910:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x088EB924u);
    ctx.gpr[6] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 543u, 0x08A9DEE8u>(ctx, &aot_mem) && ctx.pc == 0x088EB924u) goto L_088EB924;
    return;
L_088EB924:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          goto L_088EB9E4;
      }
      goto L_088EB930;
    }
L_088EB930:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[31] = (0x088EB954u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EB954u) goto L_088EB954;
    return;
L_088EB954:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(88));
    ctx.gpr[31] = (0x088EB978u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EB978u) goto L_088EB978;
    return;
L_088EB978:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8004)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_088EB9D4;
      }
      goto L_088EB98C;
    }
L_088EB98C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8073));
    goto L_088EB99C;
L_088EB99C:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(701));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088EB9B8u);
    ctx.gpr[6] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EB9B8u) goto L_088EB9B8;
    return;
L_088EB9B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8004)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(299));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1491));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_088EB99C;
      }
      goto L_088EB9D4;
    }
L_088EB9D4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088EBC6C;
      }
      goto L_088EB9E4;
    }
L_088EB9E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1236));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[19] + static_cast<std::uint32_t>(1236));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[16]);
    ctx.gpr[31] = (0x088EBA18u);
    ctx.gpr[6] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EBA18u) goto L_088EBA18;
    return;
L_088EBA18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8004)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(632), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088EBB8C;
      }
      goto L_088EBA48;
    }
L_088EBA48:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(636));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(676));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(8048));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(8008));
    ctx.gpr[30] = (ctx.gpr[16] + static_cast<std::uint32_t>(692));
    ctx.gpr[23] = (ctx.gpr[17] + static_cast<std::uint32_t>(8064));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[16] + static_cast<std::uint32_t>(909));
    ctx.gpr[21] = (ctx.gpr[17] + static_cast<std::uint32_t>(9447));
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(918));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(9456));
    goto L_088EBA84;
L_088EBA84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088EBA94u);
    ctx.gpr[6] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EBA94u) goto L_088EBA94;
    return;
L_088EBA94:
    ctx.gpr[31] = (0x088EBA9Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088EBA9Cu) goto L_088EBA9C;
    return;
L_088EBA9C:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EBAB0;
      }
      goto L_088EBAA8;
    }
L_088EBAA8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(675), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088EBAC0;
      }
      goto L_088EBAB0;
    }
L_088EBAB0:
    ctx.gpr[31] = (0x088EBAB8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088EBAB8u) goto L_088EBAB8;
    return;
L_088EBAB8:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(636), static_cast<std::uint8_t>(0u));
    goto L_088EBAC0;
L_088EBAC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (0x088EBAD0u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EBAD0u) goto L_088EBAD0;
    return;
L_088EBAD0:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088EBAE0u);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EBAE0u) goto L_088EBAE0;
    return;
L_088EBAE0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    goto L_088EBAE8;
L_088EBAE8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(9433)));
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(905), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088EBAE8;
      }
      goto L_088EBB04;
    }
L_088EBB04:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088EBB14u);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EBB14u) goto L_088EBB14;
    return;
L_088EBB14:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088EBB24u);
    ctx.gpr[6] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EBB24u) goto L_088EBB24;
    return;
L_088EBB24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(299));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(299));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(1491));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8004)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(299));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1491));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1491));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(299));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1491));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(299));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1491));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(299));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1491));
      if (branch_taken) {
          goto L_088EBA84;
      }
      goto L_088EBB88;
    }
L_088EBB88:
    ctx.gpr[4] = (0u | 0u);
    goto L_088EBB8C;
L_088EBB8C:
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(52), 0u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[31] = (0x088EBBB4u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EBBB4u) goto L_088EBBB4;
    return;
L_088EBBB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(88));
    ctx.gpr[31] = (0x088EBBD8u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EBBD8u) goto L_088EBBD8;
    return;
L_088EBBD8:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8004)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_088EBC3C;
      }
      goto L_088EBBF4;
    }
L_088EBBF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8073));
    goto L_088EBC04;
L_088EBC04:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(701));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088EBC20u);
    ctx.gpr[6] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EBC20u) goto L_088EBC20;
    return;
L_088EBC20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8004)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(299));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1491));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_088EBC04;
      }
      goto L_088EBC3C;
    }
L_088EBC3C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088EBC58u);
    ctx.gpr[6] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088EBC58u) goto L_088EBC58;
    return;
L_088EBC58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088EBC68u);
    ctx.gpr[6] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EBC68u) goto L_088EBC68;
    return;
L_088EBC68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    goto L_088EBC6C;
L_088EBC6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(100));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(100));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(100));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[9] + static_cast<std::uint32_t>(17));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[8]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(100));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[7]);
      if (branch_taken) {
          goto L_088EB910;
      }
      goto L_088EBCB4;
    }
L_088EBCB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    goto L_088EBCB8;
L_088EBCB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(17024));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088EB8AC;
      }
      goto L_088EBCE0;
    }
L_088EBCE0:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088EBCF4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EBCF4u) goto L_088EBCF4;
    return;
L_088EBCF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088EB834;
      }
      goto L_088EBD14;
    }
L_088EBD14:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EBD44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[7]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 122u, 0x088ECCA0u>(ctx, &aot_mem); return;
      }
      goto L_088EBD88;
    }
L_088EBD88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 122u, 0x088ECCA0u>(ctx, &aot_mem); return;
      }
      goto L_088EBD94;
    }
L_088EBD94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 122u, 0x088ECCA0u>(ctx, &aot_mem); return;
      }
      goto L_088EBDA0;
    }
L_088EBDA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 122u, 0x088ECCA0u>(ctx, &aot_mem); return;
      }
      goto L_088EBDAC;
    }
L_088EBDAC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[4]);
    ctx.gpr[4] = (28u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18688));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088EBDD0u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EBDD0u) goto L_088EBDD0;
    return;
L_088EBDD0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088EBDE4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088EBDE4u) goto L_088EBDE4;
    return;
L_088EBDE4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x088EBDF8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 123u, 0x088ECCD0u>(ctx, &aot_mem) && ctx.pc == 0x088EBDF8u) goto L_088EBDF8;
    return;
L_088EBDF8:
    ctx.gpr[6] = (3u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088EBE0Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8376));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088EBE0Cu) goto L_088EBE0C;
    return;
L_088EBE0C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088EBE1Cu);
    ctx.gpr[6] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088EBE1Cu) goto L_088EBE1C;
    return;
L_088EBE1C:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[17]);
    goto L_088EBE2C;
L_088EBE2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
        (void)rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 22u, 0x088EC204u>(ctx, &aot_mem); return;
    }
    goto L_088EBE48;
L_088EBE48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(2808));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[6]);
    ctx.gpr[8] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[7]);
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[5]);
    goto L_088EBE8C;
L_088EBE8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x088EBE9Cu);
    ctx.gpr[6] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 543u, 0x08A9DEE8u>(ctx, &aot_mem) && ctx.pc == 0x088EBE9Cu) goto L_088EBE9C;
    return;
L_088EBE9C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_088EBF58;
      }
      goto L_088EBEA4;
    }
L_088EBEA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[31] = (0x088EBEC8u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EBEC8u) goto L_088EBEC8;
    return;
L_088EBEC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(88));
    ctx.gpr[31] = (0x088EBEECu);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EBEECu) goto L_088EBEEC;
    return;
L_088EBEEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8004)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_088EBF48;
      }
      goto L_088EBF00;
    }
L_088EBF00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8073));
    goto L_088EBF10;
L_088EBF10:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(749));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088EBF2Cu);
    ctx.gpr[6] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EBF2Cu) goto L_088EBF2C;
    return;
L_088EBF2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8004)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(303));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1491));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_088EBF10;
      }
      goto L_088EBF48;
    }
L_088EBF48:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 20u, 0x088EC1B0u>(ctx, &aot_mem); return;
      }
      goto L_088EBF58;
    }
L_088EBF58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(2808));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(2808));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088EBF7Cu);
    ctx.gpr[6] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EBF7Cu) goto L_088EBF7C;
    return;
L_088EBF7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8004)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(680), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[17]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[16]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 11u, 0x088EC0CCu>(ctx, &aot_mem); return;
      }
      goto L_088EBFB0;
    }
L_088EBFB0:
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(684));
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(724));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(8048));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    ctx.gpr[21] = (ctx.gpr[22] + static_cast<std::uint32_t>(8008));
    ctx.gpr[30] = (ctx.gpr[20] + static_cast<std::uint32_t>(740));
    ctx.gpr[23] = (ctx.gpr[22] + static_cast<std::uint32_t>(8064));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    goto L_088EBFDC;
L_088EBFDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088EBFECu);
    ctx.gpr[6] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088EBFECu) goto L_088EBFEC;
    return;
L_088EBFEC:
    ctx.gpr[31] = (0x088EBFF4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088EBFF4u) goto L_088EBFF4;
    return;
L_088EBFF4:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 2u, 0x088EC008u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 1u, 0x088EC000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0057(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0057_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_57(Runtime &runtime) {
    runtime.register_generated_unit(57u, 0x088E8000u, 16384u, &recomp_unit_0057, &recomp_unit_0057_entry);
    runtime.register_function(0x088E8000u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8010u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8020u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E802Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8034u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E803Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8068u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8074u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8084u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8090u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8098u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E80A0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E80BCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E80C8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E80D8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E80E4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E80ECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E80F4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8110u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E811Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E812Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8138u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8168u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8170u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8178u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8188u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E81C8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E81D0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E81E0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E81F0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E81F8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8200u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8208u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8218u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8228u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8234u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E823Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8248u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8250u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8268u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8278u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8280u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8288u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E829Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E82CCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E82D8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E82E0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E82ECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E82F4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E82FCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8304u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E830Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8314u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8318u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8330u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8334u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8340u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8354u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8360u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8368u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8370u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8374u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E837Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E838Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8398u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E83A0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E83A8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E83C8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E83D0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E83D8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8400u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E840Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8418u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8424u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8428u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8444u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E845Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8470u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8488u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E849Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E84B4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E84C8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E84E0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E84F0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E84F8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8500u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8518u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8528u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8534u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E856Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E857Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8584u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E858Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E859Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E85A4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E85ACu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E85B4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E85C4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E85CCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E85D4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E85E0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E85E8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E85F0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E85F4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8614u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8618u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8624u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E862Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8634u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8644u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8658u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8668u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8670u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8684u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8694u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E869Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E86B0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E86C0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E86C8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E86DCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E86E4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E86ECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E86F4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E86F8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8700u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8714u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8730u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8738u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8740u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8748u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E874Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8750u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8758u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8768u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8784u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E878Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8794u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E879Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E87A4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E87ACu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E87C8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E87D0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E87D8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E882Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8858u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8868u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8870u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E887Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8890u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E889Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E88A4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E88ACu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E88CCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E88E4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8910u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E895Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8968u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E89C8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E89F4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8A10u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8A1Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8A48u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8A68u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8AACu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8AC4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8AD0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8AECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8B0Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8B18u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8B20u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8B30u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8B40u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8B4Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8B54u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8B5Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8B88u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8B94u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8BA4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8BB0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8BB8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8BC0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8BDCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8BE8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8BF8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8C04u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8C0Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8C14u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8C30u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8C3Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8C4Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8C58u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8C88u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8C90u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8C98u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8CA8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8CE8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8CF0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8CF8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8D00u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8D10u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8D20u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8D2Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8D34u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8D40u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8D48u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8D60u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8D70u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8D78u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8D80u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8D94u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8DC8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8DD4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8DDCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8DE8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8DF0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8DF8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8E00u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8E08u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8E10u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8E14u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8E2Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8E30u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8E3Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8E50u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8E5Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8E64u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8E6Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8E70u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8E78u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8E88u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8E94u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8E9Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8EA4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8EC4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8ECCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8ED4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8F20u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8F28u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8F38u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8F68u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8F74u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8F80u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8F88u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8F94u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8FA0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8FA8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8FB0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8FB8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8FC4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8FD0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E8FFCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E900Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9014u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9044u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9058u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9060u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E908Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9094u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E909Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E90BCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E90DCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9114u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9120u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E916Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9194u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E91B0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E91B8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E91C4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E91F0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E920Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9248u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9260u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E926Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9288u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E92A8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E92B4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E92BCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E92CCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E92DCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E92E8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E92F0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E92F8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9324u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9330u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9340u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E934Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9354u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E935Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9378u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9384u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9394u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E93A0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E93D0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E93D8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E93E0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E93F0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E943Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9444u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E944Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9454u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9464u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9474u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9480u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9488u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9494u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E949Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E94B4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E94C4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E94CCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E94D4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9518u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9524u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E952Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9538u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9540u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9548u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9550u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9554u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E956Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9570u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E957Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9590u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E959Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E95A4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E95ACu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E95B0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E95B8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E95C8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E95D4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E95DCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E95E4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9604u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E960Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9614u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9660u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9668u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9678u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9680u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E968Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9694u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E96BCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E96E0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E96ECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9704u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E970Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9718u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9734u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E973Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9748u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9750u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9758u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9764u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9784u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9790u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E979Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E97A4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E97B0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E97BCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E97C4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E97CCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E97D4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E97F4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9814u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E984Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9858u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9898u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E98C0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E98DCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E98E8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9914u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9930u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9974u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E998Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9998u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E99B4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E99D4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E99E0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E99E8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E99F8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9A08u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9A14u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9A1Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9A24u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9A50u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9A5Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9A6Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9A78u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9A80u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9A88u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9AA4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9AB0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9AC0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9ACCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9AFCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9B04u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9B0Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9B1Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9B5Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9B64u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9B6Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9B74u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9B84u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9B94u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9BA0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9BA8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9BB4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9BBCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9BD4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9BE4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9BECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9BF4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9C30u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9C38u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9C40u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9C4Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9C54u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9C6Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9C74u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9C7Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9C84u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9C8Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9C90u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9CA4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9CA8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9CB4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9CC8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9CD4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9CDCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9CE4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9CE8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9CF0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9D00u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9D0Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9D14u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9D1Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9D3Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9D44u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9D4Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9D70u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9DD0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9DF8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9E00u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9E0Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9E38u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9E54u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9E90u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9E9Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9EB8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9ED8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9EE4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9EECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9EFCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9F0Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9F18u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9F20u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9F28u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9F44u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9F50u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9F60u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9F6Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9F74u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9F7Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9F98u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9FA4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9FB4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9FC0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9FF0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088E9FF8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA000u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA010u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA05Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA064u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA06Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA074u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA084u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA094u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA0A0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA0ACu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA0B4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA0CCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA0DCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA0E4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA0ECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA130u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA138u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA144u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA14Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA154u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA15Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA160u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA178u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA17Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA188u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA19Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA1A8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA1B0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA1B8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA1BCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA1C4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA1D4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA1E0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA1E8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA1F0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA210u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA218u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA220u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA230u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA244u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA24Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA25Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA26Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA27Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA28Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA29Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA2ACu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA2BCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA2CCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA2DCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA2ECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA2FCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA30Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA31Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA334u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA368u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA39Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA3D0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA404u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA444u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA478u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA4B4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA4BCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA4CCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA4DCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA4ECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA4FCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA6B4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA6C4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA6D0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA6F4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA700u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA708u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA710u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA718u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA720u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA72Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA734u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA73Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA744u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA74Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA754u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA760u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA768u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA770u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA778u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA780u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA788u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA790u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA798u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA7A4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA7ACu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA7B4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA7BCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA7C4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA7CCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA7D8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA7E0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA7E8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA7F0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA7F8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA804u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA80Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA814u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA81Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA824u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA82Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA838u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA83Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA84Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA86Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA874u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA884u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA894u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA8A8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA8B8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA8C8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA8D8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA8E8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA8F8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA908u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA918u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA928u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA954u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA95Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA96Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA990u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA9A8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA9BCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA9C8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA9D0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA9D8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA9E0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EA9ECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAA0Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAA18u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAA20u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAA34u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAA50u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAA78u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAA94u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAAB4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAAC4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAAD8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAAF0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAB14u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAB24u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAB30u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAB58u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAB60u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAB68u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAB74u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAB7Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAB8Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAB94u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EABA0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EABB0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EABC8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EABE0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EABFCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAC0Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAC18u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAC28u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAC34u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAC44u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAC50u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAC88u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EACC8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EACDCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EACE8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAD1Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAD34u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAD48u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAD58u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAD60u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAD7Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EADC4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EADD4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EADE0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAE04u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAE28u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAE3Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAE4Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAE68u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAE84u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAE94u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAEC8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAEF4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAF14u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAF24u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAF2Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAF38u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAF40u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAF48u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAF50u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAF60u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAF70u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAF78u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAF94u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAFC8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAFCCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EAFF4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB018u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB030u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB040u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB05Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB078u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB094u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB0A4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB0A8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB0F8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB0FCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB124u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB138u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB158u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB188u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB1C0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB1F0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB204u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB210u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB244u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB25Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB270u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB280u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB288u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB2A4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB2ECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB300u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB30Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB330u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB354u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB368u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB378u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB394u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB3B0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB3C0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB3F4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB420u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB480u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB490u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB498u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB4A4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB4ACu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB4B4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB4BCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB4D4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB4E4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB4ECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB508u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB51Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB52Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB53Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB54Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB5ECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB5F0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB618u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB63Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB658u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB668u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB684u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB6A0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB6BCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB6CCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB6D0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB718u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB71Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB744u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB758u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB778u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB7A8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB7E0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB818u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB828u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB834u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB868u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB880u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB894u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB8A4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB8ACu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB8C8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB910u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB924u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB930u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB954u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB978u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB98Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB99Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB9B8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB9D4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EB9E4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBA18u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBA48u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBA84u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBA94u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBA9Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBAA8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBAB0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBAB8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBAC0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBAD0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBAE0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBAE8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBB04u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBB14u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBB24u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBB88u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBB8Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBBB4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBBD8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBBF4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBC04u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBC20u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBC3Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBC58u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBC68u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBC6Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBCB4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBCB8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBCE0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBCF4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBD14u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBD44u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBD88u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBD94u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBDA0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBDACu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBDD0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBDE4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBDF8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBE0Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBE1Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBE2Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBE48u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBE8Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBE9Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBEA4u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBEC8u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBEECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBF00u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBF10u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBF2Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBF48u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBF58u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBF7Cu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBFB0u, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBFDCu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBFECu, &recomp_unit_0057, "recomp_unit_0057");
    runtime.register_function(0x088EBFF4u, &recomp_unit_0057, "recomp_unit_0057");
}
} // namespace psprecomp

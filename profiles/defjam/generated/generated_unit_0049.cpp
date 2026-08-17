#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0049[4094] = {
    1, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 12, 13, 0, 14, 0, 15, 0, 0,
    0, 0, 16, 0, 0, 0, 17, 18, 0, 19, 0, 20, 0, 21, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0,
    0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0,
    35, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 45, 0, 46, 0, 47, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 52, 0, 0, 53, 0, 54, 0, 0, 55, 0,
    0, 56, 0, 57, 58, 0, 0, 59, 0, 60, 0, 0, 61, 0, 0, 62, 0, 63, 64, 0, 0, 65, 0, 66, 0, 0, 0, 67, 0, 0, 68, 0,
    69, 0, 70, 0, 71, 0, 72, 0, 73, 0, 74, 0, 75, 0, 76, 0, 77, 0, 0, 78, 0, 79, 0, 80, 0, 81, 0, 0, 82, 0, 83, 0,
    84, 85, 0, 86, 0, 87, 88, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0,
    0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 110, 0,
    0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0,
    0, 0, 0, 114, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 122, 0, 123, 124, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 130, 0, 131, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 134, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0,
    140, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 145,
    0, 146, 0, 147, 0, 0, 148, 0, 149, 0, 150, 0, 151, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 160,
    0, 161, 0, 162, 0, 0, 0, 163, 0, 164, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178,
    0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 186, 0, 0, 187, 0, 188, 0, 189, 0, 190, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 195, 0,
    196, 0, 197, 0, 198, 0, 199, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0,
    205, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 211, 0, 212, 0, 213, 0, 214, 0, 0, 0, 215, 0, 216, 0, 0, 0, 217,
    0, 218, 0, 0, 0, 219, 0, 0, 220, 0, 221, 222, 0, 223, 0, 224, 0, 225, 0, 0, 226, 0, 227, 228, 0, 229, 0, 230, 0, 231, 0, 0,
    232, 0, 233, 0, 0, 234, 0, 0, 235, 0, 236, 0, 0, 0, 0, 237, 0, 0, 238, 0, 239, 0, 0, 0, 240, 0, 0, 241, 0, 242, 0, 0,
    0, 0, 0, 243, 0, 244, 0, 245, 0, 0, 0, 0, 0, 0, 246, 247, 0, 248, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 251, 0, 252, 0,
    253, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0,
    259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 267, 0, 268, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0,
    0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 276, 0, 277, 0, 0, 0, 0, 278, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 283, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 287, 0, 0, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 292, 0, 293, 0, 0, 294, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 298, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0,
    0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 305, 0, 306, 0, 0, 0, 307, 308, 0, 0, 309, 0,
    0, 310, 311, 312, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 318, 0, 0, 319, 320, 0, 321,
    0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 324, 0, 325, 0, 326, 327, 328, 0, 329, 0, 0, 0, 0, 330, 0, 0, 331, 0, 0, 332, 0, 333,
    0, 334, 0, 335, 0, 0, 0, 0, 0, 336, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 339, 0, 340, 0, 341, 0, 342, 0, 343, 0, 0, 344,
    0, 0, 0, 0, 0, 345, 0, 346, 0, 347, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 354, 0, 355, 0, 0, 0, 356, 357, 0, 0, 358, 0, 0, 0, 359,
    0, 0, 0, 0, 360, 0, 361, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 365, 0, 366, 0, 367, 368, 369, 0, 370, 0,
    0, 0, 371, 0, 0, 0, 0, 372, 0, 373, 0, 374, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0,
    378, 0, 0, 0, 379, 0, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 382, 0, 0, 0, 0, 0, 0, 383, 384, 385, 0, 386, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 388, 0, 389, 0, 390, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0,
    0, 392, 0, 0, 0, 0, 0, 393, 0, 394, 395, 0, 0, 396, 0, 0, 0, 397, 0, 398, 0, 0, 0, 0, 399, 0, 400, 0, 401, 0, 0, 0,
    402, 403, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 406, 0, 407, 0, 0, 0, 408, 0, 409, 0, 410, 411, 0, 412, 0, 0, 0, 413, 0, 0,
    414, 0, 415, 0, 0, 0, 416, 0, 417, 0, 418, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0,
    0, 0, 421, 0, 0, 422, 0, 423, 0, 0, 0, 0, 424, 0, 425, 0, 426, 0, 0, 0, 427, 428, 0, 429, 0, 0, 0, 430, 0, 0, 431, 0,
    432, 0, 0, 433, 0, 434, 0, 435, 0, 0, 0, 436, 437, 0, 438, 0, 0, 0, 439, 0, 0, 440, 0, 0, 0, 441, 0, 442, 0, 443, 0, 0,
    0, 444, 0, 445, 0, 0, 0, 446, 0, 0, 447, 0, 448, 0, 449, 450, 0, 451, 0, 0, 0, 452, 0, 0, 453, 0, 454, 0, 455, 0, 456, 0,
    457, 0, 458, 0, 459, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 462, 0, 0, 0, 0, 463, 0, 464, 0,
    0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 468, 0, 0, 0, 0, 469, 0, 470,
    0, 0, 0, 471, 0, 0, 472, 0, 473, 0, 0, 0, 0, 474, 0, 475, 476, 0, 477, 0, 0, 0, 0, 478, 0, 0, 479, 0, 0, 0, 0, 480,
    0, 0, 481, 0, 0, 482, 0, 0, 0, 0, 483, 484, 0, 0, 0, 485, 0, 486, 0, 487, 0, 0, 488, 0, 489, 0, 0, 0, 0, 490, 0, 491,
    0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 493, 0, 494, 0, 495, 0, 0, 0, 0, 496, 0, 0, 497, 0, 498, 0, 499, 500, 0, 501, 0, 0,
    0, 502, 0, 0, 503, 0, 504, 0, 505, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0,
    508, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 513,
    0, 0, 0, 0, 514, 0, 515, 0, 516, 0, 517, 0, 518, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 523, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 525, 0, 526, 0, 527, 0, 528, 0, 529, 0, 530, 0, 531, 0, 0, 532, 0, 0, 533, 0, 0, 0, 0, 534, 0, 535, 0, 0,
    0, 536, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 541,
    0, 0, 0, 0, 0, 542, 0, 543, 0, 544, 0, 545, 0, 546, 0, 547, 0, 548, 0, 549, 0, 550, 0, 0, 551, 0, 552, 0, 0, 553, 0, 0,
    0, 0, 0, 0, 0, 554, 0, 555, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 557, 0, 558, 0, 559, 0, 560, 0, 561, 0, 562, 0, 563, 0,
    564, 0, 565, 0, 566, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 569, 0, 0, 0, 570, 0, 0, 0, 571, 0,
    0, 0, 572, 0, 0, 0, 573, 0, 0, 0, 574, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 576, 0, 0, 0, 577, 0, 0, 0, 0, 578, 0,
    0, 0, 0, 579, 0, 0, 0, 0, 580, 0, 0, 0, 0, 581, 0, 582, 0, 0, 0, 0, 0, 583, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0,
    0, 0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 587, 0, 588, 0, 0, 0, 589, 0,
    590, 0, 591, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 593, 0, 0, 594, 0, 0, 0, 0, 0, 0, 595, 0, 0, 596, 0, 0, 0, 0,
    0, 597, 0, 0, 0, 0, 0, 598, 0, 0, 0, 599, 0, 0, 0, 0, 0, 600, 0, 0, 0, 601, 0, 0, 602, 0, 0, 603, 0, 0, 604, 0,
    0, 605, 0, 0, 606, 0, 607, 0, 608, 0, 0, 609, 0, 0, 610, 0, 611, 0, 612, 0, 0, 613, 0, 614, 0, 615, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 618, 0, 0, 0, 619, 0, 0, 0, 620, 0, 0, 0, 621, 0, 622, 0, 0, 623,
    0, 624, 0, 0, 0, 625, 626, 0, 627, 0, 0, 0, 628, 0, 629, 0, 0, 0, 630, 0, 631, 0, 0, 632, 0, 0, 633, 0, 634, 0, 635, 0,
    636, 0, 637, 0, 0, 0, 638, 0, 0, 639, 0, 0, 0, 640, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0,
    0, 643, 0, 0, 0, 0, 644, 0, 0, 0, 0, 645, 0, 0, 0, 0, 646, 0, 647, 0, 0, 0, 0, 0, 648, 0, 0, 0, 649, 0, 0, 0,
    0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 653, 0, 654, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 655, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 658, 0, 0, 0, 0, 659, 0, 660, 0, 0, 0, 661,
    0, 0, 662, 0, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 664, 0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 667, 0, 668, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0, 0, 0, 672, 0, 673, 674, 0, 675, 0, 0, 0, 676, 0, 0,
    677, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0, 680, 0, 0, 0, 0, 0, 681, 0, 0, 0, 682, 0, 0,
    0, 0, 683, 0, 684, 0, 0, 0, 0, 0, 685, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 688,
    0, 0, 0, 689, 0, 0, 0, 690, 0, 691, 0, 0, 0, 692, 0, 0, 0, 693, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 695, 0, 0, 0, 696, 0, 0, 0, 697, 0, 0, 0, 0, 698, 0, 0, 699, 0, 0, 0, 0, 0, 700, 0, 701, 0, 0, 0, 702, 0, 0,
    0, 703, 0, 0, 0, 704, 0, 0, 0, 0, 705, 0, 0, 0, 0, 706, 0, 707, 0, 0, 0, 0, 0, 708, 0, 0, 0, 709, 0, 0, 0, 0,
    0, 0, 0, 0, 710, 0, 0, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 0, 712, 0, 0, 0, 713, 0, 0, 0, 0, 0, 714, 0, 0, 0,
    0, 715, 0, 716, 0, 0, 0, 0, 0, 717, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 720, 0, 0, 0, 721, 0, 722, 0, 0, 0, 0, 723, 0, 0, 724, 0, 0, 725, 0, 0, 0, 726, 0, 727, 0, 0, 0, 0, 728, 0, 0,
    0, 729, 0, 730, 0, 731, 0, 732, 0, 0, 0, 0, 733, 0, 0, 0, 734, 0, 735, 0, 736, 0, 0, 737, 0, 0, 738, 0, 739, 0, 0, 0,
    0, 740, 0, 0, 0, 741, 0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 743, 0, 0, 0, 0, 0, 744, 745, 0, 746,
    0, 0, 0, 0, 0, 0, 0, 747, 0, 748, 0, 0, 0, 0, 749, 750, 0, 751, 0, 0, 0, 0, 0, 0, 752, 753, 0, 0, 0, 754, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 756, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0, 758,
    0, 0, 759, 0, 0, 0, 760, 0, 0, 761, 0, 0, 0, 0, 0, 0, 762, 0, 0, 0, 0, 0, 763, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 764, 0, 0, 0, 765, 0, 0, 0, 0, 0, 766, 0, 0, 767, 0, 0, 0, 0, 0, 0, 768, 0, 769, 0, 0, 0, 770, 0, 0, 771, 0,
    0, 0, 0, 0, 772, 0, 0, 0, 0, 0, 773, 0, 0, 0, 0, 0, 0, 774, 0, 0, 0, 0, 0, 775, 0, 776, 0, 777, 0, 778, 0, 779,
    0, 780, 0, 781, 0, 782, 0, 783, 784, 0, 0, 785, 0, 0, 786, 0, 0, 787, 788, 0, 789, 0, 0, 0, 0, 0, 790, 0, 0, 0, 0, 791,
    0, 792, 0, 793, 794, 0, 795, 0, 796, 0, 0, 0, 797, 0, 0, 0, 798, 0, 0, 0, 799, 0, 0, 0, 800, 0, 801, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 802, 0, 0, 0, 803, 0, 0, 0, 804, 0, 805, 0, 0, 0, 0, 0, 806, 0, 0, 0, 807, 0, 0, 0, 808, 0, 809,
    0, 0, 0, 0, 0, 810, 0, 0, 811, 0, 812, 0, 813, 0, 814, 0, 815, 816, 0, 817, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 818, 0, 0, 0, 0, 819, 0, 0, 0, 820, 0, 0, 0, 821, 0, 822, 0, 0, 0, 0, 0, 823, 0, 0, 0, 824, 0, 0, 0,
    825, 0, 826, 0, 0, 827, 0, 0, 828, 0, 829, 830, 0, 0, 0, 0, 0, 831, 0, 0, 0, 832, 0, 833, 0, 0, 0, 0, 834, 0, 0, 0,
    835, 836, 0, 0, 0, 0, 0, 0, 837, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 838, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 839, 0, 840, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 841, 0, 842, 0, 0, 0, 843, 0, 844, 0, 0, 845, 0,
    0, 846, 0, 0, 847, 0, 848, 0, 849, 850, 0, 851, 0, 852, 0, 853, 0, 0, 0, 854, 0, 855, 0, 0, 856, 0, 857, 0, 858, 0, 0, 0,
    0, 0, 0, 859, 0, 860, 0, 0, 0, 861, 0, 0, 862, 0, 0, 0, 863, 0, 864, 0, 865, 0, 0, 0, 0, 866, 0, 867, 0, 0, 0, 0,
    868, 0, 869, 0, 0, 870, 0, 871, 0, 872, 0, 0, 0, 873, 0, 874, 0, 875, 0, 876, 0, 0, 877, 0, 0, 0, 0, 0, 878, 0, 879, 880,
    0, 0, 881, 0, 0, 0, 0, 0, 882, 0, 883, 0, 884, 0, 885, 0, 886, 0, 887, 0, 888, 0, 889, 0, 890, 0, 891, 0, 892, 0, 893, 0,
    894, 0, 895, 0, 896, 0, 897, 0, 0, 0, 898, 0, 0, 0, 0, 0, 899, 0, 0, 900, 0, 0, 0, 0, 0, 901, 0, 902, 0, 0, 0, 903,
    0, 904, 0, 0, 0, 905, 0, 906, 0, 907, 0, 0, 0, 0, 0, 0, 0, 908, 0, 0, 0, 909, 910, 0, 911, 0, 912, 0, 913, 0, 914, 0,
    0, 915, 0, 916, 0, 0, 0, 0, 0, 0, 917, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 918, 0, 919, 0, 0, 920,
};
void recomp_unit_0049_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088C8000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0049[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088C8000;
    case 2u: goto L_088C8018;
    case 3u: goto L_088C8020;
    case 4u: goto L_088C8038;
    case 5u: goto L_088C804C;
    case 6u: goto L_088C806C;
    case 7u: goto L_088C8098;
    case 8u: goto L_088C80A0;
    case 9u: goto L_088C80B4;
    case 10u: goto L_088C80C4;
    case 11u: goto L_088C80D0;
    case 12u: goto L_088C80E0;
    case 13u: goto L_088C80E4;
    case 14u: goto L_088C80EC;
    case 15u: goto L_088C80F4;
    case 16u: goto L_088C8108;
    case 17u: goto L_088C8118;
    case 18u: goto L_088C811C;
    case 19u: goto L_088C8124;
    case 20u: goto L_088C812C;
    case 21u: goto L_088C8134;
    case 22u: goto L_088C813C;
    case 23u: goto L_088C814C;
    case 24u: goto L_088C8168;
    case 25u: goto L_088C81A4;
    case 26u: goto L_088C81BC;
    case 27u: goto L_088C81D8;
    case 28u: goto L_088C81EC;
    case 29u: goto L_088C8204;
    case 30u: goto L_088C8224;
    case 31u: goto L_088C8234;
    case 32u: goto L_088C8244;
    case 33u: goto L_088C8264;
    case 34u: goto L_088C826C;
    case 35u: goto L_088C8280;
    case 36u: goto L_088C828C;
    case 37u: goto L_088C82A4;
    case 38u: goto L_088C82B0;
    case 39u: goto L_088C82B8;
    case 40u: goto L_088C82CC;
    case 41u: goto L_088C82E4;
    case 42u: goto L_088C82F0;
    case 43u: goto L_088C836C;
    case 44u: goto L_088C8394;
    case 45u: goto L_088C8404;
    case 46u: goto L_088C840C;
    case 47u: goto L_088C8414;
    case 48u: goto L_088C8420;
    case 49u: goto L_088C8428;
    case 50u: goto L_088C8448;
    case 51u: goto L_088C8450;
    case 52u: goto L_088C8458;
    case 53u: goto L_088C8464;
    case 54u: goto L_088C846C;
    case 55u: goto L_088C8478;
    case 56u: goto L_088C8484;
    case 57u: goto L_088C848C;
    case 58u: goto L_088C8490;
    case 59u: goto L_088C849C;
    case 60u: goto L_088C84A4;
    case 61u: goto L_088C84B0;
    case 62u: goto L_088C84BC;
    case 63u: goto L_088C84C4;
    case 64u: goto L_088C84C8;
    case 65u: goto L_088C84D4;
    case 66u: goto L_088C84DC;
    case 67u: goto L_088C84EC;
    case 68u: goto L_088C84F8;
    case 69u: goto L_088C8500;
    case 70u: goto L_088C8508;
    case 71u: goto L_088C8510;
    case 72u: goto L_088C8518;
    case 73u: goto L_088C8520;
    case 74u: goto L_088C8528;
    case 75u: goto L_088C8530;
    case 76u: goto L_088C8538;
    case 77u: goto L_088C8540;
    case 78u: goto L_088C854C;
    case 79u: goto L_088C8554;
    case 80u: goto L_088C855C;
    case 81u: goto L_088C8564;
    case 82u: goto L_088C8570;
    case 83u: goto L_088C8578;
    case 84u: goto L_088C8580;
    case 85u: goto L_088C8584;
    case 86u: goto L_088C858C;
    case 87u: goto L_088C8594;
    case 88u: goto L_088C8598;
    case 89u: goto L_088C85A0;
    case 90u: goto L_088C85AC;
    case 91u: goto L_088C85DC;
    case 92u: goto L_088C85F8;
    case 93u: goto L_088C8604;
    case 94u: goto L_088C8620;
    case 95u: goto L_088C862C;
    case 96u: goto L_088C8648;
    case 97u: goto L_088C8654;
    case 98u: goto L_088C8690;
    case 99u: goto L_088C86B0;
    case 100u: goto L_088C875C;
    case 101u: goto L_088C87EC;
    case 102u: goto L_088C88C8;
    case 103u: goto L_088C8958;
    case 104u: goto L_088C8980;
    case 105u: goto L_088C8998;
    case 106u: goto L_088C89B0;
    case 107u: goto L_088C89C8;
    case 108u: goto L_088C89D8;
    case 109u: goto L_088C89E8;
    case 110u: goto L_088C89F8;
    case 111u: goto L_088C8A18;
    case 112u: goto L_088C8A40;
    case 113u: goto L_088C8AF0;
    case 114u: goto L_088C8B0C;
    case 115u: goto L_088C8B14;
    case 116u: goto L_088C8B28;
    case 117u: goto L_088C8B44;
    case 118u: goto L_088C8B74;
    case 119u: goto L_088C8BB0;
    case 120u: goto L_088C8BC8;
    case 121u: goto L_088C8BD4;
    case 122u: goto L_088C8BDC;
    case 123u: goto L_088C8BE4;
    case 124u: goto L_088C8BE8;
    case 125u: goto L_088C8C24;
    case 126u: goto L_088C8C38;
    case 127u: goto L_088C8C60;
    case 128u: goto L_088C8CAC;
    case 129u: goto L_088C8CB8;
    case 130u: goto L_088C8CC0;
    case 131u: goto L_088C8CC8;
    case 132u: goto L_088C8CD0;
    case 133u: goto L_088C8CD8;
    case 134u: goto L_088C8D14;
    case 135u: goto L_088C8D18;
    case 136u: goto L_088C8D3C;
    case 137u: goto L_088C8D48;
    case 138u: goto L_088C8D50;
    case 139u: goto L_088C8D6C;
    case 140u: goto L_088C8D80;
    case 141u: goto L_088C8D88;
    case 142u: goto L_088C8DA4;
    case 143u: goto L_088C8DE0;
    case 144u: goto L_088C8DF4;
    case 145u: goto L_088C8DFC;
    case 146u: goto L_088C8E04;
    case 147u: goto L_088C8E0C;
    case 148u: goto L_088C8E18;
    case 149u: goto L_088C8E20;
    case 150u: goto L_088C8E28;
    case 151u: goto L_088C8E30;
    case 152u: goto L_088C8E34;
    case 153u: goto L_088C8E44;
    case 154u: goto L_088C8E5C;
    case 155u: goto L_088C8E9C;
    case 156u: goto L_088C8EB0;
    case 157u: goto L_088C8EC0;
    case 158u: goto L_088C8ED0;
    case 159u: goto L_088C8EF4;
    case 160u: goto L_088C8EFC;
    case 161u: goto L_088C8F04;
    case 162u: goto L_088C8F0C;
    case 163u: goto L_088C8F1C;
    case 164u: goto L_088C8F24;
    case 165u: goto L_088C8F34;
    case 166u: goto L_088C8F40;
    case 167u: goto L_088C8F5C;
    case 168u: goto L_088C8F90;
    case 169u: goto L_088C8FA0;
    case 170u: goto L_088C8FAC;
    case 171u: goto L_088C8FB4;
    case 172u: goto L_088C8FCC;
    case 173u: goto L_088C8FE4;
    case 174u: goto L_088C8FF4;
    case 175u: goto L_088C901C;
    case 176u: goto L_088C902C;
    case 177u: goto L_088C9034;
    case 178u: goto L_088C907C;
    case 179u: goto L_088C9090;
    case 180u: goto L_088C90AC;
    case 181u: goto L_088C90C4;
    case 182u: goto L_088C90DC;
    case 183u: goto L_088C90E4;
    case 184u: goto L_088C9120;
    case 185u: goto L_088C912C;
    case 186u: goto L_088C918C;
    case 187u: goto L_088C9198;
    case 188u: goto L_088C91A0;
    case 189u: goto L_088C91A8;
    case 190u: goto L_088C91B0;
    case 191u: goto L_088C91B8;
    case 192u: goto L_088C91C8;
    case 193u: goto L_088C91DC;
    case 194u: goto L_088C91F0;
    case 195u: goto L_088C91F8;
    case 196u: goto L_088C9200;
    case 197u: goto L_088C9208;
    case 198u: goto L_088C9210;
    case 199u: goto L_088C9218;
    case 200u: goto L_088C9220;
    case 201u: goto L_088C9238;
    case 202u: goto L_088C924C;
    case 203u: goto L_088C9254;
    case 204u: goto L_088C9274;
    case 205u: goto L_088C9280;
    case 206u: goto L_088C9288;
    case 207u: goto L_088C9294;
    case 208u: goto L_088C9310;
    case 209u: goto L_088C9334;
    case 210u: goto L_088C93B8;
    case 211u: goto L_088C93BC;
    case 212u: goto L_088C93C4;
    case 213u: goto L_088C93CC;
    case 214u: goto L_088C93D4;
    case 215u: goto L_088C93E4;
    case 216u: goto L_088C93EC;
    case 217u: goto L_088C93FC;
    case 218u: goto L_088C9404;
    case 219u: goto L_088C9414;
    case 220u: goto L_088C9420;
    case 221u: goto L_088C9428;
    case 222u: goto L_088C942C;
    case 223u: goto L_088C9434;
    case 224u: goto L_088C943C;
    case 225u: goto L_088C9444;
    case 226u: goto L_088C9450;
    case 227u: goto L_088C9458;
    case 228u: goto L_088C945C;
    case 229u: goto L_088C9464;
    case 230u: goto L_088C946C;
    case 231u: goto L_088C9474;
    case 232u: goto L_088C9480;
    case 233u: goto L_088C9488;
    case 234u: goto L_088C9494;
    case 235u: goto L_088C94A0;
    case 236u: goto L_088C94A8;
    case 237u: goto L_088C94BC;
    case 238u: goto L_088C94C8;
    case 239u: goto L_088C94D0;
    case 240u: goto L_088C94E0;
    case 241u: goto L_088C94EC;
    case 242u: goto L_088C94F4;
    case 243u: goto L_088C950C;
    case 244u: goto L_088C9514;
    case 245u: goto L_088C951C;
    case 246u: goto L_088C9538;
    case 247u: goto L_088C953C;
    case 248u: goto L_088C9544;
    case 249u: goto L_088C954C;
    case 250u: goto L_088C9568;
    case 251u: goto L_088C9570;
    case 252u: goto L_088C9578;
    case 253u: goto L_088C9580;
    case 254u: goto L_088C958C;
    case 255u: goto L_088C95A8;
    case 256u: goto L_088C95B4;
    case 257u: goto L_088C95C0;
    case 258u: goto L_088C95F0;
    case 259u: goto L_088C9600;
    case 260u: goto L_088C9620;
    case 261u: goto L_088C9630;
    case 262u: goto L_088C9644;
    case 263u: goto L_088C9654;
    case 264u: goto L_088C9660;
    case 265u: goto L_088C9688;
    case 266u: goto L_088C96A8;
    case 267u: goto L_088C9708;
    case 268u: goto L_088C9710;
    case 269u: goto L_088C971C;
    case 270u: goto L_088C9738;
    case 271u: goto L_088C974C;
    case 272u: goto L_088C9764;
    case 273u: goto L_088C9778;
    case 274u: goto L_088C9798;
    case 275u: goto L_088C97A8;
    case 276u: goto L_088C97B8;
    case 277u: goto L_088C97C0;
    case 278u: goto L_088C97D4;
    case 279u: goto L_088C97DC;
    case 280u: goto L_088C97EC;
    case 281u: goto L_088C981C;
    case 282u: goto L_088C986C;
    case 283u: goto L_088C9874;
    case 284u: goto L_088C989C;
    case 285u: goto L_088C98B4;
    case 286u: goto L_088C98BC;
    case 287u: goto L_088C9908;
    case 288u: goto L_088C991C;
    case 289u: goto L_088C9924;
    case 290u: goto L_088C9940;
    case 291u: goto L_088C9950;
    case 292u: goto L_088C9958;
    case 293u: goto L_088C9960;
    case 294u: goto L_088C996C;
    case 295u: goto L_088C99A4;
    case 296u: goto L_088C99B4;
    case 297u: goto L_088C99C4;
    case 298u: goto L_088C99D0;
    case 299u: goto L_088C99DC;
    case 300u: goto L_088C99F8;
    case 301u: goto L_088C9A0C;
    case 302u: goto L_088C9A1C;
    case 303u: goto L_088C9A38;
    case 304u: goto L_088C9A44;
    case 305u: goto L_088C9A50;
    case 306u: goto L_088C9A58;
    case 307u: goto L_088C9A68;
    case 308u: goto L_088C9A6C;
    case 309u: goto L_088C9A78;
    case 310u: goto L_088C9A84;
    case 311u: goto L_088C9A88;
    case 312u: goto L_088C9A8C;
    case 313u: goto L_088C9A94;
    case 314u: goto L_088C9AA4;
    case 315u: goto L_088C9AB8;
    case 316u: goto L_088C9AC8;
    case 317u: goto L_088C9AD8;
    case 318u: goto L_088C9AE4;
    case 319u: goto L_088C9AF0;
    case 320u: goto L_088C9AF4;
    case 321u: goto L_088C9AFC;
    case 322u: goto L_088C9B10;
    case 323u: goto L_088C9B1C;
    case 324u: goto L_088C9B28;
    case 325u: goto L_088C9B30;
    case 326u: goto L_088C9B38;
    case 327u: goto L_088C9B3C;
    case 328u: goto L_088C9B40;
    case 329u: goto L_088C9B48;
    case 330u: goto L_088C9B5C;
    case 331u: goto L_088C9B68;
    case 332u: goto L_088C9B74;
    case 333u: goto L_088C9B7C;
    case 334u: goto L_088C9B84;
    case 335u: goto L_088C9B8C;
    case 336u: goto L_088C9BA4;
    case 337u: goto L_088C9BAC;
    case 338u: goto L_088C9BC8;
    case 339u: goto L_088C9BD0;
    case 340u: goto L_088C9BD8;
    case 341u: goto L_088C9BE0;
    case 342u: goto L_088C9BE8;
    case 343u: goto L_088C9BF0;
    case 344u: goto L_088C9BFC;
    case 345u: goto L_088C9C14;
    case 346u: goto L_088C9C1C;
    case 347u: goto L_088C9C24;
    case 348u: goto L_088C9C2C;
    case 349u: goto L_088C9C44;
    case 350u: goto L_088C9C68;
    case 351u: goto L_088C9C90;
    case 352u: goto L_088C9CA4;
    case 353u: goto L_088C9CBC;
    case 354u: goto L_088C9CC4;
    case 355u: goto L_088C9CCC;
    case 356u: goto L_088C9CDC;
    case 357u: goto L_088C9CE0;
    case 358u: goto L_088C9CEC;
    case 359u: goto L_088C9CFC;
    case 360u: goto L_088C9D10;
    case 361u: goto L_088C9D18;
    case 362u: goto L_088C9D24;
    case 363u: goto L_088C9D3C;
    case 364u: goto L_088C9D50;
    case 365u: goto L_088C9D58;
    case 366u: goto L_088C9D60;
    case 367u: goto L_088C9D68;
    case 368u: goto L_088C9D6C;
    case 369u: goto L_088C9D70;
    case 370u: goto L_088C9D78;
    case 371u: goto L_088C9D88;
    case 372u: goto L_088C9D9C;
    case 373u: goto L_088C9DA4;
    case 374u: goto L_088C9DAC;
    case 375u: goto L_088C9DB4;
    case 376u: goto L_088C9DCC;
    case 377u: goto L_088C9DF8;
    case 378u: goto L_088C9E00;
    case 379u: goto L_088C9E10;
    case 380u: goto L_088C9E1C;
    case 381u: goto L_088C9E38;
    case 382u: goto L_088C9E40;
    case 383u: goto L_088C9E5C;
    case 384u: goto L_088C9E60;
    case 385u: goto L_088C9E64;
    case 386u: goto L_088C9E6C;
    case 387u: goto L_088C9EBC;
    case 388u: goto L_088C9EC4;
    case 389u: goto L_088C9ECC;
    case 390u: goto L_088C9ED4;
    case 391u: goto L_088C9EF0;
    case 392u: goto L_088C9F04;
    case 393u: goto L_088C9F1C;
    case 394u: goto L_088C9F24;
    case 395u: goto L_088C9F28;
    case 396u: goto L_088C9F34;
    case 397u: goto L_088C9F44;
    case 398u: goto L_088C9F4C;
    case 399u: goto L_088C9F60;
    case 400u: goto L_088C9F68;
    case 401u: goto L_088C9F70;
    case 402u: goto L_088C9F80;
    case 403u: goto L_088C9F84;
    case 404u: goto L_088C9F90;
    case 405u: goto L_088C9FA4;
    case 406u: goto L_088C9FB0;
    case 407u: goto L_088C9FB8;
    case 408u: goto L_088C9FC8;
    case 409u: goto L_088C9FD0;
    case 410u: goto L_088C9FD8;
    case 411u: goto L_088C9FDC;
    case 412u: goto L_088C9FE4;
    case 413u: goto L_088C9FF4;
    case 414u: goto L_088CA000;
    case 415u: goto L_088CA008;
    case 416u: goto L_088CA018;
    case 417u: goto L_088CA020;
    case 418u: goto L_088CA028;
    case 419u: goto L_088CA040;
    case 420u: goto L_088CA074;
    case 421u: goto L_088CA088;
    case 422u: goto L_088CA094;
    case 423u: goto L_088CA09C;
    case 424u: goto L_088CA0B0;
    case 425u: goto L_088CA0B8;
    case 426u: goto L_088CA0C0;
    case 427u: goto L_088CA0D0;
    case 428u: goto L_088CA0D4;
    case 429u: goto L_088CA0DC;
    case 430u: goto L_088CA0EC;
    case 431u: goto L_088CA0F8;
    case 432u: goto L_088CA100;
    case 433u: goto L_088CA10C;
    case 434u: goto L_088CA114;
    case 435u: goto L_088CA11C;
    case 436u: goto L_088CA12C;
    case 437u: goto L_088CA130;
    case 438u: goto L_088CA138;
    case 439u: goto L_088CA148;
    case 440u: goto L_088CA154;
    case 441u: goto L_088CA164;
    case 442u: goto L_088CA16C;
    case 443u: goto L_088CA174;
    case 444u: goto L_088CA184;
    case 445u: goto L_088CA18C;
    case 446u: goto L_088CA19C;
    case 447u: goto L_088CA1A8;
    case 448u: goto L_088CA1B0;
    case 449u: goto L_088CA1B8;
    case 450u: goto L_088CA1BC;
    case 451u: goto L_088CA1C4;
    case 452u: goto L_088CA1D4;
    case 453u: goto L_088CA1E0;
    case 454u: goto L_088CA1E8;
    case 455u: goto L_088CA1F0;
    case 456u: goto L_088CA1F8;
    case 457u: goto L_088CA200;
    case 458u: goto L_088CA208;
    case 459u: goto L_088CA210;
    case 460u: goto L_088CA218;
    case 461u: goto L_088CA250;
    case 462u: goto L_088CA25C;
    case 463u: goto L_088CA270;
    case 464u: goto L_088CA278;
    case 465u: goto L_088CA288;
    case 466u: goto L_088CA2A8;
    case 467u: goto L_088CA2CC;
    case 468u: goto L_088CA2E0;
    case 469u: goto L_088CA2F4;
    case 470u: goto L_088CA2FC;
    case 471u: goto L_088CA30C;
    case 472u: goto L_088CA318;
    case 473u: goto L_088CA320;
    case 474u: goto L_088CA334;
    case 475u: goto L_088CA33C;
    case 476u: goto L_088CA340;
    case 477u: goto L_088CA348;
    case 478u: goto L_088CA35C;
    case 479u: goto L_088CA368;
    case 480u: goto L_088CA37C;
    case 481u: goto L_088CA388;
    case 482u: goto L_088CA394;
    case 483u: goto L_088CA3A8;
    case 484u: goto L_088CA3AC;
    case 485u: goto L_088CA3BC;
    case 486u: goto L_088CA3C4;
    case 487u: goto L_088CA3CC;
    case 488u: goto L_088CA3D8;
    case 489u: goto L_088CA3E0;
    case 490u: goto L_088CA3F4;
    case 491u: goto L_088CA3FC;
    case 492u: goto L_088CA40C;
    case 493u: goto L_088CA428;
    case 494u: goto L_088CA430;
    case 495u: goto L_088CA438;
    case 496u: goto L_088CA44C;
    case 497u: goto L_088CA458;
    case 498u: goto L_088CA460;
    case 499u: goto L_088CA468;
    case 500u: goto L_088CA46C;
    case 501u: goto L_088CA474;
    case 502u: goto L_088CA484;
    case 503u: goto L_088CA490;
    case 504u: goto L_088CA498;
    case 505u: goto L_088CA4A0;
    case 506u: goto L_088CA4BC;
    case 507u: goto L_088CA4E4;
    case 508u: goto L_088CA500;
    case 509u: goto L_088CA520;
    case 510u: goto L_088CA530;
    case 511u: goto L_088CA544;
    case 512u: goto L_088CA55C;
    case 513u: goto L_088CA57C;
    case 514u: goto L_088CA590;
    case 515u: goto L_088CA598;
    case 516u: goto L_088CA5A0;
    case 517u: goto L_088CA5A8;
    case 518u: goto L_088CA5B0;
    case 519u: goto L_088CA5C8;
    case 520u: goto L_088CA5E4;
    case 521u: goto L_088CA60C;
    case 522u: goto L_088CA64C;
    case 523u: goto L_088CA654;
    case 524u: goto L_088CA664;
    case 525u: goto L_088CA690;
    case 526u: goto L_088CA698;
    case 527u: goto L_088CA6A0;
    case 528u: goto L_088CA6A8;
    case 529u: goto L_088CA6B0;
    case 530u: goto L_088CA6B8;
    case 531u: goto L_088CA6C0;
    case 532u: goto L_088CA6CC;
    case 533u: goto L_088CA6D8;
    case 534u: goto L_088CA6EC;
    case 535u: goto L_088CA6F4;
    case 536u: goto L_088CA704;
    case 537u: goto L_088CA71C;
    case 538u: goto L_088CA734;
    case 539u: goto L_088CA750;
    case 540u: goto L_088CA76C;
    case 541u: goto L_088CA77C;
    case 542u: goto L_088CA794;
    case 543u: goto L_088CA79C;
    case 544u: goto L_088CA7A4;
    case 545u: goto L_088CA7AC;
    case 546u: goto L_088CA7B4;
    case 547u: goto L_088CA7BC;
    case 548u: goto L_088CA7C4;
    case 549u: goto L_088CA7CC;
    case 550u: goto L_088CA7D4;
    case 551u: goto L_088CA7E0;
    case 552u: goto L_088CA7E8;
    case 553u: goto L_088CA7F4;
    case 554u: goto L_088CA814;
    case 555u: goto L_088CA81C;
    case 556u: goto L_088CA830;
    case 557u: goto L_088CA848;
    case 558u: goto L_088CA850;
    case 559u: goto L_088CA858;
    case 560u: goto L_088CA860;
    case 561u: goto L_088CA868;
    case 562u: goto L_088CA870;
    case 563u: goto L_088CA878;
    case 564u: goto L_088CA880;
    case 565u: goto L_088CA888;
    case 566u: goto L_088CA890;
    case 567u: goto L_088CA8A0;
    case 568u: goto L_088CA8C8;
    case 569u: goto L_088CA8D8;
    case 570u: goto L_088CA8E8;
    case 571u: goto L_088CA8F8;
    case 572u: goto L_088CA908;
    case 573u: goto L_088CA918;
    case 574u: goto L_088CA928;
    case 575u: goto L_088CA940;
    case 576u: goto L_088CA954;
    case 577u: goto L_088CA964;
    case 578u: goto L_088CA978;
    case 579u: goto L_088CA98C;
    case 580u: goto L_088CA9A0;
    case 581u: goto L_088CA9B4;
    case 582u: goto L_088CA9BC;
    case 583u: goto L_088CA9D4;
    case 584u: goto L_088CA9E4;
    case 585u: goto L_088CAA08;
    case 586u: goto L_088CAA4C;
    case 587u: goto L_088CAA60;
    case 588u: goto L_088CAA68;
    case 589u: goto L_088CAA78;
    case 590u: goto L_088CAA80;
    case 591u: goto L_088CAA88;
    case 592u: goto L_088CAAA0;
    case 593u: goto L_088CAAB8;
    case 594u: goto L_088CAAC4;
    case 595u: goto L_088CAAE0;
    case 596u: goto L_088CAAEC;
    case 597u: goto L_088CAB04;
    case 598u: goto L_088CAB1C;
    case 599u: goto L_088CAB2C;
    case 600u: goto L_088CAB44;
    case 601u: goto L_088CAB54;
    case 602u: goto L_088CAB60;
    case 603u: goto L_088CAB6C;
    case 604u: goto L_088CAB78;
    case 605u: goto L_088CAB84;
    case 606u: goto L_088CAB90;
    case 607u: goto L_088CAB98;
    case 608u: goto L_088CABA0;
    case 609u: goto L_088CABAC;
    case 610u: goto L_088CABB8;
    case 611u: goto L_088CABC0;
    case 612u: goto L_088CABC8;
    case 613u: goto L_088CABD4;
    case 614u: goto L_088CABDC;
    case 615u: goto L_088CABE4;
    case 616u: goto L_088CAC0C;
    case 617u: goto L_088CAC28;
    case 618u: goto L_088CAC38;
    case 619u: goto L_088CAC48;
    case 620u: goto L_088CAC58;
    case 621u: goto L_088CAC68;
    case 622u: goto L_088CAC70;
    case 623u: goto L_088CAC7C;
    case 624u: goto L_088CAC84;
    case 625u: goto L_088CAC94;
    case 626u: goto L_088CAC98;
    case 627u: goto L_088CACA0;
    case 628u: goto L_088CACB0;
    case 629u: goto L_088CACB8;
    case 630u: goto L_088CACC8;
    case 631u: goto L_088CACD0;
    case 632u: goto L_088CACDC;
    case 633u: goto L_088CACE8;
    case 634u: goto L_088CACF0;
    case 635u: goto L_088CACF8;
    case 636u: goto L_088CAD00;
    case 637u: goto L_088CAD08;
    case 638u: goto L_088CAD18;
    case 639u: goto L_088CAD24;
    case 640u: goto L_088CAD34;
    case 641u: goto L_088CAD44;
    case 642u: goto L_088CAD6C;
    case 643u: goto L_088CAD84;
    case 644u: goto L_088CAD98;
    case 645u: goto L_088CADAC;
    case 646u: goto L_088CADC0;
    case 647u: goto L_088CADC8;
    case 648u: goto L_088CADE0;
    case 649u: goto L_088CADF0;
    case 650u: goto L_088CAE14;
    case 651u: goto L_088CAE94;
    case 652u: goto L_088CAEC4;
    case 653u: goto L_088CAED0;
    case 654u: goto L_088CAED8;
    case 655u: goto L_088CAF04;
    case 656u: goto L_088CAF20;
    case 657u: goto L_088CAF48;
    case 658u: goto L_088CAF50;
    case 659u: goto L_088CAF64;
    case 660u: goto L_088CAF6C;
    case 661u: goto L_088CAF7C;
    case 662u: goto L_088CAF88;
    case 663u: goto L_088CAFA4;
    case 664u: goto L_088CAFB8;
    case 665u: goto L_088CAFC0;
    case 666u: goto L_088CAFEC;
    case 667u: goto L_088CB014;
    case 668u: goto L_088CB01C;
    case 669u: goto L_088CB02C;
    case 670u: goto L_088CB09C;
    case 671u: goto L_088CB0BC;
    case 672u: goto L_088CB0D0;
    case 673u: goto L_088CB0D8;
    case 674u: goto L_088CB0DC;
    case 675u: goto L_088CB0E4;
    case 676u: goto L_088CB0F4;
    case 677u: goto L_088CB100;
    case 678u: goto L_088CB114;
    case 679u: goto L_088CB144;
    case 680u: goto L_088CB14C;
    case 681u: goto L_088CB164;
    case 682u: goto L_088CB174;
    case 683u: goto L_088CB188;
    case 684u: goto L_088CB190;
    case 685u: goto L_088CB1A8;
    case 686u: goto L_088CB1B8;
    case 687u: goto L_088CB1DC;
    case 688u: goto L_088CB1FC;
    case 689u: goto L_088CB20C;
    case 690u: goto L_088CB21C;
    case 691u: goto L_088CB224;
    case 692u: goto L_088CB234;
    case 693u: goto L_088CB244;
    case 694u: goto L_088CB25C;
    case 695u: goto L_088CB284;
    case 696u: goto L_088CB294;
    case 697u: goto L_088CB2A4;
    case 698u: goto L_088CB2B8;
    case 699u: goto L_088CB2C4;
    case 700u: goto L_088CB2DC;
    case 701u: goto L_088CB2E4;
    case 702u: goto L_088CB2F4;
    case 703u: goto L_088CB304;
    case 704u: goto L_088CB314;
    case 705u: goto L_088CB328;
    case 706u: goto L_088CB33C;
    case 707u: goto L_088CB344;
    case 708u: goto L_088CB35C;
    case 709u: goto L_088CB36C;
    case 710u: goto L_088CB390;
    case 711u: goto L_088CB3B8;
    case 712u: goto L_088CB3C8;
    case 713u: goto L_088CB3D8;
    case 714u: goto L_088CB3F0;
    case 715u: goto L_088CB404;
    case 716u: goto L_088CB40C;
    case 717u: goto L_088CB424;
    case 718u: goto L_088CB434;
    case 719u: goto L_088CB458;
    case 720u: goto L_088CB484;
    case 721u: goto L_088CB494;
    case 722u: goto L_088CB49C;
    case 723u: goto L_088CB4B0;
    case 724u: goto L_088CB4BC;
    case 725u: goto L_088CB4C8;
    case 726u: goto L_088CB4D8;
    case 727u: goto L_088CB4E0;
    case 728u: goto L_088CB4F4;
    case 729u: goto L_088CB504;
    case 730u: goto L_088CB50C;
    case 731u: goto L_088CB514;
    case 732u: goto L_088CB51C;
    case 733u: goto L_088CB530;
    case 734u: goto L_088CB540;
    case 735u: goto L_088CB548;
    case 736u: goto L_088CB550;
    case 737u: goto L_088CB55C;
    case 738u: goto L_088CB568;
    case 739u: goto L_088CB570;
    case 740u: goto L_088CB584;
    case 741u: goto L_088CB594;
    case 742u: goto L_088CB5AC;
    case 743u: goto L_088CB5D8;
    case 744u: goto L_088CB5F0;
    case 745u: goto L_088CB5F4;
    case 746u: goto L_088CB5FC;
    case 747u: goto L_088CB61C;
    case 748u: goto L_088CB624;
    case 749u: goto L_088CB638;
    case 750u: goto L_088CB63C;
    case 751u: goto L_088CB644;
    case 752u: goto L_088CB660;
    case 753u: goto L_088CB664;
    case 754u: goto L_088CB674;
    case 755u: goto L_088CB6A4;
    case 756u: goto L_088CB6D0;
    case 757u: goto L_088CB6E0;
    case 758u: goto L_088CB6FC;
    case 759u: goto L_088CB708;
    case 760u: goto L_088CB718;
    case 761u: goto L_088CB724;
    case 762u: goto L_088CB740;
    case 763u: goto L_088CB758;
    case 764u: goto L_088CB784;
    case 765u: goto L_088CB794;
    case 766u: goto L_088CB7AC;
    case 767u: goto L_088CB7B8;
    case 768u: goto L_088CB7D4;
    case 769u: goto L_088CB7DC;
    case 770u: goto L_088CB7EC;
    case 771u: goto L_088CB7F8;
    case 772u: goto L_088CB810;
    case 773u: goto L_088CB828;
    case 774u: goto L_088CB844;
    case 775u: goto L_088CB85C;
    case 776u: goto L_088CB864;
    case 777u: goto L_088CB86C;
    case 778u: goto L_088CB874;
    case 779u: goto L_088CB87C;
    case 780u: goto L_088CB884;
    case 781u: goto L_088CB88C;
    case 782u: goto L_088CB894;
    case 783u: goto L_088CB89C;
    case 784u: goto L_088CB8A0;
    case 785u: goto L_088CB8AC;
    case 786u: goto L_088CB8B8;
    case 787u: goto L_088CB8C4;
    case 788u: goto L_088CB8C8;
    case 789u: goto L_088CB8D0;
    case 790u: goto L_088CB8E8;
    case 791u: goto L_088CB8FC;
    case 792u: goto L_088CB904;
    case 793u: goto L_088CB90C;
    case 794u: goto L_088CB910;
    case 795u: goto L_088CB918;
    case 796u: goto L_088CB920;
    case 797u: goto L_088CB930;
    case 798u: goto L_088CB940;
    case 799u: goto L_088CB950;
    case 800u: goto L_088CB960;
    case 801u: goto L_088CB968;
    case 802u: goto L_088CB994;
    case 803u: goto L_088CB9A4;
    case 804u: goto L_088CB9B4;
    case 805u: goto L_088CB9BC;
    case 806u: goto L_088CB9D4;
    case 807u: goto L_088CB9E4;
    case 808u: goto L_088CB9F4;
    case 809u: goto L_088CB9FC;
    case 810u: goto L_088CBA14;
    case 811u: goto L_088CBA20;
    case 812u: goto L_088CBA28;
    case 813u: goto L_088CBA30;
    case 814u: goto L_088CBA38;
    case 815u: goto L_088CBA40;
    case 816u: goto L_088CBA44;
    case 817u: goto L_088CBA4C;
    case 818u: goto L_088CBA8C;
    case 819u: goto L_088CBAA0;
    case 820u: goto L_088CBAB0;
    case 821u: goto L_088CBAC0;
    case 822u: goto L_088CBAC8;
    case 823u: goto L_088CBAE0;
    case 824u: goto L_088CBAF0;
    case 825u: goto L_088CBB00;
    case 826u: goto L_088CBB08;
    case 827u: goto L_088CBB14;
    case 828u: goto L_088CBB20;
    case 829u: goto L_088CBB28;
    case 830u: goto L_088CBB2C;
    case 831u: goto L_088CBB44;
    case 832u: goto L_088CBB54;
    case 833u: goto L_088CBB5C;
    case 834u: goto L_088CBB70;
    case 835u: goto L_088CBB80;
    case 836u: goto L_088CBB84;
    case 837u: goto L_088CBBA0;
    case 838u: goto L_088CBBD0;
    case 839u: goto L_088CBC14;
    case 840u: goto L_088CBC1C;
    case 841u: goto L_088CBC4C;
    case 842u: goto L_088CBC54;
    case 843u: goto L_088CBC64;
    case 844u: goto L_088CBC6C;
    case 845u: goto L_088CBC78;
    case 846u: goto L_088CBC84;
    case 847u: goto L_088CBC90;
    case 848u: goto L_088CBC98;
    case 849u: goto L_088CBCA0;
    case 850u: goto L_088CBCA4;
    case 851u: goto L_088CBCAC;
    case 852u: goto L_088CBCB4;
    case 853u: goto L_088CBCBC;
    case 854u: goto L_088CBCCC;
    case 855u: goto L_088CBCD4;
    case 856u: goto L_088CBCE0;
    case 857u: goto L_088CBCE8;
    case 858u: goto L_088CBCF0;
    case 859u: goto L_088CBD0C;
    case 860u: goto L_088CBD14;
    case 861u: goto L_088CBD24;
    case 862u: goto L_088CBD30;
    case 863u: goto L_088CBD40;
    case 864u: goto L_088CBD48;
    case 865u: goto L_088CBD50;
    case 866u: goto L_088CBD64;
    case 867u: goto L_088CBD6C;
    case 868u: goto L_088CBD80;
    case 869u: goto L_088CBD88;
    case 870u: goto L_088CBD94;
    case 871u: goto L_088CBD9C;
    case 872u: goto L_088CBDA4;
    case 873u: goto L_088CBDB4;
    case 874u: goto L_088CBDBC;
    case 875u: goto L_088CBDC4;
    case 876u: goto L_088CBDCC;
    case 877u: goto L_088CBDD8;
    case 878u: goto L_088CBDF0;
    case 879u: goto L_088CBDF8;
    case 880u: goto L_088CBDFC;
    case 881u: goto L_088CBE08;
    case 882u: goto L_088CBE20;
    case 883u: goto L_088CBE28;
    case 884u: goto L_088CBE30;
    case 885u: goto L_088CBE38;
    case 886u: goto L_088CBE40;
    case 887u: goto L_088CBE48;
    case 888u: goto L_088CBE50;
    case 889u: goto L_088CBE58;
    case 890u: goto L_088CBE60;
    case 891u: goto L_088CBE68;
    case 892u: goto L_088CBE70;
    case 893u: goto L_088CBE78;
    case 894u: goto L_088CBE80;
    case 895u: goto L_088CBE88;
    case 896u: goto L_088CBE90;
    case 897u: goto L_088CBE98;
    case 898u: goto L_088CBEA8;
    case 899u: goto L_088CBEC0;
    case 900u: goto L_088CBECC;
    case 901u: goto L_088CBEE4;
    case 902u: goto L_088CBEEC;
    case 903u: goto L_088CBEFC;
    case 904u: goto L_088CBF04;
    case 905u: goto L_088CBF14;
    case 906u: goto L_088CBF1C;
    case 907u: goto L_088CBF24;
    case 908u: goto L_088CBF44;
    case 909u: goto L_088CBF54;
    case 910u: goto L_088CBF58;
    case 911u: goto L_088CBF60;
    case 912u: goto L_088CBF68;
    case 913u: goto L_088CBF70;
    case 914u: goto L_088CBF78;
    case 915u: goto L_088CBF84;
    case 916u: goto L_088CBF8C;
    case 917u: goto L_088CBFA8;
    case 918u: goto L_088CBFE0;
    case 919u: goto L_088CBFE8;
    case 920u: goto L_088CBFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088C8000:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_088C8018;
L_088C8018:
    ctx.gpr[31] = (0x088C8020u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x088C8020u) goto L_088C8020;
    return;
L_088C8020:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088C8018;
      }
      goto L_088C8038;
    }
L_088C8038:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088C804Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C804Cu) goto L_088C804C;
    return;
L_088C804C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17472)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
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
L_088C806C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17472)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C8098u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088C8098u) goto L_088C8098;
    return;
L_088C8098:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    goto L_088C80A0;
L_088C80A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x088C80B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(180));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088C80B4u) goto L_088C80B4;
    return;
L_088C80B4:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_088C80A0;
      }
      goto L_088C80C4;
    }
L_088C80C4:
    ctx.gpr[4] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 39u);
      if (branch_taken) {
          goto L_088C80E4;
      }
      goto L_088C80D0;
    }
L_088C80D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x088C80E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(900));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088C80E0u) goto L_088C80E0;
    return;
L_088C80E0:
    ctx.gpr[4] = (0u | 39u);
    goto L_088C80E4;
L_088C80E4:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_088C811C;
      }
      goto L_088C80EC;
    }
L_088C80EC:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    goto L_088C80F4;
L_088C80F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x088C8108u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1260));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088C8108u) goto L_088C8108;
    return;
L_088C8108:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_088C80F4;
      }
      goto L_088C8118;
    }
L_088C8118:
    ctx.gpr[4] = (0u | 2u);
    goto L_088C811C;
L_088C811C:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_088C813C;
      }
      goto L_088C8124;
    }
L_088C8124:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_088C813C;
      }
      goto L_088C812C;
    }
L_088C812C:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 6u);
      if (branch_taken) {
          goto L_088C813C;
      }
      goto L_088C8134;
    }
L_088C8134:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C814C;
      }
      goto L_088C813C;
    }
L_088C813C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x088C814Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1080));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088C814Cu) goto L_088C814C;
    return;
L_088C814C:
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
L_088C8168:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 10720u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C81A4u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C81A4u) goto L_088C81A4;
    return;
L_088C81A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C81BCu);
    ctx.gpr[6] = (0u | 10720u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C81BCu) goto L_088C81BC;
    return;
L_088C81BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[5] = (0u | 30u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (0x088C81D8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9808));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C81D8u) goto L_088C81D8;
    return;
L_088C81D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 144u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C81ECu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C81ECu) goto L_088C81EC;
    return;
L_088C81EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088C8204u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C8204u) goto L_088C8204;
    return;
L_088C8204:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C8224:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17472)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C8234:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17472)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C8244:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C8264u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C8264u) goto L_088C8264;
    return;
L_088C8264:
    ctx.gpr[31] = (0x088C826Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088C826Cu) goto L_088C826C;
    return;
L_088C826C:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[5] = (ctx.gpr[2] < static_cast<std::uint32_t>(25) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_088C82B0;
      }
      goto L_088C8280;
    }
L_088C8280:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088C828Cu);
    ctx.gpr[6] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x088C828Cu) goto L_088C828C;
    return;
L_088C828C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17480));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (0x088C82A4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9E0F4u>(ctx, &aot_mem) && ctx.pc == 0x088C82A4u) goto L_088C82A4;
    return;
L_088C82A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088C82B8;
      }
      goto L_088C82B0;
    }
L_088C82B0:
    ctx.gpr[31] = (0x088C82B8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C82B8u) goto L_088C82B8;
    return;
L_088C82B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C82CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17472)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C82E4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C82E4u) goto L_088C82E4;
    return;
L_088C82E4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C82F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-400));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[5] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19864));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[23]);
    ctx.gpr[7] = (2222u << 16u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 10720u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C836Cu);
    ctx.gpr[16] = (ctx.gpr[7] + static_cast<std::uint32_t>(19848));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C836Cu) goto L_088C836C;
    return;
L_088C836C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(196), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x088C8394u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 621u, 0x0880ABA0u>(ctx, &aot_mem) && ctx.pc == 0x088C8394u) goto L_088C8394;
    return;
L_088C8394:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9776));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9768));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[5]);
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9760));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9752));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[5]);
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9796));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9784));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[5]);
    ctx.gpr[20] = (2220u << 16u);
    ctx.gpr[19] = (2220u << 16u);
    ctx.gpr[30] = (2220u << 16u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[16]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-9736));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-9728));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-9744));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    goto L_088C8404;
L_088C8404:
    ctx.gpr[31] = (0x088C840Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088C840Cu) goto L_088C840C;
    return;
L_088C840C:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
        goto L_088C8598;
    }
    goto L_088C8414;
L_088C8414:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[31] = (0x088C8420u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088C8420u) goto L_088C8420;
    return;
L_088C8420:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088C8584;
      }
      goto L_088C8428;
    }
L_088C8428:
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[5] = (ctx.gpr[23] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    goto L_088C8448;
L_088C8448:
    ctx.gpr[31] = (0x088C8450u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088C8450u) goto L_088C8450;
    return;
L_088C8450:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088C8584;
      }
      goto L_088C8458;
    }
L_088C8458:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[31] = (0x088C8464u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088C8464u) goto L_088C8464;
    return;
L_088C8464:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_088C8490;
      }
      goto L_088C846C;
    }
L_088C846C:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C8478u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C8478u) goto L_088C8478;
    return;
L_088C8478:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088C8484u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x088C8484u) goto L_088C8484;
    return;
L_088C8484:
    ctx.gpr[31] = (0x088C848Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 209u, 0x08A9CADCu>(ctx, &aot_mem) && ctx.pc == 0x088C848Cu) goto L_088C848C;
    return;
L_088C848C:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_088C8490;
L_088C8490:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[31] = (0x088C849Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088C849Cu) goto L_088C849C;
    return;
L_088C849C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_088C84C8;
      }
      goto L_088C84A4;
    }
L_088C84A4:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C84B0u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C84B0u) goto L_088C84B0;
    return;
L_088C84B0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088C84BCu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x088C84BCu) goto L_088C84BC;
    return;
L_088C84BC:
    ctx.gpr[31] = (0x088C84C4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 209u, 0x08A9CADCu>(ctx, &aot_mem) && ctx.pc == 0x088C84C4u) goto L_088C84C4;
    return;
L_088C84C4:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_088C84C8;
L_088C84C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[31] = (0x088C84D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088C84D4u) goto L_088C84D4;
    return;
L_088C84D4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088C8508;
      }
      goto L_088C84DC;
    }
L_088C84DC:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C84ECu);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C84ECu) goto L_088C84EC;
    return;
L_088C84EC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088C84F8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x088C84F8u) goto L_088C84F8;
    return;
L_088C84F8:
    ctx.gpr[31] = (0x088C8500u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 209u, 0x08A9CADCu>(ctx, &aot_mem) && ctx.pc == 0x088C8500u) goto L_088C8500;
    return;
L_088C8500:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088C8508;
L_088C8508:
    ctx.gpr[31] = (0x088C8510u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088C8510u) goto L_088C8510;
    return;
L_088C8510:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088C8570;
      }
      goto L_088C8518;
    }
L_088C8518:
    ctx.gpr[16] = (ctx.gpr[22] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088C8520;
L_088C8520:
    ctx.gpr[31] = (0x088C8528u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088C8528u) goto L_088C8528;
    return;
L_088C8528:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088C8564;
      }
      goto L_088C8530;
    }
L_088C8530:
    ctx.gpr[31] = (0x088C8538u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088C8538u) goto L_088C8538;
    return;
L_088C8538:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088C8554;
      }
      goto L_088C8540;
    }
L_088C8540:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088C854Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x088C854Cu) goto L_088C854C;
    return;
L_088C854C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_088C8554;
L_088C8554:
    ctx.gpr[31] = (0x088C855Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x088C855Cu) goto L_088C855C;
    return;
L_088C855C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088C8520;
      }
      goto L_088C8564;
    }
L_088C8564:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(268));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_088C8570;
L_088C8570:
    ctx.gpr[31] = (0x088C8578u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x088C8578u) goto L_088C8578;
    return;
L_088C8578:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
      if (branch_taken) {
          goto L_088C8448;
      }
      goto L_088C8580;
    }
L_088C8580:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_088C8584;
L_088C8584:
    ctx.gpr[31] = (0x088C858Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x088C858Cu) goto L_088C858C;
    return;
L_088C858C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
      if (branch_taken) {
          goto L_088C8404;
      }
      goto L_088C8594;
    }
L_088C8594:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    goto L_088C8598;
L_088C8598:
    ctx.gpr[31] = (0x088C85A0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 624u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x088C85A0u) goto L_088C85A0;
    return;
L_088C85A0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.gpr[31] = (0x088C85ACu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 624u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x088C85ACu) goto L_088C85AC;
    return;
L_088C85AC:
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
L_088C85DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17472)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C85F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C85F8u) goto L_088C85F8;
    return;
L_088C85F8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C8604:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17472)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C8620u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C8620u) goto L_088C8620;
    return;
L_088C8620:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C862C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17472)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C8648u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C8648u) goto L_088C8648;
    return;
L_088C8648:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C8654:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 1800u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C8690u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C8690u) goto L_088C8690;
    return;
L_088C8690:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[6] = (0u | 1800u);
    ctx.gpr[31] = (0x088C86B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C86B0u) goto L_088C86B0;
    return;
L_088C86B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[5] = (16792u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[5] = (17084u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 204u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 202u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (0u | 183u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[9] = (16736u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[6] = (16720u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[9] = (17136u << 16u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (0u | 0u);
    goto L_088C875C;
L_088C875C:
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[14];
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(29)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(348));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(30)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < 4 ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(180));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088C875C;
      }
      goto L_088C87EC;
    }
L_088C87EC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(916), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[10] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (17158u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[7] = (0u | 14u);
    ctx.gpr[4] = (0u | 156u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(912), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (0u | 11u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1068));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(904), ctx.gpr[10]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(1096), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(1092), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1248));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(20)));
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(1084), ctx.gpr[10]);
    goto L_088C88C8;
L_088C88C8:
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[9]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(1276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[14];
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(1272), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[9]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1428));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35)));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[8]) < 3 ? 1u : 0u);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(1264), 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_088C88C8;
      }
      goto L_088C8958;
    }
L_088C8958:
    ctx.gpr[19] = (2220u << 16u);
    ctx.gpr[4] = (17264u << 16u);
    ctx.gpr[20] = (2220u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (2220u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-9720));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-9716));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-9700));
    goto L_088C8980;
L_088C8980:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x088C8998u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C8998u) goto L_088C8998;
    return;
L_088C8998:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[31] = (0x088C89B0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x088C89B0u) goto L_088C89B0;
    return;
L_088C89B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x088C89C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C89C8u) goto L_088C89C8;
    return;
L_088C89C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x088C89D8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x088C89D8u) goto L_088C89D8;
    return;
L_088C89D8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_088C8980;
      }
      goto L_088C89E8;
    }
L_088C89E8:
    ctx.gpr[6] = (17174u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u | 0u);
    goto L_088C89F8;
L_088C89F8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1268), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_088C89F8;
      }
      goto L_088C8A18;
    }
L_088C8A18:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C8A40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[21]);
    ctx.gpr[21] = (2221u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(17472)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[19] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (16808u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16720u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[4] = (17264u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088C8B0C;
      }
      goto L_088C8AF0;
    }
L_088C8AF0:
    ctx.gpr[4] = (16792u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16924u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16900u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088C8B28;
      }
      goto L_088C8B0C;
    }
L_088C8B0C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[17];
    ctx.gpr[4] = (16792u << 16u);
      if (branch_taken) {
          goto L_088C8B28;
      }
      goto L_088C8B14;
    }
L_088C8B14:
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16916u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088C8B28;
L_088C8B28:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C8B44u);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C8B44u) goto L_088C8B44;
    return;
L_088C8B44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(17480));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x088C8B74u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C8B74u) goto L_088C8B74;
    return;
L_088C8B74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[5] = (17048u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[24] = ctx.fpr[22] + ctx.fpr[24];
    ctx.gpr[5] = (16988u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088C8BB0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x088C8BB0u) goto L_088C8BB0;
    return;
L_088C8BB0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(17472)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_088C8BD4;
      }
      goto L_088C8BC8;
    }
L_088C8BC8:
    ctx.gpr[4] = (16908u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088C8BE4;
      }
      goto L_088C8BD4;
    }
L_088C8BD4:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[17];
    ctx.gpr[4] = (17066u << 16u);
      if (branch_taken) {
          goto L_088C8BE8;
      }
      goto L_088C8BDC;
    }
L_088C8BDC:
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088C8BE4;
L_088C8BE4:
    ctx.gpr[4] = (17066u << 16u);
    goto L_088C8BE8;
L_088C8BE8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[30] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[23] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[22] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[4] = (16736u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    goto L_088C8C24;
L_088C8C24:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(212));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C8C38u);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C8C38u) goto L_088C8C38;
    return;
L_088C8C38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(212));
    ctx.gpr[31] = (0x088C8C60u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C8C60u) goto L_088C8C60;
    return;
L_088C8C60:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(17472)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[5] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[5];
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(348));
      if (branch_taken) {
          goto L_088C8CD0;
      }
      goto L_088C8CAC;
    }
L_088C8CAC:
    ctx.gpr[4] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 9u);
      if (branch_taken) {
          goto L_088C8CD0;
      }
      goto L_088C8CB8;
    }
L_088C8CB8:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 19u);
      if (branch_taken) {
          goto L_088C8CD0;
      }
      goto L_088C8CC0;
    }
L_088C8CC0:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 20u);
      if (branch_taken) {
          goto L_088C8CD0;
      }
      goto L_088C8CC8;
    }
L_088C8CC8:
    if (ctx.gpr[19] != ctx.gpr[4]) {
    ctx.gpr[23] = (0u & 255u);
        goto L_088C8D18;
    }
    goto L_088C8CD0;
L_088C8CD0:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[9];
    ctx.gpr[4] = (0u | 156u);
      if (branch_taken) {
          goto L_088C8D14;
      }
      goto L_088C8CD8;
    }
L_088C8CD8:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u | 11u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[30] = (0u | 14u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[30] & 255u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_088C8D3C;
      }
      goto L_088C8D14;
    }
L_088C8D14:
    ctx.gpr[23] = (0u & 255u);
    goto L_088C8D18;
L_088C8D18:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    ctx.gpr[18] = (ctx.gpr[22] | 0u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    goto L_088C8D3C;
L_088C8D3C:
    ctx.gpr[4] = (0u | 39u);
    if (ctx.gpr[19] != ctx.gpr[4]) {
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(184), ctx.gpr[9]);
        goto L_088C8D6C;
    }
    goto L_088C8D48;
L_088C8D48:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C8D80;
      }
      goto L_088C8D50;
    }
L_088C8D50:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(184), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_088C8D80;
      }
      goto L_088C8D6C;
    }
L_088C8D6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    goto L_088C8D80;
L_088C8D80:
    ctx.gpr[31] = (0x088C8D88u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(180));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x088C8D88u) goto L_088C8D88;
    return;
L_088C8D88:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088C8C24;
      }
      goto L_088C8DA4;
    }
L_088C8DA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    ctx.gpr[20] = (0u | 3u);
      if (branch_taken) {
          goto L_088C8EB0;
      }
      goto L_088C8DE0;
    }
L_088C8DE0:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[22] = ctx.fpr[28] + ctx.fpr[22];
    goto L_088C8DF4;
L_088C8DF4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) > 0;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088C8E0C;
      }
      goto L_088C8DFC;
    }
L_088C8DFC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_088C8E34;
      }
      goto L_088C8E04;
    }
L_088C8E04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[6] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_088C8E30;
      }
      goto L_088C8E0C;
    }
L_088C8E0C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C8E28;
      }
      goto L_088C8E18;
    }
L_088C8E18:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (ctx.gpr[6] + static_cast<std::uint32_t>(160));
        goto L_088C8E30;
    }
    goto L_088C8E20;
L_088C8E20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_088C8E34;
      }
      goto L_088C8E28;
    }
L_088C8E28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[6] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_088C8E30;
      }
      goto L_088C8E30;
    }
L_088C8E30:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[18]);
    goto L_088C8E34;
L_088C8E34:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1292));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C8E44u);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C8E44u) goto L_088C8E44;
    return;
L_088C8E44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x088C8E5Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1292));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C8E5Cu) goto L_088C8E5C;
    return;
L_088C8E5C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(17472)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1276), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x088C8E9Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1260));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x088C8E9Cu) goto L_088C8E9C;
    return;
L_088C8E9C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(180));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088C8DF4;
      }
      goto L_088C8EB0;
    }
L_088C8EB0:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1112));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C8EC0u);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C8EC0u) goto L_088C8EC0;
    return;
L_088C8EC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x088C8ED0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1112));
    goto L_088C82CC;
L_088C8ED0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1096), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1088), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088C8F0C;
      }
      goto L_088C8EF4;
    }
L_088C8EF4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    ctx.gpr[6] = (0u | 4u);
      if (branch_taken) {
          goto L_088C8F0C;
      }
      goto L_088C8EFC;
    }
L_088C8EFC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 6u);
      if (branch_taken) {
          goto L_088C8F0C;
      }
      goto L_088C8F04;
    }
L_088C8F04:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088C8F1C;
      }
      goto L_088C8F0C;
    }
L_088C8F0C:
    ctx.gpr[4] = (17158u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(1092), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    goto L_088C8F1C;
L_088C8F1C:
    ctx.gpr[31] = (0x088C8F24u);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1080));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x088C8F24u) goto L_088C8F24;
    return;
L_088C8F24:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    ctx.gpr[5] = (0u | 22u);
      if (branch_taken) {
          goto L_088C8FAC;
      }
      goto L_088C8F34;
    }
L_088C8F34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x088C8F40u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1080));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 171u, 0x08844E28u>(ctx, &aot_mem) && ctx.pc == 0x088C8F40u) goto L_088C8F40;
    return;
L_088C8F40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[31] = (0x088C8F5Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 171u, 0x08844E28u>(ctx, &aot_mem) && ctx.pc == 0x088C8F5Cu) goto L_088C8F5C;
    return;
L_088C8F5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(17472)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1088)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1088), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(368)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x088C8F90u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1080));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x088C8F90u) goto L_088C8F90;
    return;
L_088C8F90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x088C8FA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x088C8FA0u) goto L_088C8FA0;
    return;
L_088C8FA0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 22u);
    goto L_088C8FAC;
L_088C8FAC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C9034;
      }
      goto L_088C8FB4;
    }
L_088C8FB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(932));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C8FCCu);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C8FCCu) goto L_088C8FCC;
    return;
L_088C8FCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9692));
    ctx.gpr[31] = (0x088C8FE4u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(932));
    goto L_088C8234;
L_088C8FE4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088C8FF4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088C8FF4u) goto L_088C8FF4;
    return;
L_088C8FF4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[5] = (17266u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(916), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(908), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088C902C;
      }
      goto L_088C901C;
    }
L_088C901C:
    ctx.gpr[4] = (17172u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(912), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    goto L_088C902C;
L_088C902C:
    ctx.gpr[31] = (0x088C9034u);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(900));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x088C9034u) goto L_088C9034;
    return;
L_088C9034:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
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
L_088C907C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17464)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(17468), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C9090:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C90ACu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 449u, 0x0884DC1Cu>(ctx, &aot_mem) && ctx.pc == 0x088C90ACu) goto L_088C90AC;
    return;
L_088C90AC:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 12112u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C90C4u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C90C4u) goto L_088C90C4;
    return;
L_088C90C4:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(17640), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C90DCu);
    ctx.gpr[6] = (0u | 12112u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C90DCu) goto L_088C90DC;
    return;
L_088C90DC:
    ctx.gpr[31] = (0x088C90E4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 18u, 0x0884C14Cu>(ctx, &aot_mem) && ctx.pc == 0x088C90E4u) goto L_088C90E4;
    return;
L_088C90E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[31] = (0x088C9120u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 548u, 0x08832970u>(ctx, &aot_mem) && ctx.pc == 0x088C9120u) goto L_088C9120;
    return;
L_088C9120:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[31] = (0x088C912Cu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 627u, 0x08833120u>(ctx, &aot_mem) && ctx.pc == 0x088C912Cu) goto L_088C912C;
    return;
L_088C912C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12104), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12020), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12108), 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12024), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12092), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12096), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12028), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17644), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17645), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x088C918Cu);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 119u, 0x0884C7BCu>(ctx, &aot_mem) && ctx.pc == 0x088C918Cu) goto L_088C918C;
    return;
L_088C918C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[31] = (0x088C9198u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 506u, 0x0884278Cu>(ctx, &aot_mem) && ctx.pc == 0x088C9198u) goto L_088C9198;
    return;
L_088C9198:
    ctx.gpr[31] = (0x088C91A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 633u, 0x088430A8u>(ctx, &aot_mem) && ctx.pc == 0x088C91A0u) goto L_088C91A0;
    return;
L_088C91A0:
    ctx.gpr[31] = (0x088C91A8u);
    ctx.gpr[4] = (0u | 1u);
    goto L_088CBFA8;
L_088C91A8:
    ctx.gpr[31] = (0x088C91B0u);
    // nop
    goto L_088C95F0;
L_088C91B0:
    ctx.gpr[31] = (0x088C91B8u);
    // nop
    goto L_088CA4BC;
L_088C91B8:
    ctx.gpr[4] = (2189u << 16u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x088C91C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17380));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 702u, 0x0884BCB8u>(ctx, &aot_mem) && ctx.pc == 0x088C91C8u) goto L_088C91C8;
    return;
L_088C91C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C91DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C91F0u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 722u, 0x08806E84u>(ctx, &aot_mem) && ctx.pc == 0x088C91F0u) goto L_088C91F0;
    return;
L_088C91F0:
    ctx.gpr[31] = (0x088C91F8u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 724u, 0x08806EA0u>(ctx, &aot_mem) && ctx.pc == 0x088C91F8u) goto L_088C91F8;
    return;
L_088C91F8:
    ctx.gpr[31] = (0x088C9200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 505u, 0x0886732Cu>(ctx, &aot_mem) && ctx.pc == 0x088C9200u) goto L_088C9200;
    return;
L_088C9200:
    ctx.gpr[31] = (0x088C9208u);
    // nop
    goto L_088CA664;
L_088C9208:
    ctx.gpr[31] = (0x088C9210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 225u, 0x08835114u>(ctx, &aot_mem) && ctx.pc == 0x088C9210u) goto L_088C9210;
    return;
L_088C9210:
    ctx.gpr[31] = (0x088C9218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 507u, 0x088427A0u>(ctx, &aot_mem) && ctx.pc == 0x088C9218u) goto L_088C9218;
    return;
L_088C9218:
    ctx.gpr[31] = (0x088C9220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 634u, 0x088430BCu>(ctx, &aot_mem) && ctx.pc == 0x088C9220u) goto L_088C9220;
    return;
L_088C9220:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    ctx.gpr[16] = (2221u << 16u);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088C9238u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C9238u) goto L_088C9238;
    return;
L_088C9238:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17640), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C924C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C9254:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12020)));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C9288;
      }
      goto L_088C9274;
    }
L_088C9274:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(12024)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C9288;
      }
      goto L_088C9280;
    }
L_088C9280:
    ctx.gpr[31] = (0x088C9288u);
    // nop
    goto L_088CA7F4;
L_088C9288:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C9294:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-432));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19864));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(19848));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.gpr[6] = (0u | 72u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C9310u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17912));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088C9310u) goto L_088C9310;
    return;
L_088C9310:
    ctx.gpr[22] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12016)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x088C9334u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 621u, 0x0880ABA0u>(ctx, &aot_mem) && ctx.pc == 0x088C9334u) goto L_088C9334;
    return;
L_088C9334:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[4]);
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7964));
    ctx.gpr[5] = (2220u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7956));
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7948));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[4]);
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7980));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7972));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[4]);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7988));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7996));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[29]);
    ctx.gpr[30] = (2220u << 16u);
    ctx.gpr[23] = (2220u << 16u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(204));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(332));
    ctx.gpr[21] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[16]);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-7940));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-7932));
    goto L_088C93B8;
L_088C93B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    goto L_088C93BC;
L_088C93BC:
    ctx.gpr[31] = (0x088C93C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088C93C4u) goto L_088C93C4;
    return;
L_088C93C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_088C95A8;
      }
      goto L_088C93CC;
    }
L_088C93CC:
    ctx.gpr[31] = (0x088C93D4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x088C93D4u) goto L_088C93D4;
    return;
L_088C93D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088C93E4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(132)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088C93E4u) goto L_088C93E4;
    return;
L_088C93E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088C93B8;
      }
      goto L_088C93EC;
    }
L_088C93EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088C93FCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(136)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088C93FCu) goto L_088C93FC;
    return;
L_088C93FC:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
        goto L_088C9580;
    }
    goto L_088C9404;
L_088C9404:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088C9414u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x088C9414u) goto L_088C9414;
    return;
L_088C9414:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088C9420u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088C9420u) goto L_088C9420;
    return;
L_088C9420:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088C93EC;
      }
      goto L_088C9428;
    }
L_088C9428:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    goto L_088C942C;
L_088C942C:
    ctx.gpr[31] = (0x088C9434u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088C9434u) goto L_088C9434;
    return;
L_088C9434:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_088C9578;
      }
      goto L_088C943C;
    }
L_088C943C:
    ctx.gpr[31] = (0x088C9444u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x088C9444u) goto L_088C9444;
    return;
L_088C9444:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[31] = (0x088C9450u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088C9450u) goto L_088C9450;
    return;
L_088C9450:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
        goto L_088C942C;
    }
    goto L_088C9458;
L_088C9458:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    goto L_088C945C;
L_088C945C:
    ctx.gpr[31] = (0x088C9464u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088C9464u) goto L_088C9464;
    return;
L_088C9464:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_088C9570;
      }
      goto L_088C946C;
    }
L_088C946C:
    ctx.gpr[31] = (0x088C9474u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x088C9474u) goto L_088C9474;
    return;
L_088C9474:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[31] = (0x088C9480u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088C9480u) goto L_088C9480;
    return;
L_088C9480:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088C94BC;
      }
      goto L_088C9488;
    }
L_088C9488:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C9494u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C9494u) goto L_088C9494;
    return;
L_088C9494:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088C94A0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x088C94A0u) goto L_088C94A0;
    return;
L_088C94A0:
    ctx.gpr[31] = (0x088C94A8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 209u, 0x08A9CADCu>(ctx, &aot_mem) && ctx.pc == 0x088C94A8u) goto L_088C94A8;
    return;
L_088C94A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(128), ctx.gpr[2]);
    goto L_088C94BC;
L_088C94BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[31] = (0x088C94C8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088C94C8u) goto L_088C94C8;
    return;
L_088C94C8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088C950C;
      }
      goto L_088C94D0;
    }
L_088C94D0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C94E0u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C94E0u) goto L_088C94E0;
    return;
L_088C94E0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088C94ECu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x088C94ECu) goto L_088C94EC;
    return;
L_088C94EC:
    ctx.gpr[31] = (0x088C94F4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 209u, 0x08A9CADCu>(ctx, &aot_mem) && ctx.pc == 0x088C94F4u) goto L_088C94F4;
    return;
L_088C94F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(132), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088C950C;
L_088C950C:
    ctx.gpr[31] = (0x088C9514u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088C9514u) goto L_088C9514;
    return;
L_088C9514:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088C953C;
      }
      goto L_088C951C;
    }
L_088C951C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088C9538u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(136));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x088C9538u) goto L_088C9538;
    return;
L_088C9538:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088C953C;
L_088C953C:
    ctx.gpr[31] = (0x088C9544u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088C9544u) goto L_088C9544;
    return;
L_088C9544:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
        goto L_088C945C;
    }
    goto L_088C954C;
L_088C954C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088C9568u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(152));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x088C9568u) goto L_088C9568;
    return;
L_088C9568:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
      if (branch_taken) {
          goto L_088C945C;
      }
      goto L_088C9570;
    }
L_088C9570:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_088C9428;
      }
      goto L_088C9578;
    }
L_088C9578:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(132));
      if (branch_taken) {
          goto L_088C93EC;
      }
      goto L_088C9580;
    }
L_088C9580:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
        goto L_088C93BC;
    }
    goto L_088C958C;
L_088C958C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1320));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088C93B8;
      }
      goto L_088C95A8;
    }
L_088C95A8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.gpr[31] = (0x088C95B4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 624u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x088C95B4u) goto L_088C95B4;
    return;
L_088C95B4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.gpr[31] = (0x088C95C0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 624u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x088C95C0u) goto L_088C95C0;
    return;
L_088C95C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(412)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C95F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C9600u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 45u, 0x08834340u>(ctx, &aot_mem) && ctx.pc == 0x088C9600u) goto L_088C9600;
    return;
L_088C9600:
    ctx.gpr[9] = (2221u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(17640)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(88), 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
    goto L_088C9620;
L_088C9620:
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[7] == ctx.gpr[6]) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), ctx.gpr[7]);
        goto L_088C9644;
    }
    goto L_088C9630;
L_088C9630:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(88), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), ctx.gpr[7]);
    goto L_088C9644;
L_088C9644:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[8]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088C9620;
      }
      goto L_088C9654;
    }
L_088C9654:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C9660:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C9688u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 45u, 0x08834340u>(ctx, &aot_mem) && ctx.pc == 0x088C9688u) goto L_088C9688;
    return;
L_088C9688:
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[18] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088C96A8u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 56u, 0x088D05D4u>(ctx, &aot_mem) && ctx.pc == 0x088C96A8u) goto L_088C96A8;
    return;
L_088C96A8:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1320));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[6] << 7u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[5] = (ctx.gpr[8] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x088C9708u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(152));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C9708u) goto L_088C9708;
    return;
L_088C9708:
    ctx.gpr[31] = (0x088C9710u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 48u, 0x0883436Cu>(ctx, &aot_mem) && ctx.pc == 0x088C9710u) goto L_088C9710;
    return;
L_088C9710:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[31] = (0x088C971Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 546u, 0x08832944u>(ctx, &aot_mem) && ctx.pc == 0x088C971Cu) goto L_088C971C;
    return;
L_088C971C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C9738:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C974Cu);
    ctx.gpr[16] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 56u, 0x088D05D4u>(ctx, &aot_mem) && ctx.pc == 0x088C974Cu) goto L_088C974C;
    return;
L_088C974C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (0u | 1u);
        goto L_088C9764;
    }
    goto L_088C9764;
L_088C9764:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C9778:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
        goto L_088C97D4;
    }
    goto L_088C9798;
L_088C9798:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088C97B8;
      }
      goto L_088C97A8;
    }
L_088C97A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088C97DC;
      }
      goto L_088C97B8;
    }
L_088C97B8:
    ctx.gpr[31] = (0x088C97C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 56u, 0x088D05D4u>(ctx, &aot_mem) && ctx.pc == 0x088C97C0u) goto L_088C97C0;
    return;
L_088C97C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088C97DC;
      }
      goto L_088C97D4;
    }
L_088C97D4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1000));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    goto L_088C97DC;
L_088C97DC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C97EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] & 255u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C981Cu);
    ctx.gpr[6] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C981Cu) goto L_088C981C;
    return;
L_088C981C:
    ctx.gpr[4] = (0u | 23u);
    ctx.gpr[5] = (0u | 24u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 28u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 26u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 29u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 27u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 31u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 30u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 25u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[31] = (0x088C986Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 952u, 0x0881FB40u>(ctx, &aot_mem) && ctx.pc == 0x088C986Cu) goto L_088C986C;
    return;
L_088C986C:
    ctx.gpr[31] = (0x088C9874u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 565u, 0x0881E2BCu>(ctx, &aot_mem) && ctx.pc == 0x088C9874u) goto L_088C9874;
    return;
L_088C9874:
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[7];
    ctx.gpr[16] = (2221u << 16u);
      if (branch_taken) {
          goto L_088C98BC;
      }
      goto L_088C989C;
    }
L_088C989C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17496)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17500)));
    ctx.gpr[31] = (0x088C98B4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 292u, 0x088192E0u>(ctx, &aot_mem) && ctx.pc == 0x088C98B4u) goto L_088C98B4;
    return;
L_088C98B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C991C;
      }
      goto L_088C98BC;
    }
L_088C98BC:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(1320));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.gpr[8] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(152));
    ctx.gpr[31] = (0x088C9908u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C9908u) goto L_088C9908;
    return;
L_088C9908:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17496)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C991Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 292u, 0x088192E0u>(ctx, &aot_mem) && ctx.pc == 0x088C991Cu) goto L_088C991C;
    return;
L_088C991C:
    ctx.gpr[31] = (0x088C9924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 201u, 0x08834E80u>(ctx, &aot_mem) && ctx.pc == 0x088C9924u) goto L_088C9924;
    return;
L_088C9924:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C9940:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C9950u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 952u, 0x0881FB40u>(ctx, &aot_mem) && ctx.pc == 0x088C9950u) goto L_088C9950;
    return;
L_088C9950:
    ctx.gpr[31] = (0x088C9958u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 565u, 0x0881E2BCu>(ctx, &aot_mem) && ctx.pc == 0x088C9958u) goto L_088C9958;
    return;
L_088C9958:
    ctx.gpr[31] = (0x088C9960u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 1018u, 0x0881BEC4u>(ctx, &aot_mem) && ctx.pc == 0x088C9960u) goto L_088C9960;
    return;
L_088C9960:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C996C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(45)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C9BD0;
      }
      goto L_088C99A4;
    }
L_088C99A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088C9B8C;
      }
      goto L_088C99B4;
    }
L_088C99B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u | 128u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[20] = (0u | 8u);
      if (branch_taken) {
          goto L_088C9A88;
      }
      goto L_088C99C4;
    }
L_088C99C4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12108)));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (0u | 64u);
        goto L_088C9A8C;
    }
    goto L_088C99D0;
L_088C99D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_088C9A0C;
      }
      goto L_088C99DC;
    }
L_088C99DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x088C99F8u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 178u, 0x08944D00u>(ctx, &aot_mem) && ctx.pc == 0x088C99F8u) goto L_088C99F8;
    return;
L_088C99F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (0u | 32u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
      if (branch_taken) {
          goto L_088C9A78;
      }
      goto L_088C9A0C;
    }
L_088C9A0C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[31] = (0x088C9A1Cu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 567u, 0x088CFDB0u>(ctx, &aot_mem) && ctx.pc == 0x088C9A1Cu) goto L_088C9A1C;
    return;
L_088C9A1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (0u | 34u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_088C9A38;
L_088C9A38:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(92)));
    if (ctx.gpr[7] == ctx.gpr[18]) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_088C9A6C;
    }
    goto L_088C9A44;
L_088C9A44:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088C9A68;
      }
      goto L_088C9A50;
    }
L_088C9A50:
    ctx.gpr[31] = (0x088C9A58u);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 178u, 0x08944D00u>(ctx, &aot_mem) && ctx.pc == 0x088C9A58u) goto L_088C9A58;
    return;
L_088C9A58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
      if (branch_taken) {
          goto L_088C9A78;
      }
      goto L_088C9A68;
    }
L_088C9A68:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_088C9A6C;
L_088C9A6C:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[19]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088C9A38;
      }
      goto L_088C9A78;
    }
L_088C9A78:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    ctx.gpr[31] = (0x088C9A84u);
    ctx.gpr[4] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088C9A84u) goto L_088C9A84;
    return;
L_088C9A84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088C9A88;
L_088C9A88:
    ctx.gpr[4] = (0u | 64u);
    goto L_088C9A8C;
L_088C9A8C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C9AF4;
      }
      goto L_088C9A94;
    }
L_088C9A94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12108)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C9AF4;
      }
      goto L_088C9AA4;
    }
L_088C9AA4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    ctx.gpr[19] = (0u | 32768u);
    ctx.gpr[18] = (0u | 60u);
    ctx.gpr[31] = (0x088C9AB8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 170u, 0x08944C38u>(ctx, &aot_mem) && ctx.pc == 0x088C9AB8u) goto L_088C9AB8;
    return;
L_088C9AB8:
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    if (ctx.gpr[2] == ctx.gpr[21]) {
    ctx.gpr[18] = (0u | 0u);
        goto L_088C9AC8;
    }
    goto L_088C9AC8;
L_088C9AC8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x088C9AD8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 170u, 0x08944C38u>(ctx, &aot_mem) && ctx.pc == 0x088C9AD8u) goto L_088C9AD8;
    return;
L_088C9AD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    if (ctx.gpr[2] == ctx.gpr[21]) {
    ctx.gpr[18] = (0u | 30u);
        goto L_088C9AE4;
    }
    goto L_088C9AE4;
L_088C9AE4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    ctx.gpr[31] = (0x088C9AF0u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088C9AF0u) goto L_088C9AF0;
    return;
L_088C9AF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088C9AF4;
L_088C9AF4:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[20];
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_088C9B40;
      }
      goto L_088C9AFC;
    }
L_088C9AFC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[7] != ctx.gpr[4]) {
    ctx.gpr[4] = (0u | 4u);
        goto L_088C9B40;
    }
    goto L_088C9B10;
L_088C9B10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C9B30;
      }
      goto L_088C9B1C;
    }
L_088C9B1C:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[31] = (0x088C9B28u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088C9B28u) goto L_088C9B28;
    return;
L_088C9B28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_088C9B3C;
      }
      goto L_088C9B30;
    }
L_088C9B30:
    ctx.gpr[31] = (0x088C9B38u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088C9B38u) goto L_088C9B38;
    return;
L_088C9B38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088C9B3C;
L_088C9B3C:
    ctx.gpr[4] = (0u | 4u);
    goto L_088C9B40;
L_088C9B40:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C9C44;
      }
      goto L_088C9B48;
    }
L_088C9B48:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C9C44;
      }
      goto L_088C9B5C;
    }
L_088C9B5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9B7C;
      }
      goto L_088C9B68;
    }
L_088C9B68:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x088C9B74u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088C9B74u) goto L_088C9B74;
    return;
L_088C9B74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9C44;
      }
      goto L_088C9B7C;
    }
L_088C9B7C:
    ctx.gpr[31] = (0x088C9B84u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088C9B84u) goto L_088C9B84;
    return;
L_088C9B84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9C44;
      }
      goto L_088C9B8C;
    }
L_088C9B8C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 60 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C9C44;
      }
      goto L_088C9BA4;
    }
L_088C9BA4:
    ctx.gpr[31] = (0x088C9BACu);
    ctx.gpr[4] = (0u | 0u);
    goto L_088CBFA8;
L_088C9BAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088C9BC8u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 18u, 0x0884C14Cu>(ctx, &aot_mem) && ctx.pc == 0x088C9BC8u) goto L_088C9BC8;
    return;
L_088C9BC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9C44;
      }
      goto L_088C9BD0;
    }
L_088C9BD0:
    ctx.gpr[31] = (0x088C9BD8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 208u, 0x088213B0u>(ctx, &aot_mem) && ctx.pc == 0x088C9BD8u) goto L_088C9BD8;
    return;
L_088C9BD8:
    ctx.gpr[31] = (0x088C9BE0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 952u, 0x0881FB40u>(ctx, &aot_mem) && ctx.pc == 0x088C9BE0u) goto L_088C9BE0;
    return;
L_088C9BE0:
    ctx.gpr[31] = (0x088C9BE8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 565u, 0x0881E2BCu>(ctx, &aot_mem) && ctx.pc == 0x088C9BE8u) goto L_088C9BE8;
    return;
L_088C9BE8:
    ctx.gpr[31] = (0x088C9BF0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 1018u, 0x0881BEC4u>(ctx, &aot_mem) && ctx.pc == 0x088C9BF0u) goto L_088C9BF0;
    return;
L_088C9BF0:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C9C44;
      }
      goto L_088C9BFC;
    }
L_088C9BFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (0u | 8u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2189u << 16u);
    ctx.gpr[31] = (0x088C9C14u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28196));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x088C9C14u) goto L_088C9C14;
    return;
L_088C9C14:
    ctx.gpr[31] = (0x088C9C1Cu);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 705u, 0x0884BCE4u>(ctx, &aot_mem) && ctx.pc == 0x088C9C1Cu) goto L_088C9C1C;
    return;
L_088C9C1C:
    ctx.gpr[31] = (0x088C9C24u);
    ctx.gpr[4] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 712u, 0x0884BD54u>(ctx, &aot_mem) && ctx.pc == 0x088C9C24u) goto L_088C9C24;
    return;
L_088C9C24:
    ctx.gpr[31] = (0x088C9C2Cu);
    ctx.gpr[4] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 713u, 0x0884BD6Cu>(ctx, &aot_mem) && ctx.pc == 0x088C9C2Cu) goto L_088C9C2C;
    return;
L_088C9C2C:
    ctx.gpr[4] = (2182u << 16u);
    ctx.gpr[5] = (2182u << 16u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17012));
    ctx.gpr[31] = (0x088C9C44u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17564));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x088C9C44u) goto L_088C9C44;
    return;
L_088C9C44:
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
L_088C9C68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[18] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088C9CDC;
      }
      goto L_088C9C90;
    }
L_088C9C90:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12108)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_088C9CE0;
    }
    goto L_088C9CA4;
L_088C9CA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[31] = (0x088C9CBCu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 567u, 0x088CFDB0u>(ctx, &aot_mem) && ctx.pc == 0x088C9CBCu) goto L_088C9CBC;
    return;
L_088C9CBC:
    ctx.gpr[31] = (0x088C9CC4u);
    ctx.gpr[4] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088C9CC4u) goto L_088C9CC4;
    return;
L_088C9CC4:
    ctx.gpr[31] = (0x088C9CCCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 181u, 0x08944D4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C9CCCu) goto L_088C9CCC;
    return;
L_088C9CCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x088C9CDCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 178u, 0x08944D00u>(ctx, &aot_mem) && ctx.pc == 0x088C9CDCu) goto L_088C9CDC;
    return;
L_088C9CDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088C9CE0;
L_088C9CE0:
    ctx.gpr[5] = (0u | 64u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088C9D18;
      }
      goto L_088C9CEC;
    }
L_088C9CEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12108)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088C9D18;
      }
      goto L_088C9CFC;
    }
L_088C9CFC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x088C9D10u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 178u, 0x08944D00u>(ctx, &aot_mem) && ctx.pc == 0x088C9D10u) goto L_088C9D10;
    return;
L_088C9D10:
    ctx.gpr[31] = (0x088C9D18u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088C9D18u) goto L_088C9D18;
    return;
L_088C9D18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_088C9D70;
      }
      goto L_088C9D24;
    }
L_088C9D24:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088C9D60;
      }
      goto L_088C9D3C;
    }
L_088C9D3C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x088C9D50u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 178u, 0x08944D00u>(ctx, &aot_mem) && ctx.pc == 0x088C9D50u) goto L_088C9D50;
    return;
L_088C9D50:
    ctx.gpr[31] = (0x088C9D58u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088C9D58u) goto L_088C9D58;
    return;
L_088C9D58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088C9D6C;
      }
      goto L_088C9D60;
    }
L_088C9D60:
    ctx.gpr[31] = (0x088C9D68u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088C9D68u) goto L_088C9D68;
    return;
L_088C9D68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088C9D6C;
L_088C9D6C:
    ctx.gpr[5] = (0u | 4u);
    goto L_088C9D70;
L_088C9D70:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[17] = (2221u << 16u);
      if (branch_taken) {
          goto L_088C9DB4;
      }
      goto L_088C9D78;
    }
L_088C9D78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088C9DAC;
      }
      goto L_088C9D88;
    }
L_088C9D88:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x088C9D9Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 178u, 0x08944D00u>(ctx, &aot_mem) && ctx.pc == 0x088C9D9Cu) goto L_088C9D9C;
    return;
L_088C9D9C:
    ctx.gpr[31] = (0x088C9DA4u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088C9DA4u) goto L_088C9DA4;
    return;
L_088C9DA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C9DB4;
      }
      goto L_088C9DAC;
    }
L_088C9DAC:
    ctx.gpr[31] = (0x088C9DB4u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088C9DB4u) goto L_088C9DB4;
    return;
L_088C9DB4:
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
L_088C9DCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088C9E00;
      }
      goto L_088C9DF8;
    }
L_088C9DF8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088CA028;
      }
      goto L_088C9E00;
    }
L_088C9E00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u | 128u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088C9F24;
      }
      goto L_088C9E10;
    }
L_088C9E10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12108)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_088C9F28;
    }
    goto L_088C9E1C;
L_088C9E1C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(92)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088C9E40;
      }
      goto L_088C9E38;
    }
L_088C9E38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088C9E60;
      }
      goto L_088C9E40;
    }
L_088C9E40:
    ctx.gpr[8] = (0u | 10u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[8] = (ctx.hi);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088C9E64;
      }
      goto L_088C9E5C;
    }
L_088C9E5C:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_088C9E60;
L_088C9E60:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    goto L_088C9E64;
L_088C9E64:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[18];
    ctx.gpr[5] = (0u | 6u);
      if (branch_taken) {
          goto L_088C9F1C;
      }
      goto L_088C9E6C;
    }
L_088C9E6C:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(1320));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[9] = (ctx.gpr[6] << 7u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[10] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[10]);
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[7] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[9] - ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C9F1C;
      }
      goto L_088C9EBC;
    }
L_088C9EBC:
    ctx.gpr[31] = (0x088C9EC4u);
    // nop
    goto L_088C9738;
L_088C9EC4:
    if (ctx.gpr[2] != ctx.gpr[18]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
        goto L_088C9F04;
    }
    goto L_088C9ECC;
L_088C9ECC:
    ctx.gpr[31] = (0x088C9ED4u);
    // nop
    goto L_088CB5AC;
L_088C9ED4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[31] = (0x088C9EF0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 567u, 0x088CFDB0u>(ctx, &aot_mem) && ctx.pc == 0x088C9EF0u) goto L_088C9EF0;
    return;
L_088C9EF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[6] = (0u | 29u);
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088C9F1C;
      }
      goto L_088C9F04;
    }
L_088C9F04:
    ctx.gpr[5] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[6] = (0u | 33u);
    ctx.gpr[5] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    goto L_088C9F1C;
L_088C9F1C:
    ctx.gpr[31] = (0x088C9F24u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088C9F24u) goto L_088C9F24;
    return;
L_088C9F24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088C9F28;
L_088C9F28:
    ctx.gpr[5] = (0u | 64u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088C9F84;
    }
    goto L_088C9F34;
L_088C9F34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12108)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088C9F84;
    }
    goto L_088C9F44;
L_088C9F44:
    ctx.gpr[31] = (0x088C9F4Cu);
    // nop
    goto L_088CB5AC;
L_088C9F4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x088C9F60u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 567u, 0x088CFDB0u>(ctx, &aot_mem) && ctx.pc == 0x088C9F60u) goto L_088C9F60;
    return;
L_088C9F60:
    ctx.gpr[31] = (0x088C9F68u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088C9F68u) goto L_088C9F68;
    return;
L_088C9F68:
    ctx.gpr[31] = (0x088C9F70u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 181u, 0x08944D4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C9F70u) goto L_088C9F70;
    return;
L_088C9F70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x088C9F80u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 178u, 0x08944D00u>(ctx, &aot_mem) && ctx.pc == 0x088C9F80u) goto L_088C9F80;
    return;
L_088C9F80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088C9F84;
L_088C9F84:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C9FDC;
      }
      goto L_088C9F90;
    }
L_088C9F90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088C9FD0;
      }
      goto L_088C9FA4;
    }
L_088C9FA4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[31] = (0x088C9FB0u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088C9FB0u) goto L_088C9FB0;
    return;
L_088C9FB0:
    ctx.gpr[31] = (0x088C9FB8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 181u, 0x08944D4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C9FB8u) goto L_088C9FB8;
    return;
L_088C9FB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x088C9FC8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 178u, 0x08944D00u>(ctx, &aot_mem) && ctx.pc == 0x088C9FC8u) goto L_088C9FC8;
    return;
L_088C9FC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088C9FDC;
      }
      goto L_088C9FD0;
    }
L_088C9FD0:
    ctx.gpr[31] = (0x088C9FD8u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088C9FD8u) goto L_088C9FD8;
    return;
L_088C9FD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088C9FDC;
L_088C9FDC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088CA028;
      }
      goto L_088C9FE4;
    }
L_088C9FE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088CA020;
      }
      goto L_088C9FF4;
    }
L_088C9FF4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[31] = (0x088CA000u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088CA000u) goto L_088CA000;
    return;
L_088CA000:
    ctx.gpr[31] = (0x088CA008u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 181u, 0x08944D4Cu>(ctx, &aot_mem) && ctx.pc == 0x088CA008u) goto L_088CA008;
    return;
L_088CA008:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x088CA018u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 178u, 0x08944D00u>(ctx, &aot_mem) && ctx.pc == 0x088CA018u) goto L_088CA018;
    return;
L_088CA018:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA028;
      }
      goto L_088CA020;
    }
L_088CA020:
    ctx.gpr[31] = (0x088CA028u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088CA028u) goto L_088CA028;
    return;
L_088CA028:
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
L_088CA040:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(45)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088CA1F8;
      }
      goto L_088CA074;
    }
L_088CA074:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u | 64u);
    ctx.gpr[19] = (0u | 128u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[17] = (0u | 2u);
      if (branch_taken) {
          goto L_088CA0D4;
      }
      goto L_088CA088;
    }
L_088CA088:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12108)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CA0D4;
      }
      goto L_088CA094;
    }
L_088CA094:
    ctx.gpr[31] = (0x088CA09Cu);
    // nop
    goto L_088CB5AC;
L_088CA09C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x088CA0B0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 567u, 0x088CFDB0u>(ctx, &aot_mem) && ctx.pc == 0x088CA0B0u) goto L_088CA0B0;
    return;
L_088CA0B0:
    ctx.gpr[31] = (0x088CA0B8u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088CA0B8u) goto L_088CA0B8;
    return;
L_088CA0B8:
    ctx.gpr[31] = (0x088CA0C0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 181u, 0x08944D4Cu>(ctx, &aot_mem) && ctx.pc == 0x088CA0C0u) goto L_088CA0C0;
    return;
L_088CA0C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x088CA0D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 178u, 0x08944D00u>(ctx, &aot_mem) && ctx.pc == 0x088CA0D0u) goto L_088CA0D0;
    return;
L_088CA0D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088CA0D4;
L_088CA0D4:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088CA130;
      }
      goto L_088CA0DC;
    }
L_088CA0DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12108)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CA130;
      }
      goto L_088CA0EC;
    }
L_088CA0EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088CA130;
      }
      goto L_088CA0F8;
    }
L_088CA0F8:
    ctx.gpr[31] = (0x088CA100u);
    // nop
    goto L_088CB5AC;
L_088CA100:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[31] = (0x088CA10Cu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 567u, 0x088CFDB0u>(ctx, &aot_mem) && ctx.pc == 0x088CA10Cu) goto L_088CA10C;
    return;
L_088CA10C:
    ctx.gpr[31] = (0x088CA114u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088CA114u) goto L_088CA114;
    return;
L_088CA114:
    ctx.gpr[31] = (0x088CA11Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 181u, 0x08944D4Cu>(ctx, &aot_mem) && ctx.pc == 0x088CA11Cu) goto L_088CA11C;
    return;
L_088CA11C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x088CA12Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 178u, 0x08944D00u>(ctx, &aot_mem) && ctx.pc == 0x088CA12Cu) goto L_088CA12C;
    return;
L_088CA12C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088CA130;
L_088CA130:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088CA184;
      }
      goto L_088CA138;
    }
L_088CA138:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12108)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CA184;
      }
      goto L_088CA148;
    }
L_088CA148:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CA184;
      }
      goto L_088CA154;
    }
L_088CA154:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x088CA164u);
    ctx.gpr[4] = (0u | 0u);
    goto L_088C97EC;
L_088CA164:
    ctx.gpr[31] = (0x088CA16Cu);
    // nop
    goto L_088C9778;
L_088CA16C:
    ctx.gpr[31] = (0x088CA174u);
    ctx.gpr[4] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088CA174u) goto L_088CA174;
    return;
L_088CA174:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (0u | 28u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088CA184;
L_088CA184:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088CA1BC;
      }
      goto L_088CA18C;
    }
L_088CA18C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088CA1B0;
      }
      goto L_088CA19C;
    }
L_088CA19C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[31] = (0x088CA1A8u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088CA1A8u) goto L_088CA1A8;
    return;
L_088CA1A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_088CA1BC;
      }
      goto L_088CA1B0;
    }
L_088CA1B0:
    ctx.gpr[31] = (0x088CA1B8u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088CA1B8u) goto L_088CA1B8;
    return;
L_088CA1B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088CA1BC;
L_088CA1BC:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088CA288;
      }
      goto L_088CA1C4;
    }
L_088CA1C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA1E8;
      }
      goto L_088CA1D4;
    }
L_088CA1D4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[31] = (0x088CA1E0u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088CA1E0u) goto L_088CA1E0;
    return;
L_088CA1E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA288;
      }
      goto L_088CA1E8;
    }
L_088CA1E8:
    ctx.gpr[31] = (0x088CA1F0u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088CA1F0u) goto L_088CA1F0;
    return;
L_088CA1F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA288;
      }
      goto L_088CA1F8;
    }
L_088CA1F8:
    ctx.gpr[31] = (0x088CA200u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 952u, 0x0881FB40u>(ctx, &aot_mem) && ctx.pc == 0x088CA200u) goto L_088CA200;
    return;
L_088CA200:
    ctx.gpr[31] = (0x088CA208u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 565u, 0x0881E2BCu>(ctx, &aot_mem) && ctx.pc == 0x088CA208u) goto L_088CA208;
    return;
L_088CA208:
    ctx.gpr[31] = (0x088CA210u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 1018u, 0x0881BEC4u>(ctx, &aot_mem) && ctx.pc == 0x088CA210u) goto L_088CA210;
    return;
L_088CA210:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088CA288;
      }
      goto L_088CA218;
    }
L_088CA218:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (ctx.gpr[5] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[31] = (0x088CA250u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_088C9660;
L_088CA250:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[31] = (0x088CA25Cu);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    goto L_088CB5AC;
L_088CA25C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(17640)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[31] = (0x088CA270u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    goto L_088C95F0;
L_088CA270:
    ctx.gpr[31] = (0x088CA278u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 181u, 0x08944D4Cu>(ctx, &aot_mem) && ctx.pc == 0x088CA278u) goto L_088CA278;
    return;
L_088CA278:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x088CA288u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 178u, 0x08944D00u>(ctx, &aot_mem) && ctx.pc == 0x088CA288u) goto L_088CA288;
    return;
L_088CA288:
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
L_088CA2A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088CA2CCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 208u, 0x088213B0u>(ctx, &aot_mem) && ctx.pc == 0x088CA2CCu) goto L_088CA2CC;
    return;
L_088CA2CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 64u);
    ctx.gpr[17] = (0u | 128u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088CA2F4;
      }
      goto L_088CA2E0;
    }
L_088CA2E0:
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12108)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA318;
      }
      goto L_088CA2F4;
    }
L_088CA2F4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    ctx.gpr[19] = (2221u << 16u);
      if (branch_taken) {
          goto L_088CA340;
      }
      goto L_088CA2FC;
    }
L_088CA2FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12108)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CA340;
      }
      goto L_088CA30C;
    }
L_088CA30C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088CA340;
      }
      goto L_088CA318;
    }
L_088CA318:
    ctx.gpr[31] = (0x088CA320u);
    // nop
    goto L_088CB5AC;
L_088CA320:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x088CA334u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 567u, 0x088CFDB0u>(ctx, &aot_mem) && ctx.pc == 0x088CA334u) goto L_088CA334;
    return;
L_088CA334:
    ctx.gpr[31] = (0x088CA33Cu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088CA33Cu) goto L_088CA33C;
    return;
L_088CA33C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088CA340;
L_088CA340:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_088CA430;
      }
      goto L_088CA348;
    }
L_088CA348:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12108)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_088CA430;
      }
      goto L_088CA35C;
    }
L_088CA35C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_088CA430;
      }
      goto L_088CA368;
    }
L_088CA368:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    goto L_088CA37C;
L_088CA37C:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(92)));
    if (ctx.gpr[10] == ctx.gpr[8]) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
        goto L_088CA3AC;
    }
    goto L_088CA388;
L_088CA388:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[10];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088CA3A8;
      }
      goto L_088CA394;
    }
L_088CA394:
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), ctx.gpr[8]);
      if (branch_taken) {
          goto L_088CA3BC;
      }
      goto L_088CA3A8;
    }
L_088CA3A8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_088CA3AC;
L_088CA3AC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088CA37C;
      }
      goto L_088CA3BC;
    }
L_088CA3BC:
    ctx.gpr[31] = (0x088CA3C4u);
    ctx.gpr[4] = (0u | 1u);
    goto L_088C97EC;
L_088CA3C4:
    ctx.gpr[31] = (0x088CA3CCu);
    // nop
    goto L_088C9778;
L_088CA3CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[31] = (0x088CA3D8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_088C9660;
L_088CA3D8:
    ctx.gpr[31] = (0x088CA3E0u);
    // nop
    goto L_088CB5AC;
L_088CA3E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[31] = (0x088CA3F4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    goto L_088C95F0;
L_088CA3F4:
    ctx.gpr[31] = (0x088CA3FCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 181u, 0x08944D4Cu>(ctx, &aot_mem) && ctx.pc == 0x088CA3FCu) goto L_088CA3FC;
    return;
L_088CA3FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x088CA40Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 178u, 0x08944D00u>(ctx, &aot_mem) && ctx.pc == 0x088CA40Cu) goto L_088CA40C;
    return;
L_088CA40C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (0u | 35u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (0u | 15u);
    ctx.gpr[31] = (0x088CA428u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088CA428u) goto L_088CA428;
    return;
L_088CA428:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 2u);
    goto L_088CA430;
L_088CA430:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088CA46C;
      }
      goto L_088CA438;
    }
L_088CA438:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088CA460;
      }
      goto L_088CA44C;
    }
L_088CA44C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[31] = (0x088CA458u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088CA458u) goto L_088CA458;
    return;
L_088CA458:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_088CA46C;
      }
      goto L_088CA460;
    }
L_088CA460:
    ctx.gpr[31] = (0x088CA468u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088CA468u) goto L_088CA468;
    return;
L_088CA468:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088CA46C;
L_088CA46C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088CA4A0;
      }
      goto L_088CA474;
    }
L_088CA474:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA498;
      }
      goto L_088CA484;
    }
L_088CA484:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[31] = (0x088CA490u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088CA490u) goto L_088CA490;
    return;
L_088CA490:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA4A0;
      }
      goto L_088CA498;
    }
L_088CA498:
    ctx.gpr[31] = (0x088CA4A0u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088CA4A0u) goto L_088CA4A0;
    return;
L_088CA4A0:
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
L_088CA4BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 144u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088CA4E4u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CA4E4u) goto L_088CA4E4;
    return;
L_088CA4E4:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12012), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088CA500u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088CA500u) goto L_088CA500;
    return;
L_088CA500:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12012)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 16u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088CA520u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CA520u) goto L_088CA520;
    return;
L_088CA520:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088CA530u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12008), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 741u, 0x0882EE90u>(ctx, &aot_mem) && ctx.pc == 0x088CA530u) goto L_088CA530;
    return;
L_088CA530:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 144u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088CA544u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CA544u) goto L_088CA544;
    return;
L_088CA544:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12016), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088CA55Cu);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088CA55Cu) goto L_088CA55C;
    return;
L_088CA55C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12016)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CA57C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088CA590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 232u, 0x088CCC2Cu>(ctx, &aot_mem) && ctx.pc == 0x088CA590u) goto L_088CA590;
    return;
L_088CA590:
    ctx.gpr[31] = (0x088CA598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 271u, 0x088CD294u>(ctx, &aot_mem) && ctx.pc == 0x088CA598u) goto L_088CA598;
    return;
L_088CA598:
    ctx.gpr[31] = (0x088CA5A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 293u, 0x088CD64Cu>(ctx, &aot_mem) && ctx.pc == 0x088CA5A0u) goto L_088CA5A0;
    return;
L_088CA5A0:
    ctx.gpr[31] = (0x088CA5A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 332u, 0x088CE070u>(ctx, &aot_mem) && ctx.pc == 0x088CA5A8u) goto L_088CA5A8;
    return;
L_088CA5A8:
    ctx.gpr[31] = (0x088CA5B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 513u, 0x088CF530u>(ctx, &aot_mem) && ctx.pc == 0x088CA5B0u) goto L_088CA5B0;
    return;
L_088CA5B0:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 184u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088CA5C8u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CA5C8u) goto L_088CA5C8;
    return;
L_088CA5C8:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12084), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088CA5E4u);
    ctx.gpr[6] = (0u | 184u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088CA5E4u) goto L_088CA5E4;
    return;
L_088CA5E4:
    ctx.gpr[8] = (17360u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (17232u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (17024u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12084)));
    goto L_088CA60C;
L_088CA60C:
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12084)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12084)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12084)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12084)));
      if (branch_taken) {
          goto L_088CA60C;
      }
      goto L_088CA64C;
    }
L_088CA64C:
    ctx.gpr[31] = (0x088CA654u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 55u, 0x0883C734u>(ctx, &aot_mem) && ctx.pc == 0x088CA654u) goto L_088CA654;
    return;
L_088CA654:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CA664:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12012)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[16] = (2222u << 16u);
      if (branch_taken) {
          goto L_088CA6F4;
      }
      goto L_088CA690;
    }
L_088CA690:
    ctx.gpr[31] = (0x088CA698u);
    // nop
    goto L_088CA8A0;
L_088CA698:
    ctx.gpr[31] = (0x088CA6A0u);
    // nop
    goto L_088CAD44;
L_088CA6A0:
    ctx.gpr[31] = (0x088CA6A8u);
    // nop
    goto L_088CB114;
L_088CA6A8:
    ctx.gpr[31] = (0x088CA6B0u);
    // nop
    goto L_088CB25C;
L_088CA6B0:
    ctx.gpr[31] = (0x088CA6B8u);
    // nop
    goto L_088CB390;
L_088CA6B8:
    ctx.gpr[31] = (0x088CA6C0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 761u, 0x0882EFC4u>(ctx, &aot_mem) && ctx.pc == 0x088CA6C0u) goto L_088CA6C0;
    return;
L_088CA6C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[31] = (0x088CA6CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12008)));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 742u, 0x0882EEA8u>(ctx, &aot_mem) && ctx.pc == 0x088CA6CCu) goto L_088CA6CC;
    return;
L_088CA6CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[31] = (0x088CA6D8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12084)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 61u, 0x0883C8A8u>(ctx, &aot_mem) && ctx.pc == 0x088CA6D8u) goto L_088CA6D8;
    return;
L_088CA6D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088CA6ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12084)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CA6ECu) goto L_088CA6EC;
    return;
L_088CA6EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12084), 0u);
    goto L_088CA6F4;
L_088CA6F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088CA704u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12012)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CA704u) goto L_088CA704;
    return;
L_088CA704:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12012), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088CA71Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12008)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CA71Cu) goto L_088CA71C;
    return;
L_088CA71C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12008), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088CA734u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12016)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CA734u) goto L_088CA734;
    return;
L_088CA734:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12016), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CA750:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CA7E0;
      }
      goto L_088CA76C;
    }
L_088CA76C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA7BC;
      }
      goto L_088CA77C;
    }
L_088CA77C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7800)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CA794:
    ctx.gpr[31] = (0x088CA79Cu);
    // nop
    goto L_088CAE14;
L_088CA79C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA7BC;
      }
      goto L_088CA7A4;
    }
L_088CA7A4:
    ctx.gpr[31] = (0x088CA7ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 310u, 0x088CDAFCu>(ctx, &aot_mem) && ctx.pc == 0x088CA7ACu) goto L_088CA7AC;
    return;
L_088CA7AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA7BC;
      }
      goto L_088CA7B4;
    }
L_088CA7B4:
    ctx.gpr[31] = (0x088CA7BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 366u, 0x088CE8ECu>(ctx, &aot_mem) && ctx.pc == 0x088CA7BCu) goto L_088CA7BC;
    return;
L_088CA7BC:
    ctx.gpr[31] = (0x088CA7C4u);
    // nop
    goto L_088CAA08;
L_088CA7C4:
    ctx.gpr[31] = (0x088CA7CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 535u, 0x088CFA0Cu>(ctx, &aot_mem) && ctx.pc == 0x088CA7CCu) goto L_088CA7CC;
    return;
L_088CA7CC:
    ctx.gpr[31] = (0x088CA7D4u);
    // nop
    goto L_088CB6A4;
L_088CA7D4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CA7E0:
    ctx.gpr[31] = (0x088CA7E8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12084)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 65u, 0x0883C8F0u>(ctx, &aot_mem) && ctx.pc == 0x088CA7E8u) goto L_088CA7E8;
    return;
L_088CA7E8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CA7F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CA888;
      }
      goto L_088CA814;
    }
L_088CA814:
    ctx.gpr[31] = (0x088CA81Cu);
    // nop
    goto L_088CAC0C;
L_088CA81C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA878;
      }
      goto L_088CA830;
    }
L_088CA830:
    ctx.gpr[16] = (ctx.gpr[16] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[16]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7768)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CA848:
    ctx.gpr[31] = (0x088CA850u);
    // nop
    goto L_088CB09C;
L_088CA850:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA878;
      }
      goto L_088CA858;
    }
L_088CA858:
    ctx.gpr[31] = (0x088CA860u);
    // nop
    goto L_088CB1DC;
L_088CA860:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA878;
      }
      goto L_088CA868;
    }
L_088CA868:
    ctx.gpr[31] = (0x088CA870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 476u, 0x088CF310u>(ctx, &aot_mem) && ctx.pc == 0x088CA870u) goto L_088CA870;
    return;
L_088CA870:
    ctx.gpr[31] = (0x088CA878u);
    // nop
    goto L_088CB758;
L_088CA878:
    ctx.gpr[31] = (0x088CA880u);
    // nop
    goto L_088CB458;
L_088CA880:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CA890;
      }
      goto L_088CA888;
    }
L_088CA888:
    ctx.gpr[31] = (0x088CA890u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12084)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 72u, 0x0883C9FCu>(ctx, &aot_mem) && ctx.pc == 0x088CA890u) goto L_088CA890;
    return;
L_088CA890:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CA8A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088CA8C8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12032)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 60u, 0x08838878u>(ctx, &aot_mem) && ctx.pc == 0x088CA8C8u) goto L_088CA8C8;
    return;
L_088CA8C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12032)));
    ctx.gpr[31] = (0x088CA8D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 474u, 0x0883B820u>(ctx, &aot_mem) && ctx.pc == 0x088CA8D8u) goto L_088CA8D8;
    return;
L_088CA8D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12032)));
    ctx.gpr[31] = (0x088CA8E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 474u, 0x0883B820u>(ctx, &aot_mem) && ctx.pc == 0x088CA8E8u) goto L_088CA8E8;
    return;
L_088CA8E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12032)));
    ctx.gpr[31] = (0x088CA8F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 185u, 0x088397D4u>(ctx, &aot_mem) && ctx.pc == 0x088CA8F8u) goto L_088CA8F8;
    return;
L_088CA8F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12032)));
    ctx.gpr[31] = (0x088CA908u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 206u, 0x08839AC8u>(ctx, &aot_mem) && ctx.pc == 0x088CA908u) goto L_088CA908;
    return;
L_088CA908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12032)));
    ctx.gpr[31] = (0x088CA918u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(460));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x088CA918u) goto L_088CA918;
    return;
L_088CA918:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12032)));
    ctx.gpr[31] = (0x088CA928u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(552));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x088CA928u) goto L_088CA928;
    return;
L_088CA928:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088CA940u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12032)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CA940u) goto L_088CA940;
    return;
L_088CA940:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12040)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12032), 0u);
    ctx.gpr[31] = (0x088CA954u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 283u, 0x0883A3DCu>(ctx, &aot_mem) && ctx.pc == 0x088CA954u) goto L_088CA954;
    return;
L_088CA954:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12040)));
    ctx.gpr[31] = (0x088CA964u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(188));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 283u, 0x0883A3DCu>(ctx, &aot_mem) && ctx.pc == 0x088CA964u) goto L_088CA964;
    return;
L_088CA964:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088CA978u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12040)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CA978u) goto L_088CA978;
    return;
L_088CA978:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12044)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12040), 0u);
    ctx.gpr[31] = (0x088CA98Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 244u, 0x08839E60u>(ctx, &aot_mem) && ctx.pc == 0x088CA98Cu) goto L_088CA98C;
    return;
L_088CA98C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088CA9A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12044)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CA9A0u) goto L_088CA9A0;
    return;
L_088CA9A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12044), 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12036)));
    ctx.gpr[16] = (0u | 0u);
    goto L_088CA9B4;
L_088CA9B4:
    ctx.gpr[31] = (0x088CA9BCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x088CA9BCu) goto L_088CA9BC;
    return;
L_088CA9BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12036)));
      if (branch_taken) {
          goto L_088CA9B4;
      }
      goto L_088CA9D4;
    }
L_088CA9D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088CA9E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CA9E4u) goto L_088CA9E4;
    return;
L_088CA9E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12036), 0u);
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
L_088CAA08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12040)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(17692));
      if (branch_taken) {
          goto L_088CAA60;
      }
      goto L_088CAA4C;
    }
L_088CAA4C:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12040)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(188), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12044)));
      if (branch_taken) {
          goto L_088CAA80;
      }
      goto L_088CAA60;
    }
L_088CAA60:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_088CAA78;
      }
      goto L_088CAA68;
    }
L_088CAA68:
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12044)));
      if (branch_taken) {
          goto L_088CAA80;
      }
      goto L_088CAA78;
    }
L_088CAA78:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(188), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12044)));
    goto L_088CAA80;
L_088CAA80:
    ctx.gpr[31] = (0x088CAA88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 247u, 0x08839E90u>(ctx, &aot_mem) && ctx.pc == 0x088CAA88u) goto L_088CAA88;
    return;
L_088CAA88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12036)));
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[31] = (0x088CAAA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088CAAA0u) goto L_088CAAA0;
    return;
L_088CAAA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12036)));
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7928));
    ctx.gpr[31] = (0x088CAAB8u);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    goto L_088CB8D0;
L_088CAAB8:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088CAAC4u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(17692)));
    goto L_088CB9FC;
L_088CAAC4:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088CAAE0u);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088CAAE0u) goto L_088CAAE0;
    return;
L_088CAAE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[31] = (0x088CAAECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12036)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x088CAAECu) goto L_088CAAEC;
    return;
L_088CAAEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12036)));
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[31] = (0x088CAB04u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(212));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088CAB04u) goto L_088CAB04;
    return;
L_088CAB04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12036)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(212));
    ctx.gpr[31] = (0x088CAB1Cu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_088CBA4C;
L_088CAB1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12036)));
    ctx.gpr[31] = (0x088CAB2Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(180));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x088CAB2Cu) goto L_088CAB2C;
    return;
L_088CAB2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12036)));
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[31] = (0x088CAB44u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(572));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088CAB44u) goto L_088CAB44;
    return;
L_088CAB44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12036)));
      if (branch_taken) {
          goto L_088CAB6C;
      }
      goto L_088CAB54;
    }
L_088CAB54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x088CAB60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(572));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088CAB60u) goto L_088CAB60;
    return;
L_088CAB60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12036)));
      if (branch_taken) {
          goto L_088CABDC;
      }
      goto L_088CAB6C;
    }
L_088CAB6C:
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 3u);
      if (branch_taken) {
          goto L_088CAB90;
      }
      goto L_088CAB78;
    }
L_088CAB78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x088CAB84u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(572));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088CAB84u) goto L_088CAB84;
    return;
L_088CAB84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12036)));
      if (branch_taken) {
          goto L_088CABDC;
      }
      goto L_088CAB90;
    }
L_088CAB90:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 4u);
      if (branch_taken) {
          goto L_088CABA0;
      }
      goto L_088CAB98;
    }
L_088CAB98:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 5u);
      if (branch_taken) {
          goto L_088CABB8;
      }
      goto L_088CABA0;
    }
L_088CABA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x088CABACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(572));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088CABACu) goto L_088CABAC;
    return;
L_088CABAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12036)));
      if (branch_taken) {
          goto L_088CABDC;
      }
      goto L_088CABB8;
    }
L_088CABB8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 6u);
      if (branch_taken) {
          goto L_088CABC8;
      }
      goto L_088CABC0;
    }
L_088CABC0:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088CABDC;
      }
      goto L_088CABC8;
    }
L_088CABC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x088CABD4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(572));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088CABD4u) goto L_088CABD4;
    return;
L_088CABD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12036)));
    goto L_088CABDC;
L_088CABDC:
    ctx.gpr[31] = (0x088CABE4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(540));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x088CABE4u) goto L_088CABE4;
    return;
L_088CABE4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CAC0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088CAC28u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12032)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 62u, 0x08838894u>(ctx, &aot_mem) && ctx.pc == 0x088CAC28u) goto L_088CAC28;
    return;
L_088CAC28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12032)));
    ctx.gpr[31] = (0x088CAC38u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 478u, 0x0883B858u>(ctx, &aot_mem) && ctx.pc == 0x088CAC38u) goto L_088CAC38;
    return;
L_088CAC38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12032)));
    ctx.gpr[31] = (0x088CAC48u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 478u, 0x0883B858u>(ctx, &aot_mem) && ctx.pc == 0x088CAC48u) goto L_088CAC48;
    return;
L_088CAC48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12032)));
    ctx.gpr[31] = (0x088CAC58u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 187u, 0x088397F0u>(ctx, &aot_mem) && ctx.pc == 0x088CAC58u) goto L_088CAC58;
    return;
L_088CAC58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12032)));
    ctx.gpr[31] = (0x088CAC68u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 208u, 0x08839AE4u>(ctx, &aot_mem) && ctx.pc == 0x088CAC68u) goto L_088CAC68;
    return;
L_088CAC68:
    ctx.gpr[31] = (0x088CAC70u);
    ctx.gpr[4] = (0u | 32768u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 170u, 0x08944C38u>(ctx, &aot_mem) && ctx.pc == 0x088CAC70u) goto L_088CAC70;
    return;
L_088CAC70:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
      if (branch_taken) {
          goto L_088CAC98;
      }
      goto L_088CAC7C;
    }
L_088CAC7C:
    ctx.gpr[31] = (0x088CAC84u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12040)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 286u, 0x0883A40Cu>(ctx, &aot_mem) && ctx.pc == 0x088CAC84u) goto L_088CAC84;
    return;
L_088CAC84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12040)));
    ctx.gpr[31] = (0x088CAC94u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(188));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 286u, 0x0883A40Cu>(ctx, &aot_mem) && ctx.pc == 0x088CAC94u) goto L_088CAC94;
    return;
L_088CAC94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    goto L_088CAC98;
L_088CAC98:
    ctx.gpr[31] = (0x088CACA0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12044)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 250u, 0x08839F40u>(ctx, &aot_mem) && ctx.pc == 0x088CACA0u) goto L_088CACA0;
    return;
L_088CACA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12032)));
      if (branch_taken) {
          goto L_088CACC8;
      }
      goto L_088CACB0;
    }
L_088CACB0:
    ctx.gpr[31] = (0x088CACB8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(460));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088CACB8u) goto L_088CACB8;
    return;
L_088CACB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12036)));
      if (branch_taken) {
          goto L_088CACDC;
      }
      goto L_088CACC8;
    }
L_088CACC8:
    ctx.gpr[31] = (0x088CACD0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(552));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088CACD0u) goto L_088CACD0;
    return;
L_088CACD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12036)));
    goto L_088CACDC;
L_088CACDC:
    ctx.gpr[6] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 6u);
      if (branch_taken) {
          goto L_088CAD00;
      }
      goto L_088CACE8;
    }
L_088CACE8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088CAD00;
      }
      goto L_088CACF0;
    }
L_088CACF0:
    ctx.gpr[31] = (0x088CACF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088CACF8u) goto L_088CACF8;
    return;
L_088CACF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12036)));
    goto L_088CAD00;
L_088CAD00:
    ctx.gpr[31] = (0x088CAD08u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(180));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088CAD08u) goto L_088CAD08;
    return;
L_088CAD08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CAD34;
      }
      goto L_088CAD18;
    }
L_088CAD18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12036)));
    ctx.gpr[31] = (0x088CAD24u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088CAD24u) goto L_088CAD24;
    return;
L_088CAD24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12036)));
    ctx.gpr[31] = (0x088CAD34u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(540));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088CAD34u) goto L_088CAD34;
    return;
L_088CAD34:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CAD44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088CAD6Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12048)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 244u, 0x08839E60u>(ctx, &aot_mem) && ctx.pc == 0x088CAD6Cu) goto L_088CAD6C;
    return;
L_088CAD6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088CAD84u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12048)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CAD84u) goto L_088CAD84;
    return;
L_088CAD84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12052)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12048), 0u);
    ctx.gpr[31] = (0x088CAD98u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x088CAD98u) goto L_088CAD98;
    return;
L_088CAD98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088CADACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12052)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CADACu) goto L_088CADAC;
    return;
L_088CADAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12052), 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12056)));
    ctx.gpr[16] = (0u | 0u);
    goto L_088CADC0;
L_088CADC0:
    ctx.gpr[31] = (0x088CADC8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x088CADC8u) goto L_088CADC8;
    return;
L_088CADC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12056)));
      if (branch_taken) {
          goto L_088CADC0;
      }
      goto L_088CADE0;
    }
L_088CADE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088CADF0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CADF0u) goto L_088CADF0;
    return;
L_088CADF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12056), 0u);
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
L_088CAE14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    ctx.gpr[21] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12048)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    ctx.gpr[8] = (16900u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[9]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
      if (branch_taken) {
          goto L_088CAEC4;
      }
      goto L_088CAE94;
    }
L_088CAE94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (17142u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12048)));
      if (branch_taken) {
          goto L_088CAED0;
      }
      goto L_088CAEC4;
    }
L_088CAEC4:
    ctx.gpr[5] = (0u | 139u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12048)));
    goto L_088CAED0;
L_088CAED0:
    ctx.gpr[31] = (0x088CAED8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 247u, 0x08839E90u>(ctx, &aot_mem) && ctx.pc == 0x088CAED8u) goto L_088CAED8;
    return;
L_088CAED8:
    ctx.gpr[4] = (17150u << 16u);
    ctx.gpr[30] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[22] = (2221u << 16u);
    ctx.gpr[4] = (17167u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(17692));
    goto L_088CAF04;
L_088CAF04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12056)));
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088CAF20u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088CAF20u) goto L_088CAF20;
    return;
L_088CAF20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(17640)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[20] = (0u | 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12056)));
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_088CAF64;
      }
      goto L_088CAF48;
    }
L_088CAF48:
    ctx.gpr[31] = (0x088CAF50u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088CAF50u) goto L_088CAF50;
    return;
L_088CAF50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12056)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_088CAF7C;
      }
      goto L_088CAF64;
    }
L_088CAF64:
    ctx.gpr[31] = (0x088CAF6Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088CAF6Cu) goto L_088CAF6C;
    return;
L_088CAF6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12056)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    goto L_088CAF7C;
L_088CAF7C:
    ctx.gpr[7] = (0u | 1u);
    if (ctx.gpr[5] != ctx.gpr[7]) {
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[26];
        goto L_088CAFA4;
    }
    goto L_088CAF88;
L_088CAF88:
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12056)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(168));
      if (branch_taken) {
          goto L_088CAFB8;
      }
      goto L_088CAFA4;
    }
L_088CAFA4:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12056)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(168));
    goto L_088CAFB8;
L_088CAFB8:
    if (ctx.gpr[17] != ctx.gpr[6]) {
    ctx.gpr[30] = (0u | 64u);
        goto L_088CAFEC;
    }
    goto L_088CAFC0;
L_088CAFC0:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12056)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_088CB014;
      }
      goto L_088CAFEC;
    }
L_088CAFEC:
    ctx.gpr[30] = (ctx.gpr[30] & 255u);
    ctx.gpr[23] = (ctx.gpr[30] | 0u);
    ctx.gpr[18] = (ctx.gpr[23] | 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12056)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    goto L_088CB014;
L_088CB014:
    ctx.gpr[31] = (0x088CB01Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x088CB01Cu) goto L_088CB01C;
    return;
L_088CB01C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_088CAF04;
      }
      goto L_088CB02C;
    }
L_088CB02C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
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
L_088CB09C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088CB0BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12048)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 250u, 0x08839F40u>(ctx, &aot_mem) && ctx.pc == 0x088CB0BCu) goto L_088CB0BC;
    return;
L_088CB0BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088CB0DC;
      }
      goto L_088CB0D0;
    }
L_088CB0D0:
    ctx.gpr[31] = (0x088CB0D8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12052)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088CB0D8u) goto L_088CB0D8;
    return;
L_088CB0D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    goto L_088CB0DC;
L_088CB0DC:
    ctx.gpr[31] = (0x088CB0E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12056)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088CB0E4u) goto L_088CB0E4;
    return;
L_088CB0E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088CB100;
      }
      goto L_088CB0F4;
    }
L_088CB0F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12056)));
    ctx.gpr[31] = (0x088CB100u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(180));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088CB100u) goto L_088CB100;
    return;
L_088CB100:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CB114:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12060)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    goto L_088CB144;
L_088CB144:
    ctx.gpr[31] = (0x088CB14Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x088CB14Cu) goto L_088CB14C;
    return;
L_088CB14C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12060)));
      if (branch_taken) {
          goto L_088CB144;
      }
      goto L_088CB164;
    }
L_088CB164:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088CB174u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CB174u) goto L_088CB174;
    return;
L_088CB174:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12060), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12064)));
    ctx.gpr[18] = (0u | 0u);
    goto L_088CB188;
L_088CB188:
    ctx.gpr[31] = (0x088CB190u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x088CB190u) goto L_088CB190;
    return;
L_088CB190:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12064)));
      if (branch_taken) {
          goto L_088CB188;
      }
      goto L_088CB1A8;
    }
L_088CB1A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088CB1B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CB1B8u) goto L_088CB1B8;
    return;
L_088CB1B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12064), 0u);
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
L_088CB1DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_088CB1FC;
L_088CB1FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12060)));
    ctx.gpr[31] = (0x088CB20Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088CB20Cu) goto L_088CB20C;
    return;
L_088CB20C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_088CB1FC;
      }
      goto L_088CB21C;
    }
L_088CB21C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    goto L_088CB224;
L_088CB224:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12064)));
    ctx.gpr[31] = (0x088CB234u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088CB234u) goto L_088CB234;
    return;
L_088CB234:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_088CB224;
      }
      goto L_088CB244;
    }
L_088CB244:
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
L_088CB25C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088CB284u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12068)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 321u, 0x0883A768u>(ctx, &aot_mem) && ctx.pc == 0x088CB284u) goto L_088CB284;
    return;
L_088CB284:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12068)));
    ctx.gpr[31] = (0x088CB294u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x088CB294u) goto L_088CB294;
    return;
L_088CB294:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12068)));
    ctx.gpr[31] = (0x088CB2A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 304u, 0x0883A5BCu>(ctx, &aot_mem) && ctx.pc == 0x088CB2A4u) goto L_088CB2A4;
    return;
L_088CB2A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12068)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (2222u << 16u);
    goto L_088CB2B8;
L_088CB2B8:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x088CB2C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x088CB2C4u) goto L_088CB2C4;
    return;
L_088CB2C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12068)));
      if (branch_taken) {
          goto L_088CB2B8;
      }
      goto L_088CB2DC;
    }
L_088CB2DC:
    ctx.gpr[31] = (0x088CB2E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(552));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 199u, 0x088399CCu>(ctx, &aot_mem) && ctx.pc == 0x088CB2E4u) goto L_088CB2E4;
    return;
L_088CB2E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12068)));
    ctx.gpr[31] = (0x088CB2F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(644));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 321u, 0x0883A768u>(ctx, &aot_mem) && ctx.pc == 0x088CB2F4u) goto L_088CB2F4;
    return;
L_088CB2F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12068)));
    ctx.gpr[31] = (0x088CB304u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(736));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x088CB304u) goto L_088CB304;
    return;
L_088CB304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12068)));
    ctx.gpr[31] = (0x088CB314u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(828));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x088CB314u) goto L_088CB314;
    return;
L_088CB314:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088CB328u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12068)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CB328u) goto L_088CB328;
    return;
L_088CB328:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12068), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12072)));
    ctx.gpr[18] = (0u | 0u);
    goto L_088CB33C;
L_088CB33C:
    ctx.gpr[31] = (0x088CB344u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x088CB344u) goto L_088CB344;
    return;
L_088CB344:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12072)));
      if (branch_taken) {
          goto L_088CB33C;
      }
      goto L_088CB35C;
    }
L_088CB35C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088CB36Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CB36Cu) goto L_088CB36C;
    return;
L_088CB36C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17640)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12072), 0u);
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
L_088CB390:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088CB3B8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12076)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 31u, 0x0883852Cu>(ctx, &aot_mem) && ctx.pc == 0x088CB3B8u) goto L_088CB3B8;
    return;
L_088CB3B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12076)));
    ctx.gpr[31] = (0x088CB3C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 225u, 0x08839CD0u>(ctx, &aot_mem) && ctx.pc == 0x088CB3C8u) goto L_088CB3C8;
    return;
L_088CB3C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12076)));
    ctx.gpr[31] = (0x088CB3D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 192u, 0x088398D0u>(ctx, &aot_mem) && ctx.pc == 0x088CB3D8u) goto L_088CB3D8;
    return;
L_088CB3D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088CB3F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12076)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CB3F0u) goto L_088CB3F0;
    return;
L_088CB3F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12076), 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12080)));
    ctx.gpr[16] = (0u | 0u);
    goto L_088CB404;
L_088CB404:
    ctx.gpr[31] = (0x088CB40Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x088CB40Cu) goto L_088CB40C;
    return;
L_088CB40C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12080)));
      if (branch_taken) {
          goto L_088CB404;
      }
      goto L_088CB424;
    }
L_088CB424:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088CB434u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CB434u) goto L_088CB434;
    return;
L_088CB434:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12080), 0u);
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
L_088CB458:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_088CB548;
      }
      goto L_088CB484;
    }
L_088CB484:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088CB594;
      }
      goto L_088CB494;
    }
L_088CB494:
    ctx.gpr[31] = (0x088CB49Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12076)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 33u, 0x08838548u>(ctx, &aot_mem) && ctx.pc == 0x088CB49Cu) goto L_088CB49C;
    return;
L_088CB49C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1000 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12080)));
        goto L_088CB50C;
    }
    goto L_088CB4B0;
L_088CB4B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12076)));
    ctx.gpr[31] = (0x088CB4BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 242u, 0x08839E44u>(ctx, &aot_mem) && ctx.pc == 0x088CB4BCu) goto L_088CB4BC;
    return;
L_088CB4BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[31] = (0x088CB4C8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12080)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088CB4C8u) goto L_088CB4C8;
    return;
L_088CB4C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12080)));
    ctx.gpr[31] = (0x088CB4D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(180));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088CB4D8u) goto L_088CB4D8;
    return;
L_088CB4D8:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    goto L_088CB4E0;
L_088CB4E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12080)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x088CB4F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088CB4F4u) goto L_088CB4F4;
    return;
L_088CB4F4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_088CB4E0;
      }
      goto L_088CB504;
    }
L_088CB504:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB594;
      }
      goto L_088CB50C;
    }
L_088CB50C:
    ctx.gpr[31] = (0x088CB514u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1800));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088CB514u) goto L_088CB514;
    return;
L_088CB514:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    goto L_088CB51C;
L_088CB51C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12080)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x088CB530u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088CB530u) goto L_088CB530;
    return;
L_088CB530:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_088CB51C;
      }
      goto L_088CB540;
    }
L_088CB540:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB594;
      }
      goto L_088CB548;
    }
L_088CB548:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088CB594;
      }
      goto L_088CB550;
    }
L_088CB550:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088CB594;
      }
      goto L_088CB55C;
    }
L_088CB55C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12076)));
    ctx.gpr[31] = (0x088CB568u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 194u, 0x088398ECu>(ctx, &aot_mem) && ctx.pc == 0x088CB568u) goto L_088CB568;
    return;
L_088CB568:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    goto L_088CB570;
L_088CB570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12080)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x088CB584u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1980));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088CB584u) goto L_088CB584;
    return;
L_088CB584:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_088CB570;
      }
      goto L_088CB594;
    }
L_088CB594:
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
L_088CB5AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12100)));
      if (branch_taken) {
          goto L_088CB624;
      }
      goto L_088CB5D8;
    }
L_088CB5D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12096)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_088CB664;
      }
      goto L_088CB5F0;
    }
L_088CB5F0:
    ctx.gpr[18] = (0u | 0u);
    goto L_088CB5F4;
L_088CB5F4:
    ctx.gpr[31] = (0x088CB5FCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 273u, 0x08906E8Cu>(ctx, &aot_mem) && ctx.pc == 0x088CB5FCu) goto L_088CB5FC;
    return;
L_088CB5FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12096)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12100)));
      if (branch_taken) {
          goto L_088CB5F4;
      }
      goto L_088CB61C;
    }
L_088CB61C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_088CB664;
      }
      goto L_088CB624;
    }
L_088CB624:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12088)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_088CB664;
      }
      goto L_088CB638;
    }
L_088CB638:
    ctx.gpr[18] = (0u | 0u);
    goto L_088CB63C;
L_088CB63C:
    ctx.gpr[31] = (0x088CB644u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 273u, 0x08906E8Cu>(ctx, &aot_mem) && ctx.pc == 0x088CB644u) goto L_088CB644;
    return;
L_088CB644:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12088)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12100)));
      if (branch_taken) {
          goto L_088CB63C;
      }
      goto L_088CB660;
    }
L_088CB660:
    ctx.gpr[5] = (2222u << 16u);
    goto L_088CB664;
L_088CB664:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088CB674u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CB674u) goto L_088CB674;
    return;
L_088CB674:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12100), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12104), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12108), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12092), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12096), 0u);
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
L_088CB6A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12104)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088CB740;
      }
      goto L_088CB6D0;
    }
L_088CB6D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 5u);
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12088)));
        goto L_088CB708;
    }
    goto L_088CB6E0;
L_088CB6E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12096)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12100)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[31] = (0x088CB6FCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 275u, 0x08906EA8u>(ctx, &aot_mem) && ctx.pc == 0x088CB6FCu) goto L_088CB6FC;
    return;
L_088CB6FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(17640)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12108), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088CB740;
      }
      goto L_088CB708;
    }
L_088CB708:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088CB740;
      }
      goto L_088CB718;
    }
L_088CB718:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12100)));
    ctx.gpr[31] = (0x088CB724u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 275u, 0x08906EA8u>(ctx, &aot_mem) && ctx.pc == 0x088CB724u) goto L_088CB724;
    return;
L_088CB724:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12108), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12088)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_088CB718;
      }
      goto L_088CB740;
    }
L_088CB740:
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
L_088CB758:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12104)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088CB810;
      }
      goto L_088CB784;
    }
L_088CB784:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 5u);
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12088)));
        goto L_088CB7DC;
    }
    goto L_088CB794;
L_088CB794:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12096)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088CB810;
      }
      goto L_088CB7AC;
    }
L_088CB7AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12100)));
    ctx.gpr[31] = (0x088CB7B8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 285u, 0x08906F3Cu>(ctx, &aot_mem) && ctx.pc == 0x088CB7B8u) goto L_088CB7B8;
    return;
L_088CB7B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12096)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_088CB7AC;
      }
      goto L_088CB7D4;
    }
L_088CB7D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB810;
      }
      goto L_088CB7DC;
    }
L_088CB7DC:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088CB810;
      }
      goto L_088CB7EC;
    }
L_088CB7EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12100)));
    ctx.gpr[31] = (0x088CB7F8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 285u, 0x08906F3Cu>(ctx, &aot_mem) && ctx.pc == 0x088CB7F8u) goto L_088CB7F8;
    return;
L_088CB7F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12088)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_088CB7EC;
      }
      goto L_088CB810;
    }
L_088CB810:
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
L_088CB828:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088CB8A0;
      }
      goto L_088CB844;
    }
L_088CB844:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7736)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CB85C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 3u);
      if (branch_taken) {
          goto L_088CB8A0;
      }
      goto L_088CB864;
    }
L_088CB864:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 14u);
      if (branch_taken) {
          goto L_088CB8A0;
      }
      goto L_088CB86C;
    }
L_088CB86C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 25u);
      if (branch_taken) {
          goto L_088CB8A0;
      }
      goto L_088CB874;
    }
L_088CB874:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 36u);
      if (branch_taken) {
          goto L_088CB8A0;
      }
      goto L_088CB87C;
    }
L_088CB87C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 47u);
      if (branch_taken) {
          goto L_088CB8A0;
      }
      goto L_088CB884;
    }
L_088CB884:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 58u);
      if (branch_taken) {
          goto L_088CB8A0;
      }
      goto L_088CB88C;
    }
L_088CB88C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 69u);
      if (branch_taken) {
          goto L_088CB8A0;
      }
      goto L_088CB894;
    }
L_088CB894:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 80u);
      if (branch_taken) {
          goto L_088CB8A0;
      }
      goto L_088CB89C;
    }
L_088CB89C:
    ctx.gpr[2] = (0u | 91u);
    goto L_088CB8A0;
L_088CB8A0:
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088CB8C8;
      }
      goto L_088CB8AC;
    }
L_088CB8AC:
    ctx.gpr[7] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_088CB8C4;
      }
      goto L_088CB8B8;
    }
L_088CB8B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_088CB8C4;
L_088CB8C4:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    goto L_088CB8C8;
L_088CB8C8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CB8D0:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088CB9F4;
      }
      goto L_088CB8E8;
    }
L_088CB8E8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088CB9BC;
      }
      goto L_088CB8FC;
    }
L_088CB8FC:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088CB968;
      }
      goto L_088CB904;
    }
L_088CB904:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_088CB968;
      }
      goto L_088CB90C;
    }
L_088CB90C:
    ctx.gpr[6] = (0u | 0u);
    goto L_088CB910;
L_088CB910:
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    goto L_088CB918;
L_088CB918:
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    goto L_088CB920;
L_088CB920:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(128)));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    if (ctx.gpr[11] == 0u) {
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
        goto L_088CB930;
    }
    goto L_088CB930;
L_088CB930:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[9]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_088CB920;
      }
      goto L_088CB940;
    }
L_088CB940:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[10]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(132));
      if (branch_taken) {
          goto L_088CB918;
      }
      goto L_088CB950;
    }
L_088CB950:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1320));
      if (branch_taken) {
          goto L_088CB910;
      }
      goto L_088CB960;
    }
L_088CB960:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB9F4;
      }
      goto L_088CB968;
    }
L_088CB968:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(1320));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[7] << 7u);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[9] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    goto L_088CB994;
L_088CB994:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(128)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
        goto L_088CB9A4;
    }
    goto L_088CB9A4;
L_088CB9A4:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_088CB994;
      }
      goto L_088CB9B4;
    }
L_088CB9B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB9F4;
      }
      goto L_088CB9BC;
    }
L_088CB9BC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(1320));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    goto L_088CB9D4;
L_088CB9D4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(128)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
        goto L_088CB9E4;
    }
    goto L_088CB9E4;
L_088CB9E4:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(132));
      if (branch_taken) {
          goto L_088CB9D4;
      }
      goto L_088CB9F4;
    }
L_088CB9F4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CB9FC:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088CBA44;
      }
      goto L_088CBA14;
    }
L_088CBA14:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088CBA38;
      }
      goto L_088CBA20;
    }
L_088CBA20:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088CBA40;
      }
      goto L_088CBA28;
    }
L_088CBA28:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_088CBA40;
      }
      goto L_088CBA30;
    }
L_088CBA30:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 270u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CBA38:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 10u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CBA40:
    ctx.gpr[2] = (0u | 3u);
    goto L_088CBA44;
L_088CBA44:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CBA4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    ctx.gpr[31] = (0x088CBA8Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088CBA8Cu) goto L_088CBA8C;
    return;
L_088CBA8C:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088CBAA0u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088CBAA0u) goto L_088CBAA0;
    return;
L_088CBAA0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[31] = (0x088CBAB0u);
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7916));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 197u, 0x08A9CA08u>(ctx, &aot_mem) && ctx.pc == 0x088CBAB0u) goto L_088CBAB0;
    return;
L_088CBAB0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088CBAC0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088CBAC0u) goto L_088CBAC0;
    return;
L_088CBAC0:
    ctx.gpr[31] = (0x088CBAC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088CBAC8u) goto L_088CBAC8;
    return;
L_088CBAC8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[23] = (2221u << 16u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(17692));
      if (branch_taken) {
          goto L_088CBB44;
      }
      goto L_088CBAE0;
    }
L_088CBAE0:
    ctx.gpr[21] = (ctx.gpr[29] | 0u);
    ctx.gpr[20] = (0u | 3u);
    ctx.gpr[22] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    ctx.gpr[30] = (ctx.gpr[16] + ctx.gpr[18]);
    goto L_088CBAF0;
L_088CBAF0:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[19]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(-1))))));
        goto L_088CBB28;
    }
    goto L_088CBB00;
L_088CBB00:
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(-1))))));
        goto L_088CBB20;
    }
    goto L_088CBB08;
L_088CBB08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x088CBB14u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9E0F4u>(ctx, &aot_mem) && ctx.pc == 0x088CBB14u) goto L_088CBB14;
    return;
L_088CBB14:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(-1))))));
    goto L_088CBB20;
L_088CBB20:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088CBB2C;
      }
      goto L_088CBB28;
    }
L_088CBB28:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088CBB2C;
L_088CBB2C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088CBAF0;
      }
      goto L_088CBB44;
    }
L_088CBB44:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088CBB54u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088CBB54u) goto L_088CBB54;
    return;
L_088CBB54:
    ctx.gpr[31] = (0x088CBB5Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088CBB5Cu) goto L_088CBB5C;
    return;
L_088CBB5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088CBB70u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088CBB70u) goto L_088CBB70;
    return;
L_088CBB70:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088CBBA0;
      }
      goto L_088CBB80;
    }
L_088CBB80:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    goto L_088CBB84;
L_088CBB84:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(15))))));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088CBB84;
      }
      goto L_088CBBA0;
    }
L_088CBBA0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CBBD0:
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1320));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (ctx.gpr[4] << 7u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(84)));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[2] = (0u | 1u);
        goto L_088CBC14;
    }
    goto L_088CBC14;
L_088CBC14:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CBC1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(17644)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (2221u << 16u);
      if (branch_taken) {
          goto L_088CBD48;
      }
      goto L_088CBC4C;
    }
L_088CBC4C:
    ctx.gpr[31] = (0x088CBC54u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 208u, 0x088213B0u>(ctx, &aot_mem) && ctx.pc == 0x088CBC54u) goto L_088CBC54;
    return;
L_088CBC54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (2221u << 16u);
      if (branch_taken) {
          goto L_088CBC84;
      }
      goto L_088CBC64;
    }
L_088CBC64:
    ctx.gpr[31] = (0x088CBC6Cu);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 141u, 0x0884C934u>(ctx, &aot_mem) && ctx.pc == 0x088CBC6Cu) goto L_088CBC6C;
    return;
L_088CBC6C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088CBF8C;
      }
      goto L_088CBC78;
    }
L_088CBC78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_088CBF8C;
      }
      goto L_088CBC84;
    }
L_088CBC84:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(17645)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CBCA4;
      }
      goto L_088CBC90;
    }
L_088CBC90:
    ctx.gpr[31] = (0x088CBC98u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 716u, 0x08806E2Cu>(ctx, &aot_mem) && ctx.pc == 0x088CBC98u) goto L_088CBC98;
    return;
L_088CBC98:
    ctx.gpr[31] = (0x088CBCA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 518u, 0x08867460u>(ctx, &aot_mem) && ctx.pc == 0x088CBCA0u) goto L_088CBCA0;
    return;
L_088CBCA0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(17645), static_cast<std::uint8_t>(ctx.gpr[18]));
    goto L_088CBCA4;
L_088CBCA4:
    ctx.gpr[31] = (0x088CBCACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 715u, 0x08806E20u>(ctx, &aot_mem) && ctx.pc == 0x088CBCACu) goto L_088CBCAC;
    return;
L_088CBCAC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CBF8C;
      }
      goto L_088CBCB4;
    }
L_088CBCB4:
    ctx.gpr[31] = (0x088CBCBCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 449u, 0x0884DC1Cu>(ctx, &aot_mem) && ctx.pc == 0x088CBCBCu) goto L_088CBCBC;
    return;
L_088CBCBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12020)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CBCE8;
      }
      goto L_088CBCCC;
    }
L_088CBCCC:
    ctx.gpr[31] = (0x088CBCD4u);
    ctx.gpr[16] = (0u | 0u);
    goto L_088C9940;
L_088CBCD4:
    ctx.gpr[4] = (0u | 1u);
    if (ctx.gpr[2] == ctx.gpr[4]) {
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
        goto L_088CBD0C;
    }
    goto L_088CBCE0;
L_088CBCE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CBD0C;
      }
      goto L_088CBCE8;
    }
L_088CBCE8:
    ctx.gpr[31] = (0x088CBCF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 203u, 0x088CCA60u>(ctx, &aot_mem) && ctx.pc == 0x088CBCF0u) goto L_088CBCF0;
    return;
L_088CBCF0:
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
L_088CBD0C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088CBF84;
      }
      goto L_088CBD14;
    }
L_088CBD14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (2189u << 16u);
      if (branch_taken) {
          goto L_088CBF84;
      }
      goto L_088CBD24;
    }
L_088CBD24:
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[31] = (0x088CBD30u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28084));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 706u, 0x0884BCFCu>(ctx, &aot_mem) && ctx.pc == 0x088CBD30u) goto L_088CBD30;
    return;
L_088CBD30:
    ctx.gpr[4] = (2189u << 16u);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[31] = (0x088CBD40u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28076));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 709u, 0x0884BD28u>(ctx, &aot_mem) && ctx.pc == 0x088CBD40u) goto L_088CBD40;
    return;
L_088CBD40:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(17644), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_088CBF84;
      }
      goto L_088CBD48;
    }
L_088CBD48:
    ctx.gpr[31] = (0x088CBD50u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 208u, 0x088213B0u>(ctx, &aot_mem) && ctx.pc == 0x088CBD50u) goto L_088CBD50;
    return;
L_088CBD50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12028)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088CBD88;
      }
      goto L_088CBD64;
    }
L_088CBD64:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088CBD88;
      }
      goto L_088CBD6C;
    }
L_088CBD6C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12028), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12028)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088CBF8C;
      }
      goto L_088CBD80;
    }
L_088CBD80:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12028), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088CBF8C;
      }
      goto L_088CBD88;
    }
L_088CBD88:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12024)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_088CBDCC;
      }
      goto L_088CBD94;
    }
L_088CBD94:
    ctx.gpr[31] = (0x088CBD9Cu);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 718u, 0x08806E50u>(ctx, &aot_mem) && ctx.pc == 0x088CBD9Cu) goto L_088CBD9C;
    return;
L_088CBD9C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088CBF8C;
      }
      goto L_088CBDA4;
    }
L_088CBDA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[31] = (0x088CBDB4u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(12024), static_cast<std::uint8_t>(ctx.gpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 175u, 0x0884CBA0u>(ctx, &aot_mem) && ctx.pc == 0x088CBDB4u) goto L_088CBDB4;
    return;
L_088CBDB4:
    ctx.gpr[31] = (0x088CBDBCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 18u, 0x0884C14Cu>(ctx, &aot_mem) && ctx.pc == 0x088CBDBCu) goto L_088CBDBC;
    return;
L_088CBDBC:
    ctx.gpr[31] = (0x088CBDC4u);
    // nop
    goto L_088CA750;
L_088CBDC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CBF8C;
      }
      goto L_088CBDCC;
    }
L_088CBDCC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088CBDF8;
      }
      goto L_088CBDD8;
    }
L_088CBDD8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
        goto L_088CBDFC;
    }
    goto L_088CBDF0;
L_088CBDF0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    goto L_088CBDF8;
L_088CBDF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_088CBDFC;
L_088CBDFC:
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CBE88;
      }
      goto L_088CBE08;
    }
L_088CBE08:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7696)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CBE20:
    ctx.gpr[31] = (0x088CBE28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088C996C;
L_088CBE28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CBE88;
      }
      goto L_088CBE30;
    }
L_088CBE30:
    ctx.gpr[31] = (0x088CBE38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088C9C68;
L_088CBE38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CBE88;
      }
      goto L_088CBE40;
    }
L_088CBE40:
    ctx.gpr[31] = (0x088CBE48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 57u, 0x088CC2D4u>(ctx, &aot_mem) && ctx.pc == 0x088CBE48u) goto L_088CBE48;
    return;
L_088CBE48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CBE88;
      }
      goto L_088CBE50;
    }
L_088CBE50:
    ctx.gpr[31] = (0x088CBE58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088C9DCC;
L_088CBE58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CBE88;
      }
      goto L_088CBE60;
    }
L_088CBE60:
    ctx.gpr[31] = (0x088CBE68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088CA040;
L_088CBE68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CBE88;
      }
      goto L_088CBE70;
    }
L_088CBE70:
    ctx.gpr[31] = (0x088CBE78u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 143u, 0x088CC720u>(ctx, &aot_mem) && ctx.pc == 0x088CBE78u) goto L_088CBE78;
    return;
L_088CBE78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CBE88;
      }
      goto L_088CBE80;
    }
L_088CBE80:
    ctx.gpr[31] = (0x088CBE88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088CA2A8;
L_088CBE88:
    ctx.gpr[31] = (0x088CBE90u);
    ctx.gpr[4] = (0u | 32768u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 170u, 0x08944C38u>(ctx, &aot_mem) && ctx.pc == 0x088CBE90u) goto L_088CBE90;
    return;
L_088CBE90:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088CBEE4;
      }
      goto L_088CBE98;
    }
L_088CBE98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 1024u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_088CBEC0;
    }
    goto L_088CBEA8;
L_088CBEA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (0u | 30u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088CBEC0;
L_088CBEC0:
    ctx.gpr[5] = (0u | 2048u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088CBEE4;
      }
      goto L_088CBECC;
    }
L_088CBECC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (0u | 30u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_088CBEE4;
L_088CBEE4:
    ctx.gpr[31] = (0x088CBEECu);
    // nop
    goto L_088CA750;
L_088CBEEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CBF14;
      }
      goto L_088CBEFC;
    }
L_088CBEFC:
    ctx.gpr[31] = (0x088CBF04u);
    // nop
    ctx.pc = 0x08AB45BCu;
    return;
L_088CBF04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
      if (branch_taken) {
          goto L_088CBF54;
      }
      goto L_088CBF14;
    }
L_088CBF14:
    if (static_cast<std::int32_t>(ctx.gpr[5]) <= 0) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
        goto L_088CBF58;
    }
    goto L_088CBF1C;
L_088CBF1C:
    ctx.gpr[31] = (0x088CBF24u);
    // nop
    ctx.pc = 0x08AB45BCu;
    return;
L_088CBF24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    ctx.gpr[5] = (46u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14656));
    ctx.gpr[6] = (ctx.gpr[2] - ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 31u);
      if (branch_taken) {
          goto L_088CBF54;
      }
      goto L_088CBF44;
    }
L_088CBF44:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17640)));
    goto L_088CBF54;
L_088CBF54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    goto L_088CBF58;
L_088CBF58:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[18];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088CBF68;
      }
      goto L_088CBF60;
    }
L_088CBF60:
    ctx.gpr[31] = (0x088CBF68u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 363u, 0x0883ACDCu>(ctx, &aot_mem) && ctx.pc == 0x088CBF68u) goto L_088CBF68;
    return;
L_088CBF68:
    ctx.gpr[31] = (0x088CBF70u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 952u, 0x0881FB40u>(ctx, &aot_mem) && ctx.pc == 0x088CBF70u) goto L_088CBF70;
    return;
L_088CBF70:
    ctx.gpr[31] = (0x088CBF78u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 565u, 0x0881E2BCu>(ctx, &aot_mem) && ctx.pc == 0x088CBF78u) goto L_088CBF78;
    return;
L_088CBF78:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088CBF84u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 712u, 0x08817360u>(ctx, &aot_mem) && ctx.pc == 0x088CBF84u) goto L_088CBF84;
    return;
L_088CBF84:
    ctx.gpr[31] = (0x088CBF8Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 208u, 0x088213B0u>(ctx, &aot_mem) && ctx.pc == 0x088CBF8Cu) goto L_088CBF8C;
    return;
L_088CBF8C:
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
L_088CBFA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-624));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(596), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(600), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(604), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(608), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(612), ctx.gpr[31]);
    ctx.gpr[31] = (0x088CBFE0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 952u, 0x0881FB40u>(ctx, &aot_mem) && ctx.pc == 0x088CBFE0u) goto L_088CBFE0;
    return;
L_088CBFE0:
    ctx.gpr[31] = (0x088CBFE8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 565u, 0x0881E2BCu>(ctx, &aot_mem) && ctx.pc == 0x088CBFE8u) goto L_088CBFE8;
    return;
L_088CBFE8:
    ctx.gpr[19] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[19];
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 22u, 0x088CC118u>(ctx, &aot_mem); return;
      }
      goto L_088CBFF4;
    }
L_088CBFF4:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7912));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[4]);
    ctx.pc = 0x088CC000u; return;
}

void recomp_unit_0049(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0049_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_49(Runtime &runtime) {
    runtime.register_generated_unit(49u, 0x088C8000u, 16384u, &recomp_unit_0049, &recomp_unit_0049_entry);
    runtime.register_function(0x088C8000u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8018u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8020u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8038u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C804Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C806Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8098u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C80A0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C80B4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C80C4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C80D0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C80E0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C80E4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C80ECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C80F4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8108u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8118u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C811Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8124u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C812Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8134u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C813Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C814Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8168u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C81A4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C81BCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C81D8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C81ECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8204u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8224u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8234u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8244u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8264u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C826Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8280u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C828Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C82A4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C82B0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C82B8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C82CCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C82E4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C82F0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C836Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8394u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8404u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C840Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8414u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8420u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8428u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8448u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8450u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8458u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8464u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C846Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8478u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8484u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C848Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8490u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C849Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C84A4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C84B0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C84BCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C84C4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C84C8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C84D4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C84DCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C84ECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C84F8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8500u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8508u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8510u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8518u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8520u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8528u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8530u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8538u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8540u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C854Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8554u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C855Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8564u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8570u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8578u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8580u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8584u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C858Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8594u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8598u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C85A0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C85ACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C85DCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C85F8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8604u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8620u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C862Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8648u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8654u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8690u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C86B0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C875Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C87ECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C88C8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8958u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8980u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8998u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C89B0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C89C8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C89D8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C89E8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C89F8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8A18u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8A40u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8AF0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8B0Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8B14u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8B28u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8B44u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8B74u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8BB0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8BC8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8BD4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8BDCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8BE4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8BE8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8C24u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8C38u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8C60u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8CACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8CB8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8CC0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8CC8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8CD0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8CD8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8D14u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8D18u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8D3Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8D48u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8D50u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8D6Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8D80u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8D88u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8DA4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8DE0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8DF4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8DFCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8E04u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8E0Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8E18u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8E20u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8E28u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8E30u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8E34u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8E44u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8E5Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8E9Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8EB0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8EC0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8ED0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8EF4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8EFCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8F04u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8F0Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8F1Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8F24u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8F34u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8F40u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8F5Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8F90u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8FA0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8FACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8FB4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8FCCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8FE4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C8FF4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C901Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C902Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9034u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C907Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9090u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C90ACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C90C4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C90DCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C90E4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9120u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C912Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C918Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9198u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C91A0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C91A8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C91B0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C91B8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C91C8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C91DCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C91F0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C91F8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9200u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9208u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9210u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9218u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9220u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9238u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C924Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9254u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9274u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9280u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9288u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9294u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9310u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9334u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C93B8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C93BCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C93C4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C93CCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C93D4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C93E4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C93ECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C93FCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9404u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9414u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9420u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9428u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C942Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9434u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C943Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9444u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9450u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9458u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C945Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9464u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C946Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9474u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9480u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9488u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9494u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C94A0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C94A8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C94BCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C94C8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C94D0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C94E0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C94ECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C94F4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C950Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9514u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C951Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9538u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C953Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9544u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C954Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9568u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9570u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9578u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9580u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C958Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C95A8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C95B4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C95C0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C95F0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9600u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9620u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9630u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9644u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9654u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9660u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9688u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C96A8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9708u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9710u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C971Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9738u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C974Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9764u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9778u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9798u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C97A8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C97B8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C97C0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C97D4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C97DCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C97ECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C981Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C986Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9874u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C989Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C98B4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C98BCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9908u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C991Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9924u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9940u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9950u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9958u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9960u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C996Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C99A4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C99B4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C99C4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C99D0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C99DCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C99F8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9A0Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9A1Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9A38u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9A44u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9A50u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9A58u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9A68u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9A6Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9A78u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9A84u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9A88u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9A8Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9A94u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9AA4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9AB8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9AC8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9AD8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9AE4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9AF0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9AF4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9AFCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9B10u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9B1Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9B28u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9B30u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9B38u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9B3Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9B40u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9B48u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9B5Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9B68u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9B74u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9B7Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9B84u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9B8Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9BA4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9BACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9BC8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9BD0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9BD8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9BE0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9BE8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9BF0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9BFCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9C14u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9C1Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9C24u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9C2Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9C44u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9C68u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9C90u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9CA4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9CBCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9CC4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9CCCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9CDCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9CE0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9CECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9CFCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9D10u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9D18u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9D24u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9D3Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9D50u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9D58u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9D60u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9D68u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9D6Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9D70u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9D78u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9D88u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9D9Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9DA4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9DACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9DB4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9DCCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9DF8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9E00u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9E10u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9E1Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9E38u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9E40u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9E5Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9E60u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9E64u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9E6Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9EBCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9EC4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9ECCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9ED4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9EF0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9F04u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9F1Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9F24u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9F28u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9F34u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9F44u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9F4Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9F60u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9F68u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9F70u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9F80u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9F84u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9F90u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9FA4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9FB0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9FB8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9FC8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9FD0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9FD8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9FDCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9FE4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088C9FF4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA000u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA008u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA018u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA020u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA028u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA040u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA074u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA088u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA094u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA09Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA0B0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA0B8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA0C0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA0D0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA0D4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA0DCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA0ECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA0F8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA100u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA10Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA114u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA11Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA12Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA130u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA138u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA148u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA154u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA164u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA16Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA174u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA184u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA18Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA19Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA1A8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA1B0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA1B8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA1BCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA1C4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA1D4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA1E0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA1E8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA1F0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA1F8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA200u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA208u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA210u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA218u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA250u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA25Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA270u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA278u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA288u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA2A8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA2CCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA2E0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA2F4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA2FCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA30Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA318u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA320u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA334u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA33Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA340u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA348u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA35Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA368u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA37Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA388u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA394u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA3A8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA3ACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA3BCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA3C4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA3CCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA3D8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA3E0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA3F4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA3FCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA40Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA428u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA430u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA438u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA44Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA458u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA460u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA468u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA46Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA474u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA484u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA490u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA498u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA4A0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA4BCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA4E4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA500u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA520u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA530u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA544u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA55Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA57Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA590u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA598u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA5A0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA5A8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA5B0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA5C8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA5E4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA60Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA64Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA654u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA664u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA690u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA698u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA6A0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA6A8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA6B0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA6B8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA6C0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA6CCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA6D8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA6ECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA6F4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA704u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA71Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA734u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA750u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA76Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA77Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA794u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA79Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA7A4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA7ACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA7B4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA7BCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA7C4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA7CCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA7D4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA7E0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA7E8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA7F4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA814u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA81Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA830u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA848u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA850u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA858u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA860u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA868u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA870u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA878u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA880u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA888u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA890u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA8A0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA8C8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA8D8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA8E8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA8F8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA908u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA918u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA928u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA940u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA954u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA964u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA978u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA98Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA9A0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA9B4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA9BCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA9D4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CA9E4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAA08u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAA4Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAA60u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAA68u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAA78u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAA80u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAA88u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAAA0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAAB8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAAC4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAAE0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAAECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAB04u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAB1Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAB2Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAB44u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAB54u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAB60u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAB6Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAB78u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAB84u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAB90u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAB98u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CABA0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CABACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CABB8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CABC0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CABC8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CABD4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CABDCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CABE4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAC0Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAC28u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAC38u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAC48u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAC58u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAC68u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAC70u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAC7Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAC84u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAC94u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAC98u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CACA0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CACB0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CACB8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CACC8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CACD0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CACDCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CACE8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CACF0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CACF8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAD00u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAD08u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAD18u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAD24u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAD34u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAD44u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAD6Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAD84u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAD98u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CADACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CADC0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CADC8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CADE0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CADF0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAE14u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAE94u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAEC4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAED0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAED8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAF04u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAF20u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAF48u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAF50u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAF64u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAF6Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAF7Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAF88u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAFA4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAFB8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAFC0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CAFECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB014u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB01Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB02Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB09Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB0BCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB0D0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB0D8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB0DCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB0E4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB0F4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB100u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB114u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB144u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB14Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB164u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB174u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB188u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB190u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB1A8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB1B8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB1DCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB1FCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB20Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB21Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB224u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB234u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB244u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB25Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB284u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB294u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB2A4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB2B8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB2C4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB2DCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB2E4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB2F4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB304u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB314u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB328u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB33Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB344u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB35Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB36Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB390u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB3B8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB3C8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB3D8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB3F0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB404u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB40Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB424u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB434u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB458u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB484u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB494u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB49Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB4B0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB4BCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB4C8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB4D8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB4E0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB4F4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB504u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB50Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB514u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB51Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB530u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB540u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB548u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB550u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB55Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB568u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB570u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB584u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB594u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB5ACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB5D8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB5F0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB5F4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB5FCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB61Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB624u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB638u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB63Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB644u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB660u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB664u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB674u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB6A4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB6D0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB6E0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB6FCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB708u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB718u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB724u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB740u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB758u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB784u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB794u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB7ACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB7B8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB7D4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB7DCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB7ECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB7F8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB810u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB828u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB844u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB85Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB864u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB86Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB874u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB87Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB884u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB88Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB894u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB89Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB8A0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB8ACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB8B8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB8C4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB8C8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB8D0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB8E8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB8FCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB904u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB90Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB910u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB918u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB920u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB930u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB940u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB950u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB960u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB968u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB994u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB9A4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB9B4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB9BCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB9D4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB9E4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB9F4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CB9FCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBA14u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBA20u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBA28u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBA30u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBA38u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBA40u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBA44u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBA4Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBA8Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBAA0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBAB0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBAC0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBAC8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBAE0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBAF0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBB00u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBB08u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBB14u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBB20u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBB28u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBB2Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBB44u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBB54u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBB5Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBB70u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBB80u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBB84u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBBA0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBBD0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBC14u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBC1Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBC4Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBC54u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBC64u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBC6Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBC78u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBC84u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBC90u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBC98u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBCA0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBCA4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBCACu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBCB4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBCBCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBCCCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBCD4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBCE0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBCE8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBCF0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBD0Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBD14u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBD24u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBD30u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBD40u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBD48u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBD50u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBD64u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBD6Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBD80u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBD88u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBD94u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBD9Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBDA4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBDB4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBDBCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBDC4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBDCCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBDD8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBDF0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBDF8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBDFCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBE08u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBE20u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBE28u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBE30u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBE38u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBE40u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBE48u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBE50u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBE58u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBE60u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBE68u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBE70u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBE78u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBE80u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBE88u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBE90u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBE98u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBEA8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBEC0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBECCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBEE4u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBEECu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBEFCu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBF04u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBF14u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBF1Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBF24u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBF44u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBF54u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBF58u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBF60u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBF68u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBF70u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBF78u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBF84u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBF8Cu, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBFA8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBFE0u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBFE8u, &recomp_unit_0049, "recomp_unit_0049");
    runtime.register_function(0x088CBFF4u, &recomp_unit_0049, "recomp_unit_0049");
}
} // namespace psprecomp

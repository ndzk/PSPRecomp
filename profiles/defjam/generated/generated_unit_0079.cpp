#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0079[4078] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 7,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0,
    11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0,
    16, 0, 0, 17, 0, 0, 0, 18, 0, 0, 19, 0, 20, 0, 0, 21, 0, 0, 22, 0, 23, 0, 0, 0, 24, 25, 0, 0, 26, 0, 27, 0,
    0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33,
    0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 40,
    0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 43, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 49, 0, 50, 0, 0, 51, 0, 0, 0, 52, 0, 0, 53, 0, 54, 0, 0, 55, 0, 0, 56, 0, 57, 0, 0, 0, 58, 59,
    0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 65, 0, 66, 0, 0, 0, 0,
    0, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 74,
    0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0,
    0, 78, 0, 79, 0, 0, 0, 80, 0, 81, 0, 82, 0, 83, 0, 84, 0, 85, 0, 86, 0, 0, 87, 0, 88, 0, 0, 0, 89, 0, 90, 0,
    0, 0, 91, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 94, 0, 95, 0, 0, 96, 0, 0, 97, 0, 98, 0, 0, 99, 0, 100, 0, 0, 101,
    0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    107, 0, 0, 108, 0, 109, 0, 0, 110, 0, 111, 0, 112, 0, 0, 0, 113, 0, 114, 0, 115, 0, 116, 0, 117, 0, 118, 0, 0, 119, 0, 0,
    0, 120, 0, 0, 0, 121, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 127, 0, 0,
    128, 0, 0, 0, 129, 0, 130, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 136, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0,
    140, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0,
    0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    155, 0, 0, 0, 0, 156, 0, 157, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 162,
    0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 175,
    0, 0, 0, 0, 0, 176, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 180, 0, 181, 0, 0, 0, 182, 183, 0, 184, 0, 0, 185, 0,
    0, 0, 0, 0, 186, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    189, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 194, 0, 0, 0, 195, 0, 196, 0, 197, 0, 0, 198, 0,
    0, 0, 0, 199, 200, 0, 0, 0, 0, 0, 201, 0, 202, 0, 203, 0, 0, 204, 0, 0, 205, 0, 206, 0, 207, 0, 208, 0, 0, 0, 0, 209,
    0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 216, 0, 217, 0, 218, 0, 0,
    0, 0, 219, 220, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 224, 0, 225, 0, 0, 0, 0, 226, 0, 227, 0, 0, 0, 0, 0,
    228, 0, 0, 0, 229, 0, 230, 0, 231, 0, 0, 232, 0, 233, 0, 234, 0, 0, 0, 235, 236, 0, 0, 237, 0, 0, 238, 239, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242,
    0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 245, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0,
    0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 252, 0, 253, 0, 254, 255, 0, 0, 256, 0, 257, 0, 258, 0, 0,
    0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 263, 264, 0, 0, 265,
    0, 0, 266, 0, 0, 0, 267, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0,
    0, 272, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 275, 0, 276, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 279, 0, 280, 0,
    0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0,
    0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 290, 0, 0, 291, 0, 292, 0, 293, 0, 0, 0, 0, 0, 0,
    294, 0, 0, 295, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0,
    0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 309, 0, 0,
    0, 0, 0, 310, 0, 0, 0, 311, 0, 312, 0, 0, 0, 313, 0, 314, 0, 0, 0, 315, 0, 316, 0, 317, 0, 0, 318, 0, 319, 320, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 322, 0, 0, 0, 323, 0, 324, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    326, 0, 327, 0, 0, 0, 328, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 331, 0, 0, 0, 332, 0, 333, 0, 334,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 336, 0, 0, 0, 0, 337, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339,
    0, 340, 0, 0, 0, 341, 342, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 346, 0, 0, 347, 0, 348, 349, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 351, 0, 352, 0, 0, 353, 0, 0, 354, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0,
    0, 0, 0, 0, 0, 357, 0, 358, 0, 359, 0, 0, 360, 0, 0, 0, 0, 361, 0, 362, 0, 363, 0, 364, 0, 365, 0, 0, 366, 0, 0, 0,
    0, 0, 0, 367, 0, 368, 0, 369, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 372, 0, 0, 0, 373, 0, 374, 0, 375, 0, 376, 0, 377, 0,
    0, 378, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 381, 0, 382, 0,
    383, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 386, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    388, 0, 389, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 397,
    0, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 400, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0,
    0, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 409, 410, 0, 411, 0, 0, 412, 0, 0, 0, 0,
    413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 414, 415, 0, 0, 0, 0, 0, 0, 0, 416, 0, 417, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0,
    0, 421, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 424, 0, 425, 0, 426, 427, 0, 428, 0, 0, 0, 0, 429, 0, 430, 0,
    431, 0, 0, 0, 0, 432, 433, 0, 434, 0, 0, 435, 0, 0, 0, 436, 0, 437, 0, 0, 0, 438, 0, 439, 0, 0, 0, 0, 0, 440, 0, 441,
    0, 442, 443, 0, 0, 0, 0, 0, 444, 445, 446, 0, 447, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 449, 0, 450, 0, 451, 0, 452, 0, 453,
    0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0,
    0, 0, 459, 0, 0, 0, 460, 0, 0, 461, 0, 462, 0, 463, 0, 0, 464, 0, 465, 0, 0, 466, 0, 467, 0, 0, 468, 0, 469, 470, 0, 471,
    472, 473, 0, 0, 474, 0, 0, 0, 475, 0, 476, 0, 0, 477, 0, 0, 478, 0, 479, 0, 0, 480, 0, 481, 0, 482, 0, 483, 484, 485, 0, 0,
    486, 0, 0, 0, 487, 0, 488, 0, 489, 0, 0, 0, 490, 0, 491, 0, 492, 493, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 497, 0, 0, 498, 0, 0, 499, 0,
    0, 0, 500, 0, 501, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 504, 0, 505, 0, 506, 0, 507, 508, 0, 509, 0, 0,
    0, 510, 511, 0, 0, 512, 0, 0, 513, 0, 514, 0, 0, 0, 0, 515, 0, 516, 0, 517, 0, 518, 0, 519, 0, 520, 0, 521, 0, 522, 523, 0,
    0, 0, 0, 524, 525, 0, 0, 526, 0, 527, 0, 0, 0, 0, 0, 0, 528, 0, 0, 529, 0, 0, 0, 0, 0, 530, 0, 531, 0, 0, 0, 0,
    532, 0, 0, 0, 0, 533, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 536, 0, 537, 0, 0, 538, 0, 0, 0, 539, 0, 0, 0, 540, 0, 541, 0, 0, 542, 0, 543, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 544, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 547, 0, 0, 0, 548, 0,
    549, 0, 0, 0, 550, 551, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 554, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0,
    556, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 559, 0, 0, 0, 0, 560, 0, 0, 561, 0, 0, 0, 0, 0, 0,
    562, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 565, 0, 0, 566, 0, 567, 0, 0, 568, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 571, 0, 572, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 576, 0, 0, 0, 0, 0,
    0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 579, 0, 580, 0, 0, 0, 0, 0, 581, 0, 0, 582, 0, 583, 0, 584, 0,
    0, 585, 0, 0, 0, 0, 0, 586, 0, 0, 587, 588, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 593,
    0, 0, 0, 594, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0,
    0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    607, 0, 0, 0, 0, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 0, 0, 610, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 616, 0, 0, 617, 0, 0, 0, 618, 0, 0, 0, 0, 619,
    0, 0, 0, 0, 620, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 623, 0, 0, 0, 624, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0,
    0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0,
    0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 634,
    0, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0,
    0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 0, 0, 0, 641, 0,
    0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0,
    0, 645, 0, 0, 0, 646, 0, 0, 647, 0, 0, 0, 648, 0, 0, 649, 0, 0, 650, 0, 651, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 653,
    0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 656, 0, 0, 0, 657, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 660, 0, 0, 0, 0, 0,
    661, 0, 0, 0, 662, 0, 0, 0, 0, 663, 0, 0, 664, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 672, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 678, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 681,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 684,
    685, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 690, 0, 0, 0, 0, 0, 0, 691, 0, 0,
    0, 692, 0, 0, 0, 693, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 696, 0, 0, 0, 0, 0, 697, 0, 0, 0, 0, 0, 698, 0, 699, 0, 0, 0, 0, 0, 0, 0, 0, 700, 0, 0, 701, 0, 702, 0,
    0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 707, 0, 0, 708, 0, 709, 0, 0, 0, 710, 0, 711, 0, 0, 0, 0, 0, 712, 0, 0, 0,
    0, 0, 713, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0, 715, 0, 0, 716, 0, 0, 0, 0, 0, 717, 0, 0, 0, 0, 718, 0, 719, 0, 0,
    0, 0, 720, 721, 0, 0, 0, 0, 0, 722, 0, 0, 0, 0, 723, 0, 0, 0, 0, 724, 0, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0, 0,
    726, 0, 0, 0, 0, 727, 728, 0, 0, 0, 729, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 730, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 731, 0, 732, 0, 0, 0, 733, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 735, 0, 736, 0, 737, 738, 0, 739, 0, 740, 741, 0,
    0, 0, 742, 0, 743, 0, 0, 0, 744, 745, 0, 0, 746, 0, 0, 0, 747, 748, 0, 0, 749, 0, 0, 750, 0, 0, 0, 0, 751, 0, 0, 0,
    0, 0, 0, 0, 0, 752, 0, 0, 0, 0, 0, 0, 0, 0, 0, 753, 0, 0, 0, 0, 0, 0, 0, 0, 0, 754, 755, 0, 756, 0, 0, 0,
    0, 757, 0, 0, 0, 0, 758, 759, 0, 0, 0, 0, 0, 760,
};
void recomp_unit_0079_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08940000u;
        entry_id = (entry_delta < 16312u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0079[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08940000;
    case 2u: goto L_0894002C;
    case 3u: goto L_08940044;
    case 4u: goto L_08940050;
    case 5u: goto L_08940060;
    case 6u: goto L_0894006C;
    case 7u: goto L_0894007C;
    case 8u: goto L_089400AC;
    case 9u: goto L_089400F0;
    case 10u: goto L_089400F8;
    case 11u: goto L_08940100;
    case 12u: goto L_08940128;
    case 13u: goto L_08940130;
    case 14u: goto L_08940144;
    case 15u: goto L_08940178;
    case 16u: goto L_08940180;
    case 17u: goto L_0894018C;
    case 18u: goto L_0894019C;
    case 19u: goto L_089401A8;
    case 20u: goto L_089401B0;
    case 21u: goto L_089401BC;
    case 22u: goto L_089401C8;
    case 23u: goto L_089401D0;
    case 24u: goto L_089401E0;
    case 25u: goto L_089401E4;
    case 26u: goto L_089401F0;
    case 27u: goto L_089401F8;
    case 28u: goto L_0894021C;
    case 29u: goto L_08940244;
    case 30u: goto L_0894024C;
    case 31u: goto L_08940254;
    case 32u: goto L_0894025C;
    case 33u: goto L_0894027C;
    case 34u: goto L_08940284;
    case 35u: goto L_089402A4;
    case 36u: goto L_089402AC;
    case 37u: goto L_089402CC;
    case 38u: goto L_089402D4;
    case 39u: goto L_089402F4;
    case 40u: goto L_089402FC;
    case 41u: goto L_0894031C;
    case 42u: goto L_08940344;
    case 43u: goto L_08940388;
    case 44u: goto L_08940390;
    case 45u: goto L_08940398;
    case 46u: goto L_089403C0;
    case 47u: goto L_089403C8;
    case 48u: goto L_089403DC;
    case 49u: goto L_08940410;
    case 50u: goto L_08940418;
    case 51u: goto L_08940424;
    case 52u: goto L_08940434;
    case 53u: goto L_08940440;
    case 54u: goto L_08940448;
    case 55u: goto L_08940454;
    case 56u: goto L_08940460;
    case 57u: goto L_08940468;
    case 58u: goto L_08940478;
    case 59u: goto L_0894047C;
    case 60u: goto L_08940488;
    case 61u: goto L_08940490;
    case 62u: goto L_089404B4;
    case 63u: goto L_089404D4;
    case 64u: goto L_089404DC;
    case 65u: goto L_089404E4;
    case 66u: goto L_089404EC;
    case 67u: goto L_08940508;
    case 68u: goto L_08940510;
    case 69u: goto L_0894052C;
    case 70u: goto L_08940534;
    case 71u: goto L_08940550;
    case 72u: goto L_08940558;
    case 73u: goto L_08940574;
    case 74u: goto L_0894057C;
    case 75u: goto L_08940598;
    case 76u: goto L_089405C0;
    case 77u: goto L_089405EC;
    case 78u: goto L_08940604;
    case 79u: goto L_0894060C;
    case 80u: goto L_0894061C;
    case 81u: goto L_08940624;
    case 82u: goto L_0894062C;
    case 83u: goto L_08940634;
    case 84u: goto L_0894063C;
    case 85u: goto L_08940644;
    case 86u: goto L_0894064C;
    case 87u: goto L_08940658;
    case 88u: goto L_08940660;
    case 89u: goto L_08940670;
    case 90u: goto L_08940678;
    case 91u: goto L_08940688;
    case 92u: goto L_08940694;
    case 93u: goto L_089406A0;
    case 94u: goto L_089406B4;
    case 95u: goto L_089406BC;
    case 96u: goto L_089406C8;
    case 97u: goto L_089406D4;
    case 98u: goto L_089406DC;
    case 99u: goto L_089406E8;
    case 100u: goto L_089406F0;
    case 101u: goto L_089406FC;
    case 102u: goto L_08940704;
    case 103u: goto L_08940720;
    case 104u: goto L_08940728;
    case 105u: goto L_08940734;
    case 106u: goto L_08940758;
    case 107u: goto L_08940780;
    case 108u: goto L_0894078C;
    case 109u: goto L_08940794;
    case 110u: goto L_089407A0;
    case 111u: goto L_089407A8;
    case 112u: goto L_089407B0;
    case 113u: goto L_089407C0;
    case 114u: goto L_089407C8;
    case 115u: goto L_089407D0;
    case 116u: goto L_089407D8;
    case 117u: goto L_089407E0;
    case 118u: goto L_089407E8;
    case 119u: goto L_089407F4;
    case 120u: goto L_08940804;
    case 121u: goto L_08940814;
    case 122u: goto L_0894081C;
    case 123u: goto L_08940824;
    case 124u: goto L_08940844;
    case 125u: goto L_08940864;
    case 126u: goto L_08940870;
    case 127u: goto L_08940874;
    case 128u: goto L_08940880;
    case 129u: goto L_08940890;
    case 130u: goto L_08940898;
    case 131u: goto L_089408A8;
    case 132u: goto L_089408B0;
    case 133u: goto L_089408D0;
    case 134u: goto L_08940914;
    case 135u: goto L_08940920;
    case 136u: goto L_08940928;
    case 137u: goto L_08940930;
    case 138u: goto L_08940948;
    case 139u: goto L_0894095C;
    case 140u: goto L_08940980;
    case 141u: goto L_0894099C;
    case 142u: goto L_089409A4;
    case 143u: goto L_089409CC;
    case 144u: goto L_089409DC;
    case 145u: goto L_089409F4;
    case 146u: goto L_08940A24;
    case 147u: goto L_08940A48;
    case 148u: goto L_08940A60;
    case 149u: goto L_08940A78;
    case 150u: goto L_08940A8C;
    case 151u: goto L_08940AA8;
    case 152u: goto L_08940AB0;
    case 153u: goto L_08940ABC;
    case 154u: goto L_08940ACC;
    case 155u: goto L_08940B00;
    case 156u: goto L_08940B14;
    case 157u: goto L_08940B1C;
    case 158u: goto L_08940B28;
    case 159u: goto L_08940B38;
    case 160u: goto L_08940B60;
    case 161u: goto L_08940B74;
    case 162u: goto L_08940B7C;
    case 163u: goto L_08940B94;
    case 164u: goto L_08940BA8;
    case 165u: goto L_08940BB8;
    case 166u: goto L_08940BD8;
    case 167u: goto L_08940C28;
    case 168u: goto L_08940C44;
    case 169u: goto L_08940C8C;
    case 170u: goto L_08940C9C;
    case 171u: goto L_08940D3C;
    case 172u: goto L_08940D50;
    case 173u: goto L_08940D6C;
    case 174u: goto L_08940D78;
    case 175u: goto L_08940D7C;
    case 176u: goto L_08940D94;
    case 177u: goto L_08940D98;
    case 178u: goto L_08940DB0;
    case 179u: goto L_08940DC0;
    case 180u: goto L_08940DC8;
    case 181u: goto L_08940DD0;
    case 182u: goto L_08940DE0;
    case 183u: goto L_08940DE4;
    case 184u: goto L_08940DEC;
    case 185u: goto L_08940DF8;
    case 186u: goto L_08940E10;
    case 187u: goto L_08940E14;
    case 188u: goto L_08940E4C;
    case 189u: goto L_08940E80;
    case 190u: goto L_08940E88;
    case 191u: goto L_08940E9C;
    case 192u: goto L_08940EB8;
    case 193u: goto L_08940EC0;
    case 194u: goto L_08940ECC;
    case 195u: goto L_08940EDC;
    case 196u: goto L_08940EE4;
    case 197u: goto L_08940EEC;
    case 198u: goto L_08940EF8;
    case 199u: goto L_08940F0C;
    case 200u: goto L_08940F10;
    case 201u: goto L_08940F28;
    case 202u: goto L_08940F30;
    case 203u: goto L_08940F38;
    case 204u: goto L_08940F44;
    case 205u: goto L_08940F50;
    case 206u: goto L_08940F58;
    case 207u: goto L_08940F60;
    case 208u: goto L_08940F68;
    case 209u: goto L_08940F7C;
    case 210u: goto L_08940F8C;
    case 211u: goto L_08940F98;
    case 212u: goto L_08940FA8;
    case 213u: goto L_08940FB0;
    case 214u: goto L_08940FC8;
    case 215u: goto L_08940FDC;
    case 216u: goto L_08940FE4;
    case 217u: goto L_08940FEC;
    case 218u: goto L_08940FF4;
    case 219u: goto L_08941008;
    case 220u: goto L_0894100C;
    case 221u: goto L_08941014;
    case 222u: goto L_0894102C;
    case 223u: goto L_0894103C;
    case 224u: goto L_08941044;
    case 225u: goto L_0894104C;
    case 226u: goto L_08941060;
    case 227u: goto L_08941068;
    case 228u: goto L_08941080;
    case 229u: goto L_08941090;
    case 230u: goto L_08941098;
    case 231u: goto L_089410A0;
    case 232u: goto L_089410AC;
    case 233u: goto L_089410B4;
    case 234u: goto L_089410BC;
    case 235u: goto L_089410CC;
    case 236u: goto L_089410D0;
    case 237u: goto L_089410DC;
    case 238u: goto L_089410E8;
    case 239u: goto L_089410EC;
    case 240u: goto L_08941114;
    case 241u: goto L_0894116C;
    case 242u: goto L_0894117C;
    case 243u: goto L_089411A0;
    case 244u: goto L_089411AC;
    case 245u: goto L_089411B8;
    case 246u: goto L_089411C8;
    case 247u: goto L_089411D4;
    case 248u: goto L_089411EC;
    case 249u: goto L_08941208;
    case 250u: goto L_08941220;
    case 251u: goto L_0894123C;
    case 252u: goto L_08941244;
    case 253u: goto L_0894124C;
    case 254u: goto L_08941254;
    case 255u: goto L_08941258;
    case 256u: goto L_08941264;
    case 257u: goto L_0894126C;
    case 258u: goto L_08941274;
    case 259u: goto L_0894128C;
    case 260u: goto L_089412A4;
    case 261u: goto L_089412CC;
    case 262u: goto L_089412E0;
    case 263u: goto L_089412EC;
    case 264u: goto L_089412F0;
    case 265u: goto L_089412FC;
    case 266u: goto L_08941308;
    case 267u: goto L_08941318;
    case 268u: goto L_0894131C;
    case 269u: goto L_0894132C;
    case 270u: goto L_0894135C;
    case 271u: goto L_08941378;
    case 272u: goto L_08941384;
    case 273u: goto L_08941388;
    case 274u: goto L_089413B0;
    case 275u: goto L_089413BC;
    case 276u: goto L_089413C4;
    case 277u: goto L_089413CC;
    case 278u: goto L_089413E4;
    case 279u: goto L_089413F0;
    case 280u: goto L_089413F8;
    case 281u: goto L_08941408;
    case 282u: goto L_0894141C;
    case 283u: goto L_08941428;
    case 284u: goto L_08941438;
    case 285u: goto L_0894146C;
    case 286u: goto L_08941488;
    case 287u: goto L_08941498;
    case 288u: goto L_089414A8;
    case 289u: goto L_089414BC;
    case 290u: goto L_089414C8;
    case 291u: goto L_089414D4;
    case 292u: goto L_089414DC;
    case 293u: goto L_089414E4;
    case 294u: goto L_08941500;
    case 295u: goto L_0894150C;
    case 296u: goto L_08941518;
    case 297u: goto L_08941528;
    case 298u: goto L_08941540;
    case 299u: goto L_08941548;
    case 300u: goto L_08941558;
    case 301u: goto L_08941570;
    case 302u: goto L_08941584;
    case 303u: goto L_08941594;
    case 304u: goto L_089415A8;
    case 305u: goto L_089415B8;
    case 306u: goto L_089415C8;
    case 307u: goto L_089415D8;
    case 308u: goto L_089415E8;
    case 309u: goto L_089415F4;
    case 310u: goto L_0894160C;
    case 311u: goto L_0894161C;
    case 312u: goto L_08941624;
    case 313u: goto L_08941634;
    case 314u: goto L_0894163C;
    case 315u: goto L_0894164C;
    case 316u: goto L_08941654;
    case 317u: goto L_0894165C;
    case 318u: goto L_08941668;
    case 319u: goto L_08941670;
    case 320u: goto L_08941674;
    case 321u: goto L_089416A4;
    case 322u: goto L_089416AC;
    case 323u: goto L_089416BC;
    case 324u: goto L_089416C4;
    case 325u: goto L_089416CC;
    case 326u: goto L_08941700;
    case 327u: goto L_08941708;
    case 328u: goto L_08941718;
    case 329u: goto L_08941720;
    case 330u: goto L_08941754;
    case 331u: goto L_0894175C;
    case 332u: goto L_0894176C;
    case 333u: goto L_08941774;
    case 334u: goto L_0894177C;
    case 335u: goto L_089417B0;
    case 336u: goto L_089417B8;
    case 337u: goto L_089417CC;
    case 338u: goto L_089417D0;
    case 339u: goto L_089417FC;
    case 340u: goto L_08941804;
    case 341u: goto L_08941814;
    case 342u: goto L_08941818;
    case 343u: goto L_0894182C;
    case 344u: goto L_0894183C;
    case 345u: goto L_08941854;
    case 346u: goto L_08941860;
    case 347u: goto L_0894186C;
    case 348u: goto L_08941874;
    case 349u: goto L_08941878;
    case 350u: goto L_089418B0;
    case 351u: goto L_089418B4;
    case 352u: goto L_089418BC;
    case 353u: goto L_089418C8;
    case 354u: goto L_089418D4;
    case 355u: goto L_089418DC;
    case 356u: goto L_089418F4;
    case 357u: goto L_08941914;
    case 358u: goto L_0894191C;
    case 359u: goto L_08941924;
    case 360u: goto L_08941930;
    case 361u: goto L_08941944;
    case 362u: goto L_0894194C;
    case 363u: goto L_08941954;
    case 364u: goto L_0894195C;
    case 365u: goto L_08941964;
    case 366u: goto L_08941970;
    case 367u: goto L_0894198C;
    case 368u: goto L_08941994;
    case 369u: goto L_0894199C;
    case 370u: goto L_089419AC;
    case 371u: goto L_089419BC;
    case 372u: goto L_089419C8;
    case 373u: goto L_089419D8;
    case 374u: goto L_089419E0;
    case 375u: goto L_089419E8;
    case 376u: goto L_089419F0;
    case 377u: goto L_089419F8;
    case 378u: goto L_08941A04;
    case 379u: goto L_08941A10;
    case 380u: goto L_08941A68;
    case 381u: goto L_08941A70;
    case 382u: goto L_08941A78;
    case 383u: goto L_08941A80;
    case 384u: goto L_08941A8C;
    case 385u: goto L_08941AA4;
    case 386u: goto L_08941AAC;
    case 387u: goto L_08941AB8;
    case 388u: goto L_08941B00;
    case 389u: goto L_08941B08;
    case 390u: goto L_08941B0C;
    case 391u: goto L_08941B38;
    case 392u: goto L_08941B44;
    case 393u: goto L_08941B8C;
    case 394u: goto L_08941BCC;
    case 395u: goto L_08941BD8;
    case 396u: goto L_08941BE8;
    case 397u: goto L_08941BFC;
    case 398u: goto L_08941C08;
    case 399u: goto L_08941C24;
    case 400u: goto L_08941C40;
    case 401u: goto L_08941C48;
    case 402u: goto L_08941C78;
    case 403u: goto L_08941C94;
    case 404u: goto L_08941CA4;
    case 405u: goto L_08941CE0;
    case 406u: goto L_08941DA0;
    case 407u: goto L_08941DB8;
    case 408u: goto L_08941DCC;
    case 409u: goto L_08941DD4;
    case 410u: goto L_08941DD8;
    case 411u: goto L_08941DE0;
    case 412u: goto L_08941DEC;
    case 413u: goto L_08941E00;
    case 414u: goto L_08941EA0;
    case 415u: goto L_08941EA4;
    case 416u: goto L_08941EC4;
    case 417u: goto L_08941ECC;
    case 418u: goto L_08941EEC;
    case 419u: goto L_08941F1C;
    case 420u: goto L_08941F70;
    case 421u: goto L_08941F84;
    case 422u: goto L_08941FA4;
    case 423u: goto L_08941FB4;
    case 424u: goto L_08941FC0;
    case 425u: goto L_08941FC8;
    case 426u: goto L_08941FD0;
    case 427u: goto L_08941FD4;
    case 428u: goto L_08941FDC;
    case 429u: goto L_08941FF0;
    case 430u: goto L_08941FF8;
    case 431u: goto L_08942000;
    case 432u: goto L_08942014;
    case 433u: goto L_08942018;
    case 434u: goto L_08942020;
    case 435u: goto L_0894202C;
    case 436u: goto L_0894203C;
    case 437u: goto L_08942044;
    case 438u: goto L_08942054;
    case 439u: goto L_0894205C;
    case 440u: goto L_08942074;
    case 441u: goto L_0894207C;
    case 442u: goto L_08942084;
    case 443u: goto L_08942088;
    case 444u: goto L_089420A0;
    case 445u: goto L_089420A4;
    case 446u: goto L_089420A8;
    case 447u: goto L_089420B0;
    case 448u: goto L_089420BC;
    case 449u: goto L_089420DC;
    case 450u: goto L_089420E4;
    case 451u: goto L_089420EC;
    case 452u: goto L_089420F4;
    case 453u: goto L_089420FC;
    case 454u: goto L_08942108;
    case 455u: goto L_08942150;
    case 456u: goto L_089421C4;
    case 457u: goto L_089421DC;
    case 458u: goto L_089421F4;
    case 459u: goto L_08942208;
    case 460u: goto L_08942218;
    case 461u: goto L_08942224;
    case 462u: goto L_0894222C;
    case 463u: goto L_08942234;
    case 464u: goto L_08942240;
    case 465u: goto L_08942248;
    case 466u: goto L_08942254;
    case 467u: goto L_0894225C;
    case 468u: goto L_08942268;
    case 469u: goto L_08942270;
    case 470u: goto L_08942274;
    case 471u: goto L_0894227C;
    case 472u: goto L_08942280;
    case 473u: goto L_08942284;
    case 474u: goto L_08942290;
    case 475u: goto L_089422A0;
    case 476u: goto L_089422A8;
    case 477u: goto L_089422B4;
    case 478u: goto L_089422C0;
    case 479u: goto L_089422C8;
    case 480u: goto L_089422D4;
    case 481u: goto L_089422DC;
    case 482u: goto L_089422E4;
    case 483u: goto L_089422EC;
    case 484u: goto L_089422F0;
    case 485u: goto L_089422F4;
    case 486u: goto L_08942300;
    case 487u: goto L_08942310;
    case 488u: goto L_08942318;
    case 489u: goto L_08942320;
    case 490u: goto L_08942330;
    case 491u: goto L_08942338;
    case 492u: goto L_08942340;
    case 493u: goto L_08942344;
    case 494u: goto L_08942354;
    case 495u: goto L_0894239C;
    case 496u: goto L_089423D0;
    case 497u: goto L_089423E0;
    case 498u: goto L_089423EC;
    case 499u: goto L_089423F8;
    case 500u: goto L_08942408;
    case 501u: goto L_08942410;
    case 502u: goto L_08942420;
    case 503u: goto L_08942444;
    case 504u: goto L_08942450;
    case 505u: goto L_08942458;
    case 506u: goto L_08942460;
    case 507u: goto L_08942468;
    case 508u: goto L_0894246C;
    case 509u: goto L_08942474;
    case 510u: goto L_08942484;
    case 511u: goto L_08942488;
    case 512u: goto L_08942494;
    case 513u: goto L_089424A0;
    case 514u: goto L_089424A8;
    case 515u: goto L_089424BC;
    case 516u: goto L_089424C4;
    case 517u: goto L_089424CC;
    case 518u: goto L_089424D4;
    case 519u: goto L_089424DC;
    case 520u: goto L_089424E4;
    case 521u: goto L_089424EC;
    case 522u: goto L_089424F4;
    case 523u: goto L_089424F8;
    case 524u: goto L_0894250C;
    case 525u: goto L_08942510;
    case 526u: goto L_0894251C;
    case 527u: goto L_08942524;
    case 528u: goto L_08942540;
    case 529u: goto L_0894254C;
    case 530u: goto L_08942564;
    case 531u: goto L_0894256C;
    case 532u: goto L_08942580;
    case 533u: goto L_08942594;
    case 534u: goto L_089425A8;
    case 535u: goto L_089425DC;
    case 536u: goto L_0894261C;
    case 537u: goto L_08942624;
    case 538u: goto L_08942630;
    case 539u: goto L_08942640;
    case 540u: goto L_08942650;
    case 541u: goto L_08942658;
    case 542u: goto L_08942664;
    case 543u: goto L_0894266C;
    case 544u: goto L_0894269C;
    case 545u: goto L_089426A4;
    case 546u: goto L_089426DC;
    case 547u: goto L_089426E8;
    case 548u: goto L_089426F8;
    case 549u: goto L_08942700;
    case 550u: goto L_08942710;
    case 551u: goto L_08942714;
    case 552u: goto L_08942724;
    case 553u: goto L_08942740;
    case 554u: goto L_08942754;
    case 555u: goto L_08942768;
    case 556u: goto L_08942780;
    case 557u: goto L_08942788;
    case 558u: goto L_089427B0;
    case 559u: goto L_089427C4;
    case 560u: goto L_089427D8;
    case 561u: goto L_089427E4;
    case 562u: goto L_08942800;
    case 563u: goto L_0894280C;
    case 564u: goto L_08942830;
    case 565u: goto L_08942844;
    case 566u: goto L_08942850;
    case 567u: goto L_08942858;
    case 568u: goto L_08942864;
    case 569u: goto L_089428B8;
    case 570u: goto L_089428C8;
    case 571u: goto L_089428E4;
    case 572u: goto L_089428EC;
    case 573u: goto L_08942918;
    case 574u: goto L_08942928;
    case 575u: goto L_0894295C;
    case 576u: goto L_08942968;
    case 577u: goto L_08942984;
    case 578u: goto L_08942A28;
    case 579u: goto L_08942A3C;
    case 580u: goto L_08942A44;
    case 581u: goto L_08942A5C;
    case 582u: goto L_08942A68;
    case 583u: goto L_08942A70;
    case 584u: goto L_08942A78;
    case 585u: goto L_08942A84;
    case 586u: goto L_08942A9C;
    case 587u: goto L_08942AA8;
    case 588u: goto L_08942AAC;
    case 589u: goto L_08942AC8;
    case 590u: goto L_08942B08;
    case 591u: goto L_08942B4C;
    case 592u: goto L_08942B60;
    case 593u: goto L_08942B7C;
    case 594u: goto L_08942B8C;
    case 595u: goto L_08942BA4;
    case 596u: goto L_08942BCC;
    case 597u: goto L_08942BF4;
    case 598u: goto L_08942C1C;
    case 599u: goto L_08942C44;
    case 600u: goto L_08942C6C;
    case 601u: goto L_08942C94;
    case 602u: goto L_08942CBC;
    case 603u: goto L_08942CE4;
    case 604u: goto L_08942D08;
    case 605u: goto L_08942D30;
    case 606u: goto L_08942D58;
    case 607u: goto L_08942D80;
    case 608u: goto L_08942DA8;
    case 609u: goto L_08942DD0;
    case 610u: goto L_08942DF8;
    case 611u: goto L_08942E20;
    case 612u: goto L_08942E48;
    case 613u: goto L_08942E6C;
    case 614u: goto L_08942E94;
    case 615u: goto L_08942EBC;
    case 616u: goto L_08942ECC;
    case 617u: goto L_08942ED8;
    case 618u: goto L_08942EE8;
    case 619u: goto L_08942EFC;
    case 620u: goto L_08942F10;
    case 621u: goto L_08942F1C;
    case 622u: goto L_08942F54;
    case 623u: goto L_08942F94;
    case 624u: goto L_08942FA4;
    case 625u: goto L_08942FBC;
    case 626u: goto L_08942FE0;
    case 627u: goto L_08943004;
    case 628u: goto L_08943028;
    case 629u: goto L_0894304C;
    case 630u: goto L_08943070;
    case 631u: goto L_08943094;
    case 632u: goto L_089430B8;
    case 633u: goto L_089430DC;
    case 634u: goto L_089430FC;
    case 635u: goto L_08943120;
    case 636u: goto L_08943144;
    case 637u: goto L_08943168;
    case 638u: goto L_0894318C;
    case 639u: goto L_089431B0;
    case 640u: goto L_089431D4;
    case 641u: goto L_089431F8;
    case 642u: goto L_0894321C;
    case 643u: goto L_0894323C;
    case 644u: goto L_08943260;
    case 645u: goto L_08943284;
    case 646u: goto L_08943294;
    case 647u: goto L_089432A0;
    case 648u: goto L_089432B0;
    case 649u: goto L_089432BC;
    case 650u: goto L_089432C8;
    case 651u: goto L_089432D0;
    case 652u: goto L_089432E8;
    case 653u: goto L_089432FC;
    case 654u: goto L_0894331C;
    case 655u: goto L_08943340;
    case 656u: goto L_08943388;
    case 657u: goto L_08943398;
    case 658u: goto L_089433B0;
    case 659u: goto L_089433D8;
    case 660u: goto L_089433E8;
    case 661u: goto L_08943400;
    case 662u: goto L_08943410;
    case 663u: goto L_08943424;
    case 664u: goto L_08943430;
    case 665u: goto L_08943440;
    case 666u: goto L_0894346C;
    case 667u: goto L_08943498;
    case 668u: goto L_089434C4;
    case 669u: goto L_089434F0;
    case 670u: goto L_0894351C;
    case 671u: goto L_08943548;
    case 672u: goto L_08943574;
    case 673u: goto L_089435A0;
    case 674u: goto L_089435C8;
    case 675u: goto L_089435F4;
    case 676u: goto L_08943620;
    case 677u: goto L_0894364C;
    case 678u: goto L_08943678;
    case 679u: goto L_089436A4;
    case 680u: goto L_089436D0;
    case 681u: goto L_089436FC;
    case 682u: goto L_08943728;
    case 683u: goto L_08943750;
    case 684u: goto L_0894377C;
    case 685u: goto L_08943780;
    case 686u: goto L_089437B0;
    case 687u: goto L_089439F4;
    case 688u: goto L_08943A2C;
    case 689u: goto L_08943A50;
    case 690u: goto L_08943A58;
    case 691u: goto L_08943A74;
    case 692u: goto L_08943A84;
    case 693u: goto L_08943A94;
    case 694u: goto L_08943AAC;
    case 695u: goto L_08943AD0;
    case 696u: goto L_08943B08;
    case 697u: goto L_08943B20;
    case 698u: goto L_08943B38;
    case 699u: goto L_08943B40;
    case 700u: goto L_08943B64;
    case 701u: goto L_08943B70;
    case 702u: goto L_08943B78;
    case 703u: goto L_08943B94;
    case 704u: goto L_08943BBC;
    case 705u: goto L_08943BE4;
    case 706u: goto L_08943C18;
    case 707u: goto L_08943C2C;
    case 708u: goto L_08943C38;
    case 709u: goto L_08943C40;
    case 710u: goto L_08943C50;
    case 711u: goto L_08943C58;
    case 712u: goto L_08943C70;
    case 713u: goto L_08943C88;
    case 714u: goto L_08943CA0;
    case 715u: goto L_08943CB4;
    case 716u: goto L_08943CC0;
    case 717u: goto L_08943CD8;
    case 718u: goto L_08943CEC;
    case 719u: goto L_08943CF4;
    case 720u: goto L_08943D08;
    case 721u: goto L_08943D0C;
    case 722u: goto L_08943D24;
    case 723u: goto L_08943D38;
    case 724u: goto L_08943D4C;
    case 725u: goto L_08943D68;
    case 726u: goto L_08943D80;
    case 727u: goto L_08943D94;
    case 728u: goto L_08943D98;
    case 729u: goto L_08943DA8;
    case 730u: goto L_08943DD8;
    case 731u: goto L_08943E0C;
    case 732u: goto L_08943E14;
    case 733u: goto L_08943E24;
    case 734u: goto L_08943E40;
    case 735u: goto L_08943E50;
    case 736u: goto L_08943E58;
    case 737u: goto L_08943E60;
    case 738u: goto L_08943E64;
    case 739u: goto L_08943E6C;
    case 740u: goto L_08943E74;
    case 741u: goto L_08943E78;
    case 742u: goto L_08943E88;
    case 743u: goto L_08943E90;
    case 744u: goto L_08943EA0;
    case 745u: goto L_08943EA4;
    case 746u: goto L_08943EB0;
    case 747u: goto L_08943EC0;
    case 748u: goto L_08943EC4;
    case 749u: goto L_08943ED0;
    case 750u: goto L_08943EDC;
    case 751u: goto L_08943EF0;
    case 752u: goto L_08943F14;
    case 753u: goto L_08943F3C;
    case 754u: goto L_08943F64;
    case 755u: goto L_08943F68;
    case 756u: goto L_08943F70;
    case 757u: goto L_08943F84;
    case 758u: goto L_08943F98;
    case 759u: goto L_08943F9C;
    case 760u: goto L_08943FB4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08940000:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894002C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(23304)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08940044u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08940044u) goto L_08940044;
    return;
L_08940044:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08940050u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x08940050u) goto L_08940050;
    return;
L_08940050:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08940060u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x08940060u) goto L_08940060;
    return;
L_08940060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x0894006Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 741u, 0x0882EE90u>(ctx, &aot_mem) && ctx.pc == 0x0894006Cu) goto L_0894006C;
    return;
L_0894006C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0894007Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 881u, 0x0882F7DCu>(ctx, &aot_mem) && ctx.pc == 0x0894007Cu) goto L_0894007C;
    return;
L_0894007C:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089400AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(22532));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[17] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08940100;
      }
      goto L_089400F0;
    }
L_089400F0:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_08940128;
      }
      goto L_089400F8;
    }
L_089400F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1))))));
      if (branch_taken) {
          goto L_08940144;
      }
      goto L_08940100;
    }
L_08940100:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
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
L_08940128:
    ctx.gpr[31] = (0x08940130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 74u, 0x0896C71Cu>(ctx, &aot_mem) && ctx.pc == 0x08940130u) goto L_08940130;
    return;
L_08940130:
    ctx.gpr[4] = (0u | 5u);
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[20] = (ctx.hi);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1))))));
    goto L_08940144;
L_08940144:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(5))))));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[19] = (ctx.gpr[20] << 2u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[20] + ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[21];
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089401B0;
      }
      goto L_08940178;
    }
L_08940178:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[18]);
    goto L_08940180;
L_08940180:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1))))));
    if (ctx.gpr[7] != ctx.gpr[21]) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
        goto L_0894019C;
    }
    goto L_0894018C;
L_0894018C:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5));
      if (branch_taken) {
          goto L_089401F8;
      }
      goto L_0894019C;
    }
L_0894019C:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08940180;
      }
      goto L_089401A8;
    }
L_089401A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(-5));
      if (branch_taken) {
          goto L_089401F8;
      }
      goto L_089401B0;
    }
L_089401B0:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[18]);
    goto L_089401BC;
L_089401BC:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1))))));
    if (ctx.gpr[8] != ctx.gpr[21]) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
        goto L_089401E4;
    }
    goto L_089401C8;
L_089401C8:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089401E0;
      }
      goto L_089401D0;
    }
L_089401D0:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5));
      if (branch_taken) {
          goto L_089401F8;
      }
      goto L_089401E0;
    }
L_089401E0:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_089401E4;
L_089401E4:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089401BC;
      }
      goto L_089401F0;
    }
L_089401F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(-5));
      if (branch_taken) {
          goto L_089401F8;
      }
      goto L_089401F8;
    }
L_089401F8:
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(22520)));
    ctx.gpr[8] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(22528), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0894031C;
      }
      goto L_0894021C;
    }
L_0894021C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22524)));
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9696));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(22332)));
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08940284;
      }
      goto L_08940244;
    }
L_08940244:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089402AC;
      }
      goto L_0894024C;
    }
L_0894024C:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089402D4;
      }
      goto L_08940254;
    }
L_08940254:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_089402FC;
      }
      goto L_0894025C;
    }
L_0894025C:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894027Cu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(9708));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0894027Cu) goto L_0894027C;
    return;
L_0894027C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894031C;
      }
      goto L_08940284;
    }
L_08940284:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089402A4u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(9716));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x089402A4u) goto L_089402A4;
    return;
L_089402A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894031C;
      }
      goto L_089402AC;
    }
L_089402AC:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089402CCu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(9724));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x089402CCu) goto L_089402CC;
    return;
L_089402CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894031C;
      }
      goto L_089402D4;
    }
L_089402D4:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089402F4u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(9732));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x089402F4u) goto L_089402F4;
    return;
L_089402F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894031C;
      }
      goto L_089402FC;
    }
L_089402FC:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894031Cu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(9740));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0894031Cu) goto L_0894031C;
    return;
L_0894031C:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
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
L_08940344:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(22532));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[17] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08940398;
      }
      goto L_08940388;
    }
L_08940388:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_089403C0;
      }
      goto L_08940390;
    }
L_08940390:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1))))));
      if (branch_taken) {
          goto L_089403DC;
      }
      goto L_08940398;
    }
L_08940398:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
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
L_089403C0:
    ctx.gpr[31] = (0x089403C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 74u, 0x0896C71Cu>(ctx, &aot_mem) && ctx.pc == 0x089403C8u) goto L_089403C8;
    return;
L_089403C8:
    ctx.gpr[4] = (0u | 5u);
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[20] = (ctx.hi);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1))))));
    goto L_089403DC;
L_089403DC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(5))))));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[19] = (ctx.gpr[20] << 2u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[20] + ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[21];
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08940448;
      }
      goto L_08940410;
    }
L_08940410:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[18]);
    goto L_08940418;
L_08940418:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1))))));
    if (ctx.gpr[7] != ctx.gpr[21]) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
        goto L_08940434;
    }
    goto L_08940424;
L_08940424:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5));
      if (branch_taken) {
          goto L_08940490;
      }
      goto L_08940434;
    }
L_08940434:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08940418;
      }
      goto L_08940440;
    }
L_08940440:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(-5));
      if (branch_taken) {
          goto L_08940490;
      }
      goto L_08940448;
    }
L_08940448:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[18]);
    goto L_08940454;
L_08940454:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1))))));
    if (ctx.gpr[8] != ctx.gpr[21]) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
        goto L_0894047C;
    }
    goto L_08940460;
L_08940460:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08940478;
      }
      goto L_08940468;
    }
L_08940468:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5));
      if (branch_taken) {
          goto L_08940490;
      }
      goto L_08940478;
    }
L_08940478:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_0894047C;
L_0894047C:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08940454;
      }
      goto L_08940488;
    }
L_08940488:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(-5));
      if (branch_taken) {
          goto L_08940490;
      }
      goto L_08940490;
    }
L_08940490:
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(22520)));
    ctx.gpr[8] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(22528), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08940598;
      }
      goto L_089404B4;
    }
L_089404B4:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9748));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(22324)));
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08940510;
      }
      goto L_089404D4;
    }
L_089404D4:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08940534;
      }
      goto L_089404DC;
    }
L_089404DC:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08940558;
      }
      goto L_089404E4;
    }
L_089404E4:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0894057C;
      }
      goto L_089404EC;
    }
L_089404EC:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08940508u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(9708));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08940508u) goto L_08940508;
    return;
L_08940508:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940598;
      }
      goto L_08940510;
    }
L_08940510:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894052Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(9716));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0894052Cu) goto L_0894052C;
    return;
L_0894052C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940598;
      }
      goto L_08940534;
    }
L_08940534:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08940550u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(9724));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08940550u) goto L_08940550;
    return;
L_08940550:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940598;
      }
      goto L_08940558;
    }
L_08940558:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08940574u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(9732));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08940574u) goto L_08940574;
    return;
L_08940574:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940598;
      }
      goto L_0894057C;
    }
L_0894057C:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08940598u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(9740));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08940598u) goto L_08940598;
    return;
L_08940598:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
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
L_089405C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22520)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0894060C;
      }
      goto L_089405EC;
    }
L_089405EC:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 244u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08940604u);
    ctx.gpr[5] = (0u | 146u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08940604u) goto L_08940604;
    return;
L_08940604:
    ctx.gpr[31] = (0x0894060Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(22520), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 535u, 0x0893FA78u>(ctx, &aot_mem) && ctx.pc == 0x0894060Cu) goto L_0894060C;
    return;
L_0894060C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22520)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0894062C;
      }
      goto L_0894061C;
    }
L_0894061C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08940734;
      }
      goto L_08940624;
    }
L_08940624:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940644;
      }
      goto L_0894062C;
    }
L_0894062C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089406C8;
      }
      goto L_08940634;
    }
L_08940634:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (0u | 1u);
        goto L_08940734;
    }
    goto L_0894063C;
L_0894063C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940734;
      }
      goto L_08940644;
    }
L_08940644:
    ctx.gpr[31] = (0x0894064Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 960u, 0x0881FBC0u>(ctx, &aot_mem) && ctx.pc == 0x0894064Cu) goto L_0894064C;
    return;
L_0894064C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089406BC;
      }
      goto L_08940658;
    }
L_08940658:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940734;
      }
      goto L_08940660;
    }
L_08940660:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(252)));
    ctx.gpr[18] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08940734;
      }
      goto L_08940670;
    }
L_08940670:
    ctx.gpr[31] = (0x08940678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 858u, 0x0881F478u>(ctx, &aot_mem) && ctx.pc == 0x08940678u) goto L_08940678;
    return;
L_08940678:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x08940688u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_089400AC;
L_08940688:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_089406A0;
      }
      goto L_08940694;
    }
L_08940694:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(240), ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08940734;
      }
      goto L_089406A0;
    }
L_089406A0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(132));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089406B4u);
    ctx.gpr[6] = (0u | 146u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 465u, 0x08809CF0u>(ctx, &aot_mem) && ctx.pc == 0x089406B4u) goto L_089406B4;
    return;
L_089406B4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08940734;
      }
      goto L_089406BC;
    }
L_089406BC:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08940734;
      }
      goto L_089406C8;
    }
L_089406C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089406E8;
      }
      goto L_089406D4;
    }
L_089406D4:
    ctx.gpr[31] = (0x089406DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    goto L_089425DC;
L_089406DC:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08940734;
      }
      goto L_089406E8;
    }
L_089406E8:
    ctx.gpr[31] = (0x089406F0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(132));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 487u, 0x08809EA8u>(ctx, &aot_mem) && ctx.pc == 0x089406F0u) goto L_089406F0;
    return;
L_089406F0:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(196));
      if (branch_taken) {
          goto L_08940734;
      }
      goto L_089406FC;
    }
L_089406FC:
    ctx.gpr[31] = (0x08940704u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x08940704u) goto L_08940704;
    return;
L_08940704:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(232));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[31] = (0x08940720u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    goto L_089425DC;
L_08940720:
    ctx.gpr[31] = (0x08940728u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 555u, 0x0880A5E8u>(ctx, &aot_mem) && ctx.pc == 0x08940728u) goto L_08940728;
    return;
L_08940728:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08940734;
      }
      goto L_08940734;
    }
L_08940734:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08940758:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[5] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22520)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    ctx.gpr[31] = (0x08940780u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 859u, 0x0881F488u>(ctx, &aot_mem) && ctx.pc == 0x08940780u) goto L_08940780;
    return;
L_08940780:
    ctx.gpr[19] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_089408B0;
      }
      goto L_0894078C;
    }
L_0894078C:
    ctx.gpr[31] = (0x08940794u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x08940794u) goto L_08940794;
    return;
L_08940794:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089407A8;
      }
      goto L_089407A0;
    }
L_089407A0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089408B0;
      }
      goto L_089407A8;
    }
L_089407A8:
    ctx.gpr[31] = (0x089407B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 858u, 0x0881F478u>(ctx, &aot_mem) && ctx.pc == 0x089407B0u) goto L_089407B0;
    return;
L_089407B0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940844;
      }
      goto L_089407C0;
    }
L_089407C0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_08940844;
      }
      goto L_089407C8;
    }
L_089407C8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 13u);
      if (branch_taken) {
          goto L_08940844;
      }
      goto L_089407D0;
    }
L_089407D0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 20u);
      if (branch_taken) {
          goto L_08940844;
      }
      goto L_089407D8;
    }
L_089407D8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 23u);
      if (branch_taken) {
          goto L_08940844;
      }
      goto L_089407E0;
    }
L_089407E0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08940844;
      }
      goto L_089407E8;
    }
L_089407E8:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089407F4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08940344;
L_089407F4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08940804u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x08940804u) goto L_08940804;
    return;
L_08940804:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08940824;
      }
      goto L_08940814;
    }
L_08940814:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08940864;
      }
      goto L_0894081C;
    }
L_0894081C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(132));
      if (branch_taken) {
          goto L_08940874;
      }
      goto L_08940824;
    }
L_08940824:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08940844:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08940864:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(196));
    ctx.gpr[31] = (0x08940870u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x08940870u) goto L_08940870;
    return;
L_08940870:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(132));
    goto L_08940874;
L_08940874:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08940880u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 522u, 0x0880A0E8u>(ctx, &aot_mem) && ctx.pc == 0x08940880u) goto L_08940880;
    return;
L_08940880:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08940890u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 557u, 0x0893FCB8u>(ctx, &aot_mem) && ctx.pc == 0x08940890u) goto L_08940890;
    return;
L_08940890:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940824;
      }
      goto L_08940898;
    }
L_08940898:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089408A8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 561u, 0x0893FD1Cu>(ctx, &aot_mem) && ctx.pc == 0x089408A8u) goto L_089408A8;
    return;
L_089408A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940824;
      }
      goto L_089408B0;
    }
L_089408B0:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089408D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22520)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940E14;
      }
      goto L_08940914;
    }
L_08940914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08940E14;
      }
      goto L_08940920;
    }
L_08940920:
    ctx.gpr[31] = (0x08940928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 533u, 0x0893FA60u>(ctx, &aot_mem) && ctx.pc == 0x08940928u) goto L_08940928;
    return;
L_08940928:
    ctx.gpr[31] = (0x08940930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 858u, 0x0881F478u>(ctx, &aot_mem) && ctx.pc == 0x08940930u) goto L_08940930;
    return;
L_08940930:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (0u | 64u);
    ctx.gpr[31] = (0x08940948u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23308));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08940948u) goto L_08940948;
    return;
L_08940948:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_08940B94;
      }
      goto L_0894095C;
    }
L_0894095C:
    ctx.gpr[20] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22676));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (0u | 4u);
    ctx.gpr[4] = (16672u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08940980;
L_08940980:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[7] = (ctx.gpr[17] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08940B00;
      }
      goto L_0894099C;
    }
L_0894099C:
    if (ctx.gpr[16] != ctx.gpr[19]) {
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
        goto L_089409CC;
    }
    goto L_089409A4;
L_089409A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08940B60;
      }
      goto L_089409CC;
    }
L_089409CC:
    ctx.gpr[7] = (ctx.gpr[8] << 2u);
    ctx.gpr[9] = (ctx.gpr[8] < static_cast<std::uint32_t>(14) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08940A8C;
      }
      goto L_089409DC;
    }
L_089409DC:
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[8]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(10304)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089409F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08940A8C;
      }
      goto L_08940A24;
    }
L_08940A24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 2u);
      if (branch_taken) {
          goto L_08940A8C;
      }
      goto L_08940A48;
    }
L_08940A48:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (0u | 120u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08940A8C;
      }
      goto L_08940A60;
    }
L_08940A60:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (0u | 52u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 5u);
      if (branch_taken) {
          goto L_08940A8C;
      }
      goto L_08940A78;
    }
L_08940A78:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (0u | 115u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[6]);
    ctx.gpr[6] = (0u | 3u);
    goto L_08940A8C;
L_08940A8C:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(60)));
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[11] = (ctx.gpr[8] < ctx.gpr[10] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08940ACC;
      }
      goto L_08940AA8;
    }
L_08940AA8:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.gpr[2] = (ctx.gpr[11] + ctx.gpr[8]);
    goto L_08940AB0;
L_08940AB0:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] == ctx.gpr[5]) {
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
        goto L_08940ABC;
    }
    goto L_08940ABC;
L_08940ABC:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (ctx.gpr[8] < ctx.gpr[10] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[2] = (ctx.gpr[11] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_08940AB0;
      }
      goto L_08940ACC;
    }
L_08940ACC:
    ctx.gpr[5] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08940B60;
      }
      goto L_08940B00;
    }
L_08940B00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(60)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[8] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08940B38;
      }
      goto L_08940B14;
    }
L_08940B14:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[8]);
    goto L_08940B1C;
L_08940B1C:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] == 0u) {
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
        goto L_08940B28;
    }
    goto L_08940B28;
L_08940B28:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_08940B1C;
      }
      goto L_08940B38;
    }
L_08940B38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-4));
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    goto L_08940B60;
L_08940B60:
    ctx.gpr[7] = (ctx.gpr[17] >> 2u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (static_cast<std::int32_t>(ctx.gpr[7]) < 0) {
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
        goto L_08940B74;
    }
    goto L_08940B74;
L_08940B74:
    ctx.gpr[31] = (0x08940B7Cu);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 323u, 0x0893E148u>(ctx, &aot_mem) && ctx.pc == 0x08940B7Cu) goto L_08940B7C;
    return;
L_08940B7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08940980;
      }
      goto L_08940B94;
    }
L_08940B94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2224u << 16u);
      if (branch_taken) {
          goto L_08940D98;
      }
      goto L_08940BA8;
    }
L_08940BA8:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    goto L_08940BB8;
L_08940BB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[19] & 15u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
      if (branch_taken) {
          goto L_08940C28;
      }
      goto L_08940BD8;
    }
L_08940BD8:
    ctx.gpr[4] = (ctx.gpr[19] & 61440u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 12u));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_08940C8C;
      }
      goto L_08940C28;
    }
L_08940C28:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17320)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] & 240u);
      if (branch_taken) {
          goto L_08940D7C;
      }
      goto L_08940C44;
    }
L_08940C44:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 4u));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    goto L_08940C8C;
L_08940C8C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08940C9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 366u, 0x0893EA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08940C9Cu) goto L_08940C9C;
    return;
L_08940C9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08940D3Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 478u, 0x08812DF0u>(ctx, &aot_mem) && ctx.pc == 0x08940D3Cu) goto L_08940D3C;
    return;
L_08940D3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08940D50u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 225u, 0x089D9648u>(ctx, &aot_mem) && ctx.pc == 0x08940D50u) goto L_08940D50;
    return;
L_08940D50:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17320)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_08940D78;
      }
      goto L_08940D6C;
    }
L_08940D6C:
    { const std::uint32_t dividend = ctx.gpr[20]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.hi);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    goto L_08940D78;
L_08940D78:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08940D7C;
L_08940D7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08940BB8;
      }
      goto L_08940D94;
    }
L_08940D94:
    ctx.gpr[4] = (2224u << 16u);
    goto L_08940D98;
L_08940D98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17320)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 33u);
      if (branch_taken) {
          goto L_08940DE4;
      }
      goto L_08940DB0;
    }
L_08940DB0:
    ctx.gpr[16] = (2224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2144));
      if (branch_taken) {
          goto L_08940DC8;
      }
      goto L_08940DC0;
    }
L_08940DC0:
    ctx.gpr[31] = (0x08940DC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 409u, 0x0893EDE4u>(ctx, &aot_mem) && ctx.pc == 0x08940DC8u) goto L_08940DC8;
    return;
L_08940DC8:
    ctx.gpr[31] = (0x08940DD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 387u, 0x0893EB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08940DD0u) goto L_08940DD0;
    return;
L_08940DD0:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22520)));
    ctx.gpr[31] = (0x08940DE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 388u, 0x0893EB94u>(ctx, &aot_mem) && ctx.pc == 0x08940DE0u) goto L_08940DE0;
    return;
L_08940DE0:
    ctx.gpr[4] = (0u | 33u);
    goto L_08940DE4;
L_08940DE4:
    ctx.gpr[31] = (0x08940DECu);
    ctx.gpr[5] = (0u | 80u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 89u, 0x08808344u>(ctx, &aot_mem) && ctx.pc == 0x08940DECu) goto L_08940DEC;
    return;
L_08940DEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08940E14;
      }
      goto L_08940DF8;
    }
L_08940DF8:
    ctx.gpr[4] = (0u | 33u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08940E10u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 830u, 0x08807750u>(ctx, &aot_mem) && ctx.pc == 0x08940E10u) goto L_08940E10;
    return;
L_08940E10:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    goto L_08940E14;
L_08940E14:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08940E4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22520)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (0u | 33u);
      if (branch_taken) {
          goto L_089410EC;
      }
      goto L_08940E80;
    }
L_08940E80:
    ctx.gpr[31] = (0x08940E88u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 89u, 0x08808344u>(ctx, &aot_mem) && ctx.pc == 0x08940E88u) goto L_08940E88;
    return;
L_08940E88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[18] = (2222u << 16u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), 0u);
        goto L_08940E9C;
    }
    goto L_08940E9C;
L_08940E9C:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17320)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2224u << 16u);
      if (branch_taken) {
          goto L_08940EC0;
      }
      goto L_08940EB8;
    }
L_08940EB8:
    ctx.gpr[31] = (0x08940EC0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2144));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 409u, 0x0893EDE4u>(ctx, &aot_mem) && ctx.pc == 0x08940EC0u) goto L_08940EC0;
    return;
L_08940EC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08940EE4;
    }
    goto L_08940ECC;
L_08940ECC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08940EDCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08940EDCu) goto L_08940EDC;
    return;
L_08940EDC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_08940EE4;
L_08940EE4:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
        goto L_08940FE4;
    }
    goto L_08940EEC;
L_08940EEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_08940F98;
    }
    goto L_08940EF8;
L_08940EF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[19] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08940F7C;
      }
      goto L_08940F0C;
    }
L_08940F0C:
    ctx.gpr[21] = (0u | 0u);
    goto L_08940F10;
L_08940F10:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[20]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[22] = (ctx.gpr[4] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_08940F44;
      }
      goto L_08940F28;
    }
L_08940F28:
    ctx.gpr[31] = (0x08940F30u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 355u, 0x0893E8D4u>(ctx, &aot_mem) && ctx.pc == 0x08940F30u) goto L_08940F30;
    return;
L_08940F30:
    ctx.gpr[31] = (0x08940F38u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 357u, 0x0893E900u>(ctx, &aot_mem) && ctx.pc == 0x08940F38u) goto L_08940F38;
    return;
L_08940F38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08940F68;
      }
      goto L_08940F44;
    }
L_08940F44:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[22] = (ctx.gpr[4] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_08940F68;
      }
      goto L_08940F50;
    }
L_08940F50:
    ctx.gpr[31] = (0x08940F58u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 355u, 0x0893E8D4u>(ctx, &aot_mem) && ctx.pc == 0x08940F58u) goto L_08940F58;
    return;
L_08940F58:
    ctx.gpr[31] = (0x08940F60u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 357u, 0x0893E900u>(ctx, &aot_mem) && ctx.pc == 0x08940F60u) goto L_08940F60;
    return;
L_08940F60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    goto L_08940F68;
L_08940F68:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(20));
    ctx.gpr[6] = (ctx.gpr[19] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_08940F10;
      }
      goto L_08940F7C;
    }
L_08940F7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08940F8Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08940F8Cu) goto L_08940F8C;
    return;
L_08940F8C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_08940F98;
L_08940F98:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08940FC8;
      }
      goto L_08940FA8;
    }
L_08940FA8:
    ctx.gpr[31] = (0x08940FB0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 318u, 0x0893E0BCu>(ctx, &aot_mem) && ctx.pc == 0x08940FB0u) goto L_08940FB0;
    return;
L_08940FB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08940FA8;
      }
      goto L_08940FC8;
    }
L_08940FC8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08940FDCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08940FDCu) goto L_08940FDC;
    return;
L_08940FDC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    goto L_08940FE4;
L_08940FE4:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08941044;
    }
    goto L_08940FEC;
L_08940FEC:
    ctx.gpr[31] = (0x08940FF4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 761u, 0x0882EFC4u>(ctx, &aot_mem) && ctx.pc == 0x08940FF4u) goto L_08940FF4;
    return;
L_08940FF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_0894102C;
      }
      goto L_08941008;
    }
L_08941008:
    ctx.gpr[20] = (0u | 0u);
    goto L_0894100C;
L_0894100C:
    ctx.gpr[31] = (0x08941014u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 742u, 0x0882EEA8u>(ctx, &aot_mem) && ctx.pc == 0x08941014u) goto L_08941014;
    return;
L_08941014:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_0894100C;
      }
      goto L_0894102C;
    }
L_0894102C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0894103Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894103Cu) goto L_0894103C;
    return;
L_0894103C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08941044;
L_08941044:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
        goto L_08941098;
    }
    goto L_0894104C;
L_0894104C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[19] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08941080;
      }
      goto L_08941060;
    }
L_08941060:
    ctx.gpr[31] = (0x08941068u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 280u, 0x0880EEA8u>(ctx, &aot_mem) && ctx.pc == 0x08941068u) goto L_08941068;
    return;
L_08941068:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(152));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08941060;
      }
      goto L_08941080;
    }
L_08941080:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08941090u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08941090u) goto L_08941090;
    return;
L_08941090:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    goto L_08941098;
L_08941098:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
        goto L_089410DC;
    }
    goto L_089410A0;
L_089410A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(240)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089410BC;
      }
      goto L_089410AC;
    }
L_089410AC:
    ctx.gpr[31] = (0x089410B4u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 458u, 0x08809C70u>(ctx, &aot_mem) && ctx.pc == 0x089410B4u) goto L_089410B4;
    return;
L_089410B4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), 0u);
      if (branch_taken) {
          goto L_089410D0;
      }
      goto L_089410BC;
    }
L_089410BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089410CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089410CCu) goto L_089410CC;
    return;
L_089410CC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), 0u);
    goto L_089410D0;
L_089410D0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    goto L_089410DC;
L_089410DC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089410E8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22520)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089410E8u) goto L_089410E8;
    return;
L_089410E8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(22520), 0u);
    goto L_089410EC;
L_089410EC:
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
L_08941114:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22520)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08941B44;
      }
      goto L_0894116C;
    }
L_0894116C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[22] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    ctx.gpr[21] = (2224u << 16u);
      if (branch_taken) {
          goto L_08941B44;
      }
      goto L_0894117C;
    }
L_0894117C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-17320)));
    ctx.gpr[16] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2144));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[23] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[16]);
      if (branch_taken) {
          goto L_089411C8;
      }
      goto L_089411A0;
    }
L_089411A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089411ACu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 412u, 0x0893EE38u>(ctx, &aot_mem) && ctx.pc == 0x089411ACu) goto L_089411AC;
    return;
L_089411AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089411B8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_08942150;
L_089411B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x089411C8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08941F1C;
L_089411C8:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[31] = (0x089411D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4596)));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 514u, 0x0893F804u>(ctx, &aot_mem) && ctx.pc == 0x089411D4u) goto L_089411D4;
    return;
L_089411D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-17320)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16192u << 16u);
      if (branch_taken) {
          goto L_08941264;
      }
      goto L_089411EC;
    }
L_089411EC:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[16] = (0u | 0u);
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[20] = (0u | 13u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(22676));
    goto L_08941208;
L_08941208:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08941220u);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 858u, 0x0881F478u>(ctx, &aot_mem) && ctx.pc == 0x08941220u) goto L_08941220;
    return;
L_08941220:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[20];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_0894124C;
      }
      goto L_0894123C;
    }
L_0894123C:
    ctx.gpr[31] = (0x08941244u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 34u, 0x0899C5F8u>(ctx, &aot_mem) && ctx.pc == 0x08941244u) goto L_08941244;
    return;
L_08941244:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08941258;
      }
      goto L_0894124C;
    }
L_0894124C:
    ctx.gpr[31] = (0x08941254u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 34u, 0x0899C5F8u>(ctx, &aot_mem) && ctx.pc == 0x08941254u) goto L_08941254;
    return;
L_08941254:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08941258;
L_08941258:
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08941208;
      }
      goto L_08941264;
    }
L_08941264:
    ctx.gpr[31] = (0x0894126Cu);
    ctx.gpr[4] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x0894126Cu) goto L_0894126C;
    return;
L_0894126C:
    if (ctx.gpr[2] == ctx.gpr[23]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
        goto L_0894131C;
    }
    goto L_08941274;
L_08941274:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-17320)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16448u << 16u);
      if (branch_taken) {
          goto L_08941318;
      }
      goto L_0894128C;
    }
L_0894128C:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 4u);
    ctx.gpr[17] = (0u | 96u);
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[21] = (0u | 3u);
    ctx.gpr[20] = (2224u << 16u);
    goto L_089412A4;
L_089412A4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-17320)));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089412FC;
      }
      goto L_089412CC;
    }
L_089412CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[21]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.hi);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
        goto L_089412F0;
    }
    goto L_089412E0;
L_089412E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x089412ECu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 34u, 0x0899C5F8u>(ctx, &aot_mem) && ctx.pc == 0x089412ECu) goto L_089412EC;
    return;
L_089412EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    goto L_089412F0;
L_089412F0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08941308;
      }
      goto L_089412FC;
    }
L_089412FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08941308u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 34u, 0x0899C5F8u>(ctx, &aot_mem) && ctx.pc == 0x08941308u) goto L_08941308;
    return;
L_08941308:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_089412A4;
      }
      goto L_08941318;
    }
L_08941318:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    goto L_0894131C;
L_0894131C:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08941B38;
      }
      goto L_0894132C;
    }
L_0894132C:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    ctx.gpr[4] = (50716u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 15360u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0894135C;
L_0894135C:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[23] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[16] & 15u);
    if (ctx.gpr[5] != ctx.gpr[22]) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
        goto L_08941388;
    }
    goto L_08941378;
L_08941378:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
        goto L_08941B0C;
    }
    goto L_08941384;
L_08941384:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    goto L_08941388;
L_08941388:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089413BC;
      }
      goto L_089413B0;
    }
L_089413B0:
    ctx.gpr[16] = (ctx.gpr[16] & 61440u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 12u));
      if (branch_taken) {
          goto L_089413C4;
      }
      goto L_089413BC;
    }
L_089413BC:
    ctx.gpr[16] = (ctx.gpr[16] & 240u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 4u));
    goto L_089413C4;
L_089413C4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (2224u << 16u);
      if (branch_taken) {
          goto L_08941A78;
      }
      goto L_089413CC;
    }
L_089413CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17320)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
        goto L_08941B0C;
    }
    goto L_089413E4;
L_089413E4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[21];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(124)));
      if (branch_taken) {
          goto L_089413F8;
      }
      goto L_089413F0;
    }
L_089413F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08941408;
      }
      goto L_089413F8;
    }
L_089413F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (ctx.gpr[18] << 6u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[18]);
    goto L_08941408;
L_08941408:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (13702u << 16u);
      if (branch_taken) {
          goto L_08941428;
      }
      goto L_0894141C;
    }
L_0894141C:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[28];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08941428;
L_08941428:
    ctx.gpr[5] = (ctx.gpr[5] | 14269u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[22];
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_0894183C;
      }
      goto L_08941438;
    }
L_08941438:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    ctx.gpr[7] = (ctx.gpr[4] << 4u);
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0894146Cu);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 300u, 0x0880F008u>(ctx, &aot_mem) && ctx.pc == 0x0894146Cu) goto L_0894146C;
    return;
L_0894146C:
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[0] / ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089414D4;
      }
      goto L_08941488;
    }
L_08941488:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08941498u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 663u, 0x08AABA60u>(ctx, &aot_mem) && ctx.pc == 0x08941498u) goto L_08941498;
    return;
L_08941498:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089414A8u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 663u, 0x08AABA60u>(ctx, &aot_mem) && ctx.pc == 0x089414A8u) goto L_089414A8;
    return;
L_089414A8:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089414BCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 427u, 0x08A9637Cu>(ctx, &aot_mem) && ctx.pc == 0x089414BCu) goto L_089414BC;
    return;
L_089414BC:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089414C8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x089414C8u) goto L_089414C8;
    return;
L_089414C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    goto L_089414D4;
L_089414D4:
    ctx.gpr[31] = (0x089414DCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 371u, 0x0893EABCu>(ctx, &aot_mem) && ctx.pc == 0x089414DCu) goto L_089414DC;
    return;
L_089414DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089415D8;
      }
      goto L_089414E4;
    }
L_089414E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[28];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089415A8;
      }
      goto L_08941500;
    }
L_08941500:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 91 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 110u);
      if (branch_taken) {
          goto L_08941540;
      }
      goto L_0894150C;
    }
L_0894150C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 90 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (17529u << 16u);
      if (branch_taken) {
          goto L_08941570;
      }
      goto L_08941518;
    }
L_08941518:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08941528u);
    ctx.gpr[6] = (0u | 92u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 429u, 0x0893EF70u>(ctx, &aot_mem) && ctx.pc == 0x08941528u) goto L_08941528;
    return;
L_08941528:
    ctx.gpr[4] = (13702u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14269u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_0894183C;
      }
      goto L_08941540;
    }
L_08941540:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    ctx.gpr[4] = (17529u << 16u);
      if (branch_taken) {
          goto L_08941570;
      }
      goto L_08941548;
    }
L_08941548:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08941558u);
    ctx.gpr[6] = (0u | 112u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 429u, 0x0893EF70u>(ctx, &aot_mem) && ctx.pc == 0x08941558u) goto L_08941558;
    return;
L_08941558:
    ctx.gpr[4] = (13702u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14269u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_0894183C;
      }
      goto L_08941570;
    }
L_08941570:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[4] | 49152u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08941594;
      }
      goto L_08941584;
    }
L_08941584:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[20];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0894183C;
      }
      goto L_08941594;
    }
L_08941594:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0894183C;
      }
      goto L_089415A8;
    }
L_089415A8:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
        goto L_089415C8;
    }
    goto L_089415B8;
L_089415B8:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[20];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0894183C;
      }
      goto L_089415C8;
    }
L_089415C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0894183C;
      }
      goto L_089415D8;
    }
L_089415D8:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-89));
      if (branch_taken) {
          goto L_0894182C;
      }
      goto L_089415E8;
    }
L_089415E8:
    ctx.gpr[4] = (ctx.gpr[20] < static_cast<std::uint32_t>(26) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
      if (branch_taken) {
          goto L_089417D0;
      }
      goto L_089415F4;
    }
L_089415F4:
    ctx.gpr[20] = (ctx.gpr[20] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[20]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(10360)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894160C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0894161Cu);
    ctx.gpr[6] = (0u | 96u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 429u, 0x0893EF70u>(ctx, &aot_mem) && ctx.pc == 0x0894161Cu) goto L_0894161C;
    return;
L_0894161C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (13270u << 16u);
      if (branch_taken) {
          goto L_08941818;
      }
      goto L_08941624;
    }
L_08941624:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08941634u);
    ctx.gpr[6] = (0u | 90u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 429u, 0x0893EF70u>(ctx, &aot_mem) && ctx.pc == 0x08941634u) goto L_08941634;
    return;
L_08941634:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (13270u << 16u);
      if (branch_taken) {
          goto L_08941818;
      }
      goto L_0894163C;
    }
L_0894163C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0894164Cu);
    ctx.gpr[6] = (0u | 110u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 429u, 0x0893EF70u>(ctx, &aot_mem) && ctx.pc == 0x0894164Cu) goto L_0894164C;
    return;
L_0894164C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (13270u << 16u);
      if (branch_taken) {
          goto L_08941818;
      }
      goto L_08941654;
    }
L_08941654:
    ctx.gpr[31] = (0x0894165Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 83u, 0x089686E0u>(ctx, &aot_mem) && ctx.pc == 0x0894165Cu) goto L_0894165C;
    return;
L_0894165C:
    ctx.gpr[4] = (0u | 2u);
    if (ctx.gpr[2] != ctx.gpr[4]) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
        goto L_08941674;
    }
    goto L_08941668;
L_08941668:
    ctx.gpr[31] = (0x08941670u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 899u, 0x08967F9Cu>(ctx, &aot_mem) && ctx.pc == 0x08941670u) goto L_08941670;
    return;
L_08941670:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    goto L_08941674;
L_08941674:
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089416A4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 429u, 0x0893EF70u>(ctx, &aot_mem) && ctx.pc == 0x089416A4u) goto L_089416A4;
    return;
L_089416A4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(104), 0u);
      if (branch_taken) {
          goto L_089416BC;
      }
      goto L_089416AC;
    }
L_089416AC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    goto L_089416BC;
L_089416BC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
      if (branch_taken) {
          goto L_08941814;
      }
      goto L_089416C4;
    }
L_089416C4:
    ctx.gpr[31] = (0x089416CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 899u, 0x08967F9Cu>(ctx, &aot_mem) && ctx.pc == 0x089416CCu) goto L_089416CC;
    return;
L_089416CC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08941700u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 429u, 0x0893EF70u>(ctx, &aot_mem) && ctx.pc == 0x08941700u) goto L_08941700;
    return;
L_08941700:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(104), 0u);
      if (branch_taken) {
          goto L_08941718;
      }
      goto L_08941708;
    }
L_08941708:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    goto L_08941718;
L_08941718:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
      if (branch_taken) {
          goto L_08941814;
      }
      goto L_08941720;
    }
L_08941720:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08941754u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 429u, 0x0893EF70u>(ctx, &aot_mem) && ctx.pc == 0x08941754u) goto L_08941754;
    return;
L_08941754:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(104), 0u);
      if (branch_taken) {
          goto L_0894176C;
      }
      goto L_0894175C;
    }
L_0894175C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    goto L_0894176C;
L_0894176C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
      if (branch_taken) {
          goto L_08941814;
      }
      goto L_08941774;
    }
L_08941774:
    ctx.gpr[31] = (0x0894177Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 899u, 0x08967F9Cu>(ctx, &aot_mem) && ctx.pc == 0x0894177Cu) goto L_0894177C;
    return;
L_0894177C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089417B0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 429u, 0x0893EF70u>(ctx, &aot_mem) && ctx.pc == 0x089417B0u) goto L_089417B0;
    return;
L_089417B0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(104), 0u);
      if (branch_taken) {
          goto L_08941814;
      }
      goto L_089417B8;
    }
L_089417B8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
      if (branch_taken) {
          goto L_08941814;
      }
      goto L_089417CC;
    }
L_089417CC:
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
    goto L_089417D0;
L_089417D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089417FCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 429u, 0x0893EF70u>(ctx, &aot_mem) && ctx.pc == 0x089417FCu) goto L_089417FC;
    return;
L_089417FC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(104), 0u);
      if (branch_taken) {
          goto L_08941814;
      }
      goto L_08941804;
    }
L_08941804:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    goto L_08941814;
L_08941814:
    ctx.gpr[4] = (13270u << 16u);
    goto L_08941818;
L_08941818:
    ctx.gpr[4] = (ctx.gpr[4] | 49045u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_0894183C;
      }
      goto L_0894182C;
    }
L_0894182C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0894183C;
L_0894183C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (16128u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08941860;
      }
      goto L_08941854;
    }
L_08941854:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(104), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089418B4;
      }
      goto L_08941860;
    }
L_08941860:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    if (ctx.gpr[4] == ctx.gpr[22]) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(104), 0u);
        goto L_08941878;
    }
    goto L_0894186C;
L_0894186C:
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
        goto L_089418B0;
    }
    goto L_08941874;
L_08941874:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(104), 0u);
    goto L_08941878;
L_08941878:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 61440u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 12u));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089418B4;
      }
      goto L_089418B0;
    }
L_089418B0:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_089418B4;
L_089418B4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089419F0;
      }
      goto L_089418BC;
    }
L_089418BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x089418C8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 34u, 0x0899C5F8u>(ctx, &aot_mem) && ctx.pc == 0x089418C8u) goto L_089418C8;
    return;
L_089418C8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 89 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 115 ? 1u : 0u);
      if (branch_taken) {
          goto L_089419F0;
      }
      goto L_089418D4;
    }
L_089418D4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-89));
      if (branch_taken) {
          goto L_089419F0;
      }
      goto L_089418DC;
    }
L_089418DC:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(10464)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089418F4:
    ctx.gpr[4] = (16217u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089419F0;
      }
      goto L_08941914;
    }
L_08941914:
    ctx.gpr[31] = (0x0894191Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 893u, 0x08967F38u>(ctx, &aot_mem) && ctx.pc == 0x0894191Cu) goto L_0894191C;
    return;
L_0894191C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089419F0;
      }
      goto L_08941924;
    }
L_08941924:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_089419F0;
      }
      goto L_08941930;
    }
L_08941930:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08941954;
      }
      goto L_08941944;
    }
L_08941944:
    ctx.gpr[31] = (0x0894194Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 72u, 0x089685F0u>(ctx, &aot_mem) && ctx.pc == 0x0894194Cu) goto L_0894194C;
    return;
L_0894194C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089419F0;
      }
      goto L_08941954;
    }
L_08941954:
    ctx.gpr[31] = (0x0894195Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 66u, 0x0896857Cu>(ctx, &aot_mem) && ctx.pc == 0x0894195Cu) goto L_0894195C;
    return;
L_0894195C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089419F0;
      }
      goto L_08941964;
    }
L_08941964:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[21];
    ctx.gpr[4] = (16277u << 16u);
      if (branch_taken) {
          goto L_089419F0;
      }
      goto L_08941970;
    }
L_08941970:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] | 21846u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089419C8;
      }
      goto L_0894198C;
    }
L_0894198C:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_089419F0;
      }
      goto L_08941994;
    }
L_08941994:
    ctx.gpr[31] = (0x0894199Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 25u, 0x0896825Cu>(ctx, &aot_mem) && ctx.pc == 0x0894199Cu) goto L_0894199C;
    return;
L_0894199C:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089419ACu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 2u, 0x08968008u>(ctx, &aot_mem) && ctx.pc == 0x089419ACu) goto L_089419AC;
    return;
L_089419AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089419BCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 406u, 0x08A467F0u>(ctx, &aot_mem) && ctx.pc == 0x089419BCu) goto L_089419BC;
    return;
L_089419BC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
      if (branch_taken) {
          goto L_089419F0;
      }
      goto L_089419C8;
    }
L_089419C8:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089419E8;
      }
      goto L_089419D8;
    }
L_089419D8:
    ctx.gpr[31] = (0x089419E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 72u, 0x089685F0u>(ctx, &aot_mem) && ctx.pc == 0x089419E0u) goto L_089419E0;
    return;
L_089419E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089419F0;
      }
      goto L_089419E8;
    }
L_089419E8:
    ctx.gpr[31] = (0x089419F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 66u, 0x0896857Cu>(ctx, &aot_mem) && ctx.pc == 0x089419F0u) goto L_089419F0;
    return;
L_089419F0:
    ctx.gpr[31] = (0x089419F8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 519u, 0x0893F858u>(ctx, &aot_mem) && ctx.pc == 0x089419F8u) goto L_089419F8;
    return;
L_089419F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    if (ctx.gpr[4] != ctx.gpr[22]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
        goto L_08941B0C;
    }
    goto L_08941A04;
L_08941A04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08941A68;
      }
      goto L_08941A10;
    }
L_08941A10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 61440u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 12u));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08941A68u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 495u, 0x0899BEFCu>(ctx, &aot_mem) && ctx.pc == 0x08941A68u) goto L_08941A68;
    return;
L_08941A68:
    ctx.gpr[31] = (0x08941A70u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 507u, 0x089AB834u>(ctx, &aot_mem) && ctx.pc == 0x08941A70u) goto L_08941A70;
    return;
L_08941A70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_08941B0C;
      }
      goto L_08941A78;
    }
L_08941A78:
    ctx.gpr[31] = (0x08941A80u);
    ctx.gpr[4] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x08941A80u) goto L_08941A80;
    return;
L_08941A80:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[4] = (2224u << 16u);
      if (branch_taken) {
          goto L_08941B08;
      }
      goto L_08941A8C;
    }
L_08941A8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17320)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
        goto L_08941B0C;
    }
    goto L_08941AA4;
L_08941AA4:
    ctx.gpr[31] = (0x08941AACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 519u, 0x0893F858u>(ctx, &aot_mem) && ctx.pc == 0x08941AACu) goto L_08941AAC;
    return;
L_08941AAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    if (ctx.gpr[4] != ctx.gpr[22]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
        goto L_08941B0C;
    }
    goto L_08941AB8;
L_08941AB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 240u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 4u));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08941B00u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 495u, 0x0899BEFCu>(ctx, &aot_mem) && ctx.pc == 0x08941B00u) goto L_08941B00;
    return;
L_08941B00:
    ctx.gpr[31] = (0x08941B08u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 507u, 0x089AB834u>(ctx, &aot_mem) && ctx.pc == 0x08941B08u) goto L_08941B08;
    return;
L_08941B08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    goto L_08941B0C;
L_08941B0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[6]);
      if (branch_taken) {
          goto L_0894135C;
      }
      goto L_08941B38;
    }
L_08941B38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (0x08941B44u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 425u, 0x0893EF14u>(ctx, &aot_mem) && ctx.pc == 0x08941B44u) goto L_08941B44;
    return;
L_08941B44:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941B8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22520)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941EEC;
      }
      goto L_08941BCC;
    }
L_08941BCC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08941EEC;
      }
      goto L_08941BD8;
    }
L_08941BD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941EEC;
      }
      goto L_08941BE8;
    }
L_08941BE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08941EEC;
      }
      goto L_08941BFC;
    }
L_08941BFC:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[21] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    goto L_08941C08;
L_08941C08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08941ECC;
      }
      goto L_08941C24;
    }
L_08941C24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08941ECC;
      }
      goto L_08941C40;
    }
L_08941C40:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    goto L_08941C48;
L_08941C48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (256u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
      if (branch_taken) {
          goto L_08941DD8;
      }
      goto L_08941C78;
    }
L_08941C78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(88)));
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08941EA0;
      }
      goto L_08941C94;
    }
L_08941C94:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[23] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    goto L_08941CA4;
L_08941CA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08941DB8;
      }
      goto L_08941CE0;
    }
L_08941CE0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(3)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[21]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(1)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[10] = (ctx.lo);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[21]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[21]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[21]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.lo);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[31] = (0x08941DA0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 296u, 0x089C5718u>(ctx, &aot_mem) && ctx.pc == 0x08941DA0u) goto L_08941DA0;
    return;
L_08941DA0:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_08941CE0;
      }
      goto L_08941DB8;
    }
L_08941DB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08941CA4;
      }
      goto L_08941DCC;
    }
L_08941DCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08941EA4;
      }
      goto L_08941DD4;
    }
L_08941DD4:
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    goto L_08941DD8;
L_08941DD8:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
        goto L_08941EA4;
    }
    goto L_08941DE0;
L_08941DE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(48)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
        goto L_08941EA4;
    }
    goto L_08941DEC;
L_08941DEC:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
        goto L_08941EA4;
    }
    goto L_08941E00;
L_08941E00:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[21]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    ctx.gpr[10] = (ctx.lo);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(1)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[21]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.lo);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(2)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[21]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.lo);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(3)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[21]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.lo);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08941E00;
      }
      goto L_08941EA0;
    }
L_08941EA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    goto L_08941EA4;
L_08941EA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08941C48;
      }
      goto L_08941EC4;
    }
L_08941EC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08941ECC;
L_08941ECC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08941C08;
      }
      goto L_08941EEC;
    }
L_08941EEC:
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
L_08941F1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[30]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[23] = (2224u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-14744));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08942108;
      }
      goto L_08941F70;
    }
L_08941F70:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (0u | 0u);
    goto L_08941F84;
L_08941F84:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] << 7u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08942020;
      }
      goto L_08941FA4;
    }
L_08941FA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08941FF8;
      }
      goto L_08941FB4;
    }
L_08941FB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08941FD4;
      }
      goto L_08941FC0;
    }
L_08941FC0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08941FD4;
      }
      goto L_08941FC8;
    }
L_08941FC8:
    ctx.gpr[31] = (0x08941FD0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 66u, 0x0896857Cu>(ctx, &aot_mem) && ctx.pc == 0x08941FD0u) goto L_08941FD0;
    return;
L_08941FD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_08941FD4;
L_08941FD4:
    ctx.gpr[31] = (0x08941FDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 471u, 0x0893F1D8u>(ctx, &aot_mem) && ctx.pc == 0x08941FDCu) goto L_08941FDC;
    return;
L_08941FDC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08941FF0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 437u, 0x0893F01Cu>(ctx, &aot_mem) && ctx.pc == 0x08941FF0u) goto L_08941FF0;
    return;
L_08941FF0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08942018;
      }
      goto L_08941FF8;
    }
L_08941FF8:
    ctx.gpr[31] = (0x08942000u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 471u, 0x0893F1D8u>(ctx, &aot_mem) && ctx.pc == 0x08942000u) goto L_08942000;
    return;
L_08942000:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08942014u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 437u, 0x0893F01Cu>(ctx, &aot_mem) && ctx.pc == 0x08942014u) goto L_08942014;
    return;
L_08942014:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08942018;
L_08942018:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089420A4;
      }
      goto L_08942020;
    }
L_08942020:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    if (ctx.gpr[4] == ctx.gpr[18]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_089420A8;
    }
    goto L_0894202C;
L_0894202C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_089420A8;
    }
    goto L_0894203C;
L_0894203C:
    ctx.gpr[31] = (0x08942044u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 858u, 0x0881F478u>(ctx, &aot_mem) && ctx.pc == 0x08942044u) goto L_08942044;
    return;
L_08942044:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
      if (branch_taken) {
          goto L_08942084;
      }
      goto L_08942054;
    }
L_08942054:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7));
      if (branch_taken) {
          goto L_08942084;
      }
      goto L_0894205C;
    }
L_0894205C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(10568)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942074:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 113u);
      if (branch_taken) {
          goto L_08942088;
      }
      goto L_0894207C;
    }
L_0894207C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 109u);
      if (branch_taken) {
          goto L_08942088;
      }
      goto L_08942084;
    }
L_08942084:
    ctx.gpr[4] = (0u | 89u);
    goto L_08942088;
L_08942088:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089420A0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 429u, 0x0893EF70u>(ctx, &aot_mem) && ctx.pc == 0x089420A0u) goto L_089420A0;
    return;
L_089420A0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_089420A4;
L_089420A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_089420A8;
L_089420A8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
      if (branch_taken) {
          goto L_089420BC;
      }
      goto L_089420B0;
    }
L_089420B0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_089420DC;
      }
      goto L_089420BC;
    }
L_089420BC:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    goto L_089420DC;
L_089420DC:
    if (ctx.gpr[17] == ctx.gpr[18]) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_089420FC;
    }
    goto L_089420E4;
L_089420E4:
    ctx.gpr[31] = (0x089420ECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 78u, 0x08968650u>(ctx, &aot_mem) && ctx.pc == 0x089420ECu) goto L_089420EC;
    return;
L_089420EC:
    if (ctx.gpr[2] == ctx.gpr[18]) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_089420FC;
    }
    goto L_089420F4;
L_089420F4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_089420FC;
L_089420FC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08941F84;
      }
      goto L_08942108;
    }
L_08942108:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(212)));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(412)));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
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
L_08942150:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (2224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-14744));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(212)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16128u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (0u | 0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    if (!ctx.fpu_condition()) {
    ctx.gpr[18] = (0u | 1u);
        goto L_089421C4;
    }
    goto L_089421C4;
L_089421C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(412)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[19] = (0u | 1u);
        goto L_089421DC;
    }
    goto L_089421DC;
L_089421DC:
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (0u | 33u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089421F4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(50));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 89u, 0x08808344u>(ctx, &aot_mem) && ctx.pc == 0x089421F4u) goto L_089421F4;
    return;
L_089421F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(936)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(940)));
    ctx.gpr[6] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08942524;
      }
      goto L_08942208;
    }
L_08942208:
    ctx.gpr[8] = (17096u << 16u);
    ctx.gpr[6] = (ctx.gpr[7] & 4096u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
      if (branch_taken) {
          goto L_08942224;
      }
      goto L_08942218;
    }
L_08942218:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[5] & ctx.gpr[7]);
    goto L_08942224;
L_08942224:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08942290;
      }
      goto L_0894222C;
    }
L_0894222C:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22468));
    goto L_08942234;
L_08942234:
    ctx.gpr[8] = (ctx.gpr[7] & 1u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 1u));
        goto L_08942284;
    }
    goto L_08942240;
L_08942240:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08942280;
      }
      goto L_08942248;
    }
L_08942248:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 11 ? 1u : 0u);
      if (branch_taken) {
          goto L_0894227C;
      }
      goto L_08942254;
    }
L_08942254:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 12 ? 1u : 0u);
      if (branch_taken) {
          goto L_08942274;
      }
      goto L_0894225C;
    }
L_0894225C:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 10 ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 1u));
        goto L_08942284;
    }
    goto L_08942268;
L_08942268:
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
      if (branch_taken) {
          goto L_08942280;
      }
      goto L_08942270;
    }
L_08942270:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 12 ? 1u : 0u);
    goto L_08942274;
L_08942274:
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 1u));
        goto L_08942284;
    }
    goto L_0894227C;
L_0894227C:
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    goto L_08942280;
L_08942280:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 1u));
    goto L_08942284;
L_08942284:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08942234;
      }
      goto L_08942290;
    }
L_08942290:
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08942300;
      }
      goto L_089422A0;
    }
L_089422A0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08942300;
      }
      goto L_089422A8;
    }
L_089422A8:
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[7] = (0u | 27u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22344));
    goto L_089422B4;
L_089422B4:
    ctx.gpr[8] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
        goto L_089422F4;
    }
    goto L_089422C0;
L_089422C0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089422F0;
      }
      goto L_089422C8;
    }
L_089422C8:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 7 ? 1u : 0u);
      if (branch_taken) {
          goto L_089422E4;
      }
      goto L_089422D4;
    }
L_089422D4:
    if (ctx.gpr[8] != 0u) {
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
        goto L_089422F0;
    }
    goto L_089422DC;
L_089422DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
      if (branch_taken) {
          goto L_089422F4;
      }
      goto L_089422E4;
    }
L_089422E4:
    if (ctx.gpr[5] == ctx.gpr[7]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
        goto L_089422F4;
    }
    goto L_089422EC;
L_089422EC:
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    goto L_089422F0;
L_089422F0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    goto L_089422F4;
L_089422F4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089422B4;
      }
      goto L_08942300;
    }
L_08942300:
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
        goto L_08942310;
    }
    goto L_08942310;
L_08942310:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08942338;
      }
      goto L_08942318;
    }
L_08942318:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(212)));
      if (branch_taken) {
          goto L_08942330;
      }
      goto L_08942320;
    }
L_08942320:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(412)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08942330;
      }
      goto L_08942330;
    }
L_08942330:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08942344;
      }
      goto L_08942338;
    }
L_08942338:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942344;
      }
      goto L_08942340;
    }
L_08942340:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(412)));
    goto L_08942344;
L_08942344:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[13];
        goto L_0894239C;
    }
    goto L_08942354;
L_08942354:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15820u << 16u);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u - ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_089423D0;
      }
      goto L_0894239C;
    }
L_0894239C:
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u - ctx.gpr[17]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    goto L_089423D0;
L_089423D0:
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089423E0u);
    ctx.gpr[4] = (0u | 34u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 89u, 0x08808344u>(ctx, &aot_mem) && ctx.pc == 0x089423E0u) goto L_089423E0;
    return;
L_089423E0:
    ctx.gpr[4] = (0u | 35u);
    ctx.gpr[31] = (0x089423ECu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 89u, 0x08808344u>(ctx, &aot_mem) && ctx.pc == 0x089423ECu) goto L_089423EC;
    return;
L_089423EC:
    ctx.gpr[4] = (0u | 36u);
    ctx.gpr[31] = (0x089423F8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 89u, 0x08808344u>(ctx, &aot_mem) && ctx.pc == 0x089423F8u) goto L_089423F8;
    return;
L_089423F8:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(940)));
    ctx.gpr[4] = (ctx.gpr[20] & 128u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 256u);
      if (branch_taken) {
          goto L_08942410;
      }
      goto L_08942408;
    }
L_08942408:
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[26]));
        goto L_08942494;
    }
    goto L_08942410;
L_08942410:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089425A8;
      }
      goto L_08942420;
    }
L_08942420:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (0u | 6u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[5] = (ctx.hi);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08942468;
      }
      goto L_08942444;
    }
L_08942444:
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08942460;
      }
      goto L_08942450;
    }
L_08942450:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894246C;
      }
      goto L_08942458;
    }
L_08942458:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 34u);
      if (branch_taken) {
          goto L_0894246C;
      }
      goto L_08942460;
    }
L_08942460:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 35u);
      if (branch_taken) {
          goto L_0894246C;
      }
      goto L_08942468;
    }
L_08942468:
    ctx.gpr[4] = (0u | 30u);
    goto L_0894246C;
L_0894246C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08942488;
      }
      goto L_08942474;
    }
L_08942474:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08942484u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 830u, 0x08807750u>(ctx, &aot_mem) && ctx.pc == 0x08942484u) goto L_08942484;
    return;
L_08942484:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_08942488;
L_08942488:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089425A8;
      }
      goto L_08942494;
    }
L_08942494:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 100u);
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089424A0;
L_089424A0:
    ctx.gpr[31] = (0x089424A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 77u, 0x089AD318u>(ctx, &aot_mem) && ctx.pc == 0x089424A8u) goto L_089424A8;
    return;
L_089424A8:
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[18]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[19] ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08942510;
    }
    goto L_089424BC;
L_089424BC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) > 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_089424D4;
      }
      goto L_089424C4;
    }
L_089424C4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_089424F8;
      }
      goto L_089424CC;
    }
L_089424CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 34u);
      if (branch_taken) {
          goto L_089424F4;
      }
      goto L_089424D4;
    }
L_089424D4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089424EC;
      }
      goto L_089424DC;
    }
L_089424DC:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[20] = (0u | 30u);
        goto L_089424F4;
    }
    goto L_089424E4;
L_089424E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_089424F8;
      }
      goto L_089424EC;
    }
L_089424EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 35u);
      if (branch_taken) {
          goto L_089424F4;
      }
      goto L_089424F4;
    }
L_089424F4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_089424F8;
L_089424F8:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0894250Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 830u, 0x08807750u>(ctx, &aot_mem) && ctx.pc == 0x0894250Cu) goto L_0894250C;
    return;
L_0894250C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08942510;
L_08942510:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089424A0;
      }
      goto L_0894251C;
    }
L_0894251C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_089425A8;
      }
      goto L_08942524;
    }
L_08942524:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16800u << 16u);
      if (branch_taken) {
          goto L_0894256C;
      }
      goto L_08942540;
    }
L_08942540:
    ctx.gpr[4] = (0u | 35u);
    ctx.gpr[31] = (0x0894254Cu);
    ctx.gpr[5] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 89u, 0x08808344u>(ctx, &aot_mem) && ctx.pc == 0x0894254Cu) goto L_0894254C;
    return;
L_0894254C:
    ctx.gpr[4] = (0u | 35u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08942564u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 830u, 0x08807750u>(ctx, &aot_mem) && ctx.pc == 0x08942564u) goto L_08942564;
    return;
L_08942564:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_089425A8;
      }
      goto L_0894256C;
    }
L_0894256C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089425A8;
      }
      goto L_08942580;
    }
L_08942580:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (0u | 35u);
      if (branch_taken) {
          goto L_089425A8;
      }
      goto L_08942594;
    }
L_08942594:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089425A8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 830u, 0x08807750u>(ctx, &aot_mem) && ctx.pc == 0x089425A8u) goto L_089425A8;
    return;
L_089425A8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089425DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[22]);
    ctx.gpr[22] = (2221u << 16u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(22520)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089426A4;
      }
      goto L_0894261C;
    }
L_0894261C:
    ctx.gpr[31] = (0x08942624u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 858u, 0x0881F478u>(ctx, &aot_mem) && ctx.pc == 0x08942624u) goto L_08942624;
    return;
L_08942624:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_0894266C;
      }
      goto L_08942630;
    }
L_08942630:
    ctx.gpr[17] = (ctx.gpr[22] + static_cast<std::uint32_t>(132));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08942640u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 522u, 0x0880A0E8u>(ctx, &aot_mem) && ctx.pc == 0x08942640u) goto L_08942640;
    return;
L_08942640:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08942650u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 557u, 0x0893FCB8u>(ctx, &aot_mem) && ctx.pc == 0x08942650u) goto L_08942650;
    return;
L_08942650:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_089426A4;
      }
      goto L_08942658;
    }
L_08942658:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08942664u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 561u, 0x0893FD1Cu>(ctx, &aot_mem) && ctx.pc == 0x08942664u) goto L_08942664;
    return;
L_08942664:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089426A4;
      }
      goto L_0894266C;
    }
L_0894266C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (2224u << 16u);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[10] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[16] << 2u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-17320)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(22676));
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[9] = (2222u << 16u);
      if (branch_taken) {
          goto L_089426DC;
      }
      goto L_0894269C;
    }
L_0894269C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[8] & 8u);
      if (branch_taken) {
          goto L_08942714;
      }
      goto L_089426A4;
    }
L_089426A4:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089426DC:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[11]);
    goto L_089426E8;
L_089426E8:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    ctx.gpr[11] = (ctx.gpr[11] & 15u);
    if (ctx.gpr[11] != 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
        goto L_08942700;
    }
    goto L_089426F8;
L_089426F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08942700;
      }
      goto L_08942700;
    }
L_08942700:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_089426E8;
      }
      goto L_08942710;
    }
L_08942710:
    ctx.gpr[6] = (ctx.gpr[8] & 8u);
    goto L_08942714;
L_08942714:
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] == 0u) {
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
        goto L_08942740;
    }
    goto L_08942724;
L_08942724:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[4] << 7u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
      if (branch_taken) {
          goto L_08942754;
      }
      goto L_08942740;
    }
L_08942740:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[4] << 7u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    goto L_08942754;
L_08942754:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[17]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08942768u);
    ctx.gpr[5] = (0u | 146u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08942768u) goto L_08942768;
    return;
L_08942768:
    ctx.gpr[5] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 64u);
    ctx.gpr[31] = (0x08942780u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23372));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08942780u) goto L_08942780;
    return;
L_08942780:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[17]);
    goto L_08942788;
L_08942788:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08942788;
      }
      goto L_089427B0;
    }
L_089427B0:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (0u | 64u);
    ctx.gpr[31] = (0x089427C4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23436));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089427C4u) goto L_089427C4;
    return;
L_089427C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08942AC8;
      }
      goto L_089427D8;
    }
L_089427D8:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    goto L_089427E4;
L_089427E4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[23]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (ctx.gpr[21] & 15u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[30]);
      if (branch_taken) {
          goto L_089428C8;
      }
      goto L_08942800;
    }
L_08942800:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894280Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 345u, 0x0893E75Cu>(ctx, &aot_mem) && ctx.pc == 0x0894280Cu) goto L_0894280C;
    return;
L_0894280C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[4] & 240u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 4u));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (0u | 0u);
        goto L_08942830;
    }
    goto L_08942830;
L_08942830:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    goto L_08942844;
L_08942844:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[8] != ctx.gpr[4]) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
        goto L_08942858;
    }
    goto L_08942850;
L_08942850:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08942864;
      }
      goto L_08942858;
    }
L_08942858:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08942844;
      }
      goto L_08942864;
    }
L_08942864:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[18] << 12u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[18] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[31] = (0x089428B8u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 351u, 0x0893E884u>(ctx, &aot_mem) && ctx.pc == 0x089428B8u) goto L_089428B8;
    return;
L_089428B8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[18]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
      if (branch_taken) {
          goto L_08942928;
      }
      goto L_089428C8;
    }
L_089428C8:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17320)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08942AA8;
      }
      goto L_089428E4;
    }
L_089428E4:
    ctx.gpr[31] = (0x089428ECu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 345u, 0x0893E75Cu>(ctx, &aot_mem) && ctx.pc == 0x089428ECu) goto L_089428EC;
    return;
L_089428EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 240u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 4u));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x08942918u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 351u, 0x0893E884u>(ctx, &aot_mem) && ctx.pc == 0x08942918u) goto L_08942918;
    return;
L_08942918:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    goto L_08942928;
L_08942928:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(156));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0894295Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 362u, 0x0893E984u>(ctx, &aot_mem) && ctx.pc == 0x0894295Cu) goto L_0894295C;
    return;
L_0894295C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x08942968u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 360u, 0x0893E940u>(ctx, &aot_mem) && ctx.pc == 0x08942968u) goto L_08942968;
    return;
L_08942968:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08942984u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 366u, 0x0893EA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08942984u) goto L_08942984;
    return;
L_08942984:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08942A28u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 478u, 0x08812DF0u>(ctx, &aot_mem) && ctx.pc == 0x08942A28u) goto L_08942A28;
    return;
L_08942A28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08942A3Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 225u, 0x089D9648u>(ctx, &aot_mem) && ctx.pc == 0x08942A3Cu) goto L_08942A3C;
    return;
L_08942A3C:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[4] = (2224u << 16u);
      if (branch_taken) {
          goto L_08942A70;
      }
      goto L_08942A44;
    }
L_08942A44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17320)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_08942AA8;
      }
      goto L_08942A5C;
    }
L_08942A5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(348)));
    ctx.gpr[31] = (0x08942A68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 353u, 0x0893E8A4u>(ctx, &aot_mem) && ctx.pc == 0x08942A68u) goto L_08942A68;
    return;
L_08942A68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
      if (branch_taken) {
          goto L_08942AAC;
      }
      goto L_08942A70;
    }
L_08942A70:
    ctx.gpr[31] = (0x08942A78u);
    ctx.gpr[4] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x08942A78u) goto L_08942A78;
    return;
L_08942A78:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[4] = (2224u << 16u);
      if (branch_taken) {
          goto L_08942AA8;
      }
      goto L_08942A84;
    }
L_08942A84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17320)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_08942AA8;
      }
      goto L_08942A9C;
    }
L_08942A9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(348)));
    ctx.gpr[31] = (0x08942AA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 353u, 0x0893E8A4u>(ctx, &aot_mem) && ctx.pc == 0x08942AA8u) goto L_08942AA8;
    return;
L_08942AA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    goto L_08942AAC;
L_08942AAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_089427E4;
      }
      goto L_08942AC8;
    }
L_08942AC8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(240), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942B08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17320)));
    ctx.gpr[7] = (ctx.gpr[4] & 4u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08942B60;
      }
      goto L_08942B4C;
    }
L_08942B4C:
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
        goto L_08942BA4;
    }
    goto L_08942B60;
L_08942B60:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 13u);
    ctx.gpr[31] = (0x08942B7Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(9760));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08942B7Cu) goto L_08942B7C;
    return;
L_08942B7C:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(22) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942E94;
      }
      goto L_08942B8C;
    }
L_08942B8C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(10624)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942BA4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942BCC:
    ctx.gpr[4] = (0u | 48u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 50u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (2222u << 16u);
      if (branch_taken) {
          goto L_08942EBC;
      }
      goto L_08942BF4;
    }
L_08942BF4:
    ctx.gpr[4] = (0u | 48u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 51u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (2222u << 16u);
      if (branch_taken) {
          goto L_08942EBC;
      }
      goto L_08942C1C;
    }
L_08942C1C:
    ctx.gpr[4] = (0u | 48u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 54u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (2222u << 16u);
      if (branch_taken) {
          goto L_08942EBC;
      }
      goto L_08942C44;
    }
L_08942C44:
    ctx.gpr[4] = (0u | 48u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 55u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (2222u << 16u);
      if (branch_taken) {
          goto L_08942EBC;
      }
      goto L_08942C6C;
    }
L_08942C6C:
    ctx.gpr[4] = (0u | 48u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 56u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (2222u << 16u);
      if (branch_taken) {
          goto L_08942EBC;
      }
      goto L_08942C94;
    }
L_08942C94:
    ctx.gpr[4] = (0u | 48u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 57u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (2222u << 16u);
      if (branch_taken) {
          goto L_08942EBC;
      }
      goto L_08942CBC;
    }
L_08942CBC:
    ctx.gpr[4] = (0u | 49u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 48u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (2222u << 16u);
      if (branch_taken) {
          goto L_08942EBC;
      }
      goto L_08942CE4;
    }
L_08942CE4:
    ctx.gpr[4] = (0u | 49u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (2222u << 16u);
      if (branch_taken) {
          goto L_08942EBC;
      }
      goto L_08942D08;
    }
L_08942D08:
    ctx.gpr[4] = (0u | 49u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 50u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (2222u << 16u);
      if (branch_taken) {
          goto L_08942EBC;
      }
      goto L_08942D30;
    }
L_08942D30:
    ctx.gpr[4] = (0u | 49u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 51u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (2222u << 16u);
      if (branch_taken) {
          goto L_08942EBC;
      }
      goto L_08942D58;
    }
L_08942D58:
    ctx.gpr[4] = (0u | 49u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 53u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (2222u << 16u);
      if (branch_taken) {
          goto L_08942EBC;
      }
      goto L_08942D80;
    }
L_08942D80:
    ctx.gpr[4] = (0u | 49u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 54u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (2222u << 16u);
      if (branch_taken) {
          goto L_08942EBC;
      }
      goto L_08942DA8;
    }
L_08942DA8:
    ctx.gpr[4] = (0u | 49u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 55u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (2222u << 16u);
      if (branch_taken) {
          goto L_08942EBC;
      }
      goto L_08942DD0;
    }
L_08942DD0:
    ctx.gpr[4] = (0u | 49u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 56u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (2222u << 16u);
      if (branch_taken) {
          goto L_08942EBC;
      }
      goto L_08942DF8;
    }
L_08942DF8:
    ctx.gpr[4] = (0u | 49u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 57u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (2222u << 16u);
      if (branch_taken) {
          goto L_08942EBC;
      }
      goto L_08942E20;
    }
L_08942E20:
    ctx.gpr[4] = (0u | 50u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 48u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (2222u << 16u);
      if (branch_taken) {
          goto L_08942EBC;
      }
      goto L_08942E48;
    }
L_08942E48:
    ctx.gpr[4] = (0u | 50u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (2222u << 16u);
      if (branch_taken) {
          goto L_08942EBC;
      }
      goto L_08942E6C;
    }
L_08942E6C:
    ctx.gpr[4] = (0u | 50u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 51u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (2222u << 16u);
      if (branch_taken) {
          goto L_08942EBC;
      }
      goto L_08942E94;
    }
L_08942E94:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942EBC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08942ECCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08942ECCu) goto L_08942ECC;
    return;
L_08942ECC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08942ED8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x08942ED8u) goto L_08942ED8;
    return;
L_08942ED8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08942EE8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x08942EE8u) goto L_08942EE8;
    return;
L_08942EE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (0u | 146u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08942EFCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08942EFCu) goto L_08942EFC;
    return;
L_08942EFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08942F10u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08942F10u) goto L_08942F10;
    return;
L_08942F10:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942E94;
      }
      goto L_08942F1C;
    }
L_08942F1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942F54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-336));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 17u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[31]);
    ctx.gpr[31] = (0x08942F94u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(9784));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08942F94u) goto L_08942F94;
    return;
L_08942F94:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(22) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943260;
      }
      goto L_08942FA4;
    }
L_08942FA4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(10712)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942FBC:
    ctx.gpr[4] = (0u | 48u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 50u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
      if (branch_taken) {
          goto L_08943284;
      }
      goto L_08942FE0;
    }
L_08942FE0:
    ctx.gpr[4] = (0u | 48u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 51u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
      if (branch_taken) {
          goto L_08943284;
      }
      goto L_08943004;
    }
L_08943004:
    ctx.gpr[4] = (0u | 48u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 53u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
      if (branch_taken) {
          goto L_08943284;
      }
      goto L_08943028;
    }
L_08943028:
    ctx.gpr[4] = (0u | 48u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 54u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
      if (branch_taken) {
          goto L_08943284;
      }
      goto L_0894304C;
    }
L_0894304C:
    ctx.gpr[4] = (0u | 48u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 55u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
      if (branch_taken) {
          goto L_08943284;
      }
      goto L_08943070;
    }
L_08943070:
    ctx.gpr[4] = (0u | 48u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 56u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
      if (branch_taken) {
          goto L_08943284;
      }
      goto L_08943094;
    }
L_08943094:
    ctx.gpr[4] = (0u | 48u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 57u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
      if (branch_taken) {
          goto L_08943284;
      }
      goto L_089430B8;
    }
L_089430B8:
    ctx.gpr[4] = (0u | 49u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 48u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
      if (branch_taken) {
          goto L_08943284;
      }
      goto L_089430DC;
    }
L_089430DC:
    ctx.gpr[4] = (0u | 49u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
      if (branch_taken) {
          goto L_08943284;
      }
      goto L_089430FC;
    }
L_089430FC:
    ctx.gpr[4] = (0u | 49u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 50u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
      if (branch_taken) {
          goto L_08943284;
      }
      goto L_08943120;
    }
L_08943120:
    ctx.gpr[4] = (0u | 49u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 51u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
      if (branch_taken) {
          goto L_08943284;
      }
      goto L_08943144;
    }
L_08943144:
    ctx.gpr[4] = (0u | 49u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 53u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
      if (branch_taken) {
          goto L_08943284;
      }
      goto L_08943168;
    }
L_08943168:
    ctx.gpr[4] = (0u | 49u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 54u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
      if (branch_taken) {
          goto L_08943284;
      }
      goto L_0894318C;
    }
L_0894318C:
    ctx.gpr[4] = (0u | 49u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 55u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
      if (branch_taken) {
          goto L_08943284;
      }
      goto L_089431B0;
    }
L_089431B0:
    ctx.gpr[4] = (0u | 49u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 56u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
      if (branch_taken) {
          goto L_08943284;
      }
      goto L_089431D4;
    }
L_089431D4:
    ctx.gpr[4] = (0u | 49u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 57u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
      if (branch_taken) {
          goto L_08943284;
      }
      goto L_089431F8;
    }
L_089431F8:
    ctx.gpr[4] = (0u | 50u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 48u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
      if (branch_taken) {
          goto L_08943284;
      }
      goto L_0894321C;
    }
L_0894321C:
    ctx.gpr[4] = (0u | 50u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
      if (branch_taken) {
          goto L_08943284;
      }
      goto L_0894323C;
    }
L_0894323C:
    ctx.gpr[4] = (0u | 50u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 51u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
      if (branch_taken) {
          goto L_08943284;
      }
      goto L_08943260;
    }
L_08943260:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08943284:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08943294u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08943294u) goto L_08943294;
    return;
L_08943294:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089432A0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x089432A0u) goto L_089432A0;
    return;
L_089432A0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089432B0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x089432B0u) goto L_089432B0;
    return;
L_089432B0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943260;
      }
      goto L_089432BC;
    }
L_089432BC:
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
      if (branch_taken) {
          goto L_089432D0;
      }
      goto L_089432C8;
    }
L_089432C8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
      if (branch_taken) {
          goto L_0894331C;
      }
      goto L_089432D0;
    }
L_089432D0:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089432E8u);
    ctx.gpr[5] = (0u | 146u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089432E8u) goto L_089432E8;
    return;
L_089432E8:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0894331C;
      }
      goto L_089432FC;
    }
L_089432FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089432FC;
      }
      goto L_0894331C;
    }
L_0894331C:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08943340:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 15u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[31]);
    ctx.gpr[31] = (0x08943388u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(9804));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08943388u) goto L_08943388;
    return;
L_08943388:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(22) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
        goto L_08943780;
    }
    goto L_08943398;
L_08943398:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(10800)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089433B0:
    ctx.gpr[4] = (0u | 48u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 50u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
    ctx.gpr[20] = (2222u << 16u);
    goto L_089433D8;
L_089433D8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089433E8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x089433E8u) goto L_089433E8;
    return;
L_089433E8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 152u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08943400u);
    ctx.gpr[5] = (0u | 146u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08943400u) goto L_08943400;
    return;
L_08943400:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08943410u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x08943410u) goto L_08943410;
    return;
L_08943410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(108));
    ctx.gpr[31] = (0x08943424u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x08943424u) goto L_08943424;
    return;
L_08943424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08943430u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 240u, 0x0880EC64u>(ctx, &aot_mem) && ctx.pc == 0x08943430u) goto L_08943430;
    return;
L_08943430:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08943440u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 247u, 0x0880ECE8u>(ctx, &aot_mem) && ctx.pc == 0x08943440u) goto L_08943440;
    return;
L_08943440:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894346C:
    ctx.gpr[4] = (0u | 48u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 51u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (2222u << 16u);
      if (branch_taken) {
          goto L_089433D8;
      }
      goto L_08943498;
    }
L_08943498:
    ctx.gpr[4] = (0u | 48u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 53u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (2222u << 16u);
      if (branch_taken) {
          goto L_089433D8;
      }
      goto L_089434C4;
    }
L_089434C4:
    ctx.gpr[4] = (0u | 48u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 54u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (2222u << 16u);
      if (branch_taken) {
          goto L_089433D8;
      }
      goto L_089434F0;
    }
L_089434F0:
    ctx.gpr[4] = (0u | 48u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 55u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (2222u << 16u);
      if (branch_taken) {
          goto L_089433D8;
      }
      goto L_0894351C;
    }
L_0894351C:
    ctx.gpr[4] = (0u | 48u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 56u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (2222u << 16u);
      if (branch_taken) {
          goto L_089433D8;
      }
      goto L_08943548;
    }
L_08943548:
    ctx.gpr[4] = (0u | 48u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 57u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (2222u << 16u);
      if (branch_taken) {
          goto L_089433D8;
      }
      goto L_08943574;
    }
L_08943574:
    ctx.gpr[4] = (0u | 49u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 48u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (2222u << 16u);
      if (branch_taken) {
          goto L_089433D8;
      }
      goto L_089435A0;
    }
L_089435A0:
    ctx.gpr[4] = (0u | 49u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (2222u << 16u);
      if (branch_taken) {
          goto L_089433D8;
      }
      goto L_089435C8;
    }
L_089435C8:
    ctx.gpr[4] = (0u | 49u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 50u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (2222u << 16u);
      if (branch_taken) {
          goto L_089433D8;
      }
      goto L_089435F4;
    }
L_089435F4:
    ctx.gpr[4] = (0u | 49u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 51u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (2222u << 16u);
      if (branch_taken) {
          goto L_089433D8;
      }
      goto L_08943620;
    }
L_08943620:
    ctx.gpr[4] = (0u | 49u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 53u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (2222u << 16u);
      if (branch_taken) {
          goto L_089433D8;
      }
      goto L_0894364C;
    }
L_0894364C:
    ctx.gpr[4] = (0u | 49u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 54u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (2222u << 16u);
      if (branch_taken) {
          goto L_089433D8;
      }
      goto L_08943678;
    }
L_08943678:
    ctx.gpr[4] = (0u | 49u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 55u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (2222u << 16u);
      if (branch_taken) {
          goto L_089433D8;
      }
      goto L_089436A4;
    }
L_089436A4:
    ctx.gpr[4] = (0u | 49u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 56u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (2222u << 16u);
      if (branch_taken) {
          goto L_089433D8;
      }
      goto L_089436D0;
    }
L_089436D0:
    ctx.gpr[4] = (0u | 49u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 57u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (2222u << 16u);
      if (branch_taken) {
          goto L_089433D8;
      }
      goto L_089436FC;
    }
L_089436FC:
    ctx.gpr[4] = (0u | 50u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 48u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (2222u << 16u);
      if (branch_taken) {
          goto L_089433D8;
      }
      goto L_08943728;
    }
L_08943728:
    ctx.gpr[4] = (0u | 50u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (2222u << 16u);
      if (branch_taken) {
          goto L_089433D8;
      }
      goto L_08943750;
    }
L_08943750:
    ctx.gpr[4] = (0u | 50u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 51u);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9776));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (2222u << 16u);
      if (branch_taken) {
          goto L_089433D8;
      }
      goto L_0894377C;
    }
L_0894377C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    goto L_08943780;
L_08943780:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089437B0:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22336)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(22340), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089439F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(23420)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(72));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08943A2Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11200));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08943A2Cu) goto L_08943A2C;
    return;
L_08943A2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 180u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08943A50u);
    ctx.gpr[5] = (0u | 147u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08943A50u) goto L_08943A50;
    return;
L_08943A50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08943AAC;
      }
      goto L_08943A58;
    }
L_08943A58:
    ctx.gpr[18] = (2220u << 16u);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[21] + static_cast<std::uint32_t>(552));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(11208));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(23884));
    goto L_08943A74;
L_08943A74:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08943A84u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08943A84u) goto L_08943A84;
    return;
L_08943A84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x08943A94u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 48u, 0x089442F8u>(ctx, &aot_mem) && ctx.pc == 0x08943A94u) goto L_08943A94;
    return;
L_08943A94:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(64));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[20] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_08943A74;
      }
      goto L_08943AAC;
    }
L_08943AAC:
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
L_08943AD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-3312));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3300), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3304), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(23420)));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3280), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3284), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3288), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3292), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3296), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3308), ctx.gpr[31]);
    ctx.gpr[31] = (0x08943B08u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 304u, 0x08949A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08943B08u) goto L_08943B08;
    return;
L_08943B08:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[22] + static_cast<std::uint32_t>(552));
    ctx.gpr[17] = (ctx.gpr[22] + static_cast<std::uint32_t>(3696));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(23904));
    goto L_08943B20;
L_08943B20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08943B38u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 739u, 0x08947980u>(ctx, &aot_mem) && ctx.pc == 0x08943B38u) goto L_08943B38;
    return;
L_08943B38:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (0u | 408u);
    goto L_08943B40;
L_08943B40:
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08943B40;
      }
      goto L_08943B64;
    }
L_08943B64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08943B70u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 341u, 0x0894A09Cu>(ctx, &aot_mem) && ctx.pc == 0x08943B70u) goto L_08943B70;
    return;
L_08943B70:
    ctx.gpr[31] = (0x08943B78u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 337u, 0x08949F78u>(ctx, &aot_mem) && ctx.pc == 0x08943B78u) goto L_08943B78;
    return;
L_08943B78:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(36));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(64));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(3264));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08943B20;
      }
      goto L_08943B94;
    }
L_08943B94:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(20016), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(20020), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(20024), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(20028), 0u);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(20032), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(20036), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08943BBCu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 307u, 0x08949B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08943BBCu) goto L_08943BBC;
    return;
L_08943BBC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(3280)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(3284)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(3288)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(3296)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(3300)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(3304)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(3308)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(3312));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08943BE4:
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
    ctx.gpr[31] = (0x08943C18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 858u, 0x0881F478u>(ctx, &aot_mem) && ctx.pc == 0x08943C18u) goto L_08943C18;
    return;
L_08943C18:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(23420)));
    ctx.gpr[20] = (ctx.gpr[30] | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[23] = (ctx.gpr[20] | 0u);
    goto L_08943C2C;
L_08943C2C:
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[31] = (0x08943C38u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 14u, 0x08820128u>(ctx, &aot_mem) && ctx.pc == 0x08943C38u) goto L_08943C38;
    return;
L_08943C38:
    if (ctx.gpr[2] == ctx.gpr[21]) {
    ctx.gpr[21] = (0u | 2u);
        goto L_08943C40;
    }
    goto L_08943C40;
L_08943C40:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08943CA0;
      }
      goto L_08943C50;
    }
L_08943C50:
    ctx.gpr[19] = (ctx.gpr[23] + static_cast<std::uint32_t>(872));
    ctx.gpr[18] = (ctx.gpr[23] + static_cast<std::uint32_t>(1512));
    goto L_08943C58;
L_08943C58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08943C70u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 739u, 0x08947980u>(ctx, &aot_mem) && ctx.pc == 0x08943C70u) goto L_08943C70;
    return;
L_08943C70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08943C88u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 739u, 0x08947980u>(ctx, &aot_mem) && ctx.pc == 0x08943C88u) goto L_08943C88;
    return;
L_08943C88:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08943C58;
      }
      goto L_08943CA0;
    }
L_08943CA0:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[22] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(320));
      if (branch_taken) {
          goto L_08943C2C;
      }
      goto L_08943CB4;
    }
L_08943CB4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[30] + static_cast<std::uint32_t>(2152));
    goto L_08943CC0;
L_08943CC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08943CD8u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 739u, 0x08947980u>(ctx, &aot_mem) && ctx.pc == 0x08943CD8u) goto L_08943CD8;
    return;
L_08943CD8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08943CC0;
      }
      goto L_08943CEC;
    }
L_08943CEC:
    ctx.gpr[31] = (0x08943CF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 139u, 0x089449ECu>(ctx, &aot_mem) && ctx.pc == 0x08943CF4u) goto L_08943CF4;
    return;
L_08943CF4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08943D38;
      }
      goto L_08943D08;
    }
L_08943D08:
    ctx.gpr[19] = (ctx.gpr[30] + static_cast<std::uint32_t>(2792));
    goto L_08943D0C;
L_08943D0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08943D24u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 739u, 0x08947980u>(ctx, &aot_mem) && ctx.pc == 0x08943D24u) goto L_08943D24;
    return;
L_08943D24:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08943D0C;
      }
      goto L_08943D38;
    }
L_08943D38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08943DA8;
      }
      goto L_08943D4C;
    }
L_08943D4C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[19] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08943D98;
      }
      goto L_08943D68;
    }
L_08943D68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08943D80u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 739u, 0x08947980u>(ctx, &aot_mem) && ctx.pc == 0x08943D80u) goto L_08943D80;
    return;
L_08943D80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(84));
      if (branch_taken) {
          goto L_08943D68;
      }
      goto L_08943D94;
    }
L_08943D94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(40)));
    goto L_08943D98;
L_08943D98:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08943D4C;
      }
      goto L_08943DA8;
    }
L_08943DA8:
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
L_08943DD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(23420)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08943F14;
      }
      goto L_08943E0C;
    }
L_08943E0C:
    ctx.gpr[31] = (0x08943E14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 14u, 0x08820128u>(ctx, &aot_mem) && ctx.pc == 0x08943E14u) goto L_08943E14;
    return;
L_08943E14:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[21] = (ctx.gpr[16] << 2u);
      if (branch_taken) {
          goto L_08943F14;
      }
      goto L_08943E24;
    }
L_08943E24:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[21] = (ctx.gpr[17] + ctx.gpr[21]);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[5] == ctx.gpr[19]) {
    ctx.gpr[18] = (0u | 2u);
        goto L_08943E40;
    }
    goto L_08943E40;
L_08943E40:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[20] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08943E88;
      }
      goto L_08943E50;
    }
L_08943E50:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
        goto L_08943E64;
    }
    goto L_08943E58;
L_08943E58:
    ctx.gpr[31] = (0x08943E60u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 59u, 0x089443FCu>(ctx, &aot_mem) && ctx.pc == 0x08943E60u) goto L_08943E60;
    return;
L_08943E60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    goto L_08943E64;
L_08943E64:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08943E78;
    }
    goto L_08943E6C;
L_08943E6C:
    ctx.gpr[31] = (0x08943E74u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 59u, 0x089443FCu>(ctx, &aot_mem) && ctx.pc == 0x08943E74u) goto L_08943E74;
    return;
L_08943E74:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08943E78;
L_08943E78:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (ctx.gpr[20] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08943E50;
      }
      goto L_08943E88;
    }
L_08943E88:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_08943EA4;
      }
      goto L_08943E90;
    }
L_08943E90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08943EA0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08943EA0u) goto L_08943EA0;
    return;
L_08943EA0:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), 0u);
    goto L_08943EA4;
L_08943EA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_08943EC4;
      }
      goto L_08943EB0;
    }
L_08943EB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08943EC0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08943EC0u) goto L_08943EC0;
    return;
L_08943EC0:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), 0u);
    goto L_08943EC4;
L_08943EC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_08943F14;
      }
      goto L_08943ED0;
    }
L_08943ED0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    if (ctx.gpr[16] == 0u) {
    ctx.gpr[4] = (0u | 2u);
        goto L_08943EDC;
    }
    goto L_08943EDC;
L_08943EDC:
    ctx.gpr[7] = (ctx.gpr[19] << (ctx.gpr[4] & 31u));
    ctx.gpr[6] = (ctx.gpr[19] << (ctx.gpr[4] & 31u));
    ctx.gpr[7] = (ctx.gpr[5] & ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[6] = (~(ctx.gpr[6] | 0u));
      if (branch_taken) {
          goto L_08943F14;
      }
      goto L_08943EF0;
    }
L_08943EF0:
    ctx.gpr[7] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[31] = (0x08943F14u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 280u, 0x0880EEA8u>(ctx, &aot_mem) && ctx.pc == 0x08943F14u) goto L_08943F14;
    return;
L_08943F14:
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
L_08943F3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(23420)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08943F9C;
      }
      goto L_08943F64;
    }
L_08943F64:
    ctx.gpr[16] = (0u | 0u);
    goto L_08943F68;
L_08943F68:
    ctx.gpr[31] = (0x08943F70u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 59u, 0x089443FCu>(ctx, &aot_mem) && ctx.pc == 0x08943F70u) goto L_08943F70;
    return;
L_08943F70:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08943F68;
      }
      goto L_08943F84;
    }
L_08943F84:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08943F98u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08943F98u) goto L_08943F98;
    return;
L_08943F98:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    goto L_08943F9C;
L_08943F9C:
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
L_08943FB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] << 7u);
    ctx.gpr[4] = (ctx.gpr[5] << 4u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(23420)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.pc = 0x08944000u; return;
}

void recomp_unit_0079(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0079_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_79(Runtime &runtime) {
    runtime.register_generated_unit(79u, 0x08940000u, 16384u, &recomp_unit_0079, &recomp_unit_0079_entry);
    runtime.register_function(0x08940000u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894002Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940044u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940050u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940060u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894006Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894007Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089400ACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089400F0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089400F8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940100u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940128u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940130u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940144u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940178u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940180u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894018Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894019Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089401A8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089401B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089401BCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089401C8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089401D0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089401E0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089401E4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089401F0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089401F8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894021Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940244u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894024Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940254u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894025Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894027Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940284u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089402A4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089402ACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089402CCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089402D4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089402F4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089402FCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894031Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940344u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940388u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940390u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940398u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089403C0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089403C8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089403DCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940410u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940418u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940424u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940434u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940440u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940448u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940454u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940460u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940468u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940478u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894047Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940488u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940490u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089404B4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089404D4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089404DCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089404E4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089404ECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940508u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940510u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894052Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940534u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940550u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940558u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940574u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894057Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940598u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089405C0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089405ECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940604u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894060Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894061Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940624u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894062Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940634u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894063Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940644u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894064Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940658u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940660u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940670u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940678u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940688u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940694u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089406A0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089406B4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089406BCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089406C8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089406D4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089406DCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089406E8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089406F0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089406FCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940704u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940720u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940728u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940734u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940758u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940780u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894078Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940794u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089407A0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089407A8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089407B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089407C0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089407C8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089407D0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089407D8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089407E0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089407E8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089407F4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940804u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940814u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894081Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940824u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940844u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940864u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940870u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940874u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940880u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940890u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940898u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089408A8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089408B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089408D0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940914u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940920u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940928u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940930u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940948u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894095Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940980u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894099Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089409A4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089409CCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089409DCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089409F4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940A24u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940A48u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940A60u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940A78u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940A8Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940AA8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940AB0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940ABCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940ACCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940B00u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940B14u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940B1Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940B28u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940B38u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940B60u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940B74u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940B7Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940B94u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940BA8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940BB8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940BD8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940C28u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940C44u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940C8Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940C9Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940D3Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940D50u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940D6Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940D78u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940D7Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940D94u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940D98u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940DB0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940DC0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940DC8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940DD0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940DE0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940DE4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940DECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940DF8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940E10u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940E14u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940E4Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940E80u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940E88u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940E9Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940EB8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940EC0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940ECCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940EDCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940EE4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940EECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940EF8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940F0Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940F10u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940F28u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940F30u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940F38u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940F44u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940F50u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940F58u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940F60u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940F68u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940F7Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940F8Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940F98u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940FA8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940FB0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940FC8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940FDCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940FE4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940FECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940FF4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941008u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894100Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941014u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894102Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894103Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941044u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894104Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941060u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941068u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941080u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941090u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941098u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089410A0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089410ACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089410B4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089410BCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089410CCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089410D0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089410DCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089410E8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089410ECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941114u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894116Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894117Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089411A0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089411ACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089411B8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089411C8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089411D4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089411ECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941208u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941220u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894123Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941244u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894124Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941254u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941258u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941264u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894126Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941274u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894128Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089412A4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089412CCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089412E0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089412ECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089412F0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089412FCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941308u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941318u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894131Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894132Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894135Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941378u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941384u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941388u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089413B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089413BCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089413C4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089413CCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089413E4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089413F0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089413F8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941408u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894141Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941428u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941438u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894146Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941488u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941498u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089414A8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089414BCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089414C8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089414D4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089414DCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089414E4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941500u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894150Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941518u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941528u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941540u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941548u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941558u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941570u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941584u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941594u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089415A8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089415B8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089415C8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089415D8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089415E8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089415F4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894160Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894161Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941624u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941634u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894163Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894164Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941654u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894165Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941668u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941670u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941674u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089416A4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089416ACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089416BCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089416C4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089416CCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941700u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941708u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941718u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941720u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941754u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894175Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894176Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941774u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894177Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089417B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089417B8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089417CCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089417D0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089417FCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941804u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941814u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941818u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894182Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894183Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941854u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941860u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894186Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941874u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941878u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089418B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089418B4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089418BCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089418C8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089418D4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089418DCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089418F4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941914u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894191Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941924u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941930u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941944u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894194Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941954u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894195Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941964u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941970u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894198Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941994u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894199Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089419ACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089419BCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089419C8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089419D8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089419E0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089419E8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089419F0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089419F8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941A04u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941A10u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941A68u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941A70u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941A78u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941A80u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941A8Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941AA4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941AACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941AB8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941B00u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941B08u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941B0Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941B38u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941B44u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941B8Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941BCCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941BD8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941BE8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941BFCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941C08u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941C24u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941C40u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941C48u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941C78u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941C94u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941CA4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941CE0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941DA0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941DB8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941DCCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941DD4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941DD8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941DE0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941DECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941E00u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941EA0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941EA4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941EC4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941ECCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941EECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941F1Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941F70u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941F84u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941FA4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941FB4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941FC0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941FC8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941FD0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941FD4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941FDCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941FF0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941FF8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942000u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942014u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942018u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942020u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894202Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894203Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942044u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942054u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894205Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942074u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894207Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942084u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942088u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089420A0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089420A4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089420A8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089420B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089420BCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089420DCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089420E4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089420ECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089420F4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089420FCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942108u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942150u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089421C4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089421DCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089421F4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942208u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942218u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942224u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894222Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942234u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942240u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942248u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942254u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894225Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942268u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942270u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942274u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894227Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942280u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942284u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942290u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089422A0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089422A8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089422B4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089422C0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089422C8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089422D4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089422DCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089422E4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089422ECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089422F0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089422F4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942300u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942310u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942318u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942320u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942330u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942338u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942340u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942344u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942354u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894239Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089423D0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089423E0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089423ECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089423F8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942408u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942410u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942420u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942444u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942450u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942458u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942460u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942468u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894246Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942474u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942484u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942488u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942494u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089424A0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089424A8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089424BCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089424C4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089424CCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089424D4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089424DCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089424E4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089424ECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089424F4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089424F8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894250Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942510u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894251Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942524u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942540u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894254Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942564u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894256Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942580u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942594u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089425A8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089425DCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894261Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942624u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942630u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942640u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942650u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942658u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942664u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894266Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894269Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089426A4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089426DCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089426E8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089426F8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942700u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942710u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942714u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942724u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942740u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942754u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942768u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942780u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942788u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089427B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089427C4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089427D8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089427E4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942800u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894280Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942830u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942844u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942850u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942858u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942864u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089428B8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089428C8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089428E4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089428ECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942918u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942928u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894295Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942968u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942984u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942A28u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942A3Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942A44u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942A5Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942A68u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942A70u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942A78u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942A84u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942A9Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942AA8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942AACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942AC8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942B08u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942B4Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942B60u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942B7Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942B8Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942BA4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942BCCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942BF4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942C1Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942C44u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942C6Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942C94u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942CBCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942CE4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942D08u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942D30u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942D58u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942D80u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942DA8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942DD0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942DF8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942E20u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942E48u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942E6Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942E94u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942EBCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942ECCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942ED8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942EE8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942EFCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942F10u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942F1Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942F54u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942F94u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942FA4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942FBCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942FE0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943004u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943028u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894304Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943070u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943094u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089430B8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089430DCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089430FCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943120u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943144u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943168u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894318Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089431B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089431D4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089431F8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894321Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894323Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943260u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943284u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943294u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089432A0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089432B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089432BCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089432C8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089432D0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089432E8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089432FCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894331Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943340u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943388u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943398u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089433B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089433D8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089433E8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943400u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943410u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943424u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943430u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943440u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894346Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943498u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089434C4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089434F0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894351Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943548u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943574u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089435A0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089435C8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089435F4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943620u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894364Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943678u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089436A4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089436D0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089436FCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943728u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943750u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894377Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943780u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089437B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089439F4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943A2Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943A50u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943A58u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943A74u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943A84u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943A94u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943AACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943AD0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943B08u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943B20u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943B38u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943B40u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943B64u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943B70u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943B78u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943B94u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943BBCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943BE4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943C18u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943C2Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943C38u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943C40u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943C50u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943C58u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943C70u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943C88u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943CA0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943CB4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943CC0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943CD8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943CECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943CF4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943D08u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943D0Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943D24u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943D38u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943D4Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943D68u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943D80u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943D94u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943D98u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943DA8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943DD8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943E0Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943E14u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943E24u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943E40u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943E50u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943E58u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943E60u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943E64u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943E6Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943E74u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943E78u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943E88u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943E90u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943EA0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943EA4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943EB0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943EC0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943EC4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943ED0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943EDCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943EF0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943F14u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943F3Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943F64u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943F68u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943F70u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943F84u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943F98u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943F9Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943FB4u, &recomp_unit_0079, "recomp_unit_0079");
}
} // namespace psprecomp

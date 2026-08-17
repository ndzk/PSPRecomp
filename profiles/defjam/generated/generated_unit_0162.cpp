#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0162[4094] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7,
    0, 8, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0,
    0, 0, 0, 14, 0, 15, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0,
    21, 0, 22, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 25, 0, 26, 0, 0, 27, 0, 28, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0,
    31, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 38, 0, 39, 0, 0, 40,
    0, 0, 41, 0, 42, 0, 43, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0,
    0, 0, 49, 0, 0, 50, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0,
    0, 54, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 59, 0, 60, 0, 0, 61, 0, 0, 0, 0,
    0, 0, 0, 62, 0, 63, 0, 0, 64, 65, 0, 0, 66, 0, 0, 67, 0, 68, 0, 0, 69, 0, 70, 0, 71, 0, 0, 0, 72, 0, 0, 0,
    0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 76, 0, 0, 0, 77, 0, 78, 0, 0, 79,
    0, 80, 0, 0, 81, 0, 82, 0, 83, 0, 84, 0, 0, 0, 0, 0, 85, 0, 86, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0,
    89, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 92, 0, 0, 93, 0, 0, 0, 94, 0, 95, 0, 0, 0, 96, 0, 97, 0, 0, 0, 98, 0,
    99, 0, 0, 0, 100, 0, 101, 102, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 108, 0, 109, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 112, 0, 0, 0, 113, 0, 0, 114, 115, 0, 0, 0, 116, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 121, 0, 0, 122, 123, 0,
    0, 0, 0, 0, 0, 0, 0, 124, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0,
    0, 130, 0, 0, 131, 0, 132, 0, 0, 133, 0, 0, 0, 0, 134, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0,
    0, 137, 0, 0, 0, 138, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 143, 144, 0, 145, 0, 0, 146, 0, 147, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 153, 0, 154, 0, 155, 0, 0, 0, 0,
    156, 0, 157, 0, 158, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 163, 164, 0,
    165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 170, 0, 171, 0, 172, 0, 0,
    0, 0, 173, 0, 0, 174, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 182, 0, 0, 183, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 186, 0, 187, 0, 188, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 192, 0, 193, 0, 194, 0, 195, 0, 0, 0, 0,
    196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 201, 0,
    202, 0, 0, 0, 203, 204, 0, 205, 0, 0, 206, 0, 0, 0, 207, 208, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 212, 0, 0,
    213, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 219,
    0, 0, 0, 0, 0, 0, 0, 220, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224,
    0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 228, 0, 0, 229, 0,
    0, 230, 0, 0, 0, 0, 231, 0, 232, 233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 0, 0, 236, 0, 237, 0, 238, 239, 0, 0, 0,
    0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0,
    243, 0, 0, 0, 244, 245, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 251, 0,
    252, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0,
    0, 0, 0, 0, 256, 0, 0, 257, 0, 258, 0, 259, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 264, 0,
    265, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 269,
    0, 0, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    274, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 284, 0, 0, 0, 0, 0, 285, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 295, 0, 0, 0, 296,
    297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0,
    0, 302, 0, 303, 0, 304, 0, 305, 0, 306, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 309, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 313, 0, 314, 0, 315, 0, 0, 316, 0, 0, 317, 0, 318, 0,
    319, 320, 0, 0, 321, 0, 322, 0, 0, 323, 0, 324, 0, 325, 0, 326, 0, 327, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 330, 0, 331, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0,
    0, 0, 338, 0, 0, 0, 339, 340, 0, 0, 0, 0, 0, 341, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 344, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 347, 0, 348, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    351, 0, 352, 0, 0, 353, 0, 354, 0, 0, 355, 0, 356, 0, 357, 0, 358, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360,
    0, 361, 0, 0, 0, 362, 0, 0, 363, 0, 364, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 367, 0, 368, 0, 369, 370, 0, 371, 0, 372, 0,
    373, 0, 374, 0, 0, 375, 0, 376, 0, 377, 0, 378, 0, 0, 379, 0, 380, 0, 0, 381, 0, 382, 0, 383, 0, 384, 0, 385, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 389,
    0, 0, 0, 390, 0, 391, 0, 0, 392, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 396, 0, 0, 397, 0, 0, 0, 0, 398, 0, 399, 0, 0, 400, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 405, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 407,
    0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 410, 0, 411, 0, 412, 0, 413, 0, 0, 414, 0, 0, 0, 0, 0, 0,
    415, 416, 0, 417, 0, 418, 0, 0, 0, 0, 419, 0, 0, 420, 0, 421, 0, 0, 422, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 424,
    0, 425, 0, 426, 0, 427, 0, 428, 0, 0, 429, 0, 0, 0, 0, 0, 430, 0, 431, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 439, 0, 0, 440, 0, 0, 0, 441, 0, 442, 0, 443, 0, 0, 444, 0, 0, 0,
    0, 0, 0, 0, 0, 445, 0, 0, 0, 446, 0, 447, 0, 0, 0, 0, 0, 0, 448, 0, 449, 0, 0, 0, 0, 450, 0, 451, 452, 0, 453, 454,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 457, 0, 0, 458, 0, 459, 0, 0, 460, 0, 461, 0, 0, 0, 0,
    0, 462, 0, 463, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 465, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0,
    0, 0, 0, 468, 0, 0, 0, 0, 469, 0, 470, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 474, 0, 0, 0, 475, 0, 0, 0, 0, 476, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 478, 0, 0, 479, 0, 0, 0, 480, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 484,
    0, 485, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    488, 0, 0, 0, 0, 0, 0, 489, 0, 490, 0, 491, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 495, 0, 0, 496, 0, 497, 0, 0, 498,
    0, 499, 0, 500, 0, 501, 0, 502, 0, 503, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 506, 0, 0, 0, 0, 0, 0,
    0, 507, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 509, 510, 0, 511, 0, 512, 0, 0, 0, 0, 0, 0, 0, 513, 0, 514, 0, 0, 0, 515,
    0, 0, 0, 0, 516, 517, 0, 0, 518, 519, 0, 520, 0, 0, 521, 0, 522, 0, 0, 0, 523, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    525, 0, 526, 0, 527, 0, 0, 528, 0, 0, 529, 0, 0, 530, 0, 0, 531, 0, 0, 532, 0, 0, 533, 0, 0, 534, 0, 0, 535, 0, 0, 536,
    537, 0, 538, 0, 539, 0, 540, 0, 0, 541, 0, 0, 542, 0, 0, 543, 0, 0, 544, 0, 0, 545, 0, 0, 546, 0, 0, 547, 0, 0, 548, 0,
    549, 0, 550, 551, 0, 0, 552, 0, 0, 553, 0, 0, 554, 0, 0, 555, 0, 0, 556, 0, 0, 557, 0, 0, 558, 0, 0, 559, 0, 0, 560, 561,
    0, 562, 0, 0, 563, 0, 0, 0, 564, 0, 0, 565, 0, 566, 0, 0, 567, 0, 568, 0, 0, 569, 0, 570, 0, 571, 0, 572, 0, 573, 0, 574,
    0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0,
    0, 579, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 582, 0, 0, 583, 0, 0, 0, 0,
    0, 0, 584, 0, 0, 585, 0, 586, 0, 0, 0, 0, 587, 588, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0,
    591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 593, 0, 594, 0, 595, 0, 0, 596, 0, 0, 597, 0, 598, 0, 0, 0, 599,
    600, 0, 601, 0, 602, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 605, 0, 0,
    0, 606, 0, 607, 0, 0, 0, 0, 608, 0, 0, 609, 0, 610, 0, 0, 611, 0, 0, 0, 0, 0, 612, 0, 613, 0, 0, 0, 614, 0, 0, 615,
    0, 616, 0, 0, 617, 0, 618, 0, 0, 0, 619, 0, 620, 0, 0, 621, 0, 0, 622, 0, 0, 623, 0, 624, 0, 0, 0, 625, 626, 0, 627, 0,
    628, 629, 0, 0, 630, 0, 631, 0, 632, 0, 0, 633, 0, 634, 0, 635, 0, 636, 0, 0, 0, 637, 0, 638, 0, 639, 0, 640, 0, 0, 641, 642,
    0, 643, 0, 0, 0, 644, 0, 645, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 648, 0, 0, 649, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0,
    0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 654, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 659, 0, 660, 0, 0, 661, 0, 0, 0, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 0, 663, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0,
    666, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0,
    0, 0, 0, 0, 670, 0, 0, 671, 0, 0, 0, 0, 0, 0, 672, 0, 0, 0, 673, 0, 674, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 0,
    0, 0, 0, 0, 676, 0, 0, 677, 0, 0, 0, 0, 0, 0, 678, 0, 0, 0, 679, 0, 680, 0, 0, 0, 0, 0, 0, 681, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 683, 0, 0, 684, 0, 0, 685, 0, 686, 0, 0, 0, 0, 0, 0, 687, 0, 0,
    0, 0, 0, 0, 688, 0, 0, 689, 0, 690, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 692, 0, 693, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 0, 0, 0, 0, 696, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 697, 0, 0, 0, 0, 698, 0, 699, 0, 0, 0, 0, 0, 700, 0, 701, 0, 702, 0, 703,
    0, 0, 704, 0, 705, 0, 706, 0, 707, 0, 0, 708, 0, 0, 0, 709, 0, 0, 0, 0, 710, 0, 0, 711, 0, 712, 0, 713, 0, 0, 0, 0,
    0, 714, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 0, 0, 0, 717, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 718, 0, 0, 0, 0, 0, 719, 0, 0, 0, 720, 0, 0, 0, 721, 0, 0, 0, 0, 722, 0, 0, 0, 0, 723, 0,
    0, 724, 0, 0, 725, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 726, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 727, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 728, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 729, 0,
    730, 0, 731, 0, 0, 0, 0, 0, 0, 0, 732, 0, 0, 0, 733, 0, 0, 734, 0, 0, 735, 736, 0, 737, 0, 0, 0, 0, 0, 0, 738, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 739, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 741, 0, 742,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 743, 0, 744, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 745, 0, 746, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 747, 0, 0, 748, 0, 0, 0, 0, 0, 0, 0, 0, 0, 749, 0, 0, 750, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 751, 0, 0, 752, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 753, 0, 0, 754, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 755,
    0, 0, 0, 756, 0, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 758, 0, 0, 0, 0, 759, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 760, 761, 0, 0, 0, 0, 762, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 763, 0, 0, 0, 0,
    764, 0, 0, 0, 0, 0, 0, 0, 765, 0, 0, 0, 0, 0, 0, 0, 766, 0, 0, 0, 767, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 768,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 769, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 770, 0, 771, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 772, 0, 0, 0, 773, 0, 0, 774, 0, 0, 775, 0, 0, 0, 776, 0, 777,
    0, 0, 0, 0, 0, 0, 778, 0, 0, 0, 0, 779, 0, 780, 0, 0, 0, 0, 781, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 782, 783, 0, 0, 0, 784, 0, 0, 0, 785, 0, 786, 0, 0, 0, 0, 787, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 788, 0, 0, 0, 0, 0, 0, 0, 0, 789, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 790, 0, 0, 0, 0, 791, 0, 792,
    0, 0, 793, 0, 0, 794, 0, 795, 0, 0, 0, 0, 0, 0, 0, 0, 796, 0, 0, 0, 0, 0, 0, 0, 797, 0, 798, 0, 0, 0, 0, 0,
    0, 0, 0, 799, 0, 800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 801, 0, 802, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 803, 0, 0, 0, 0, 0, 0, 0, 0, 804, 0, 0, 0, 0, 0, 805, 0, 0, 0, 0, 806, 807,
};
void recomp_unit_0162_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A8C004u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0162[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A8C004;
    case 2u: goto L_08A8C010;
    case 3u: goto L_08A8C02C;
    case 4u: goto L_08A8C04C;
    case 5u: goto L_08A8C058;
    case 6u: goto L_08A8C060;
    case 7u: goto L_08A8C080;
    case 8u: goto L_08A8C088;
    case 9u: goto L_08A8C09C;
    case 10u: goto L_08A8C0A4;
    case 11u: goto L_08A8C0BC;
    case 12u: goto L_08A8C0F0;
    case 13u: goto L_08A8C0FC;
    case 14u: goto L_08A8C110;
    case 15u: goto L_08A8C118;
    case 16u: goto L_08A8C120;
    case 17u: goto L_08A8C138;
    case 18u: goto L_08A8C14C;
    case 19u: goto L_08A8C170;
    case 20u: goto L_08A8C17C;
    case 21u: goto L_08A8C184;
    case 22u: goto L_08A8C18C;
    case 23u: goto L_08A8C198;
    case 24u: goto L_08A8C1A8;
    case 25u: goto L_08A8C1B8;
    case 26u: goto L_08A8C1C0;
    case 27u: goto L_08A8C1CC;
    case 28u: goto L_08A8C1D4;
    case 29u: goto L_08A8C1DC;
    case 30u: goto L_08A8C1E8;
    case 31u: goto L_08A8C204;
    case 32u: goto L_08A8C208;
    case 33u: goto L_08A8C218;
    case 34u: goto L_08A8C234;
    case 35u: goto L_08A8C240;
    case 36u: goto L_08A8C24C;
    case 37u: goto L_08A8C260;
    case 38u: goto L_08A8C26C;
    case 39u: goto L_08A8C274;
    case 40u: goto L_08A8C280;
    case 41u: goto L_08A8C28C;
    case 42u: goto L_08A8C294;
    case 43u: goto L_08A8C29C;
    case 44u: goto L_08A8C2A4;
    case 45u: goto L_08A8C2AC;
    case 46u: goto L_08A8C2CC;
    case 47u: goto L_08A8C2E0;
    case 48u: goto L_08A8C2F8;
    case 49u: goto L_08A8C30C;
    case 50u: goto L_08A8C318;
    case 51u: goto L_08A8C324;
    case 52u: goto L_08A8C334;
    case 53u: goto L_08A8C368;
    case 54u: goto L_08A8C388;
    case 55u: goto L_08A8C390;
    case 56u: goto L_08A8C3A4;
    case 57u: goto L_08A8C3C4;
    case 58u: goto L_08A8C3D0;
    case 59u: goto L_08A8C3DC;
    case 60u: goto L_08A8C3E4;
    case 61u: goto L_08A8C3F0;
    case 62u: goto L_08A8C410;
    case 63u: goto L_08A8C418;
    case 64u: goto L_08A8C424;
    case 65u: goto L_08A8C428;
    case 66u: goto L_08A8C434;
    case 67u: goto L_08A8C440;
    case 68u: goto L_08A8C448;
    case 69u: goto L_08A8C454;
    case 70u: goto L_08A8C45C;
    case 71u: goto L_08A8C464;
    case 72u: goto L_08A8C474;
    case 73u: goto L_08A8C494;
    case 74u: goto L_08A8C4C8;
    case 75u: goto L_08A8C4D4;
    case 76u: goto L_08A8C4DC;
    case 77u: goto L_08A8C4EC;
    case 78u: goto L_08A8C4F4;
    case 79u: goto L_08A8C500;
    case 80u: goto L_08A8C508;
    case 81u: goto L_08A8C514;
    case 82u: goto L_08A8C51C;
    case 83u: goto L_08A8C524;
    case 84u: goto L_08A8C52C;
    case 85u: goto L_08A8C544;
    case 86u: goto L_08A8C54C;
    case 87u: goto L_08A8C554;
    case 88u: goto L_08A8C56C;
    case 89u: goto L_08A8C584;
    case 90u: goto L_08A8C59C;
    case 91u: goto L_08A8C5A4;
    case 92u: goto L_08A8C5B0;
    case 93u: goto L_08A8C5BC;
    case 94u: goto L_08A8C5CC;
    case 95u: goto L_08A8C5D4;
    case 96u: goto L_08A8C5E4;
    case 97u: goto L_08A8C5EC;
    case 98u: goto L_08A8C5FC;
    case 99u: goto L_08A8C604;
    case 100u: goto L_08A8C614;
    case 101u: goto L_08A8C61C;
    case 102u: goto L_08A8C620;
    case 103u: goto L_08A8C628;
    case 104u: goto L_08A8C648;
    case 105u: goto L_08A8C698;
    case 106u: goto L_08A8C6B0;
    case 107u: goto L_08A8C718;
    case 108u: goto L_08A8C78C;
    case 109u: goto L_08A8C794;
    case 110u: goto L_08A8C7A8;
    case 111u: goto L_08A8C7B4;
    case 112u: goto L_08A8C7C0;
    case 113u: goto L_08A8C7D0;
    case 114u: goto L_08A8C7DC;
    case 115u: goto L_08A8C7E0;
    case 116u: goto L_08A8C7F0;
    case 117u: goto L_08A8C820;
    case 118u: goto L_08A8C83C;
    case 119u: goto L_08A8C844;
    case 120u: goto L_08A8C868;
    case 121u: goto L_08A8C86C;
    case 122u: goto L_08A8C878;
    case 123u: goto L_08A8C87C;
    case 124u: goto L_08A8C8A0;
    case 125u: goto L_08A8C8A4;
    case 126u: goto L_08A8C8B0;
    case 127u: goto L_08A8C8E4;
    case 128u: goto L_08A8C924;
    case 129u: goto L_08A8C974;
    case 130u: goto L_08A8C988;
    case 131u: goto L_08A8C994;
    case 132u: goto L_08A8C99C;
    case 133u: goto L_08A8C9A8;
    case 134u: goto L_08A8C9BC;
    case 135u: goto L_08A8C9C0;
    case 136u: goto L_08A8C9FC;
    case 137u: goto L_08A8CA08;
    case 138u: goto L_08A8CA18;
    case 139u: goto L_08A8CA28;
    case 140u: goto L_08A8CA30;
    case 141u: goto L_08A8CA44;
    case 142u: goto L_08A8CA60;
    case 143u: goto L_08A8CA94;
    case 144u: goto L_08A8CA98;
    case 145u: goto L_08A8CAA0;
    case 146u: goto L_08A8CAAC;
    case 147u: goto L_08A8CAB4;
    case 148u: goto L_08A8CABC;
    case 149u: goto L_08A8CB20;
    case 150u: goto L_08A8CB28;
    case 151u: goto L_08A8CB50;
    case 152u: goto L_08A8CB5C;
    case 153u: goto L_08A8CB60;
    case 154u: goto L_08A8CB68;
    case 155u: goto L_08A8CB70;
    case 156u: goto L_08A8CB84;
    case 157u: goto L_08A8CB8C;
    case 158u: goto L_08A8CB94;
    case 159u: goto L_08A8CB9C;
    case 160u: goto L_08A8CBA4;
    case 161u: goto L_08A8CBE0;
    case 162u: goto L_08A8CBEC;
    case 163u: goto L_08A8CBF8;
    case 164u: goto L_08A8CBFC;
    case 165u: goto L_08A8CC04;
    case 166u: goto L_08A8CC30;
    case 167u: goto L_08A8CC38;
    case 168u: goto L_08A8CC44;
    case 169u: goto L_08A8CC64;
    case 170u: goto L_08A8CC68;
    case 171u: goto L_08A8CC70;
    case 172u: goto L_08A8CC78;
    case 173u: goto L_08A8CC8C;
    case 174u: goto L_08A8CC98;
    case 175u: goto L_08A8CCA0;
    case 176u: goto L_08A8CCA8;
    case 177u: goto L_08A8CCD4;
    case 178u: goto L_08A8CCE0;
    case 179u: goto L_08A8CD08;
    case 180u: goto L_08A8CD34;
    case 181u: goto L_08A8CD3C;
    case 182u: goto L_08A8CD44;
    case 183u: goto L_08A8CD50;
    case 184u: goto L_08A8CD58;
    case 185u: goto L_08A8CD64;
    case 186u: goto L_08A8CD8C;
    case 187u: goto L_08A8CD94;
    case 188u: goto L_08A8CD9C;
    case 189u: goto L_08A8CDA8;
    case 190u: goto L_08A8CDB8;
    case 191u: goto L_08A8CDD0;
    case 192u: goto L_08A8CDD8;
    case 193u: goto L_08A8CDE0;
    case 194u: goto L_08A8CDE8;
    case 195u: goto L_08A8CDF0;
    case 196u: goto L_08A8CE04;
    case 197u: goto L_08A8CE18;
    case 198u: goto L_08A8CE34;
    case 199u: goto L_08A8CE60;
    case 200u: goto L_08A8CE6C;
    case 201u: goto L_08A8CE7C;
    case 202u: goto L_08A8CE84;
    case 203u: goto L_08A8CE94;
    case 204u: goto L_08A8CE98;
    case 205u: goto L_08A8CEA0;
    case 206u: goto L_08A8CEAC;
    case 207u: goto L_08A8CEBC;
    case 208u: goto L_08A8CEC0;
    case 209u: goto L_08A8CEC8;
    case 210u: goto L_08A8CED8;
    case 211u: goto L_08A8CEF4;
    case 212u: goto L_08A8CEF8;
    case 213u: goto L_08A8CF04;
    case 214u: goto L_08A8CF14;
    case 215u: goto L_08A8CF1C;
    case 216u: goto L_08A8CF48;
    case 217u: goto L_08A8CF5C;
    case 218u: goto L_08A8CF70;
    case 219u: goto L_08A8CF80;
    case 220u: goto L_08A8CFA0;
    case 221u: goto L_08A8CFA8;
    case 222u: goto L_08A8CFC4;
    case 223u: goto L_08A8CFD8;
    case 224u: goto L_08A8D000;
    case 225u: goto L_08A8D01C;
    case 226u: goto L_08A8D02C;
    case 227u: goto L_08A8D068;
    case 228u: goto L_08A8D070;
    case 229u: goto L_08A8D07C;
    case 230u: goto L_08A8D088;
    case 231u: goto L_08A8D09C;
    case 232u: goto L_08A8D0A4;
    case 233u: goto L_08A8D0A8;
    case 234u: goto L_08A8D0C8;
    case 235u: goto L_08A8D0D0;
    case 236u: goto L_08A8D0E0;
    case 237u: goto L_08A8D0E8;
    case 238u: goto L_08A8D0F0;
    case 239u: goto L_08A8D0F4;
    case 240u: goto L_08A8D108;
    case 241u: goto L_08A8D158;
    case 242u: goto L_08A8D178;
    case 243u: goto L_08A8D184;
    case 244u: goto L_08A8D194;
    case 245u: goto L_08A8D198;
    case 246u: goto L_08A8D1A0;
    case 247u: goto L_08A8D1B4;
    case 248u: goto L_08A8D1C4;
    case 249u: goto L_08A8D1E8;
    case 250u: goto L_08A8D1F4;
    case 251u: goto L_08A8D1FC;
    case 252u: goto L_08A8D204;
    case 253u: goto L_08A8D214;
    case 254u: goto L_08A8D21C;
    case 255u: goto L_08A8D278;
    case 256u: goto L_08A8D294;
    case 257u: goto L_08A8D2A0;
    case 258u: goto L_08A8D2A8;
    case 259u: goto L_08A8D2B0;
    case 260u: goto L_08A8D2B4;
    case 261u: goto L_08A8D2CC;
    case 262u: goto L_08A8D2E8;
    case 263u: goto L_08A8D2F4;
    case 264u: goto L_08A8D2FC;
    case 265u: goto L_08A8D304;
    case 266u: goto L_08A8D308;
    case 267u: goto L_08A8D43C;
    case 268u: goto L_08A8D460;
    case 269u: goto L_08A8D480;
    case 270u: goto L_08A8D494;
    case 271u: goto L_08A8D49C;
    case 272u: goto L_08A8D4B4;
    case 273u: goto L_08A8D4C0;
    case 274u: goto L_08A8D504;
    case 275u: goto L_08A8D50C;
    case 276u: goto L_08A8D51C;
    case 277u: goto L_08A8D534;
    case 278u: goto L_08A8D55C;
    case 279u: goto L_08A8D568;
    case 280u: goto L_08A8D5A8;
    case 281u: goto L_08A8D5B0;
    case 282u: goto L_08A8D5C8;
    case 283u: goto L_08A8D5DC;
    case 284u: goto L_08A8D5E4;
    case 285u: goto L_08A8D5FC;
    case 286u: goto L_08A8D628;
    case 287u: goto L_08A8D634;
    case 288u: goto L_08A8D660;
    case 289u: goto L_08A8D694;
    case 290u: goto L_08A8D6A8;
    case 291u: goto L_08A8D6BC;
    case 292u: goto L_08A8D6C4;
    case 293u: goto L_08A8D6D4;
    case 294u: goto L_08A8D6E8;
    case 295u: goto L_08A8D6F0;
    case 296u: goto L_08A8D700;
    case 297u: goto L_08A8D704;
    case 298u: goto L_08A8D71C;
    case 299u: goto L_08A8D730;
    case 300u: goto L_08A8D748;
    case 301u: goto L_08A8D774;
    case 302u: goto L_08A8D788;
    case 303u: goto L_08A8D790;
    case 304u: goto L_08A8D798;
    case 305u: goto L_08A8D7A0;
    case 306u: goto L_08A8D7A8;
    case 307u: goto L_08A8D7B0;
    case 308u: goto L_08A8D7CC;
    case 309u: goto L_08A8D810;
    case 310u: goto L_08A8D81C;
    case 311u: goto L_08A8D834;
    case 312u: goto L_08A8D844;
    case 313u: goto L_08A8D84C;
    case 314u: goto L_08A8D854;
    case 315u: goto L_08A8D85C;
    case 316u: goto L_08A8D868;
    case 317u: goto L_08A8D874;
    case 318u: goto L_08A8D87C;
    case 319u: goto L_08A8D884;
    case 320u: goto L_08A8D888;
    case 321u: goto L_08A8D894;
    case 322u: goto L_08A8D89C;
    case 323u: goto L_08A8D8A8;
    case 324u: goto L_08A8D8B0;
    case 325u: goto L_08A8D8B8;
    case 326u: goto L_08A8D8C0;
    case 327u: goto L_08A8D8C8;
    case 328u: goto L_08A8D8D0;
    case 329u: goto L_08A8D8EC;
    case 330u: goto L_08A8D918;
    case 331u: goto L_08A8D920;
    case 332u: goto L_08A8D92C;
    case 333u: goto L_08A8D93C;
    case 334u: goto L_08A8D950;
    case 335u: goto L_08A8D980;
    case 336u: goto L_08A8D9E4;
    case 337u: goto L_08A8D9FC;
    case 338u: goto L_08A8DA0C;
    case 339u: goto L_08A8DA1C;
    case 340u: goto L_08A8DA20;
    case 341u: goto L_08A8DA38;
    case 342u: goto L_08A8DA44;
    case 343u: goto L_08A8DA60;
    case 344u: goto L_08A8DA88;
    case 345u: goto L_08A8DA98;
    case 346u: goto L_08A8DAA8;
    case 347u: goto L_08A8DAB4;
    case 348u: goto L_08A8DABC;
    case 349u: goto L_08A8DADC;
    case 350u: goto L_08A8DB0C;
    case 351u: goto L_08A8DB84;
    case 352u: goto L_08A8DB8C;
    case 353u: goto L_08A8DB98;
    case 354u: goto L_08A8DBA0;
    case 355u: goto L_08A8DBAC;
    case 356u: goto L_08A8DBB4;
    case 357u: goto L_08A8DBBC;
    case 358u: goto L_08A8DBC4;
    case 359u: goto L_08A8DBCC;
    case 360u: goto L_08A8DC00;
    case 361u: goto L_08A8DC08;
    case 362u: goto L_08A8DC18;
    case 363u: goto L_08A8DC24;
    case 364u: goto L_08A8DC2C;
    case 365u: goto L_08A8DC38;
    case 366u: goto L_08A8DC48;
    case 367u: goto L_08A8DC58;
    case 368u: goto L_08A8DC60;
    case 369u: goto L_08A8DC68;
    case 370u: goto L_08A8DC6C;
    case 371u: goto L_08A8DC74;
    case 372u: goto L_08A8DC7C;
    case 373u: goto L_08A8DC84;
    case 374u: goto L_08A8DC8C;
    case 375u: goto L_08A8DC98;
    case 376u: goto L_08A8DCA0;
    case 377u: goto L_08A8DCA8;
    case 378u: goto L_08A8DCB0;
    case 379u: goto L_08A8DCBC;
    case 380u: goto L_08A8DCC4;
    case 381u: goto L_08A8DCD0;
    case 382u: goto L_08A8DCD8;
    case 383u: goto L_08A8DCE0;
    case 384u: goto L_08A8DCE8;
    case 385u: goto L_08A8DCF0;
    case 386u: goto L_08A8DD24;
    case 387u: goto L_08A8DD58;
    case 388u: goto L_08A8DD70;
    case 389u: goto L_08A8DD80;
    case 390u: goto L_08A8DD90;
    case 391u: goto L_08A8DD98;
    case 392u: goto L_08A8DDA4;
    case 393u: goto L_08A8DDB0;
    case 394u: goto L_08A8DDC4;
    case 395u: goto L_08A8DDE0;
    case 396u: goto L_08A8DE08;
    case 397u: goto L_08A8DE14;
    case 398u: goto L_08A8DE28;
    case 399u: goto L_08A8DE30;
    case 400u: goto L_08A8DE3C;
    case 401u: goto L_08A8DE44;
    case 402u: goto L_08A8DE84;
    case 403u: goto L_08A8DE94;
    case 404u: goto L_08A8DEC8;
    case 405u: goto L_08A8DED0;
    case 406u: goto L_08A8DEDC;
    case 407u: goto L_08A8DF00;
    case 408u: goto L_08A8DF24;
    case 409u: goto L_08A8DF34;
    case 410u: goto L_08A8DF44;
    case 411u: goto L_08A8DF4C;
    case 412u: goto L_08A8DF54;
    case 413u: goto L_08A8DF5C;
    case 414u: goto L_08A8DF68;
    case 415u: goto L_08A8DF84;
    case 416u: goto L_08A8DF88;
    case 417u: goto L_08A8DF90;
    case 418u: goto L_08A8DF98;
    case 419u: goto L_08A8DFAC;
    case 420u: goto L_08A8DFB8;
    case 421u: goto L_08A8DFC0;
    case 422u: goto L_08A8DFCC;
    case 423u: goto L_08A8DFE8;
    case 424u: goto L_08A8E000;
    case 425u: goto L_08A8E008;
    case 426u: goto L_08A8E010;
    case 427u: goto L_08A8E018;
    case 428u: goto L_08A8E020;
    case 429u: goto L_08A8E02C;
    case 430u: goto L_08A8E044;
    case 431u: goto L_08A8E04C;
    case 432u: goto L_08A8E058;
    case 433u: goto L_08A8E074;
    case 434u: goto L_08A8E09C;
    case 435u: goto L_08A8E0BC;
    case 436u: goto L_08A8E0CC;
    case 437u: goto L_08A8E108;
    case 438u: goto L_08A8E130;
    case 439u: goto L_08A8E13C;
    case 440u: goto L_08A8E148;
    case 441u: goto L_08A8E158;
    case 442u: goto L_08A8E160;
    case 443u: goto L_08A8E168;
    case 444u: goto L_08A8E174;
    case 445u: goto L_08A8E198;
    case 446u: goto L_08A8E1A8;
    case 447u: goto L_08A8E1B0;
    case 448u: goto L_08A8E1CC;
    case 449u: goto L_08A8E1D4;
    case 450u: goto L_08A8E1E8;
    case 451u: goto L_08A8E1F0;
    case 452u: goto L_08A8E1F4;
    case 453u: goto L_08A8E1FC;
    case 454u: goto L_08A8E200;
    case 455u: goto L_08A8E284;
    case 456u: goto L_08A8E2B4;
    case 457u: goto L_08A8E2C8;
    case 458u: goto L_08A8E2D4;
    case 459u: goto L_08A8E2DC;
    case 460u: goto L_08A8E2E8;
    case 461u: goto L_08A8E2F0;
    case 462u: goto L_08A8E308;
    case 463u: goto L_08A8E310;
    case 464u: goto L_08A8E318;
    case 465u: goto L_08A8E33C;
    case 466u: goto L_08A8E340;
    case 467u: goto L_08A8E36C;
    case 468u: goto L_08A8E390;
    case 469u: goto L_08A8E3A4;
    case 470u: goto L_08A8E3AC;
    case 471u: goto L_08A8E3CC;
    case 472u: goto L_08A8E3F8;
    case 473u: goto L_08A8E420;
    case 474u: goto L_08A8E42C;
    case 475u: goto L_08A8E43C;
    case 476u: goto L_08A8E450;
    case 477u: goto L_08A8E464;
    case 478u: goto L_08A8E48C;
    case 479u: goto L_08A8E498;
    case 480u: goto L_08A8E4A8;
    case 481u: goto L_08A8E4B8;
    case 482u: goto L_08A8E4D4;
    case 483u: goto L_08A8E4EC;
    case 484u: goto L_08A8E500;
    case 485u: goto L_08A8E508;
    case 486u: goto L_08A8E520;
    case 487u: goto L_08A8E538;
    case 488u: goto L_08A8E584;
    case 489u: goto L_08A8E5A0;
    case 490u: goto L_08A8E5A8;
    case 491u: goto L_08A8E5B0;
    case 492u: goto L_08A8E5C4;
    case 493u: goto L_08A8E618;
    case 494u: goto L_08A8E658;
    case 495u: goto L_08A8E660;
    case 496u: goto L_08A8E66C;
    case 497u: goto L_08A8E674;
    case 498u: goto L_08A8E680;
    case 499u: goto L_08A8E688;
    case 500u: goto L_08A8E690;
    case 501u: goto L_08A8E698;
    case 502u: goto L_08A8E6A0;
    case 503u: goto L_08A8E6A8;
    case 504u: goto L_08A8E6B0;
    case 505u: goto L_08A8E6E4;
    case 506u: goto L_08A8E6E8;
    case 507u: goto L_08A8E708;
    case 508u: goto L_08A8E710;
    case 509u: goto L_08A8E734;
    case 510u: goto L_08A8E738;
    case 511u: goto L_08A8E740;
    case 512u: goto L_08A8E748;
    case 513u: goto L_08A8E768;
    case 514u: goto L_08A8E770;
    case 515u: goto L_08A8E780;
    case 516u: goto L_08A8E794;
    case 517u: goto L_08A8E798;
    case 518u: goto L_08A8E7A4;
    case 519u: goto L_08A8E7A8;
    case 520u: goto L_08A8E7B0;
    case 521u: goto L_08A8E7BC;
    case 522u: goto L_08A8E7C4;
    case 523u: goto L_08A8E7D4;
    case 524u: goto L_08A8E7DC;
    case 525u: goto L_08A8E804;
    case 526u: goto L_08A8E80C;
    case 527u: goto L_08A8E814;
    case 528u: goto L_08A8E820;
    case 529u: goto L_08A8E82C;
    case 530u: goto L_08A8E838;
    case 531u: goto L_08A8E844;
    case 532u: goto L_08A8E850;
    case 533u: goto L_08A8E85C;
    case 534u: goto L_08A8E868;
    case 535u: goto L_08A8E874;
    case 536u: goto L_08A8E880;
    case 537u: goto L_08A8E884;
    case 538u: goto L_08A8E88C;
    case 539u: goto L_08A8E894;
    case 540u: goto L_08A8E89C;
    case 541u: goto L_08A8E8A8;
    case 542u: goto L_08A8E8B4;
    case 543u: goto L_08A8E8C0;
    case 544u: goto L_08A8E8CC;
    case 545u: goto L_08A8E8D8;
    case 546u: goto L_08A8E8E4;
    case 547u: goto L_08A8E8F0;
    case 548u: goto L_08A8E8FC;
    case 549u: goto L_08A8E904;
    case 550u: goto L_08A8E90C;
    case 551u: goto L_08A8E910;
    case 552u: goto L_08A8E91C;
    case 553u: goto L_08A8E928;
    case 554u: goto L_08A8E934;
    case 555u: goto L_08A8E940;
    case 556u: goto L_08A8E94C;
    case 557u: goto L_08A8E958;
    case 558u: goto L_08A8E964;
    case 559u: goto L_08A8E970;
    case 560u: goto L_08A8E97C;
    case 561u: goto L_08A8E980;
    case 562u: goto L_08A8E988;
    case 563u: goto L_08A8E994;
    case 564u: goto L_08A8E9A4;
    case 565u: goto L_08A8E9B0;
    case 566u: goto L_08A8E9B8;
    case 567u: goto L_08A8E9C4;
    case 568u: goto L_08A8E9CC;
    case 569u: goto L_08A8E9D8;
    case 570u: goto L_08A8E9E0;
    case 571u: goto L_08A8E9E8;
    case 572u: goto L_08A8E9F0;
    case 573u: goto L_08A8E9F8;
    case 574u: goto L_08A8EA00;
    case 575u: goto L_08A8EA08;
    case 576u: goto L_08A8EA3C;
    case 577u: goto L_08A8EA44;
    case 578u: goto L_08A8EA78;
    case 579u: goto L_08A8EA88;
    case 580u: goto L_08A8EAA4;
    case 581u: goto L_08A8EAD8;
    case 582u: goto L_08A8EAE4;
    case 583u: goto L_08A8EAF0;
    case 584u: goto L_08A8EB0C;
    case 585u: goto L_08A8EB18;
    case 586u: goto L_08A8EB20;
    case 587u: goto L_08A8EB34;
    case 588u: goto L_08A8EB38;
    case 589u: goto L_08A8EB50;
    case 590u: goto L_08A8EB64;
    case 591u: goto L_08A8EB84;
    case 592u: goto L_08A8EBB0;
    case 593u: goto L_08A8EBC0;
    case 594u: goto L_08A8EBC8;
    case 595u: goto L_08A8EBD0;
    case 596u: goto L_08A8EBDC;
    case 597u: goto L_08A8EBE8;
    case 598u: goto L_08A8EBF0;
    case 599u: goto L_08A8EC00;
    case 600u: goto L_08A8EC04;
    case 601u: goto L_08A8EC0C;
    case 602u: goto L_08A8EC14;
    case 603u: goto L_08A8EC28;
    case 604u: goto L_08A8EC68;
    case 605u: goto L_08A8EC78;
    case 606u: goto L_08A8EC88;
    case 607u: goto L_08A8EC90;
    case 608u: goto L_08A8ECA4;
    case 609u: goto L_08A8ECB0;
    case 610u: goto L_08A8ECB8;
    case 611u: goto L_08A8ECC4;
    case 612u: goto L_08A8ECDC;
    case 613u: goto L_08A8ECE4;
    case 614u: goto L_08A8ECF4;
    case 615u: goto L_08A8ED00;
    case 616u: goto L_08A8ED08;
    case 617u: goto L_08A8ED14;
    case 618u: goto L_08A8ED1C;
    case 619u: goto L_08A8ED2C;
    case 620u: goto L_08A8ED34;
    case 621u: goto L_08A8ED40;
    case 622u: goto L_08A8ED4C;
    case 623u: goto L_08A8ED58;
    case 624u: goto L_08A8ED60;
    case 625u: goto L_08A8ED70;
    case 626u: goto L_08A8ED74;
    case 627u: goto L_08A8ED7C;
    case 628u: goto L_08A8ED84;
    case 629u: goto L_08A8ED88;
    case 630u: goto L_08A8ED94;
    case 631u: goto L_08A8ED9C;
    case 632u: goto L_08A8EDA4;
    case 633u: goto L_08A8EDB0;
    case 634u: goto L_08A8EDB8;
    case 635u: goto L_08A8EDC0;
    case 636u: goto L_08A8EDC8;
    case 637u: goto L_08A8EDD8;
    case 638u: goto L_08A8EDE0;
    case 639u: goto L_08A8EDE8;
    case 640u: goto L_08A8EDF0;
    case 641u: goto L_08A8EDFC;
    case 642u: goto L_08A8EE00;
    case 643u: goto L_08A8EE08;
    case 644u: goto L_08A8EE18;
    case 645u: goto L_08A8EE20;
    case 646u: goto L_08A8EE24;
    case 647u: goto L_08A8EF5C;
    case 648u: goto L_08A8EF68;
    case 649u: goto L_08A8EF74;
    case 650u: goto L_08A8EFB0;
    case 651u: goto L_08A8EFFC;
    case 652u: goto L_08A8F00C;
    case 653u: goto L_08A8F048;
    case 654u: goto L_08A8F050;
    case 655u: goto L_08A8F05C;
    case 656u: goto L_08A8F08C;
    case 657u: goto L_08A8F0BC;
    case 658u: goto L_08A8F0F0;
    case 659u: goto L_08A8F11C;
    case 660u: goto L_08A8F124;
    case 661u: goto L_08A8F130;
    case 662u: goto L_08A8F154;
    case 663u: goto L_08A8F178;
    case 664u: goto L_08A8F1C4;
    case 665u: goto L_08A8F1FC;
    case 666u: goto L_08A8F204;
    case 667u: goto L_08A8F210;
    case 668u: goto L_08A8F240;
    case 669u: goto L_08A8F270;
    case 670u: goto L_08A8F294;
    case 671u: goto L_08A8F2A0;
    case 672u: goto L_08A8F2BC;
    case 673u: goto L_08A8F2CC;
    case 674u: goto L_08A8F2D4;
    case 675u: goto L_08A8F2F0;
    case 676u: goto L_08A8F314;
    case 677u: goto L_08A8F320;
    case 678u: goto L_08A8F33C;
    case 679u: goto L_08A8F34C;
    case 680u: goto L_08A8F354;
    case 681u: goto L_08A8F370;
    case 682u: goto L_08A8F3A8;
    case 683u: goto L_08A8F3BC;
    case 684u: goto L_08A8F3C8;
    case 685u: goto L_08A8F3D4;
    case 686u: goto L_08A8F3DC;
    case 687u: goto L_08A8F3F8;
    case 688u: goto L_08A8F414;
    case 689u: goto L_08A8F420;
    case 690u: goto L_08A8F428;
    case 691u: goto L_08A8F464;
    case 692u: goto L_08A8F494;
    case 693u: goto L_08A8F49C;
    case 694u: goto L_08A8F4A8;
    case 695u: goto L_08A8F4D0;
    case 696u: goto L_08A8F4F8;
    case 697u: goto L_08A8F534;
    case 698u: goto L_08A8F548;
    case 699u: goto L_08A8F550;
    case 700u: goto L_08A8F568;
    case 701u: goto L_08A8F570;
    case 702u: goto L_08A8F578;
    case 703u: goto L_08A8F580;
    case 704u: goto L_08A8F58C;
    case 705u: goto L_08A8F594;
    case 706u: goto L_08A8F59C;
    case 707u: goto L_08A8F5A4;
    case 708u: goto L_08A8F5B0;
    case 709u: goto L_08A8F5C0;
    case 710u: goto L_08A8F5D4;
    case 711u: goto L_08A8F5E0;
    case 712u: goto L_08A8F5E8;
    case 713u: goto L_08A8F5F0;
    case 714u: goto L_08A8F608;
    case 715u: goto L_08A8F618;
    case 716u: goto L_08A8F634;
    case 717u: goto L_08A8F658;
    case 718u: goto L_08A8F69C;
    case 719u: goto L_08A8F6B4;
    case 720u: goto L_08A8F6C4;
    case 721u: goto L_08A8F6D4;
    case 722u: goto L_08A8F6E8;
    case 723u: goto L_08A8F6FC;
    case 724u: goto L_08A8F708;
    case 725u: goto L_08A8F714;
    case 726u: goto L_08A8F754;
    case 727u: goto L_08A8F78C;
    case 728u: goto L_08A8F7C4;
    case 729u: goto L_08A8F7FC;
    case 730u: goto L_08A8F804;
    case 731u: goto L_08A8F80C;
    case 732u: goto L_08A8F82C;
    case 733u: goto L_08A8F83C;
    case 734u: goto L_08A8F848;
    case 735u: goto L_08A8F854;
    case 736u: goto L_08A8F858;
    case 737u: goto L_08A8F860;
    case 738u: goto L_08A8F87C;
    case 739u: goto L_08A8F8B4;
    case 740u: goto L_08A8F8C0;
    case 741u: goto L_08A8F8F8;
    case 742u: goto L_08A8F900;
    case 743u: goto L_08A8F930;
    case 744u: goto L_08A8F938;
    case 745u: goto L_08A8F968;
    case 746u: goto L_08A8F970;
    case 747u: goto L_08A8F9A0;
    case 748u: goto L_08A8F9AC;
    case 749u: goto L_08A8F9D4;
    case 750u: goto L_08A8F9E0;
    case 751u: goto L_08A8FA08;
    case 752u: goto L_08A8FA14;
    case 753u: goto L_08A8FA44;
    case 754u: goto L_08A8FA50;
    case 755u: goto L_08A8FA80;
    case 756u: goto L_08A8FA90;
    case 757u: goto L_08A8FAA4;
    case 758u: goto L_08A8FAD4;
    case 759u: goto L_08A8FAE8;
    case 760u: goto L_08A8FB14;
    case 761u: goto L_08A8FB18;
    case 762u: goto L_08A8FB2C;
    case 763u: goto L_08A8FB70;
    case 764u: goto L_08A8FB84;
    case 765u: goto L_08A8FBA4;
    case 766u: goto L_08A8FBC4;
    case 767u: goto L_08A8FBD4;
    case 768u: goto L_08A8FC00;
    case 769u: goto L_08A8FC34;
    case 770u: goto L_08A8FC6C;
    case 771u: goto L_08A8FC74;
    case 772u: goto L_08A8FCC0;
    case 773u: goto L_08A8FCD0;
    case 774u: goto L_08A8FCDC;
    case 775u: goto L_08A8FCE8;
    case 776u: goto L_08A8FCF8;
    case 777u: goto L_08A8FD00;
    case 778u: goto L_08A8FD1C;
    case 779u: goto L_08A8FD30;
    case 780u: goto L_08A8FD38;
    case 781u: goto L_08A8FD4C;
    case 782u: goto L_08A8FD8C;
    case 783u: goto L_08A8FD90;
    case 784u: goto L_08A8FDA0;
    case 785u: goto L_08A8FDB0;
    case 786u: goto L_08A8FDB8;
    case 787u: goto L_08A8FDCC;
    case 788u: goto L_08A8FE0C;
    case 789u: goto L_08A8FE30;
    case 790u: goto L_08A8FE64;
    case 791u: goto L_08A8FE78;
    case 792u: goto L_08A8FE80;
    case 793u: goto L_08A8FE8C;
    case 794u: goto L_08A8FE98;
    case 795u: goto L_08A8FEA0;
    case 796u: goto L_08A8FEC4;
    case 797u: goto L_08A8FEE4;
    case 798u: goto L_08A8FEEC;
    case 799u: goto L_08A8FF10;
    case 800u: goto L_08A8FF18;
    case 801u: goto L_08A8FF64;
    case 802u: goto L_08A8FF6C;
    case 803u: goto L_08A8FFA4;
    case 804u: goto L_08A8FFC8;
    case 805u: goto L_08A8FFE0;
    case 806u: goto L_08A8FFF4;
    case 807u: goto L_08A8FFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A8C004:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[31] = (0x08A8C010u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 472u, 0x08A86FD8u>(ctx, &aot_mem) && ctx.pc == 0x08A8C010u) goto L_08A8C010;
    return;
L_08A8C010:
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
L_08A8C02C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8C04Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 132u, 0x08AB1690u>(ctx, &aot_mem) && ctx.pc == 0x08A8C04Cu) goto L_08A8C04C;
    return;
L_08A8C04C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A8C060;
      }
      goto L_08A8C058;
    }
L_08A8C058:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8C09C;
      }
      goto L_08A8C060;
    }
L_08A8C060:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(112), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(256));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A8C088;
      }
      goto L_08A8C080;
    }
L_08A8C080:
    ctx.gpr[5] = (0u | 256u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040), ctx.gpr[5]);
    goto L_08A8C088;
L_08A8C088:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A8C09C;
L_08A8C09C:
    ctx.gpr[31] = (0x08A8C0A4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 137u, 0x08AB1708u>(ctx, &aot_mem) && ctx.pc == 0x08A8C0A4u) goto L_08A8C0A4;
    return;
L_08A8C0A4:
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
L_08A8C0BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8C0F0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 132u, 0x08AB1690u>(ctx, &aot_mem) && ctx.pc == 0x08A8C0F0u) goto L_08A8C0F0;
    return;
L_08A8C0F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
        goto L_08A8C110;
    }
    goto L_08A8C0FC;
L_08A8C0FC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A8C118;
      }
      goto L_08A8C110;
    }
L_08A8C110:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[16]);
    goto L_08A8C118;
L_08A8C118:
    ctx.gpr[31] = (0x08A8C120u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 137u, 0x08AB1708u>(ctx, &aot_mem) && ctx.pc == 0x08A8C120u) goto L_08A8C120;
    return;
L_08A8C120:
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
L_08A8C138:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[2] << 6u);
      if (branch_taken) {
          goto L_08A8C184;
      }
      goto L_08A8C14C;
    }
L_08A8C14C:
    ctx.gpr[7] = (ctx.gpr[2] << 2u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A8C184;
      }
      goto L_08A8C170;
    }
L_08A8C170:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C184;
      }
      goto L_08A8C17C;
    }
L_08A8C17C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C184:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C18C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08A8C1A8;
      }
      goto L_08A8C198;
    }
L_08A8C198:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          goto L_08A8C1B8;
      }
      goto L_08A8C1A8;
    }
L_08A8C1A8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    goto L_08A8C1B8;
L_08A8C1B8:
    if (ctx.gpr[5] != ctx.gpr[7]) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
        goto L_08A8C1CC;
    }
    goto L_08A8C1C0;
L_08A8C1C0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(108), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_08A8C1D4;
      }
      goto L_08A8C1CC;
    }
L_08A8C1CC:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    goto L_08A8C1D4;
L_08A8C1D4:
    if (ctx.gpr[5] != ctx.gpr[6]) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
        goto L_08A8C208;
    }
    goto L_08A8C1DC;
L_08A8C1DC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), ctx.gpr[6]);
        goto L_08A8C204;
    }
    goto L_08A8C1E8;
L_08A8C1E8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C204:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    goto L_08A8C208;
L_08A8C208:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C218:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8C234u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 54u, 0x08A8880Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C234u) goto L_08A8C234;
    return;
L_08A8C234:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(396), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8C2A4;
      }
      goto L_08A8C240;
    }
L_08A8C240:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A8C24Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 132u, 0x08AB1690u>(ctx, &aot_mem) && ctx.pc == 0x08A8C24Cu) goto L_08A8C24C;
    return;
L_08A8C24C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
        goto L_08A8C260;
    }
    goto L_08A8C260;
L_08A8C260:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08A8C26Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A8C18C;
L_08A8C26C:
    ctx.gpr[31] = (0x08A8C274u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 137u, 0x08AB1708u>(ctx, &aot_mem) && ctx.pc == 0x08A8C274u) goto L_08A8C274;
    return;
L_08A8C274:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_08A8C294;
    }
    goto L_08A8C280;
L_08A8C280:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x08A8C28Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A8C494;
L_08A8C28C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C2CC;
      }
      goto L_08A8C294;
    }
L_08A8C294:
    ctx.gpr[31] = (0x08A8C29Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A8C494;
L_08A8C29C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C2CC;
      }
      goto L_08A8C2A4;
    }
L_08A8C2A4:
    ctx.gpr[31] = (0x08A8C2ACu);
    ctx.gpr[5] = (0u | 100u);
    goto L_08A8D2CC;
L_08A8C2AC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(420), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8C2CCu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08A8CBA4;
L_08A8C2CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C2E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8C2F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 54u, 0x08A8880Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C2F8u) goto L_08A8C2F8;
    return;
L_08A8C2F8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(140));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A8C30Cu);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 536u, 0x08A87460u>(ctx, &aot_mem) && ctx.pc == 0x08A8C30Cu) goto L_08A8C30C;
    return;
L_08A8C30C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8C324;
      }
      goto L_08A8C318;
    }
L_08A8C318:
    ctx.gpr[5] = (2217u << 16u);
    ctx.gpr[31] = (0x08A8C324u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15848));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 469u, 0x08A86F78u>(ctx, &aot_mem) && ctx.pc == 0x08A8C324u) goto L_08A8C324;
    return;
L_08A8C324:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C334:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    ctx.gpr[16] = (0u | 4u);
      if (branch_taken) {
          goto L_08A8C388;
      }
      goto L_08A8C368;
    }
L_08A8C368:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(400)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(280)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(288), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A8C3A4;
      }
      goto L_08A8C388;
    }
L_08A8C388:
    ctx.gpr[31] = (0x08A8C390u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(404)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 54u, 0x08A8880Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C390u) goto L_08A8C390;
    return;
L_08A8C390:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(288), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(404), 0u);
    goto L_08A8C3A4;
L_08A8C3A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(400)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(400), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A8C3C4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A8C924;
L_08A8C3C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[16];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A8C3E4;
      }
      goto L_08A8C3D0;
    }
L_08A8C3D0:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[20] = (0u | 3u);
      if (branch_taken) {
          goto L_08A8C410;
      }
      goto L_08A8C3DC;
    }
L_08A8C3DC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A8C474;
      }
      goto L_08A8C3E4;
    }
L_08A8C3E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x08A8C3F0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A8C494;
L_08A8C3F0:
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
L_08A8C410:
    if (ctx.gpr[4] == ctx.gpr[20]) {
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
        goto L_08A8C428;
    }
    goto L_08A8C418;
L_08A8C418:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(288)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C45C;
      }
      goto L_08A8C424;
    }
L_08A8C424:
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    goto L_08A8C428;
L_08A8C428:
    ctx.gpr[16] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A8C434u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 132u, 0x08AB1690u>(ctx, &aot_mem) && ctx.pc == 0x08A8C434u) goto L_08A8C434;
    return;
L_08A8C434:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] != ctx.gpr[19]) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
        goto L_08A8C440;
    }
    goto L_08A8C440;
L_08A8C440:
    ctx.gpr[31] = (0x08A8C448u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 137u, 0x08AB1708u>(ctx, &aot_mem) && ctx.pc == 0x08A8C448u) goto L_08A8C448;
    return;
L_08A8C448:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x08A8C454u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A8C494;
L_08A8C454:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C474;
      }
      goto L_08A8C45C;
    }
L_08A8C45C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A8C474;
      }
      goto L_08A8C464;
    }
L_08A8C464:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A8C474u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    goto L_08A8CBA4;
L_08A8C474:
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
L_08A8C494:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8C4C8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 132u, 0x08AB1690u>(ctx, &aot_mem) && ctx.pc == 0x08A8C4C8u) goto L_08A8C4C8;
    return;
L_08A8C4C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
        goto L_08A8C4DC;
    }
    goto L_08A8C4D4;
L_08A8C4D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08A8C514;
      }
      goto L_08A8C4DC;
    }
L_08A8C4DC:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
        goto L_08A8C4F4;
    }
    goto L_08A8C4EC;
L_08A8C4EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8C514;
      }
      goto L_08A8C4F4;
    }
L_08A8C4F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
        goto L_08A8C508;
    }
    goto L_08A8C500;
L_08A8C500:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08A8C514;
      }
      goto L_08A8C508;
    }
L_08A8C508:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    goto L_08A8C514;
L_08A8C514:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C524;
      }
      goto L_08A8C51C;
    }
L_08A8C51C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
      if (branch_taken) {
          goto L_08A8C544;
      }
      goto L_08A8C524;
    }
L_08A8C524:
    ctx.gpr[31] = (0x08A8C52Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 698u, 0x08A8BF20u>(ctx, &aot_mem) && ctx.pc == 0x08A8C52Cu) goto L_08A8C52C;
    return;
L_08A8C52C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(284), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(288), 0u);
    goto L_08A8C544;
L_08A8C544:
    ctx.gpr[31] = (0x08A8C54Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 137u, 0x08AB1708u>(ctx, &aot_mem) && ctx.pc == 0x08A8C54Cu) goto L_08A8C54C;
    return;
L_08A8C54C:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C628;
      }
      goto L_08A8C554;
    }
L_08A8C554:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(280)));
        goto L_08A8C584;
    }
    goto L_08A8C56C;
L_08A8C56C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(400), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(280)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(420), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A8C61C;
      }
      goto L_08A8C584;
    }
L_08A8C584:
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(400), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(140));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A8C59Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08A8C59Cu) goto L_08A8C59C;
    return;
L_08A8C59C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A8C620;
      }
      goto L_08A8C5A4;
    }
L_08A8C5A4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A8C5B0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08A8C5B0u) goto L_08A8C5B0;
    return;
L_08A8C5B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(396)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A8C5EC;
      }
      goto L_08A8C5BC;
    }
L_08A8C5BC:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8C5CCu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 536u, 0x08A87460u>(ctx, &aot_mem) && ctx.pc == 0x08A8C5CCu) goto L_08A8C5CC;
    return;
L_08A8C5CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8C628;
      }
      goto L_08A8C5D4;
    }
L_08A8C5D4:
    ctx.gpr[5] = (2217u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[31] = (0x08A8C5E4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15848));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 469u, 0x08A86F78u>(ctx, &aot_mem) && ctx.pc == 0x08A8C5E4u) goto L_08A8C5E4;
    return;
L_08A8C5E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C628;
      }
      goto L_08A8C5EC;
    }
L_08A8C5EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(396)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8C5FCu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 543u, 0x08A87518u>(ctx, &aot_mem) && ctx.pc == 0x08A8C5FCu) goto L_08A8C5FC;
    return;
L_08A8C5FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8C628;
      }
      goto L_08A8C604;
    }
L_08A8C604:
    ctx.gpr[5] = (2217u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[31] = (0x08A8C614u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15648));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 469u, 0x08A86F78u>(ctx, &aot_mem) && ctx.pc == 0x08A8C614u) goto L_08A8C614;
    return;
L_08A8C614:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C628;
      }
      goto L_08A8C61C;
    }
L_08A8C61C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A8C620;
L_08A8C620:
    ctx.gpr[31] = (0x08A8C628u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A8CBA4;
L_08A8C628:
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
L_08A8C648:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[11]);
    ctx.gpr[30] = (ctx.gpr[9] | 0u);
    ctx.gpr[21] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[10]);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A8C698u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 569u, 0x08A8B35Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C698u) goto L_08A8C698;
    return;
L_08A8C698:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (19794u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21587));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A8C6B0u);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 128u, 0x08AB162Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C6B0u) goto L_08A8C6B0;
    return;
L_08A8C6B0:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(424));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[16] << 6u);
    ctx.gpr[6] = (ctx.gpr[16] << 2u);
    ctx.gpr[22] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[22] << 2u);
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[18] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    ctx.gpr[23] = (ctx.gpr[19] << 3u);
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08A8C718u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 698u, 0x08A8BF20u>(ctx, &aot_mem) && ctx.pc == 0x08A8C718u) goto L_08A8C718;
    return;
L_08A8C718:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (0u | 150u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 50u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(76), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(84), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(100), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(104), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(108), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(116), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(120), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(128), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[30] = (ctx.gpr[30] - ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A8C794;
      }
      goto L_08A8C78C;
    }
L_08A8C78C:
    ctx.gpr[4] = (2217u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16640));
    goto L_08A8C794;
L_08A8C794:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(136), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(140));
    ctx.gpr[31] = (0x08A8C7A8u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 321u, 0x08A85F40u>(ctx, &aot_mem) && ctx.pc == 0x08A8C7A8u) goto L_08A8C7A8;
    return;
L_08A8C7A8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < 16384 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(396), 0u);
      if (branch_taken) {
          goto L_08A8C7C0;
      }
      goto L_08A8C7B4;
    }
L_08A8C7B4:
    ctx.gpr[4] = (0u | 2048u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A8C7E0;
      }
      goto L_08A8C7C0;
    }
L_08A8C7C0:
    ctx.gpr[4] = (0u | 32768u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 8192u);
      if (branch_taken) {
          goto L_08A8C7DC;
      }
      goto L_08A8C7D0;
    }
L_08A8C7D0:
    ctx.gpr[4] = (0u | 4096u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A8C7E0;
      }
      goto L_08A8C7DC;
    }
L_08A8C7DC:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    goto L_08A8C7E0;
L_08A8C7E0:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8C820;
      }
      goto L_08A8C7F0;
    }
L_08A8C7F0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(300));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(300));
      if (branch_taken) {
          goto L_08A8C7F0;
      }
      goto L_08A8C820;
    }
L_08A8C820:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[22] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-288), 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8C86C;
      }
      goto L_08A8C83C;
    }
L_08A8C83C:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08A8C844;
L_08A8C844:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A8C844;
      }
      goto L_08A8C868;
    }
L_08A8C868:
    ctx.gpr[5] = (0u | 0u);
    goto L_08A8C86C;
L_08A8C86C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8C8A4;
      }
      goto L_08A8C878;
    }
L_08A8C878:
    ctx.gpr[4] = (0u | 0u);
    goto L_08A8C87C;
L_08A8C87C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A8C87C;
      }
      goto L_08A8C8A0;
    }
L_08A8C8A0:
    ctx.gpr[4] = (0u | 0u);
    goto L_08A8C8A4;
L_08A8C8A4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8C8E4;
      }
      goto L_08A8C8B0;
    }
L_08A8C8B0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08A8C8B0;
      }
      goto L_08A8C8E4;
    }
L_08A8C8E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-12), 0u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
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
L_08A8C924:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[23] = (0u | 2u);
        goto L_08A8C974;
    }
    goto L_08A8C974;
L_08A8C974:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[23] = (0u | 1u);
        goto L_08A8C988;
    }
    goto L_08A8C988;
L_08A8C988:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[30] = (0u | 4u);
    goto L_08A8C994;
L_08A8C994:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CA60;
      }
      goto L_08A8C99C;
    }
L_08A8C99C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08A8CA60;
      }
      goto L_08A8C9A8;
    }
L_08A8C9A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
      if (branch_taken) {
          goto L_08A8CA28;
      }
      goto L_08A8C9BC;
    }
L_08A8C9BC:
    ctx.gpr[16] = (0u | 0u);
    goto L_08A8C9C0;
L_08A8C9C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(296)));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(292)));
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
    jump_target = ctx.gpr[11];
    ctx.gpr[31] = (0x08A8C9FCu);
    ctx.gpr[10] = (ctx.gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8C9FCu) goto L_08A8C9FC;
    return;
L_08A8C9FC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[20] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
        goto L_08A8CA18;
    }
    goto L_08A8CA08;
L_08A8CA08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A8CA28;
      }
      goto L_08A8CA18;
    }
L_08A8CA18:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A8C9C0;
      }
      goto L_08A8CA28;
    }
L_08A8CA28:
    if (ctx.gpr[20] != 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_08A8CA98;
    }
    goto L_08A8CA30;
L_08A8CA30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(288)));
    if (ctx.gpr[5] != ctx.gpr[4]) {
    ctx.gpr[23] = (0u | 1u);
        goto L_08A8CA60;
    }
    goto L_08A8CA44;
L_08A8CA44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[20] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A8CA94;
      }
      goto L_08A8CA60;
    }
L_08A8CA60:
    ctx.gpr[2] = (ctx.gpr[23] | 0u);
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
L_08A8CA94:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_08A8CA98;
L_08A8CA98:
    ctx.gpr[31] = (0x08A8CAA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 132u, 0x08AB1690u>(ctx, &aot_mem) && ctx.pc == 0x08A8CAA0u) goto L_08A8CAA0;
    return;
L_08A8CAA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[30];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A8CABC;
      }
      goto L_08A8CAAC;
    }
L_08A8CAAC:
    ctx.gpr[31] = (0x08A8CAB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 137u, 0x08AB1708u>(ctx, &aot_mem) && ctx.pc == 0x08A8CAB4u) goto L_08A8CAB4;
    return;
L_08A8CAB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_08A8CA60;
      }
      goto L_08A8CABC;
    }
L_08A8CABC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(124)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(128)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(124), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[22] << 4u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    ctx.gpr[16] = (0u | 2u);
      if (branch_taken) {
          goto L_08A8CB28;
      }
      goto L_08A8CB20;
    }
L_08A8CB20:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A8CB28;
L_08A8CB28:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(92), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_08A8CB60;
      }
      goto L_08A8CB50;
    }
L_08A8CB50:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CB60;
      }
      goto L_08A8CB5C;
    }
L_08A8CB5C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(80), 0u);
    goto L_08A8CB60;
L_08A8CB60:
    if (ctx.gpr[7] != 0u) {
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
        goto L_08A8CB70;
    }
    goto L_08A8CB68;
L_08A8CB68:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A8CB70;
      }
      goto L_08A8CB70;
    }
L_08A8CB70:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x08A8CB84u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 137u, 0x08AB1708u>(ctx, &aot_mem) && ctx.pc == 0x08A8CB84u) goto L_08A8CB84;
    return;
L_08A8CB84:
    if (ctx.gpr[20] != ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(128)));
        goto L_08A8CB94;
    }
    goto L_08A8CB8C;
L_08A8CB8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 3u);
      if (branch_taken) {
          goto L_08A8C994;
      }
      goto L_08A8CB94;
    }
L_08A8CB94:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C994;
      }
      goto L_08A8CB9C;
    }
L_08A8CB9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A8C994;
      }
      goto L_08A8CBA4;
    }
L_08A8CBA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08A8CC30;
      }
      goto L_08A8CBE0;
    }
L_08A8CBE0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
        goto L_08A8CBFC;
    }
    goto L_08A8CBEC;
L_08A8CBEC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[7] != ctx.gpr[6]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
        goto L_08A8CC04;
    }
    goto L_08A8CBF8;
L_08A8CBF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    goto L_08A8CBFC;
L_08A8CBFC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A8CC30;
      }
      goto L_08A8CC04;
    }
L_08A8CC04:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08A8CBE0;
      }
      goto L_08A8CC30;
    }
L_08A8CC30:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
        goto L_08A8CC68;
    }
    goto L_08A8CC38;
L_08A8CC38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), 0u);
        goto L_08A8CC64;
    }
    goto L_08A8CC44;
L_08A8CC44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-64));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), 0u);
    goto L_08A8CC64;
L_08A8CC64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    goto L_08A8CC68;
L_08A8CC68:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08A8CD08;
      }
      goto L_08A8CC70;
    }
L_08A8CC70:
    ctx.gpr[31] = (0x08A8CC78u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A8C924;
L_08A8CC78:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[19];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A8CCD4;
      }
      goto L_08A8CC8C;
    }
L_08A8CC8C:
    ctx.gpr[18] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[20] = (0u | 3u);
      if (branch_taken) {
          goto L_08A8CCA8;
      }
      goto L_08A8CC98;
    }
L_08A8CC98:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A8CD3C;
      }
      goto L_08A8CCA0;
    }
L_08A8CCA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(288)));
      if (branch_taken) {
          goto L_08A8CD34;
      }
      goto L_08A8CCA8;
    }
L_08A8CCA8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
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
L_08A8CCD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x08A8CCE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A8C494;
L_08A8CCE0:
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
L_08A8CD08:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
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
L_08A8CD34:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CD8C;
      }
      goto L_08A8CD3C;
    }
L_08A8CD3C:
    ctx.gpr[31] = (0x08A8CD44u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 132u, 0x08AB1690u>(ctx, &aot_mem) && ctx.pc == 0x08A8CD44u) goto L_08A8CD44;
    return;
L_08A8CD44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] != ctx.gpr[19]) {
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
        goto L_08A8CD50;
    }
    goto L_08A8CD50;
L_08A8CD50:
    ctx.gpr[31] = (0x08A8CD58u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 137u, 0x08AB1708u>(ctx, &aot_mem) && ctx.pc == 0x08A8CD58u) goto L_08A8CD58;
    return;
L_08A8CD58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x08A8CD64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A8C494;
L_08A8CD64:
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
L_08A8CD8C:
    ctx.gpr[31] = (0x08A8CD94u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 132u, 0x08AB1690u>(ctx, &aot_mem) && ctx.pc == 0x08A8CD94u) goto L_08A8CD94;
    return;
L_08A8CD94:
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    goto L_08A8CD9C;
L_08A8CD9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CDE8;
      }
      goto L_08A8CDA8;
    }
L_08A8CDA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A8CDE8;
      }
      goto L_08A8CDB8;
    }
L_08A8CDB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(284)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x08A8CDD0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 701u, 0x08A8BF44u>(ctx, &aot_mem) && ctx.pc == 0x08A8CDD0u) goto L_08A8CDD0;
    return;
L_08A8CDD0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A8CDE8;
      }
      goto L_08A8CDD8;
    }
L_08A8CDD8:
    ctx.gpr[31] = (0x08A8CDE0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08A8C18C;
L_08A8CDE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_08A8CD9C;
      }
      goto L_08A8CDE8;
    }
L_08A8CDE8:
    ctx.gpr[31] = (0x08A8CDF0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 137u, 0x08AB1708u>(ctx, &aot_mem) && ctx.pc == 0x08A8CDF0u) goto L_08A8CDF0;
    return;
L_08A8CDF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
        goto L_08A8CE18;
    }
    goto L_08A8CE04;
L_08A8CE04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-65));
      if (branch_taken) {
          goto L_08A8CEF4;
      }
      goto L_08A8CE18;
    }
L_08A8CE18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
        goto L_08A8CEF8;
    }
    goto L_08A8CE34;
L_08A8CE34:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-64));
    ctx.gpr[6] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
        goto L_08A8CEF8;
    }
    goto L_08A8CE60;
L_08A8CE60:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 63u);
        goto L_08A8CE7C;
    }
    goto L_08A8CE6C;
L_08A8CE6C:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 63u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A8CE7C;
      }
      goto L_08A8CE7C;
    }
L_08A8CE7C:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
        goto L_08A8CE98;
    }
    goto L_08A8CE84;
L_08A8CE84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[4] != ctx.gpr[19]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
        goto L_08A8CEA0;
    }
    goto L_08A8CE94;
L_08A8CE94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    goto L_08A8CE98;
L_08A8CE98:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A8CEC8;
      }
      goto L_08A8CEA0;
    }
L_08A8CEA0:
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08A8CEBC;
      }
      goto L_08A8CEAC;
    }
L_08A8CEAC:
    ctx.gpr[5] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 63u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u - ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A8CEC0;
      }
      goto L_08A8CEBC;
    }
L_08A8CEBC:
    ctx.gpr[5] = (ctx.gpr[5] & 63u);
    goto L_08A8CEC0;
L_08A8CEC0:
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    goto L_08A8CEC8;
L_08A8CEC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (0x08A8CED8u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 118u, 0x08AB1300u>(ctx, &aot_mem) && ctx.pc == 0x08A8CED8u) goto L_08A8CED8;
    return;
L_08A8CED8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-65));
    goto L_08A8CEF4;
L_08A8CEF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    goto L_08A8CEF8;
L_08A8CEF8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CF1C;
      }
      goto L_08A8CF04;
    }
L_08A8CF04:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[5] == ctx.gpr[19]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(400)));
        goto L_08A8CF48;
    }
    goto L_08A8CF14;
L_08A8CF14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
      if (branch_taken) {
          goto L_08A8CFA8;
      }
      goto L_08A8CF1C;
    }
L_08A8CF1C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
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
L_08A8CF48:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(280)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
        goto L_08A8CF70;
    }
    goto L_08A8CF5C;
L_08A8CF5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(280)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(400)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A8CF70;
      }
      goto L_08A8CF70;
    }
L_08A8CF70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(276)));
    ctx.gpr[31] = (0x08A8CF80u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 118u, 0x08AB1300u>(ctx, &aot_mem) && ctx.pc == 0x08A8CF80u) goto L_08A8CF80;
    return;
L_08A8CF80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(276)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(276), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A8CFA0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08A8C334;
L_08A8CFA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CFD8;
      }
      goto L_08A8CFA8;
    }
L_08A8CFA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(396)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(400)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A8CFC4u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 553u, 0x08A875E4u>(ctx, &aot_mem) && ctx.pc == 0x08A8CFC4u) goto L_08A8CFC4;
    return;
L_08A8CFC4:
    ctx.gpr[5] = (2217u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A8CFD8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15564));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 469u, 0x08A86F78u>(ctx, &aot_mem) && ctx.pc == 0x08A8CFD8u) goto L_08A8CFD8;
    return;
L_08A8CFD8:
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
L_08A8D000:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8D01Cu);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 54u, 0x08A8880Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D01Cu) goto L_08A8D01C;
    return;
L_08A8D01C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
      if (branch_taken) {
          goto L_08A8D0F0;
      }
      goto L_08A8D02C;
    }
L_08A8D02C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A8D070;
      }
      goto L_08A8D068;
    }
L_08A8D068:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
      if (branch_taken) {
          goto L_08A8D07C;
      }
      goto L_08A8D070;
    }
L_08A8D070:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A8D07C;
L_08A8D07C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A8D0F4;
      }
      goto L_08A8D088;
    }
L_08A8D088:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (16u << 16u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08A8D0A4;
    }
    goto L_08A8D09C;
L_08A8D09C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A8D0A8;
      }
      goto L_08A8D0A4;
    }
L_08A8D0A4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    goto L_08A8D0A8;
L_08A8D0A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[10];
    ctx.gpr[31] = (0x08A8D0C8u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8D0C8u) goto L_08A8D0C8;
    return;
L_08A8D0C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8D0E8;
      }
      goto L_08A8D0D0;
    }
L_08A8D0D0:
    ctx.gpr[5] = (2217u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08A8D0E0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12288));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 469u, 0x08A86F78u>(ctx, &aot_mem) && ctx.pc == 0x08A8D0E0u) goto L_08A8D0E0;
    return;
L_08A8D0E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D0F4;
      }
      goto L_08A8D0E8;
    }
L_08A8D0E8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
      if (branch_taken) {
          goto L_08A8D0F4;
      }
      goto L_08A8D0F0;
    }
L_08A8D0F0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    goto L_08A8D0F4;
L_08A8D0F4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8D108:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[10] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[8] = (16u << 16u);
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[10] | 0u);
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
    if (ctx.gpr[11] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[8]);
        goto L_08A8D158;
    }
    goto L_08A8D158;
L_08A8D158:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[10];
    ctx.gpr[31] = (0x08A8D178u);
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8D178u) goto L_08A8D178;
    return;
L_08A8D178:
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8D1B4;
      }
      goto L_08A8D184;
    }
L_08A8D184:
    ctx.gpr[5] = (2217u << 16u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08A8D194u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12288));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 469u, 0x08A86F78u>(ctx, &aot_mem) && ctx.pc == 0x08A8D194u) goto L_08A8D194;
    return;
L_08A8D194:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    goto L_08A8D198;
L_08A8D198:
    ctx.gpr[31] = (0x08A8D1A0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 500u, 0x08A871E0u>(ctx, &aot_mem) && ctx.pc == 0x08A8D1A0u) goto L_08A8D1A0;
    return;
L_08A8D1A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D198;
      }
      goto L_08A8D1B4;
    }
L_08A8D1B4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8D1C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8D1E8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 536u, 0x08A87460u>(ctx, &aot_mem) && ctx.pc == 0x08A8D1E8u) goto L_08A8D1E8;
    return;
L_08A8D1E8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[17] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
        goto L_08A8D21C;
    }
    goto L_08A8D1F4;
L_08A8D1F4:
    ctx.gpr[31] = (0x08A8D1FCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 500u, 0x08A871E0u>(ctx, &aot_mem) && ctx.pc == 0x08A8D1FCu) goto L_08A8D1FC;
    return;
L_08A8D1FC:
    ctx.gpr[31] = (0x08A8D204u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 465u, 0x08A86E94u>(ctx, &aot_mem) && ctx.pc == 0x08A8D204u) goto L_08A8D204;
    return;
L_08A8D204:
    ctx.gpr[18] = (ctx.gpr[2] ^ 1u);
    ctx.gpr[18] = (ctx.gpr[18] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[31] = (0x08A8D214u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 54u, 0x08A8880Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D214u) goto L_08A8D214;
    return;
L_08A8D214:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8D21C;
      }
      goto L_08A8D21C;
    }
L_08A8D21C:
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
L_08A8D278:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8D294u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 543u, 0x08A87518u>(ctx, &aot_mem) && ctx.pc == 0x08A8D294u) goto L_08A8D294;
    return;
L_08A8D294:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D2B4;
      }
      goto L_08A8D2A0;
    }
L_08A8D2A0:
    ctx.gpr[31] = (0x08A8D2A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 500u, 0x08A871E0u>(ctx, &aot_mem) && ctx.pc == 0x08A8D2A8u) goto L_08A8D2A8;
    return;
L_08A8D2A8:
    ctx.gpr[31] = (0x08A8D2B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 54u, 0x08A8880Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D2B0u) goto L_08A8D2B0;
    return;
L_08A8D2B0:
    ctx.gpr[17] = (0u < ctx.gpr[2] ? 1u : 0u);
    goto L_08A8D2B4;
L_08A8D2B4:
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
L_08A8D2CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8D2E8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 566u, 0x08A87788u>(ctx, &aot_mem) && ctx.pc == 0x08A8D2E8u) goto L_08A8D2E8;
    return;
L_08A8D2E8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D308;
      }
      goto L_08A8D2F4;
    }
L_08A8D2F4:
    ctx.gpr[31] = (0x08A8D2FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 500u, 0x08A871E0u>(ctx, &aot_mem) && ctx.pc == 0x08A8D2FCu) goto L_08A8D2FC;
    return;
L_08A8D2FC:
    ctx.gpr[31] = (0x08A8D304u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 54u, 0x08A8880Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D304u) goto L_08A8D304;
    return;
L_08A8D304:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_08A8D308;
L_08A8D308:
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
L_08A8D43C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11824));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8D494;
      }
      goto L_08A8D460;
    }
L_08A8D460:
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(11912)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(11912), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A8D480u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8D480u) goto L_08A8D480;
    return;
L_08A8D480:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(11912)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(11912), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A8D49C;
      }
      goto L_08A8D494;
    }
L_08A8D494:
    ctx.gpr[31] = (0x08A8D49Cu);
    // nop
    ctx.pc = 0x08AB45B4u;
    return;
L_08A8D49C:
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
L_08A8D4B4:
    ctx.gpr[2] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(26608));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8D4C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-336));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[23]);
    ctx.gpr[18] = (ctx.gpr[8] | 0u);
    ctx.gpr[20] = (ctx.gpr[7] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8D504u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 544u, 0x08A93104u>(ctx, &aot_mem) && ctx.pc == 0x08A8D504u) goto L_08A8D504;
    return;
L_08A8D504:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A8D660;
      }
      goto L_08A8D50C;
    }
L_08A8D50C:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A8D51Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_08A8EC28;
L_08A8D51C:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11884)));
    ctx.gpr[31] = (0x08A8D534u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_08A8E4B8;
L_08A8D534:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[2]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(26596)));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[8] = (2217u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(11888)));
    ctx.gpr[7] = (0u | 12u);
    ctx.gpr[31] = (0x08A8D55Cu);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-6856));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 211u, 0x08A9CAFCu>(ctx, &aot_mem) && ctx.pc == 0x08A8D55Cu) goto L_08A8D55C;
    return;
L_08A8D55C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_08A8D628;
      }
      goto L_08A8D568;
    }
L_08A8D568:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 11u));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] >> 21u);
    ctx.gpr[17] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 11u));
    ctx.gpr[7] = (ctx.gpr[5] >> 21u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[22] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 11u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11896)));
    ctx.gpr[21] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[17]);
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 11u));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(26608));
      if (branch_taken) {
          goto L_08A8D5E4;
      }
      goto L_08A8D5A8;
    }
L_08A8D5A8:
    ctx.gpr[31] = (0x08A8D5B0u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 197u, 0x08A9CA08u>(ctx, &aot_mem) && ctx.pc == 0x08A8D5B0u) goto L_08A8D5B0;
    return;
L_08A8D5B0:
    ctx.gpr[5] = (3u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3392));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8D694;
      }
      goto L_08A8D5C8;
    }
L_08A8D5C8:
    ctx.gpr[5] = (0u | 150u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[31] = (0x08A8D5DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 197u, 0x08A9CA08u>(ctx, &aot_mem) && ctx.pc == 0x08A8D5DCu) goto L_08A8D5DC;
    return;
L_08A8D5DC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8D704;
      }
      goto L_08A8D5E4;
    }
L_08A8D5E4:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11896), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A8D5FCu);
    ctx.gpr[6] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x08A8D5FCu) goto L_08A8D5FC;
    return;
L_08A8D5FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8D628:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A8D634u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11408));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 384u, 0x08A86388u>(ctx, &aot_mem) && ctx.pc == 0x08A8D634u) goto L_08A8D634;
    return;
L_08A8D634:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8D660:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8D694:
    ctx.gpr[5] = (5u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27680));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (6u << 16u);
      if (branch_taken) {
          goto L_08A8D6C4;
      }
      goto L_08A8D6A8;
    }
L_08A8D6A8:
    ctx.gpr[5] = (0u | 200u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[31] = (0x08A8D6BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 197u, 0x08A9CA08u>(ctx, &aot_mem) && ctx.pc == 0x08A8D6BCu) goto L_08A8D6BC;
    return;
L_08A8D6BC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8D704;
      }
      goto L_08A8D6C4;
    }
L_08A8D6C4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6784));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 500u);
      if (branch_taken) {
          goto L_08A8D6F0;
      }
      goto L_08A8D6D4;
    }
L_08A8D6D4:
    ctx.gpr[5] = (0u | 350u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[31] = (0x08A8D6E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 197u, 0x08A9CA08u>(ctx, &aot_mem) && ctx.pc == 0x08A8D6E8u) goto L_08A8D6E8;
    return;
L_08A8D6E8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8D704;
      }
      goto L_08A8D6F0;
    }
L_08A8D6F0:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[31] = (0x08A8D700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 197u, 0x08A9CA08u>(ctx, &aot_mem) && ctx.pc == 0x08A8D700u) goto L_08A8D700;
    return;
L_08A8D700:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08A8D704;
L_08A8D704:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11896)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_08A8D730;
      }
      goto L_08A8D71C;
    }
L_08A8D71C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    goto L_08A8D730;
L_08A8D730:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11896), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A8D748u);
    ctx.gpr[6] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x08A8D748u) goto L_08A8D748;
    return;
L_08A8D748:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8D774:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] & 32u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 16u);
      if (branch_taken) {
          goto L_08A8D7B0;
      }
      goto L_08A8D788;
    }
L_08A8D788:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 8u);
      if (branch_taken) {
          goto L_08A8D7B0;
      }
      goto L_08A8D790;
    }
L_08A8D790:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D7B0;
      }
      goto L_08A8D798;
    }
L_08A8D798:
    ctx.gpr[31] = (0x08A8D7A0u);
    // nop
    ctx.pc = 0x08AB4414u;
    return;
L_08A8D7A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D7B0;
      }
      goto L_08A8D7A8;
    }
L_08A8D7A8:
    ctx.gpr[31] = (0x08A8D7B0u);
    // nop
    ctx.pc = 0x08AB440Cu;
    return;
L_08A8D7B0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8D7CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(26576), 0u);
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(11916), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8D810u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15004));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 143u, 0x08AB1760u>(ctx, &aot_mem) && ctx.pc == 0x08A8D810u) goto L_08A8D810;
    return;
L_08A8D810:
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[31] = (0x08A8D81Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14988));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 143u, 0x08AB1760u>(ctx, &aot_mem) && ctx.pc == 0x08A8D81Cu) goto L_08A8D81C;
    return;
L_08A8D81C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (2217u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11348));
    ctx.gpr[31] = (0x08A8D834u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-10380));
    ctx.pc = 0x08AB456Cu;
    return;
L_08A8D834:
    ctx.gpr[19] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-15008), ctx.gpr[2]);
    ctx.gpr[31] = (0x08A8D844u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08AB4434u;
    return;
L_08A8D844:
    ctx.gpr[31] = (0x08A8D84Cu);
    // nop
    ctx.pc = 0x08AB4414u;
    return;
L_08A8D84C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[18] = (2223u << 16u);
      if (branch_taken) {
          goto L_08A8D884;
      }
      goto L_08A8D854;
    }
L_08A8D854:
    ctx.gpr[31] = (0x08A8D85Cu);
    // nop
    ctx.pc = 0x08AB4424u;
    return;
L_08A8D85C:
    ctx.gpr[4] = (ctx.gpr[2] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_08A8D888;
      }
      goto L_08A8D868;
    }
L_08A8D868:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08A8D874u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A8D43C;
L_08A8D874:
    ctx.gpr[31] = (0x08A8D87Cu);
    ctx.gpr[4] = (0u | 1000u);
    ctx.pc = 0x08AB4614u;
    return;
L_08A8D87C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D854;
      }
      goto L_08A8D884;
    }
L_08A8D884:
    ctx.gpr[5] = (2221u << 16u);
    goto L_08A8D888;
L_08A8D888:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08A8D894u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11332));
    ctx.pc = 0x08AB4444u;
    return;
L_08A8D894:
    ctx.gpr[31] = (0x08A8D89Cu);
    // nop
    ctx.pc = 0x08AB4424u;
    return;
L_08A8D89C:
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8D8C0;
      }
      goto L_08A8D8A8;
    }
L_08A8D8A8:
    ctx.gpr[31] = (0x08A8D8B0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A8D43C;
L_08A8D8B0:
    ctx.gpr[31] = (0x08A8D8B8u);
    ctx.gpr[4] = (0u | 1000u);
    ctx.pc = 0x08AB4614u;
    return;
L_08A8D8B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D894;
      }
      goto L_08A8D8C0;
    }
L_08A8D8C0:
    ctx.gpr[31] = (0x08A8D8C8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-15008)));
    ctx.pc = 0x08AB443Cu;
    return;
L_08A8D8C8:
    ctx.gpr[31] = (0x08A8D8D0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-15008)));
    ctx.pc = 0x08AB457Cu;
    return;
L_08A8D8D0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(26600), ctx.gpr[16]);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11884)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8D8ECu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08A8D980;
L_08A8D8EC:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(26596), ctx.gpr[17]);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (2217u << 16u);
    ctx.gpr[6] = (0u | 21u);
    ctx.gpr[7] = (0u | 12288u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11324));
    ctx.gpr[31] = (0x08A8D918u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8832));
    ctx.pc = 0x08AB45E4u;
    return;
L_08A8D918:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-14956), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8D92C;
      }
      goto L_08A8D920;
    }
L_08A8D920:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[31] = (0x08A8D92Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11312));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 428u, 0x08A86A38u>(ctx, &aot_mem) && ctx.pc == 0x08A8D92Cu) goto L_08A8D92C;
    return;
L_08A8D92C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-14956)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A8D93Cu);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08AB4594u;
    return;
L_08A8D93C:
    ctx.gpr[4] = (2217u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A8D950u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8148));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 396u, 0x08A86690u>(ctx, &aot_mem) && ctx.pc == 0x08A8D950u) goto L_08A8D950;
    return;
L_08A8D950:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2222u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11904), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8D980:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] << 8u);
    ctx.gpr[4] = (ctx.gpr[30] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11824));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11276));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A8D9E4u);
    ctx.gpr[6] = (0u | 256u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8D9E4u) goto L_08A8D9E4;
    return;
L_08A8D9E4:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A8D9FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11260));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 99u, 0x08A94BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8D9FCu) goto L_08A8D9FC;
    return;
L_08A8D9FC:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) > 0;
    ctx.gpr[20] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A8DA20;
      }
      goto L_08A8DA0C;
    }
L_08A8DA0C:
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[31] = (0x08A8DA1Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11256));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 428u, 0x08A86A38u>(ctx, &aot_mem) && ctx.pc == 0x08A8DA1Cu) goto L_08A8DA1C;
    return;
L_08A8DA1C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08A8DA20;
L_08A8DA20:
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_08A8DA88;
      }
      goto L_08A8DA38;
    }
L_08A8DA38:
    ctx.gpr[4] = (0u | 272u);
    ctx.gpr[16] = (ctx.gpr[23] + static_cast<std::uint32_t>(272));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    goto L_08A8DA44;
L_08A8DA44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(256)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(260)));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A8DA60u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    goto L_08A8E4B8;
L_08A8DA60:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11888)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(11888), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(272));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(272));
      if (branch_taken) {
          goto L_08A8DA44;
      }
      goto L_08A8DA88;
    }
L_08A8DA88:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08A8DA98u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8DA98u) goto L_08A8DA98;
    return;
L_08A8DA98:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11888)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2223u << 16u);
      if (branch_taken) {
          goto L_08A8DABC;
      }
      goto L_08A8DAA8;
    }
L_08A8DAA8:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[31] = (0x08A8DAB4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11132));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 428u, 0x08A86A38u>(ctx, &aot_mem) && ctx.pc == 0x08A8DAB4u) goto L_08A8DAB4;
    return;
L_08A8DAB4:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11888)));
    ctx.gpr[4] = (2223u << 16u);
    goto L_08A8DABC;
L_08A8DABC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-15024), 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (2217u << 16u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (0u | 12u);
    ctx.gpr[31] = (0x08A8DADCu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-6856));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 326u, 0x08A9D348u>(ctx, &aot_mem) && ctx.pc == 0x08A8DADCu) goto L_08A8DADC;
    return;
L_08A8DADC:
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
L_08A8DB0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[30] = (32769u << 16u);
    ctx.gpr[23] = (32769u << 16u);
    ctx.gpr[22] = (2221u << 16u);
    ctx.gpr[21] = (2221u << 16u);
    ctx.gpr[20] = (15u << 16u);
    ctx.gpr[19] = (32801u << 16u);
    ctx.gpr[18] = (32801u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(26864));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(22));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(91));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-11020));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-10984));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(16960));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(3));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    goto L_08A8DB84;
L_08A8DB84:
    ctx.gpr[31] = (0x08A8DB8Cu);
    // nop
    ctx.pc = 0x08AB4424u;
    return;
L_08A8DB8C:
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8DC00;
      }
      goto L_08A8DB98;
    }
L_08A8DB98:
    ctx.gpr[31] = (0x08A8DBA0u);
    // nop
    ctx.pc = 0x08AB4424u;
    return;
L_08A8DBA0:
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8DC00;
      }
      goto L_08A8DBAC;
    }
L_08A8DBAC:
    ctx.gpr[31] = (0x08A8DBB4u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A8D43C;
L_08A8DBB4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A8DBCC;
      }
      goto L_08A8DBBC;
    }
L_08A8DBBC:
    ctx.gpr[31] = (0x08A8DBC4u);
    ctx.gpr[4] = (0u | 1000u);
    ctx.pc = 0x08AB4614u;
    return;
L_08A8DBC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8DB98;
      }
      goto L_08A8DBCC;
    }
L_08A8DBCC:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
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
L_08A8DC00:
    ctx.gpr[31] = (0x08A8DC08u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 147u, 0x08AB17C8u>(ctx, &aot_mem) && ctx.pc == 0x08A8DC08u) goto L_08A8DC08;
    return;
L_08A8DC08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A8DC18u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.pc = 0x08AB47DCu;
    return;
L_08A8DC18:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A8DC24u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 152u, 0x08AB1840u>(ctx, &aot_mem) && ctx.pc == 0x08A8DC24u) goto L_08A8DC24;
    return;
L_08A8DC24:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.gpr[4] = (32770u << 16u);
      if (branch_taken) {
          goto L_08A8DD24;
      }
      goto L_08A8DC2C;
    }
L_08A8DC2C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20478));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08A8DC6C;
      }
      goto L_08A8DC38;
    }
L_08A8DC38:
    ctx.gpr[4] = (32769u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08A8DC6C;
      }
      goto L_08A8DC48;
    }
L_08A8DC48:
    ctx.gpr[4] = (32769u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08A8DC6C;
      }
      goto L_08A8DC58;
    }
L_08A8DC58:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[30];
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08A8DC6C;
      }
      goto L_08A8DC60;
    }
L_08A8DC60:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08A8DC84;
      }
      goto L_08A8DC68;
    }
L_08A8DC68:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08A8DC6C;
L_08A8DC6C:
    ctx.gpr[31] = (0x08A8DC74u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 384u, 0x08A86388u>(ctx, &aot_mem) && ctx.pc == 0x08A8DC74u) goto L_08A8DC74;
    return;
L_08A8DC74:
    ctx.gpr[31] = (0x08A8DC7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 232u, 0x08A89310u>(ctx, &aot_mem) && ctx.pc == 0x08A8DC7Cu) goto L_08A8DC7C;
    return;
L_08A8DC7C:
    ctx.gpr[31] = (0x08A8DC84u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 428u, 0x08A86A38u>(ctx, &aot_mem) && ctx.pc == 0x08A8DC84u) goto L_08A8DC84;
    return;
L_08A8DC84:
    ctx.gpr[31] = (0x08A8DC8Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.pc = 0x08AB469Cu;
    return;
L_08A8DC8C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08A8DC98u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A8D43C;
L_08A8DC98:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A8DCBC;
      }
      goto L_08A8DCA0;
    }
L_08A8DCA0:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A8DCBC;
      }
      goto L_08A8DCA8;
    }
L_08A8DCA8:
    ctx.gpr[31] = (0x08A8DCB0u);
    // nop
    ctx.pc = 0x08AB4424u;
    return;
L_08A8DCB0:
    ctx.gpr[4] = (ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8DB84;
      }
      goto L_08A8DCBC;
    }
L_08A8DCBC:
    ctx.gpr[31] = (0x08A8DCC4u);
    // nop
    ctx.pc = 0x08AB4424u;
    return;
L_08A8DCC4:
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8DB84;
      }
      goto L_08A8DCD0;
    }
L_08A8DCD0:
    ctx.gpr[31] = (0x08A8DCD8u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A8D43C;
L_08A8DCD8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A8DCF0;
      }
      goto L_08A8DCE0;
    }
L_08A8DCE0:
    ctx.gpr[31] = (0x08A8DCE8u);
    ctx.gpr[4] = (0u | 1000u);
    ctx.pc = 0x08AB4614u;
    return;
L_08A8DCE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8DCBC;
      }
      goto L_08A8DCF0;
    }
L_08A8DCF0:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
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
L_08A8DD24:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_08A8DD58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8DD70u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.pc = 0x08AB47E4u;
    return;
L_08A8DD70:
    ctx.gpr[2] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8DD80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    goto L_08A8DD90;
L_08A8DD90:
    ctx.gpr[31] = (0x08A8DD98u);
    // nop
    ctx.pc = 0x08AB467Cu;
    return;
L_08A8DD98:
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[31] = (0x08A8DDA4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15004));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 147u, 0x08AB17C8u>(ctx, &aot_mem) && ctx.pc == 0x08A8DDA4u) goto L_08A8DDA4;
    return;
L_08A8DDA4:
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[31] = (0x08A8DDB0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14988));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 147u, 0x08AB17C8u>(ctx, &aot_mem) && ctx.pc == 0x08A8DDB0u) goto L_08A8DDB0;
    return;
L_08A8DDB0:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(11916)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (2223u << 16u);
      if (branch_taken) {
          goto L_08A8DE28;
      }
      goto L_08A8DDC4;
    }
L_08A8DDC4:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[16] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11916), ctx.gpr[4]);
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14988));
    ctx.gpr[31] = (0x08A8DDE0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 152u, 0x08AB1840u>(ctx, &aot_mem) && ctx.pc == 0x08A8DDE0u) goto L_08A8DDE0;
    return;
L_08A8DDE0:
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14972)));
    ctx.gpr[5] = (2223u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14968)));
    ctx.gpr[6] = (2223u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-14964)));
    ctx.gpr[7] = (2223u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-14960)));
    ctx.gpr[31] = (0x08A8DE08u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08A8E5C4;
L_08A8DE08:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A8DE14u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 147u, 0x08AB17C8u>(ctx, &aot_mem) && ctx.pc == 0x08A8DE14u) goto L_08A8DE14;
    return;
L_08A8DE14:
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-14952), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11916), ctx.gpr[5]);
    ctx.gpr[4] = (2223u << 16u);
    goto L_08A8DE28;
L_08A8DE28:
    ctx.gpr[31] = (0x08A8DE30u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14988));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 152u, 0x08AB1840u>(ctx, &aot_mem) && ctx.pc == 0x08A8DE30u) goto L_08A8DE30;
    return;
L_08A8DE30:
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[31] = (0x08A8DE3Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15004));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 152u, 0x08AB1840u>(ctx, &aot_mem) && ctx.pc == 0x08A8DE3Cu) goto L_08A8DE3C;
    return;
L_08A8DE3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8DD90;
      }
      goto L_08A8DE44;
    }
L_08A8DE44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15004));
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8DE84u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 147u, 0x08AB17C8u>(ctx, &aot_mem) && ctx.pc == 0x08A8DE84u) goto L_08A8DE84;
    return;
L_08A8DE84:
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14988));
    ctx.gpr[31] = (0x08A8DE94u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 147u, 0x08AB17C8u>(ctx, &aot_mem) && ctx.pc == 0x08A8DE94u) goto L_08A8DE94;
    return;
L_08A8DE94:
    ctx.gpr[4] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-14972), ctx.gpr[18]);
    ctx.gpr[4] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-14968), ctx.gpr[19]);
    ctx.gpr[4] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-14964), ctx.gpr[17]);
    ctx.gpr[4] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-14960), ctx.gpr[16]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(11916), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A8DEC8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 152u, 0x08AB1840u>(ctx, &aot_mem) && ctx.pc == 0x08A8DEC8u) goto L_08A8DEC8;
    return;
L_08A8DEC8:
    ctx.gpr[31] = (0x08A8DED0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 152u, 0x08AB1840u>(ctx, &aot_mem) && ctx.pc == 0x08A8DED0u) goto L_08A8DED0;
    return;
L_08A8DED0:
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[31] = (0x08A8DEDCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14956)));
    ctx.pc = 0x08AB454Cu;
    return;
L_08A8DEDC:
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
L_08A8DF00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11912)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[17] = (2223u << 16u);
      if (branch_taken) {
          goto L_08A8DF4C;
      }
      goto L_08A8DF24;
    }
L_08A8DF24:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-14988));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A8DF34u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 147u, 0x08AB17C8u>(ctx, &aot_mem) && ctx.pc == 0x08A8DF34u) goto L_08A8DF34;
    return;
L_08A8DF34:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11916)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[18] = (0u | 1u);
        goto L_08A8DF84;
    }
    goto L_08A8DF44;
L_08A8DF44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_08A8DF88;
      }
      goto L_08A8DF4C;
    }
L_08A8DF4C:
    ctx.gpr[31] = (0x08A8DF54u);
    // nop
    ctx.pc = 0x08AB45B4u;
    return;
L_08A8DF54:
    ctx.gpr[31] = (0x08A8DF5Cu);
    ctx.gpr[4] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 276u, 0x08A85A40u>(ctx, &aot_mem) && ctx.pc == 0x08A8DF5Cu) goto L_08A8DF5C;
    return;
L_08A8DF5C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08A8DF68u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A8D43C;
L_08A8DF68:
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
L_08A8DF84:
    ctx.gpr[5] = (0u | 3u);
    goto L_08A8DF88;
L_08A8DF88:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8DFB8;
      }
      goto L_08A8DF90;
    }
L_08A8DF90:
    ctx.gpr[31] = (0x08A8DF98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 3u, 0x08A88164u>(ctx, &aot_mem) && ctx.pc == 0x08A8DF98u) goto L_08A8DF98;
    return;
L_08A8DF98:
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14952)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11916), 0u);
    ctx.gpr[31] = (0x08A8DFACu);
    ctx.gpr[4] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 9u, 0x08A88200u>(ctx, &aot_mem) && ctx.pc == 0x08A8DFACu) goto L_08A8DFAC;
    return;
L_08A8DFAC:
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11920), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (0u | 1u);
    goto L_08A8DFB8;
L_08A8DFB8:
    ctx.gpr[31] = (0x08A8DFC0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 152u, 0x08AB1840u>(ctx, &aot_mem) && ctx.pc == 0x08A8DFC0u) goto L_08A8DFC0;
    return;
L_08A8DFC0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08A8DFCCu);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A8D43C;
L_08A8DFCC:
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
L_08A8DFE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11904)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E020;
      }
      goto L_08A8E000;
    }
L_08A8E000:
    ctx.gpr[31] = (0x08A8E008u);
    // nop
    goto L_08A8DF00;
L_08A8E008:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E020;
      }
      goto L_08A8E010;
    }
L_08A8E010:
    ctx.gpr[31] = (0x08A8E018u);
    ctx.gpr[4] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 276u, 0x08A85A40u>(ctx, &aot_mem) && ctx.pc == 0x08A8E018u) goto L_08A8E018;
    return;
L_08A8E018:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E000;
      }
      goto L_08A8E020;
    }
L_08A8E020:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8E02C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11904)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E04C;
      }
      goto L_08A8E044;
    }
L_08A8E044:
    ctx.gpr[31] = (0x08A8E04Cu);
    // nop
    goto L_08A8DF00;
L_08A8E04C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8E058:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8E074u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(11884)));
    goto L_08A8E4B8;
L_08A8E074:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(26596)));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[8] = (2217u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(11888)));
    ctx.gpr[7] = (0u | 12u);
    ctx.gpr[31] = (0x08A8E09Cu);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-6856));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 211u, 0x08A9CAFCu>(ctx, &aot_mem) && ctx.pc == 0x08A8E09Cu) goto L_08A8E09C;
    return;
L_08A8E09C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11880)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8E0BCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-10964));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08A8E0BCu) goto L_08A8E0BC;
    return;
L_08A8E0BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8E0CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11884)));
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8E108u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A8E4B8;
L_08A8E108:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[2]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(26596)));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[8] = (2217u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(11888)));
    ctx.gpr[7] = (0u | 12u);
    ctx.gpr[31] = (0x08A8E130u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-6856));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 211u, 0x08A9CAFCu>(ctx, &aot_mem) && ctx.pc == 0x08A8E130u) goto L_08A8E130;
    return;
L_08A8E130:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[18] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A8E148;
      }
      goto L_08A8E13C;
    }
L_08A8E13C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A8E1F4;
      }
      goto L_08A8E148;
    }
L_08A8E148:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(11908)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_08A8E174;
      }
      goto L_08A8E158;
    }
L_08A8E158:
    ctx.gpr[31] = (0x08A8E160u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10940));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 384u, 0x08A86388u>(ctx, &aot_mem) && ctx.pc == 0x08A8E160u) goto L_08A8E160;
    return;
L_08A8E160:
    ctx.gpr[31] = (0x08A8E168u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 232u, 0x08A89310u>(ctx, &aot_mem) && ctx.pc == 0x08A8E168u) goto L_08A8E168;
    return;
L_08A8E168:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[31] = (0x08A8E174u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10984));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 428u, 0x08A86A38u>(ctx, &aot_mem) && ctx.pc == 0x08A8E174u) goto L_08A8E174;
    return;
L_08A8E174:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11880)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A8E198u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-10964));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08A8E198u) goto L_08A8E198;
    return;
L_08A8E198:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A8E1A8u);
    ctx.gpr[6] = (0u | 420u);
    goto L_08A8DB0C;
L_08A8E1A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8E200;
      }
      goto L_08A8E1B0;
    }
L_08A8E1B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(11908)));
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(11908), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A8E1CCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 52u, 0x08A904D0u>(ctx, &aot_mem) && ctx.pc == 0x08A8E1CCu) goto L_08A8E1CC;
    return;
L_08A8E1CC:
    ctx.gpr[31] = (0x08A8E1D4u);
    // nop
    ctx.pc = 0x08AB4674u;
    return;
L_08A8E1D4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 21 ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[17] = (0u | 21u);
        goto L_08A8E1E8;
    }
    goto L_08A8E1E8;
L_08A8E1E8:
    ctx.gpr[31] = (0x08A8E1F0u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-4));
    ctx.pc = 0x08AB47A4u;
    return;
L_08A8E1F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08A8E1F4;
L_08A8E1F4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A8E200;
      }
      goto L_08A8E1FC;
    }
L_08A8E1FC:
    ctx.gpr[20] = (0u | 1u);
    goto L_08A8E200;
L_08A8E200:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8E284:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8E2B4u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 544u, 0x08A93104u>(ctx, &aot_mem) && ctx.pc == 0x08A8E2B4u) goto L_08A8E2B4;
    return;
L_08A8E2B4:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11824));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08A8E2D4;
      }
      goto L_08A8E2C8;
    }
L_08A8E2C8:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (2222u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11920), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A8E2D4;
L_08A8E2D4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A8E33C;
      }
      goto L_08A8E2DC;
    }
L_08A8E2DC:
    ctx.gpr[4] = (0u | 1u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A8E2E8u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8E2E8u) goto L_08A8E2E8;
    return;
L_08A8E2E8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A8E340;
      }
      goto L_08A8E2F0;
    }
L_08A8E2F0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A8E308u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A8E5C4;
L_08A8E308:
    ctx.gpr[31] = (0x08A8E310u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 3u, 0x08A88164u>(ctx, &aot_mem) && ctx.pc == 0x08A8E310u) goto L_08A8E310;
    return;
L_08A8E310:
    ctx.gpr[31] = (0x08A8E318u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 9u, 0x08A88200u>(ctx, &aot_mem) && ctx.pc == 0x08A8E318u) goto L_08A8E318;
    return;
L_08A8E318:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8E33C:
    ctx.gpr[4] = (2227u << 16u);
    goto L_08A8E340;
L_08A8E340:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(26576));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(26576), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8E36Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    goto L_08A8DE44;
L_08A8E36C:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8E390:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8E3A4u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 61u, 0x08A90568u>(ctx, &aot_mem) && ctx.pc == 0x08A8E3A4u) goto L_08A8E3A4;
    return;
L_08A8E3A4:
    ctx.gpr[31] = (0x08A8E3ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08AB4784u;
    return;
L_08A8E3AC:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11908)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(11908), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8E3CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8E3F8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(11884)));
    goto L_08A8E4B8;
L_08A8E3F8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(26596)));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[8] = (2217u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(11888)));
    ctx.gpr[7] = (0u | 12u);
    ctx.gpr[31] = (0x08A8E420u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-6856));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 211u, 0x08A9CAFCu>(ctx, &aot_mem) && ctx.pc == 0x08A8E420u) goto L_08A8E420;
    return;
L_08A8E420:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E43C;
      }
      goto L_08A8E42C;
    }
L_08A8E42C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A8E43C;
L_08A8E43C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8E450:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8E464u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(11884)));
    goto L_08A8E4B8;
L_08A8E464:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(26596)));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[8] = (2217u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(11888)));
    ctx.gpr[7] = (0u | 12u);
    ctx.gpr[31] = (0x08A8E48Cu);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-6856));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 211u, 0x08A9CAFCu>(ctx, &aot_mem) && ctx.pc == 0x08A8E48Cu) goto L_08A8E48C;
    return;
L_08A8E48C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E4A8;
      }
      goto L_08A8E498;
    }
L_08A8E498:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8E4A8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8E4B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8E4D4u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x08A8E4D4u) goto L_08A8E4D4;
    return;
L_08A8E4D4:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14208));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    goto L_08A8E4EC;
L_08A8E4EC:
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[7] & 1u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A8E508;
      }
      goto L_08A8E500;
    }
L_08A8E500:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A8E508;
      }
      goto L_08A8E508;
    }
L_08A8E508:
    ctx.gpr[7] = (ctx.gpr[17] << 5u);
    ctx.gpr[17] = (ctx.gpr[7] + ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[16] ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
        goto L_08A8E4EC;
    }
    goto L_08A8E520;
L_08A8E520:
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
L_08A8E538:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[9] = (ctx.gpr[9] - ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11932)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11928)));
    ctx.gpr[4] = (ctx.gpr[9] ^ ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[10] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[7] ^ ctx.gpr[9]);
      if (branch_taken) {
          goto L_08A8E5A8;
      }
      goto L_08A8E584;
    }
L_08A8E584:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[8] ? 1u : 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2223u << 16u);
      if (branch_taken) {
          goto L_08A8E5B0;
      }
      goto L_08A8E5A0;
    }
L_08A8E5A0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8E5A8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8E5B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15024)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-15024), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8E5C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[19] = (ctx.gpr[8] & 255u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8E618u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 15u, 0x08A900C0u>(ctx, &aot_mem) && ctx.pc == 0x08A8E618u) goto L_08A8E618;
    return;
L_08A8E618:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 8 ? 1u : 0u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26864));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 31u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10852));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    ctx.gpr[21] = (2223u << 16u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[30] = (0u | 17u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[21] + static_cast<std::uint32_t>(-14944));
    goto L_08A8E658;
L_08A8E658:
    ctx.gpr[31] = (0x08A8E660u);
    // nop
    ctx.pc = 0x08AB4424u;
    return;
L_08A8E660:
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08A8E6E8;
    }
    goto L_08A8E66C;
L_08A8E66C:
    ctx.gpr[31] = (0x08A8E674u);
    // nop
    ctx.pc = 0x08AB4424u;
    return;
L_08A8E674:
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8E6E4;
      }
      goto L_08A8E680;
    }
L_08A8E680:
    ctx.gpr[31] = (0x08A8E688u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A8D43C;
L_08A8E688:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A8E698;
      }
      goto L_08A8E690;
    }
L_08A8E690:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E6A8;
      }
      goto L_08A8E698;
    }
L_08A8E698:
    ctx.gpr[31] = (0x08A8E6A0u);
    ctx.gpr[4] = (0u | 1000u);
    ctx.pc = 0x08AB4614u;
    return;
L_08A8E6A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E66C;
      }
      goto L_08A8E6A8;
    }
L_08A8E6A8:
    ctx.gpr[31] = (0x08A8E6B0u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 36u, 0x08A90324u>(ctx, &aot_mem) && ctx.pc == 0x08A8E6B0u) goto L_08A8E6B0;
    return;
L_08A8E6B0:
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
L_08A8E6E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A8E6E8;
L_08A8E6E8:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-86));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-52));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-69));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-66));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-83));
    { const bool branch_taken = ctx.gpr[23] != 0u;
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-34));
      if (branch_taken) {
          goto L_08A8E734;
      }
      goto L_08A8E708;
    }
L_08A8E708:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[9] = (0u | 1u);
      if (branch_taken) {
          goto L_08A8E738;
      }
      goto L_08A8E710;
    }
L_08A8E710:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[30]));
      if (branch_taken) {
          goto L_08A8E768;
      }
      goto L_08A8E734;
    }
L_08A8E734:
    ctx.gpr[9] = (0u | 1u);
    goto L_08A8E738;
L_08A8E738:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08A8E768;
      }
      goto L_08A8E740;
    }
L_08A8E740:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E768;
      }
      goto L_08A8E748;
    }
L_08A8E748:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[3]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[8]));
    goto L_08A8E768;
L_08A8E768:
    ctx.gpr[31] = (0x08A8E770u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 147u, 0x08AB17C8u>(ctx, &aot_mem) && ctx.pc == 0x08A8E770u) goto L_08A8E770;
    return;
L_08A8E770:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
        goto L_08A8E798;
    }
    goto L_08A8E780;
L_08A8E780:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A8E794u);
    ctx.gpr[8] = (0u | 0u);
    ctx.pc = 0x08AB47E4u;
    return;
L_08A8E794:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08A8E798;
L_08A8E798:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A8E7A4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08AB4794u;
    return;
L_08A8E7A4:
    ctx.gpr[16] = (0u | 0u);
    goto L_08A8E7A8;
L_08A8E7A8:
    ctx.gpr[31] = (0x08A8E7B0u);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 276u, 0x08A85A40u>(ctx, &aot_mem) && ctx.pc == 0x08A8E7B0u) goto L_08A8E7B0;
    return;
L_08A8E7B0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A8E7BCu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.pc = 0x08AB47ECu;
    return;
L_08A8E7BC:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[16] = (0u | 1u);
        goto L_08A8E7C4;
    }
    goto L_08A8E7C4;
L_08A8E7C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-14940)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-14944)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A8E7A8;
      }
      goto L_08A8E7D4;
    }
L_08A8E7D4:
    ctx.gpr[31] = (0x08A8E7DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 152u, 0x08AB1840u>(ctx, &aot_mem) && ctx.pc == 0x08A8E7DCu) goto L_08A8E7DC;
    return;
L_08A8E7DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 170u);
    ctx.gpr[6] = (0u | 204u);
    ctx.gpr[7] = (0u | 187u);
    ctx.gpr[8] = (0u | 239u);
    ctx.gpr[11] = (0u | 190u);
    ctx.gpr[2] = (0u | 173u);
    ctx.gpr[3] = (0u | 222u);
    { const bool branch_taken = ctx.gpr[23] != 0u;
    ctx.gpr[12] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A8E880;
      }
      goto L_08A8E804;
    }
L_08A8E804:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[9] = (0u | 1u);
      if (branch_taken) {
          goto L_08A8E884;
      }
      goto L_08A8E80C;
    }
L_08A8E80C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    ctx.gpr[9] = (0u | 1u);
      if (branch_taken) {
          goto L_08A8E884;
      }
      goto L_08A8E814;
    }
L_08A8E814:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A8E904;
      }
      goto L_08A8E820;
    }
L_08A8E820:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A8E904;
      }
      goto L_08A8E82C;
    }
L_08A8E82C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08A8E904;
      }
      goto L_08A8E838;
    }
L_08A8E838:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A8E904;
      }
      goto L_08A8E844;
    }
L_08A8E844:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A8E904;
      }
      goto L_08A8E850;
    }
L_08A8E850:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A8E904;
      }
      goto L_08A8E85C;
    }
L_08A8E85C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(6)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8E904;
      }
      goto L_08A8E868;
    }
L_08A8E868:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(7)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08A8E904;
      }
      goto L_08A8E874;
    }
L_08A8E874:
    ctx.gpr[23] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[12] | 0u);
      if (branch_taken) {
          goto L_08A8E904;
      }
      goto L_08A8E880;
    }
L_08A8E880:
    ctx.gpr[9] = (0u | 1u);
    goto L_08A8E884;
L_08A8E884:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08A8E904;
      }
      goto L_08A8E88C;
    }
L_08A8E88C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E904;
      }
      goto L_08A8E894;
    }
L_08A8E894:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    ctx.gpr[4] = (32769u << 16u);
      if (branch_taken) {
          goto L_08A8E910;
      }
      goto L_08A8E89C;
    }
L_08A8E89C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A8E904;
      }
      goto L_08A8E8A8;
    }
L_08A8E8A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A8E904;
      }
      goto L_08A8E8B4;
    }
L_08A8E8B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8E904;
      }
      goto L_08A8E8C0;
    }
L_08A8E8C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08A8E904;
      }
      goto L_08A8E8CC;
    }
L_08A8E8CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A8E904;
      }
      goto L_08A8E8D8;
    }
L_08A8E8D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A8E904;
      }
      goto L_08A8E8E4;
    }
L_08A8E8E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(6)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08A8E904;
      }
      goto L_08A8E8F0;
    }
L_08A8E8F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(7)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A8E904;
      }
      goto L_08A8E8FC;
    }
L_08A8E8FC:
    ctx.gpr[17] = (ctx.gpr[12] | 0u);
    ctx.gpr[23] = (0u | 0u);
    goto L_08A8E904;
L_08A8E904:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A8EA3C;
      }
      goto L_08A8E90C;
    }
L_08A8E90C:
    ctx.gpr[4] = (32769u << 16u);
    goto L_08A8E910;
L_08A8E910:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (32769u << 16u);
      if (branch_taken) {
          goto L_08A8E970;
      }
      goto L_08A8E91C;
    }
L_08A8E91C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (32769u << 16u);
      if (branch_taken) {
          goto L_08A8E970;
      }
      goto L_08A8E928;
    }
L_08A8E928:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (32770u << 16u);
      if (branch_taken) {
          goto L_08A8E970;
      }
      goto L_08A8E934;
    }
L_08A8E934:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20477));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (32769u << 16u);
      if (branch_taken) {
          goto L_08A8E970;
      }
      goto L_08A8E940;
    }
L_08A8E940:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (32801u << 16u);
      if (branch_taken) {
          goto L_08A8E970;
      }
      goto L_08A8E94C;
    }
L_08A8E94C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (32770u << 16u);
      if (branch_taken) {
          goto L_08A8E970;
      }
      goto L_08A8E958;
    }
L_08A8E958:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20479));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (32769u << 16u);
      if (branch_taken) {
          goto L_08A8E970;
      }
      goto L_08A8E964;
    }
L_08A8E964:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(91));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    ctx.gpr[4] = (15u << 16u);
      if (branch_taken) {
          goto L_08A8E980;
      }
      goto L_08A8E970;
    }
L_08A8E970:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A8E97Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 384u, 0x08A86388u>(ctx, &aot_mem) && ctx.pc == 0x08A8E97Cu) goto L_08A8E97C;
    return;
L_08A8E97C:
    ctx.gpr[4] = (15u << 16u);
    goto L_08A8E980;
L_08A8E980:
    ctx.gpr[31] = (0x08A8E988u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16960));
    ctx.pc = 0x08AB469Cu;
    return;
L_08A8E988:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08A8E994u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A8D43C;
L_08A8E994:
    ctx.gpr[4] = (32801u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (32801u << 16u);
      if (branch_taken) {
          goto L_08A8E9C4;
      }
      goto L_08A8E9A4;
    }
L_08A8E9A4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A8E9C4;
      }
      goto L_08A8E9B0;
    }
L_08A8E9B0:
    ctx.gpr[31] = (0x08A8E9B8u);
    // nop
    ctx.pc = 0x08AB4424u;
    return;
L_08A8E9B8:
    ctx.gpr[4] = (ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E658;
      }
      goto L_08A8E9C4;
    }
L_08A8E9C4:
    ctx.gpr[31] = (0x08A8E9CCu);
    // nop
    ctx.pc = 0x08AB4424u;
    return;
L_08A8E9CC:
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8E658;
      }
      goto L_08A8E9D8;
    }
L_08A8E9D8:
    ctx.gpr[31] = (0x08A8E9E0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A8D43C;
L_08A8E9E0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A8E9F0;
      }
      goto L_08A8E9E8;
    }
L_08A8E9E8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EA00;
      }
      goto L_08A8E9F0;
    }
L_08A8E9F0:
    ctx.gpr[31] = (0x08A8E9F8u);
    ctx.gpr[4] = (0u | 1000u);
    ctx.pc = 0x08AB4614u;
    return;
L_08A8E9F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E9C4;
      }
      goto L_08A8EA00;
    }
L_08A8EA00:
    ctx.gpr[31] = (0x08A8EA08u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 36u, 0x08A90324u>(ctx, &aot_mem) && ctx.pc == 0x08A8EA08u) goto L_08A8EA08;
    return;
L_08A8EA08:
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
L_08A8EA3C:
    ctx.gpr[31] = (0x08A8EA44u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 36u, 0x08A90324u>(ctx, &aot_mem) && ctx.pc == 0x08A8EA44u) goto L_08A8EA44;
    return;
L_08A8EA44:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08A8EA78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8EA88u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 276u, 0x08A85A40u>(ctx, &aot_mem) && ctx.pc == 0x08A8EA88u) goto L_08A8EA88;
    return;
L_08A8EA88:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8EAA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8EAD8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26880));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 143u, 0x08AB1760u>(ctx, &aot_mem) && ctx.pc == 0x08A8EAD8u) goto L_08A8EAD8;
    return;
L_08A8EAD8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08A8EAE4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26864));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 143u, 0x08AB1760u>(ctx, &aot_mem) && ctx.pc == 0x08A8EAE4u) goto L_08A8EAE4;
    return;
L_08A8EAE4:
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[31] = (0x08A8EAF0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(11976), 0u);
    goto L_08A8EF74;
L_08A8EAF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(11976)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(11976), ctx.gpr[4]);
    ctx.gpr[18] = (2222u << 16u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(11972), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A8EB34;
      }
      goto L_08A8EB0C;
    }
L_08A8EB0C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A8EB18u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A8D7CC;
L_08A8EB18:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A8EB38;
      }
      goto L_08A8EB20;
    }
L_08A8EB20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(11976)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(11976), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(11972), ctx.gpr[5]);
    goto L_08A8EB34;
L_08A8EB34:
    ctx.gpr[4] = (2227u << 16u);
    goto L_08A8EB38;
L_08A8EB38:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(26896), 0u);
    ctx.gpr[4] = (2217u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A8EB50u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5512));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 396u, 0x08A86690u>(ctx, &aot_mem) && ctx.pc == 0x08A8EB50u) goto L_08A8EB50;
    return;
L_08A8EB50:
    ctx.gpr[4] = (2217u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A8EB64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3472));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 396u, 0x08A86690u>(ctx, &aot_mem) && ctx.pc == 0x08A8EB64u) goto L_08A8EB64;
    return;
L_08A8EB64:
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
L_08A8EB84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11972)));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A8EBC8;
      }
      goto L_08A8EBB0;
    }
L_08A8EBB0:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11856)));
    ctx.gpr[31] = (0x08A8EBC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9E0F4u>(ctx, &aot_mem) && ctx.pc == 0x08A8EBC0u) goto L_08A8EBC0;
    return;
L_08A8EBC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EC14;
      }
      goto L_08A8EBC8;
    }
L_08A8EBC8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A8EC14;
      }
      goto L_08A8EBD0;
    }
L_08A8EBD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11980)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A8EBF0;
      }
      goto L_08A8EBDC;
    }
L_08A8EBDC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A8EBE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9E0F4u>(ctx, &aot_mem) && ctx.pc == 0x08A8EBE8u) goto L_08A8EBE8;
    return;
L_08A8EBE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(11984)));
      if (branch_taken) {
          goto L_08A8EC04;
      }
      goto L_08A8EBF0;
    }
L_08A8EBF0:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11936)));
    ctx.gpr[31] = (0x08A8EC00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9E0F4u>(ctx, &aot_mem) && ctx.pc == 0x08A8EC00u) goto L_08A8EC00;
    return;
L_08A8EC00:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(11984)));
    goto L_08A8EC04;
L_08A8EC04:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A8EC14;
      }
      goto L_08A8EC0C;
    }
L_08A8EC0C:
    ctx.gpr[31] = (0x08A8EC14u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9E0F4u>(ctx, &aot_mem) && ctx.pc == 0x08A8EC14u) goto L_08A8EC14;
    return;
L_08A8EC14:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8EC28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(11972)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A8ECA4;
      }
      goto L_08A8EC68;
    }
L_08A8EC68:
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(14208));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[5]);
    goto L_08A8EC78;
L_08A8EC78:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[7] & 1u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EC90;
      }
      goto L_08A8EC88;
    }
L_08A8EC88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A8EC90;
      }
      goto L_08A8EC90;
    }
L_08A8EC90:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A8EC78;
      }
      goto L_08A8ECA4;
    }
L_08A8ECA4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8ECB0u);
    ctx.gpr[5] = (0u | 58u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 582u, 0x08A9E150u>(ctx, &aot_mem) && ctx.pc == 0x08A8ECB0u) goto L_08A8ECB0;
    return;
L_08A8ECB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08A8ED14;
      }
      goto L_08A8ECB8;
    }
L_08A8ECB8:
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[31] = (0x08A8ECC4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(11856)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x08A8ECC4u) goto L_08A8ECC4;
    return;
L_08A8ECC4:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11940)));
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8ECDCu);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 628u, 0x08A9E368u>(ctx, &aot_mem) && ctx.pc == 0x08A8ECDCu) goto L_08A8ECDC;
    return;
L_08A8ECDC:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(11856)));
        goto L_08A8ECF4;
    }
    goto L_08A8ECE4;
L_08A8ECE4:
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 46u);
      if (branch_taken) {
          goto L_08A8EDC0;
      }
      goto L_08A8ECF4;
    }
L_08A8ECF4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8ED00u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 628u, 0x08A9E368u>(ctx, &aot_mem) && ctx.pc == 0x08A8ED00u) goto L_08A8ED00;
    return;
L_08A8ED00:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[19] = (0u | 2u);
      if (branch_taken) {
          goto L_08A8EE24;
      }
      goto L_08A8ED08;
    }
L_08A8ED08:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 46u);
      if (branch_taken) {
          goto L_08A8EDC0;
      }
      goto L_08A8ED14;
    }
L_08A8ED14:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    ctx.gpr[21] = (0u | 46u);
      if (branch_taken) {
          goto L_08A8ED34;
      }
      goto L_08A8ED1C;
    }
L_08A8ED1C:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11856)));
    ctx.gpr[31] = (0x08A8ED2Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9E0F4u>(ctx, &aot_mem) && ctx.pc == 0x08A8ED2Cu) goto L_08A8ED2C;
    return;
L_08A8ED2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08A8ED88;
      }
      goto L_08A8ED34;
    }
L_08A8ED34:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A8ED84;
      }
      goto L_08A8ED40;
    }
L_08A8ED40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11980)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A8ED60;
      }
      goto L_08A8ED4C;
    }
L_08A8ED4C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A8ED58u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9E0F4u>(ctx, &aot_mem) && ctx.pc == 0x08A8ED58u) goto L_08A8ED58;
    return;
L_08A8ED58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11984)));
      if (branch_taken) {
          goto L_08A8ED74;
      }
      goto L_08A8ED60;
    }
L_08A8ED60:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11936)));
    ctx.gpr[31] = (0x08A8ED70u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9E0F4u>(ctx, &aot_mem) && ctx.pc == 0x08A8ED70u) goto L_08A8ED70;
    return;
L_08A8ED70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11984)));
    goto L_08A8ED74;
L_08A8ED74:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A8ED84;
      }
      goto L_08A8ED7C;
    }
L_08A8ED7C:
    ctx.gpr[31] = (0x08A8ED84u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9E0F4u>(ctx, &aot_mem) && ctx.pc == 0x08A8ED84u) goto L_08A8ED84;
    return;
L_08A8ED84:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    goto L_08A8ED88;
L_08A8ED88:
    ctx.gpr[5] = (0u | 92u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 47u);
      if (branch_taken) {
          goto L_08A8EDB8;
      }
      goto L_08A8ED94;
    }
L_08A8ED94:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 126u);
      if (branch_taken) {
          goto L_08A8EDB8;
      }
      goto L_08A8ED9C;
    }
L_08A8ED9C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A8EDB8;
      }
      goto L_08A8EDA4;
    }
L_08A8EDA4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A8EDB0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26320));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9E0F4u>(ctx, &aot_mem) && ctx.pc == 0x08A8EDB0u) goto L_08A8EDB0;
    return;
L_08A8EDB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08A8EDC0;
      }
      goto L_08A8EDB8;
    }
L_08A8EDB8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    goto L_08A8EDC0;
L_08A8EDC0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A8EDE8;
      }
      goto L_08A8EDC8;
    }
L_08A8EDC8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[5] = (0u | 92u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 47u);
      if (branch_taken) {
          goto L_08A8EDE0;
      }
      goto L_08A8EDD8;
    }
L_08A8EDD8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A8EDE8;
      }
      goto L_08A8EDE0;
    }
L_08A8EDE0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A8EDE8;
L_08A8EDE8:
    ctx.gpr[31] = (0x08A8EDF0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9E0F4u>(ctx, &aot_mem) && ctx.pc == 0x08A8EDF0u) goto L_08A8EDF0;
    return;
L_08A8EDF0:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (0u | 92u);
      if (branch_taken) {
          goto L_08A8EE18;
      }
      goto L_08A8EDFC;
    }
L_08A8EDFC:
    ctx.gpr[5] = (0u | 47u);
    goto L_08A8EE00;
L_08A8EE00:
    if (ctx.gpr[16] == ctx.gpr[4]) {
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
        goto L_08A8EE08;
    }
    goto L_08A8EE08;
L_08A8EE08:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EE00;
      }
      goto L_08A8EE18;
    }
L_08A8EE18:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EE24;
      }
      goto L_08A8EE20;
    }
L_08A8EE20:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    goto L_08A8EE24;
L_08A8EE24:
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
L_08A8EF5C:
    ctx.gpr[4] = (2222u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11988), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8EF68:
    ctx.gpr[4] = (2222u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11988)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8EF74:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11996));
    ctx.gpr[5] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-14928), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14928));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12004));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12008));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12016));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8EFB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-336));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[23]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8EFFCu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    goto L_08A8EC28;
L_08A8EFFC:
    ctx.gpr[21] = (2223u << 16u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-14928));
    goto L_08A8F00C;
L_08A8F00C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[20] | 0u);
    jump_target = ctx.gpr[2];
    ctx.gpr[31] = (0x08A8F048u);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8F048u) goto L_08A8F048;
    return;
L_08A8F048:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A8F08C;
      }
      goto L_08A8F050;
    }
L_08A8F050:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A8F00C;
      }
      goto L_08A8F05C;
    }
L_08A8F05C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8F08C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8F0BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[19] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-14928));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    goto L_08A8F0F0;
L_08A8F0F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08A8F11Cu);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8F11Cu) goto L_08A8F11C;
    return;
L_08A8F11C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A8F154;
      }
      goto L_08A8F124;
    }
L_08A8F124:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A8F0F0;
      }
      goto L_08A8F130;
    }
L_08A8F130:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8F154:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8F178:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    ctx.gpr[22] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-14928));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    goto L_08A8F1C4;
L_08A8F1C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    jump_target = ctx.gpr[11];
    ctx.gpr[31] = (0x08A8F1FCu);
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8F1FCu) goto L_08A8F1FC;
    return;
L_08A8F1FC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A8F240;
      }
      goto L_08A8F204;
    }
L_08A8F204:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A8F1C4;
      }
      goto L_08A8F210;
    }
L_08A8F210:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8F240:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8F270:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(26880));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8F294u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 147u, 0x08AB17C8u>(ctx, &aot_mem) && ctx.pc == 0x08A8F294u) goto L_08A8F294;
    return;
L_08A8F294:
    ctx.gpr[16] = (2223u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-14928));
    goto L_08A8F2A0;
L_08A8F2A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08A8F2BCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8F2BCu) goto L_08A8F2BC;
    return;
L_08A8F2BC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A8F2A0;
      }
      goto L_08A8F2CC;
    }
L_08A8F2CC:
    ctx.gpr[31] = (0x08A8F2D4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 152u, 0x08AB1840u>(ctx, &aot_mem) && ctx.pc == 0x08A8F2D4u) goto L_08A8F2D4;
    return;
L_08A8F2D4:
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
L_08A8F2F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(26880));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8F314u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 147u, 0x08AB17C8u>(ctx, &aot_mem) && ctx.pc == 0x08A8F314u) goto L_08A8F314;
    return;
L_08A8F314:
    ctx.gpr[16] = (2223u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-14928));
    goto L_08A8F320;
L_08A8F320:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08A8F33Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8F33Cu) goto L_08A8F33C;
    return;
L_08A8F33C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A8F320;
      }
      goto L_08A8F34C;
    }
L_08A8F34C:
    ctx.gpr[31] = (0x08A8F354u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 152u, 0x08AB1840u>(ctx, &aot_mem) && ctx.pc == 0x08A8F354u) goto L_08A8F354;
    return;
L_08A8F354:
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
L_08A8F370:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[9] = (0u | 2u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A8F414;
      }
      goto L_08A8F3A8;
    }
L_08A8F3A8:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A8F3BCu);
    ctx.gpr[8] = (0u | 0u);
    ctx.pc = 0x08AB47E4u;
    return;
L_08A8F3BC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A8F3F8;
      }
      goto L_08A8F3C8;
    }
L_08A8F3C8:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A8F3D4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08AB475Cu;
    return;
L_08A8F3D4:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A8F3F8;
      }
      goto L_08A8F3DC;
    }
L_08A8F3DC:
    ctx.gpr[2] = (0u | 1u);
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
L_08A8F3F8:
    ctx.gpr[2] = (0u | 0u);
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
L_08A8F414:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[31] = (0x08A8F420u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10784));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 384u, 0x08A86388u>(ctx, &aot_mem) && ctx.pc == 0x08A8F420u) goto L_08A8F420;
    return;
L_08A8F420:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F3DC;
      }
      goto L_08A8F428;
    }
L_08A8F428:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    ctx.gpr[20] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-14928));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    goto L_08A8F464;
L_08A8F464:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    jump_target = ctx.gpr[9];
    ctx.gpr[31] = (0x08A8F494u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8F494u) goto L_08A8F494;
    return;
L_08A8F494:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A8F4D0;
      }
      goto L_08A8F49C;
    }
L_08A8F49C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A8F464;
      }
      goto L_08A8F4A8;
    }
L_08A8F4A8:
    ctx.gpr[2] = (0u | 0u);
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
L_08A8F4D0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
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
L_08A8F4F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[19]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8F534u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A8EC28;
L_08A8F534:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (0u | 2u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[4] = (0u | 0u);
        goto L_08A8F548;
    }
    goto L_08A8F548;
L_08A8F548:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_08A8F5F0;
      }
      goto L_08A8F550;
    }
L_08A8F550:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(164));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A8F568u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08A8D1C4;
L_08A8F568:
    ctx.gpr[31] = (0x08A8F570u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 552u, 0x08A875D0u>(ctx, &aot_mem) && ctx.pc == 0x08A8F570u) goto L_08A8F570;
    return;
L_08A8F570:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (32768u << 16u);
    goto L_08A8F578;
L_08A8F578:
    ctx.gpr[31] = (0x08A8F580u);
    // nop
    ctx.pc = 0x08AB4424u;
    return;
L_08A8F580:
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A8F5A4;
      }
      goto L_08A8F58C;
    }
L_08A8F58C:
    ctx.gpr[31] = (0x08A8F594u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 413u, 0x08A86790u>(ctx, &aot_mem) && ctx.pc == 0x08A8F594u) goto L_08A8F594;
    return;
L_08A8F594:
    ctx.gpr[31] = (0x08A8F59Cu);
    ctx.gpr[4] = (0u | 1000u);
    ctx.pc = 0x08AB4614u;
    return;
L_08A8F59C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F578;
      }
      goto L_08A8F5A4;
    }
L_08A8F5A4:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A8F5B0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08AB4724u;
    return;
L_08A8F5B0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] & ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A8F578;
      }
      goto L_08A8F5C0;
    }
L_08A8F5C0:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08A8F5D4u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08AB4714u;
    return;
L_08A8F5D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[31] = (0x08A8F5E0u);
    ctx.gpr[5] = (0u | 100u);
    goto L_08A8D278;
L_08A8F5E0:
    ctx.gpr[31] = (0x08A8F5E8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 413u, 0x08A86790u>(ctx, &aot_mem) && ctx.pc == 0x08A8F5E8u) goto L_08A8F5E8;
    return;
L_08A8F5E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F634;
      }
      goto L_08A8F5F0;
    }
L_08A8F5F0:
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-10700));
    ctx.gpr[31] = (0x08A8F608u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-10692));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08A8F608u) goto L_08A8F608;
    return;
L_08A8F608:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A8F618u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08AB471Cu;
    return;
L_08A8F618:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08A8F634u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08AB4714u;
    return;
L_08A8F634:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8F658:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20920));
    ctx.gpr[5] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(11996), ctx.gpr[4]);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20976));
    ctx.gpr[5] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12004), ctx.gpr[4]);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21032));
    ctx.gpr[5] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12008), ctx.gpr[4]);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21088));
    ctx.gpr[5] = (2222u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12016), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8F69C:
    ctx.gpr[5] = (7u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16208));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (6u << 16u);
      if (branch_taken) {
          goto L_08A8F6C4;
      }
      goto L_08A8F6B4;
    }
L_08A8F6B4:
    ctx.gpr[5] = (14u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32416));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (6u << 16u);
    goto L_08A8F6C4;
L_08A8F6C4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6784));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (5u << 16u);
      if (branch_taken) {
          goto L_08A8F7FC;
      }
      goto L_08A8F6D4;
    }
L_08A8F6D4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27680));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[5] = (2u << 16u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31072));
      if (branch_taken) {
          goto L_08A8F7C4;
      }
      goto L_08A8F6E8;
    }
L_08A8F6E8:
    ctx.gpr[6] = (3u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(3392));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] << 3u);
      if (branch_taken) {
          goto L_08A8F78C;
      }
      goto L_08A8F6FC;
    }
L_08A8F6FC:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] << 3u);
      if (branch_taken) {
          goto L_08A8F754;
      }
      goto L_08A8F708;
    }
L_08A8F708:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10000 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
      if (branch_taken) {
          goto L_08A8F804;
      }
      goto L_08A8F714;
    }
L_08A8F714:
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (6u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3216));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24464));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[2] = (ctx.gpr[4] - ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(17200));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8F754:
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (34u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-28224));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[2] = (ctx.gpr[4] - ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(15000));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8F78C:
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (67u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(9088));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[2] = (ctx.gpr[4] - ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(12800));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8F7C4:
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (64u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(5696));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[2] = (ctx.gpr[4] - ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(11400));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8F7FC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 11400u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8F804:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 21100u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8F80C:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12040)));
    ctx.gpr[6] = (7u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-16208));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
      if (branch_taken) {
          goto L_08A8F83C;
      }
      goto L_08A8F82C;
    }
L_08A8F82C:
    ctx.gpr[6] = (14u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-32416));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A8F854;
      }
      goto L_08A8F83C;
    }
L_08A8F83C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A8F858;
      }
      goto L_08A8F848;
    }
L_08A8F848:
    ctx.gpr[5] = (14u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32416));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    goto L_08A8F854;
L_08A8F854:
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    goto L_08A8F858;
L_08A8F858:
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.gpr[5] = (0u - ctx.gpr[5]);
        goto L_08A8F860;
    }
    goto L_08A8F860;
L_08A8F860:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 10u));
    ctx.gpr[4] = (ctx.gpr[4] >> 22u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 512 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 10u));
      if (branch_taken) {
          goto L_08A8F8B4;
      }
      goto L_08A8F87C;
    }
L_08A8F87C:
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 9u));
    ctx.gpr[5] = (ctx.gpr[5] >> 23u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 9u));
    ctx.gpr[2] = (ctx.gpr[6] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] - ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8F8B4:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1024 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4096 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A8F8F8;
      }
      goto L_08A8F8C0;
    }
L_08A8F8C0:
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11776));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 9u));
    ctx.gpr[5] = (ctx.gpr[5] >> 23u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 9u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(150));
      if (branch_taken) {
          goto L_08A8FB18;
      }
      goto L_08A8F8F8;
    }
L_08A8F8F8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8192 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A8F930;
      }
      goto L_08A8F900;
    }
L_08A8F900:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(899));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (14u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3072));
    ctx.gpr[4] = (0u | 3072u);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(301));
      if (branch_taken) {
          goto L_08A8FB18;
      }
      goto L_08A8F930;
    }
L_08A8F930:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 16384 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A8F968;
      }
      goto L_08A8F938;
    }
L_08A8F938:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(774));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (48u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24576));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 12u));
    ctx.gpr[5] = (ctx.gpr[5] >> 20u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 12u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1200));
      if (branch_taken) {
          goto L_08A8FB18;
      }
      goto L_08A8F968;
    }
L_08A8F968:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u | 32768u);
      if (branch_taken) {
          goto L_08A8F9A0;
      }
      goto L_08A8F970;
    }
L_08A8F970:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(2131));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (266u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24576));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 13u));
    ctx.gpr[5] = (ctx.gpr[5] >> 19u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 13u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1974));
      if (branch_taken) {
          goto L_08A8FB18;
      }
      goto L_08A8F9A0;
    }
L_08A8F9A0:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (1u << 16u);
      if (branch_taken) {
          goto L_08A8F9D4;
      }
      goto L_08A8F9AC;
    }
L_08A8F9AC:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1778));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28448));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 4u));
    ctx.gpr[5] = (ctx.gpr[5] >> 28u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 4u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4105));
      if (branch_taken) {
          goto L_08A8FB18;
      }
      goto L_08A8F9D4;
    }
L_08A8F9D4:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (2u << 16u);
      if (branch_taken) {
          goto L_08A8FA08;
      }
      goto L_08A8F9E0;
    }
L_08A8F9E0:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(870));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27840));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 5u));
    ctx.gpr[5] = (ctx.gpr[5] >> 27u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 5u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(5883));
      if (branch_taken) {
          goto L_08A8FB18;
      }
      goto L_08A8FA08;
    }
L_08A8FA08:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (4u << 16u);
      if (branch_taken) {
          goto L_08A8FA44;
      }
      goto L_08A8FA14;
    }
L_08A8FA14:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1864));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11776));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 6u));
    ctx.gpr[5] = (ctx.gpr[5] >> 26u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 6u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(6753));
      if (branch_taken) {
          goto L_08A8FB18;
      }
      goto L_08A8FA44;
    }
L_08A8FA44:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (6u << 16u);
      if (branch_taken) {
          goto L_08A8FA80;
      }
      goto L_08A8FA50;
    }
L_08A8FA50:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1471));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (3u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8320));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 7u));
    ctx.gpr[5] = (ctx.gpr[5] >> 25u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 7u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8617));
      if (branch_taken) {
          goto L_08A8FB18;
      }
      goto L_08A8FA80;
    }
L_08A8FA80:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(16384));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (0u | 10088u);
      if (branch_taken) {
          goto L_08A8FB18;
      }
      goto L_08A8FA90;
    }
L_08A8FA90:
    ctx.gpr[6] = (9u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24576));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (13u << 16u);
      if (branch_taken) {
          goto L_08A8FAD4;
      }
      goto L_08A8FAA4;
    }
L_08A8FAA4:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(2500));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (15u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16960));
    ctx.gpr[4] = (0u | 200u);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(10088));
      if (branch_taken) {
          goto L_08A8FB18;
      }
      goto L_08A8FAD4;
    }
L_08A8FAD4:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-32768));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 15000u);
      if (branch_taken) {
          goto L_08A8FB14;
      }
      goto L_08A8FAE8;
    }
L_08A8FAE8:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(2412));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (22u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5408));
    ctx.gpr[4] = (0u | 200u);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12588));
    goto L_08A8FB14;
L_08A8FB14:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    goto L_08A8FB18;
L_08A8FB18:
    ctx.gpr[2] = (ctx.gpr[6] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] - ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8FB2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[22] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12040)));
    ctx.gpr[21] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12044)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (2223u << 16u);
      if (branch_taken) {
          goto L_08A8FBD4;
      }
      goto L_08A8FB70;
    }
L_08A8FB70:
    ctx.gpr[18] = (0u | 121u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-14912));
    ctx.gpr[20] = (2222u << 16u);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12036)));
    goto L_08A8FB84;
L_08A8FB84:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[31] = (0x08A8FBA4u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12036), ctx.gpr[5]);
    goto L_08A8F69C;
L_08A8FBA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12052)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12040)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12052), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[16];
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(12040), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A8FC00;
      }
      goto L_08A8FBC4;
    }
L_08A8FBC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12044)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12036)));
        goto L_08A8FB84;
    }
    goto L_08A8FBD4;
L_08A8FBD4:
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
L_08A8FC00:
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
L_08A8FC34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (2223u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-14420)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-14424)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A8FCDC;
      }
      goto L_08A8FC6C;
    }
L_08A8FC6C:
    ctx.gpr[31] = (0x08A8FC74u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.pc = 0x08AB417Cu;
    return;
L_08A8FC74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-14420)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-14424)));
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] | 0u);
    ctx.gpr[10] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[16] = (153u << 16u);
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-27008));
    ctx.gpr[5] = (ctx.gpr[9] - ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12060), ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12060), ctx.gpr[16]);
        goto L_08A8FCC0;
    }
    goto L_08A8FCC0;
L_08A8FCC0:
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12100)));
    ctx.gpr[31] = (0x08A8FCD0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12096)));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 593u, 0x08AAB4ECu>(ctx, &aot_mem) && ctx.pc == 0x08A8FCD0u) goto L_08A8FCD0;
    return;
L_08A8FCD0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-14264), ctx.gpr[4]);
    goto L_08A8FCDC;
L_08A8FCDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12056)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[6] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A8FD00;
      }
      goto L_08A8FCE8;
    }
L_08A8FCE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12060)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A8FE0C;
      }
      goto L_08A8FCF8;
    }
L_08A8FCF8:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12060), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12056), 0u);
    goto L_08A8FD00;
L_08A8FD00:
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12040)));
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12044)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A8FD90;
      }
      goto L_08A8FD1C;
    }
L_08A8FD1C:
    ctx.gpr[19] = (2223u << 16u);
    ctx.gpr[18] = (0u | 121u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-14912));
    ctx.gpr[21] = (2222u << 16u);
    ctx.gpr[20] = (2222u << 16u);
    goto L_08A8FD30;
L_08A8FD30:
    ctx.gpr[31] = (0x08A8FD38u);
    // nop
    goto L_08A8F69C;
L_08A8FD38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12060)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FE0C;
      }
      goto L_08A8FD4C;
    }
L_08A8FD4C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12036)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12040)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12040), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12044)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12060), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[6] = (ctx.hi);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12036), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A8FD30;
      }
      goto L_08A8FD8C;
    }
L_08A8FD8C:
    ctx.gpr[21] = (2222u << 16u);
    goto L_08A8FD90;
L_08A8FD90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12048)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (2223u << 16u);
      if (branch_taken) {
          goto L_08A8FE0C;
      }
      goto L_08A8FDA0;
    }
L_08A8FDA0:
    ctx.gpr[20] = (0u | 121u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-14912));
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[18] = (2222u << 16u);
    goto L_08A8FDB0;
L_08A8FDB0:
    ctx.gpr[31] = (0x08A8FDB8u);
    // nop
    goto L_08A8F69C;
L_08A8FDB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12060)));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(4500));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FE0C;
      }
      goto L_08A8FDCC;
    }
L_08A8FDCC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12036)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12040)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12040), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12048)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12060), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[6] = (ctx.hi);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12036), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A8FDB0;
      }
      goto L_08A8FE0C;
    }
L_08A8FE0C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8FE30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12064)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-14912));
      if (branch_taken) {
          goto L_08A8FE78;
      }
      goto L_08A8FE64;
    }
L_08A8FE64:
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12052)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12064), 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12052), ctx.gpr[4]);
    goto L_08A8FE78;
L_08A8FE78:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A8FE80;
L_08A8FE80:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A8FEA0;
      }
      goto L_08A8FE8C;
    }
L_08A8FE8C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 121 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A8FE80;
      }
      goto L_08A8FE98;
    }
L_08A8FE98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A8FEC4;
      }
      goto L_08A8FEA0;
    }
L_08A8FEA0:
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
L_08A8FEC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12056)));
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12052)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12056), 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12052), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A8FEE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A8FB2C;
L_08A8FEE4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FFA4;
      }
      goto L_08A8FEEC;
    }
L_08A8FEEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12056)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12052)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12056), 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12052), ctx.gpr[4]);
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12040)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    ctx.gpr[20] = (2222u << 16u);
      if (branch_taken) {
          goto L_08A8FF64;
      }
      goto L_08A8FF10;
    }
L_08A8FF10:
    ctx.gpr[31] = (0x08A8FF18u);
    // nop
    goto L_08A8F69C;
L_08A8FF18:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12036)));
    ctx.gpr[6] = (0u | 121u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12052)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12040)));
    ctx.gpr[6] = (ctx.gpr[2] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12052), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12040), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12048), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.hi);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12036), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A8FFA4;
      }
      goto L_08A8FF64;
    }
L_08A8FF64:
    ctx.gpr[31] = (0x08A8FF6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A8F80C;
L_08A8FF6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12052)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19464));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12052), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(9));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12040), ctx.gpr[16]);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12044), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12048), ctx.gpr[6]);
    ctx.gpr[31] = (0x08A8FFA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A8FB2C;
L_08A8FFA4:
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
L_08A8FFC8:
    ctx.gpr[7] = (2223u << 16u);
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-14912));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14352));
    goto L_08A8FFE0;
L_08A8FFE0:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 121 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A8FFE0;
      }
      goto L_08A8FFF4;
    }
L_08A8FFF4:
    ctx.gpr[6] = (0u | 0u);
    goto L_08A8FFF8;
L_08A8FFF8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08A90000u; return;
}

void recomp_unit_0162(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0162_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_162(Runtime &runtime) {
    runtime.register_generated_unit(162u, 0x08A8C000u, 16384u, &recomp_unit_0162, &recomp_unit_0162_entry);
    runtime.register_function(0x08A8C004u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C010u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C02Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C04Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C058u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C060u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C080u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C088u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C09Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C0A4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C0BCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C0F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C0FCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C110u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C118u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C120u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C138u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C14Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C170u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C17Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C184u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C18Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C198u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C1A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C1B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C1C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C1CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C1D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C1DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C1E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C204u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C208u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C218u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C234u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C240u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C24Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C260u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C26Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C274u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C280u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C28Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C294u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C29Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C2A4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C2ACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C2CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C2E0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C2F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C30Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C318u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C324u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C334u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C368u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C388u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C390u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C3A4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C3C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C3D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C3DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C3E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C3F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C410u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C418u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C424u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C428u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C434u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C440u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C448u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C454u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C45Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C464u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C474u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C494u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C4C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C4D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C4DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C4ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C4F4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C500u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C508u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C514u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C51Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C524u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C52Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C544u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C54Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C554u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C56Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C584u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C59Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C5A4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C5B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C5BCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C5CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C5D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C5E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C5ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C5FCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C604u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C614u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C61Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C620u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C628u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C648u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C698u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C6B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C718u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C78Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C794u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C7A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C7B4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C7C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C7D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C7DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C7E0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C7F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C820u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C83Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C844u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C868u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C86Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C878u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C87Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C8A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C8A4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C8B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C8E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C924u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C974u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C988u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C994u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C99Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C9A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C9BCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C9C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C9FCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA08u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA18u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA28u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA30u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA44u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA60u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA94u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA98u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CAA0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CAACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CAB4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CABCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB20u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB28u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB50u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB5Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB60u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB68u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB70u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB84u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB8Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB94u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB9Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CBA4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CBE0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CBECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CBF8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CBFCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC04u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC30u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC38u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC44u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC64u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC68u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC70u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC78u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC8Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC98u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CCA0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CCA8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CCD4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CCE0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD08u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD34u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD3Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD44u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD50u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD58u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD64u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD8Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD94u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD9Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CDA8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CDB8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CDD0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CDD8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CDE0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CDE8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CDF0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE04u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE18u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE34u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE60u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE6Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE7Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE84u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE94u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE98u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CEA0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CEACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CEBCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CEC0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CEC8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CED8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CEF4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CEF8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF04u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF14u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF1Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF48u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF5Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF70u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF80u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CFA0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CFA8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CFC4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CFD8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D000u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D01Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D02Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D068u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D070u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D07Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D088u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D09Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D0A4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D0A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D0C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D0D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D0E0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D0E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D0F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D0F4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D108u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D158u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D178u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D184u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D194u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D198u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D1A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D1B4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D1C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D1E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D1F4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D1FCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D204u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D214u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D21Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D278u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D294u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D2A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D2A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D2B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D2B4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D2CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D2E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D2F4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D2FCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D304u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D308u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D43Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D460u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D480u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D494u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D49Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D4B4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D4C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D504u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D50Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D51Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D534u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D55Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D568u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D5A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D5B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D5C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D5DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D5E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D5FCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D628u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D634u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D660u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D694u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D6A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D6BCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D6C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D6D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D6E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D6F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D700u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D704u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D71Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D730u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D748u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D774u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D788u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D790u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D798u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D7A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D7A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D7B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D7CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D810u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D81Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D834u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D844u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D84Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D854u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D85Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D868u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D874u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D87Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D884u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D888u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D894u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D89Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D8A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D8B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D8B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D8C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D8C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D8D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D8ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D918u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D920u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D92Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D93Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D950u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D980u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D9E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D9FCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DA0Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DA1Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DA20u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DA38u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DA44u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DA60u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DA88u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DA98u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DAA8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DAB4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DABCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DADCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DB0Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DB84u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DB8Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DB98u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DBA0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DBACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DBB4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DBBCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DBC4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DBCCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC00u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC08u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC18u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC24u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC2Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC38u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC48u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC58u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC60u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC68u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC6Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC74u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC7Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC84u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC8Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC98u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DCA0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DCA8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DCB0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DCBCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DCC4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DCD0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DCD8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DCE0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DCE8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DCF0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD24u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD58u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD70u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD80u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD90u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD98u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DDA4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DDB0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DDC4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DDE0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE08u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE14u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE28u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE30u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE3Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE44u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE84u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE94u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DEC8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DED0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DEDCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF00u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF24u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF34u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF44u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF4Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF54u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF5Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF68u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF84u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF88u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF90u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF98u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DFACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DFB8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DFC0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DFCCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DFE8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E000u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E008u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E010u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E018u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E020u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E02Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E044u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E04Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E058u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E074u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E09Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E0BCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E0CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E108u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E130u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E13Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E148u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E158u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E160u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E168u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E174u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E198u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E1A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E1B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E1CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E1D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E1E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E1F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E1F4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E1FCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E200u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E284u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E2B4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E2C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E2D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E2DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E2E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E2F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E308u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E310u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E318u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E33Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E340u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E36Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E390u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E3A4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E3ACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E3CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E3F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E420u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E42Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E43Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E450u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E464u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E48Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E498u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E4A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E4B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E4D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E4ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E500u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E508u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E520u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E538u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E584u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E5A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E5A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E5B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E5C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E618u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E658u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E660u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E66Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E674u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E680u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E688u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E690u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E698u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E6A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E6A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E6B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E6E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E6E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E708u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E710u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E734u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E738u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E740u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E748u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E768u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E770u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E780u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E794u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E798u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E7A4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E7A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E7B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E7BCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E7C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E7D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E7DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E804u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E80Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E814u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E820u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E82Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E838u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E844u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E850u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E85Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E868u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E874u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E880u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E884u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E88Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E894u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E89Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E8A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E8B4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E8C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E8CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E8D8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E8E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E8F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E8FCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E904u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E90Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E910u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E91Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E928u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E934u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E940u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E94Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E958u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E964u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E970u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E97Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E980u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E988u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E994u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E9A4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E9B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E9B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E9C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E9CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E9D8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E9E0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E9E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E9F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E9F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EA00u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EA08u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EA3Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EA44u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EA78u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EA88u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EAA4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EAD8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EAE4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EAF0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EB0Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EB18u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EB20u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EB34u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EB38u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EB50u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EB64u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EB84u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EBB0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EBC0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EBC8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EBD0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EBDCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EBE8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EBF0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EC00u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EC04u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EC0Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EC14u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EC28u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EC68u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EC78u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EC88u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EC90u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ECA4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ECB0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ECB8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ECC4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ECDCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ECE4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ECF4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED00u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED08u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED14u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED1Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED2Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED34u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED40u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED4Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED58u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED60u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED70u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED74u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED7Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED84u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED88u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED94u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED9Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EDA4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EDB0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EDB8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EDC0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EDC8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EDD8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EDE0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EDE8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EDF0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EDFCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE00u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE08u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE18u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE20u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE24u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF5Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF68u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF74u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EFB0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EFFCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F00Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F048u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F050u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F05Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F08Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F0BCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F0F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F11Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F124u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F130u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F154u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F178u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F1C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F1FCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F204u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F210u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F240u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F270u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F294u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F2A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F2BCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F2CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F2D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F2F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F314u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F320u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F33Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F34Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F354u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F370u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F3A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F3BCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F3C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F3D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F3DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F3F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F414u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F420u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F428u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F464u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F494u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F49Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F4A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F4D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F4F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F534u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F548u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F550u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F568u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F570u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F578u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F580u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F58Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F594u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F59Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F5A4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F5B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F5C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F5D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F5E0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F5E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F5F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F608u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F618u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F634u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F658u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F69Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F6B4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F6C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F6D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F6E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F6FCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F708u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F714u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F754u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F78Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F7C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F7FCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F804u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F80Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F82Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F83Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F848u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F854u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F858u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F860u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F87Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F8B4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F8C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F8F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F900u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F930u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F938u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F968u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F970u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F9A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F9ACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F9D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F9E0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FA08u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FA14u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FA44u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FA50u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FA80u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FA90u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FAA4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FAD4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FAE8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FB14u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FB18u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FB2Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FB70u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FB84u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FBA4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FBC4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FBD4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FC00u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FC34u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FC6Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FC74u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FCC0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FCD0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FCDCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FCE8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FCF8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD00u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD1Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD30u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD38u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD4Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD8Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD90u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FDA0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FDB0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FDB8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FDCCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FE0Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FE30u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FE64u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FE78u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FE80u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FE8Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FE98u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FEA0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FEC4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FEE4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FEECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FF10u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FF18u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FF64u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FF6Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FFA4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FFC8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FFE0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FFF4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FFF8u, &recomp_unit_0162, "recomp_unit_0162");
}
} // namespace psprecomp

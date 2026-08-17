#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0086[4095] = {
    1, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 10, 0, 11, 0, 12, 0, 13, 0, 0, 0,
    14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 17, 0, 18, 19, 0, 20, 0, 21, 0, 22, 23, 0, 0, 24, 0, 0, 0, 0,
    0, 0, 25, 0, 0, 0, 0, 26, 0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 31, 32, 0, 0, 0, 0, 0, 33, 0,
    34, 35, 0, 0, 0, 36, 37, 0, 0, 38, 0, 39, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0,
    0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 54, 0, 0,
    0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0,
    0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 65, 0, 0,
    0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 76, 0, 77, 0, 78, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0,
    0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0,
    99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 101, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0,
    104, 0, 105, 0, 106, 107, 0, 108, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 113, 114, 0, 0, 0, 0, 0, 115, 0, 116,
    117, 0, 0, 0, 118, 119, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 123, 0,
    0, 0, 0, 0, 0, 0, 124, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0,
    129, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 133, 0, 134, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 138, 0,
    139, 0, 140, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0,
    0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 150, 0, 151, 0, 152, 0, 0, 0, 0, 153, 0, 0,
    0, 154, 155, 0, 0, 156, 0, 0, 157, 0, 158, 0, 0, 159, 0, 160, 0, 0, 161, 0, 162, 0, 163, 0, 164, 0, 0, 0, 165, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 172,
    0, 173, 0, 174, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 177, 0, 178, 0, 179, 0, 180, 0, 0, 181, 0, 182, 0, 0, 0, 0, 183, 0,
    184, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 191, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0,
    0, 198, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0,
    0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 207, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0,
    210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 216, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 220, 0, 221, 0, 0, 222, 0, 0, 223, 0, 0, 224, 0,
    225, 0, 226, 0, 227, 0, 228, 0, 229, 0, 0, 230, 0, 231, 0, 232, 0, 233, 0, 234, 0, 235, 0, 236, 0, 0, 237, 0, 238, 0, 239, 0,
    240, 0, 241, 0, 242, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 247,
    248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0,
    0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 260,
    0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 266,
    0, 0, 267, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 270, 271, 272, 0, 273, 0, 0, 274, 0, 0, 0, 275, 0, 0, 276, 0, 277, 0, 0,
    278, 0, 0, 279, 0, 280, 0, 281, 0, 0, 282, 0, 0, 0, 283, 0, 284, 0, 0, 285, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 288, 0,
    289, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 294, 0, 0, 0,
    295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0,
    0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0,
    0, 0, 0, 0, 306, 307, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 312, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 319, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0,
    0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 328, 0,
    0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 334, 0,
    0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 340, 0, 0, 0, 0, 0,
    0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 344, 0,
    0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0,
    0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0,
    0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0,
    0, 0, 0, 0, 360, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0,
    0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 370, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0,
    0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 375, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 379, 0, 0,
    380, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0,
    0, 386, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 390, 0, 0, 391, 0, 0, 0, 392, 0, 0, 393,
    0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0,
    398, 0, 399, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 402, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 406, 0, 0, 0, 407, 0, 0,
    0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0,
    413, 0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 417, 0, 418, 0, 0, 0, 419, 0, 0, 0, 420,
    0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 425,
    0, 0, 0, 0, 0, 0, 426, 0, 427, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0,
    0, 0, 0, 0, 435, 0, 436, 0, 437, 0, 438, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 441, 0,
    0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 445, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 449,
    0, 0, 0, 0, 0, 0, 450, 0, 0, 451, 452, 0, 0, 0, 453, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0,
    456, 0, 0, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0,
    0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0,
    0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 467, 0, 0, 468, 0, 469, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0,
    0, 0, 0, 0, 0, 472, 0, 473, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 476, 0, 477, 0, 0, 478, 0,
    0, 479, 0, 0, 0, 0, 480, 0, 0, 0, 481, 0, 0, 0, 482, 0, 483, 0, 484, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 486, 0, 0,
    0, 0, 0, 0, 0, 487, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 489, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 493, 0, 0, 0, 494, 0, 0, 0, 495, 0, 496, 0, 0, 0, 0, 497, 0,
    0, 0, 0, 0, 498, 0, 0, 0, 499, 0, 500, 0, 0, 501, 0, 0, 502, 0, 503, 504, 0, 0, 0, 0, 0, 505, 506, 0, 0, 507, 0, 0,
    0, 508, 0, 0, 0, 509, 0, 0, 510, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 512, 513, 0, 0, 0, 0, 0, 0, 514, 0, 515, 0, 516,
    0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 520, 0, 521, 0, 0, 0, 0, 0, 522, 0, 0, 0, 523, 0, 524, 0, 0, 0, 525, 0, 526, 0, 0, 0, 527, 0, 528, 0, 0, 0, 529,
    0, 530, 0, 0, 0, 531, 0, 532, 0, 0, 0, 533, 0, 534, 0, 0, 0, 535, 0, 536, 0, 0, 0, 537, 0, 538, 0, 0, 0, 539, 0, 540,
    0, 0, 0, 541, 0, 542, 0, 0, 0, 543, 0, 544, 0, 0, 0, 545, 0, 546, 0, 0, 0, 547, 0, 548, 0, 0, 0, 549, 0, 550, 0, 0,
    0, 551, 0, 552, 0, 0, 0, 553, 0, 554, 0, 0, 0, 555, 0, 556, 0, 0, 0, 557, 0, 558, 0, 0, 0, 559, 0, 560, 0, 0, 0, 561,
    0, 562, 0, 0, 0, 563, 0, 564, 0, 0, 0, 565, 0, 566, 0, 0, 0, 567, 0, 568, 0, 0, 0, 569, 0, 570, 0, 0, 0, 571, 0, 572,
    0, 0, 0, 573, 0, 574, 0, 0, 0, 575, 0, 576, 0, 0, 0, 577, 0, 578, 0, 0, 0, 579, 580, 581, 0, 0, 582, 0, 0, 0, 583, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 589, 0, 0,
    590, 0, 0, 591, 0, 592, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 595, 0, 0, 0, 596, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 599, 600, 0, 601, 0, 0, 0, 0, 0,
    0, 602, 0, 603, 0, 604, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 606, 0, 607, 0, 0, 0, 0, 608, 0, 609, 0, 0, 610, 0, 0,
    0, 611, 0, 0, 0, 0, 612, 0, 0, 0, 613, 0, 614, 0, 0, 0, 615, 616, 0, 617, 0, 0, 0, 618, 0, 0, 0, 619, 0, 620, 0, 0,
    0, 0, 621, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 624, 0,
    625, 0, 0, 626, 0, 0, 627, 0, 0, 628, 0, 0, 629, 0, 0, 630, 0, 0, 631, 0, 0, 632, 633, 0, 0, 0, 634, 0, 0, 0, 635, 0,
    0, 636, 0, 0, 0, 637, 0, 638, 0, 0, 0, 639, 0, 640, 0, 0, 641, 642, 0, 0, 643, 0, 0, 0, 0, 644, 0, 0, 645, 0, 646, 0,
    647, 0, 648, 0, 649, 0, 650, 0, 651, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 653, 0, 0, 654, 0, 655, 0, 0, 0, 0, 656, 0, 657,
    0, 658, 0, 659, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 0, 662, 0, 663, 664, 0, 665, 0, 0, 0, 666,
    0, 667, 0, 668, 0, 669, 0, 0, 0, 670, 0, 671, 0, 672, 0, 0, 0, 0, 0, 0, 673, 0, 674, 0, 675, 0, 676, 677, 0, 678, 0, 679,
    0, 0, 680, 0, 0, 681, 0, 0, 682, 0, 0, 683, 0, 0, 684, 0, 0, 685, 0, 0, 686, 0, 687, 0, 688, 0, 689, 690, 0, 691, 0, 692,
    0, 693, 694, 0, 695, 0, 696, 0, 697, 698, 0, 699, 0, 700, 701, 0, 0, 702, 0, 703, 0, 704, 0, 0, 0, 0, 705, 0, 706, 0, 707, 0,
    0, 0, 0, 708, 0, 709, 0, 0, 0, 0, 710, 711, 0, 712, 0, 713, 0, 714, 0, 715, 0, 716, 0, 717, 0, 718, 0, 719, 0, 720, 0, 721,
    0, 722, 0, 723, 0, 724, 0, 0, 725, 0, 726, 0, 727, 0, 728, 0, 729, 0, 0, 0, 0, 0, 0, 730, 0, 0, 0, 0, 0, 0, 0, 0,
    731, 0, 0, 0, 0, 0, 0, 732, 0, 0, 733, 0, 0, 0, 0, 0, 0, 0, 0, 734, 0, 735, 0, 736, 0, 0, 0, 0, 0, 0, 0, 0,
    737, 0, 738, 0, 0, 0, 0, 0, 0, 0, 739, 740, 0, 0, 0, 0, 741, 0, 0, 742, 0, 0, 0, 743, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 744, 0, 0, 0, 0, 0, 0, 0, 745, 0, 0, 746, 0, 0, 0, 0, 0,
    0, 0, 0, 747, 0, 748, 0, 0, 0, 0, 0, 0, 749, 0, 0, 750, 0, 0, 0, 0, 0, 751, 0, 0, 752, 0, 0, 0, 753, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 754, 0, 0, 0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 0, 756, 0, 0, 757, 0, 0, 0, 0, 0, 0,
    0, 0, 758, 0, 759, 0, 0, 0, 0, 0, 0, 0, 0, 760, 0, 761, 0, 0, 0, 0, 0, 0, 0, 0, 762, 0, 763, 0, 0, 0, 0, 0,
    0, 0, 764, 765, 0, 0, 0, 0, 0, 766, 0, 0, 767, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 769, 0, 0, 0, 0, 0, 0, 0, 770, 0, 0, 771, 0, 0, 0, 0, 0, 0, 0, 0, 772, 0, 773, 0,
    0, 0, 0, 0, 0, 0, 0, 774, 0, 775, 0, 0, 0, 0, 0, 0, 776, 0, 0, 777, 0, 0, 0, 0, 0, 778, 0, 0, 779, 0, 0, 0,
    780, 0, 0, 0, 0, 0, 0, 0, 0, 0, 781, 0, 0, 0, 0, 0, 0, 782, 0, 0, 0, 0, 0, 0, 0, 0, 783, 0, 0, 784, 0, 0,
    0, 0, 0, 0, 0, 0, 785, 0, 786, 0, 0, 0, 0, 0, 0, 0, 0, 787, 0, 788, 0, 0, 0, 0, 0, 0, 0, 789, 790, 0, 0, 0,
    0, 0, 791, 0, 0, 792, 0, 0, 0, 793, 0, 0, 0, 0, 0, 0, 0, 0, 794, 0, 0, 0, 0, 0, 0, 795, 0, 0, 0, 0, 0, 0,
    0, 0, 796, 0, 0, 797, 0, 0, 0, 0, 0, 0, 0, 0, 798, 0, 799, 0, 0, 0, 0, 0, 0, 0, 0, 800, 0, 801, 0, 0, 0, 0,
    0, 0, 0, 0, 802, 0, 803, 0, 0, 0, 0, 0, 0, 0, 804, 805, 0, 0, 0, 0, 0, 806, 0, 0, 807, 0, 0, 0, 808, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 809, 0, 0, 0, 0, 0, 0, 810, 0, 0, 0, 0, 0, 0, 0, 0, 811, 0, 0, 812, 0, 0, 0, 0, 0, 0,
    0, 0, 813, 0, 814, 0, 0, 0, 0, 0, 0, 0, 0, 815, 0, 816, 0, 0, 0, 0, 0, 0, 0, 0, 817, 0, 818, 0, 0, 0, 0, 0,
    0, 0, 819, 820, 0, 0, 0, 0, 0, 821, 0, 0, 822, 0, 0, 0, 823, 0, 0, 0, 0, 0, 0, 0, 0, 0, 824, 0, 0, 0, 0, 0,
    0, 825, 0, 0, 0, 0, 0, 0, 0, 0, 826, 0, 0, 827, 0, 0, 0, 0, 0, 0, 0, 0, 828, 0, 829, 0, 0, 0, 0, 0, 0, 0,
    0, 830, 0, 831, 0, 0, 0, 0, 0, 0, 0, 0, 832, 0, 833, 0, 0, 0, 0, 0, 0, 0, 834, 835, 0, 0, 0, 0, 0, 836, 0, 0,
    837, 0, 0, 0, 838, 0, 0, 0, 0, 0, 0, 0, 0, 0, 839, 0, 0, 0, 0, 0, 0, 840, 0, 0, 0, 0, 0, 0, 0, 0, 841, 0,
    0, 842, 0, 0, 0, 0, 0, 0, 0, 0, 843, 0, 844, 0, 0, 0, 0, 0, 0, 0, 0, 845, 0, 846, 0, 0, 0, 0, 0, 0, 0, 0,
    847, 0, 848, 0, 0, 0, 0, 0, 0, 0, 849, 850, 0, 0, 0, 0, 0, 851, 0, 0, 852, 0, 0, 0, 853, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 854, 0, 0, 0, 0, 0, 0, 855, 0, 0, 0, 0, 0, 0, 0, 0, 856, 0, 0, 857, 0, 0, 0, 0, 0, 0, 0, 0, 858, 0,
    859, 0, 0, 0, 0, 0, 0, 0, 0, 860, 0, 861, 0, 0, 0, 0, 0, 0, 0, 862, 863, 0, 0, 0, 0, 0, 864, 0, 0, 865, 0, 0,
    0, 866, 0, 0, 0, 0, 0, 0, 0, 0, 0, 867, 0, 0, 0, 0, 0, 0, 868, 0, 0, 0, 0, 0, 0, 0, 0, 869, 0, 0, 870,
};
void recomp_unit_0086_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0895C000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0086[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0895C000;
    case 2u: goto L_0895C00C;
    case 3u: goto L_0895C020;
    case 4u: goto L_0895C068;
    case 5u: goto L_0895C074;
    case 6u: goto L_0895C0A0;
    case 7u: goto L_0895C0A8;
    case 8u: goto L_0895C0AC;
    case 9u: goto L_0895C0D4;
    case 10u: goto L_0895C0D8;
    case 11u: goto L_0895C0E0;
    case 12u: goto L_0895C0E8;
    case 13u: goto L_0895C0F0;
    case 14u: goto L_0895C100;
    case 15u: goto L_0895C11C;
    case 16u: goto L_0895C130;
    case 17u: goto L_0895C138;
    case 18u: goto L_0895C140;
    case 19u: goto L_0895C144;
    case 20u: goto L_0895C14C;
    case 21u: goto L_0895C154;
    case 22u: goto L_0895C15C;
    case 23u: goto L_0895C160;
    case 24u: goto L_0895C16C;
    case 25u: goto L_0895C188;
    case 26u: goto L_0895C19C;
    case 27u: goto L_0895C1A4;
    case 28u: goto L_0895C1AC;
    case 29u: goto L_0895C1CC;
    case 30u: goto L_0895C1D4;
    case 31u: goto L_0895C1DC;
    case 32u: goto L_0895C1E0;
    case 33u: goto L_0895C1F8;
    case 34u: goto L_0895C200;
    case 35u: goto L_0895C204;
    case 36u: goto L_0895C214;
    case 37u: goto L_0895C218;
    case 38u: goto L_0895C224;
    case 39u: goto L_0895C22C;
    case 40u: goto L_0895C234;
    case 41u: goto L_0895C244;
    case 42u: goto L_0895C274;
    case 43u: goto L_0895C284;
    case 44u: goto L_0895C2A0;
    case 45u: goto L_0895C2A8;
    case 46u: goto L_0895C2B8;
    case 47u: goto L_0895C2D4;
    case 48u: goto L_0895C2DC;
    case 49u: goto L_0895C308;
    case 50u: goto L_0895C31C;
    case 51u: goto L_0895C340;
    case 52u: goto L_0895C35C;
    case 53u: goto L_0895C364;
    case 54u: goto L_0895C374;
    case 55u: goto L_0895C384;
    case 56u: goto L_0895C38C;
    case 57u: goto L_0895C3D4;
    case 58u: goto L_0895C3F8;
    case 59u: goto L_0895C410;
    case 60u: goto L_0895C424;
    case 61u: goto L_0895C430;
    case 62u: goto L_0895C448;
    case 63u: goto L_0895C464;
    case 64u: goto L_0895C46C;
    case 65u: goto L_0895C474;
    case 66u: goto L_0895C48C;
    case 67u: goto L_0895C4A4;
    case 68u: goto L_0895C4BC;
    case 69u: goto L_0895C4D4;
    case 70u: goto L_0895C4E0;
    case 71u: goto L_0895C4E8;
    case 72u: goto L_0895C514;
    case 73u: goto L_0895C51C;
    case 74u: goto L_0895C528;
    case 75u: goto L_0895C554;
    case 76u: goto L_0895C558;
    case 77u: goto L_0895C560;
    case 78u: goto L_0895C568;
    case 79u: goto L_0895C594;
    case 80u: goto L_0895C59C;
    case 81u: goto L_0895C5A8;
    case 82u: goto L_0895C5D4;
    case 83u: goto L_0895C5EC;
    case 84u: goto L_0895C63C;
    case 85u: goto L_0895C648;
    case 86u: goto L_0895C658;
    case 87u: goto L_0895C66C;
    case 88u: goto L_0895C79C;
    case 89u: goto L_0895C7A8;
    case 90u: goto L_0895C7B4;
    case 91u: goto L_0895C7CC;
    case 92u: goto L_0895C7D4;
    case 93u: goto L_0895C7E0;
    case 94u: goto L_0895C7F4;
    case 95u: goto L_0895C808;
    case 96u: goto L_0895C83C;
    case 97u: goto L_0895C84C;
    case 98u: goto L_0895C878;
    case 99u: goto L_0895C880;
    case 100u: goto L_0895C8A8;
    case 101u: goto L_0895C8B0;
    case 102u: goto L_0895C8B8;
    case 103u: goto L_0895C8E4;
    case 104u: goto L_0895C900;
    case 105u: goto L_0895C908;
    case 106u: goto L_0895C910;
    case 107u: goto L_0895C914;
    case 108u: goto L_0895C91C;
    case 109u: goto L_0895C924;
    case 110u: goto L_0895C92C;
    case 111u: goto L_0895C948;
    case 112u: goto L_0895C950;
    case 113u: goto L_0895C958;
    case 114u: goto L_0895C95C;
    case 115u: goto L_0895C974;
    case 116u: goto L_0895C97C;
    case 117u: goto L_0895C980;
    case 118u: goto L_0895C990;
    case 119u: goto L_0895C994;
    case 120u: goto L_0895C9A0;
    case 121u: goto L_0895C9D8;
    case 122u: goto L_0895C9EC;
    case 123u: goto L_0895C9F8;
    case 124u: goto L_0895CA18;
    case 125u: goto L_0895CA20;
    case 126u: goto L_0895CA2C;
    case 127u: goto L_0895CA50;
    case 128u: goto L_0895CA70;
    case 129u: goto L_0895CA80;
    case 130u: goto L_0895CA8C;
    case 131u: goto L_0895CAA0;
    case 132u: goto L_0895CAB0;
    case 133u: goto L_0895CAB8;
    case 134u: goto L_0895CAC0;
    case 135u: goto L_0895CAC4;
    case 136u: goto L_0895CAD8;
    case 137u: goto L_0895CAF0;
    case 138u: goto L_0895CAF8;
    case 139u: goto L_0895CB00;
    case 140u: goto L_0895CB08;
    case 141u: goto L_0895CB10;
    case 142u: goto L_0895CB1C;
    case 143u: goto L_0895CB34;
    case 144u: goto L_0895CB3C;
    case 145u: goto L_0895CB58;
    case 146u: goto L_0895CB70;
    case 147u: goto L_0895CB88;
    case 148u: goto L_0895CBC0;
    case 149u: goto L_0895CBC8;
    case 150u: goto L_0895CBD0;
    case 151u: goto L_0895CBD8;
    case 152u: goto L_0895CBE0;
    case 153u: goto L_0895CBF4;
    case 154u: goto L_0895CC04;
    case 155u: goto L_0895CC08;
    case 156u: goto L_0895CC14;
    case 157u: goto L_0895CC20;
    case 158u: goto L_0895CC28;
    case 159u: goto L_0895CC34;
    case 160u: goto L_0895CC3C;
    case 161u: goto L_0895CC48;
    case 162u: goto L_0895CC50;
    case 163u: goto L_0895CC58;
    case 164u: goto L_0895CC60;
    case 165u: goto L_0895CC70;
    case 166u: goto L_0895CCA4;
    case 167u: goto L_0895CCB0;
    case 168u: goto L_0895CCB8;
    case 169u: goto L_0895CCC4;
    case 170u: goto L_0895CCE8;
    case 171u: goto L_0895CCF4;
    case 172u: goto L_0895CCFC;
    case 173u: goto L_0895CD04;
    case 174u: goto L_0895CD0C;
    case 175u: goto L_0895CD1C;
    case 176u: goto L_0895CD24;
    case 177u: goto L_0895CD38;
    case 178u: goto L_0895CD40;
    case 179u: goto L_0895CD48;
    case 180u: goto L_0895CD50;
    case 181u: goto L_0895CD5C;
    case 182u: goto L_0895CD64;
    case 183u: goto L_0895CD78;
    case 184u: goto L_0895CD80;
    case 185u: goto L_0895CD88;
    case 186u: goto L_0895CD90;
    case 187u: goto L_0895CDAC;
    case 188u: goto L_0895CDBC;
    case 189u: goto L_0895CDC4;
    case 190u: goto L_0895CDD0;
    case 191u: goto L_0895CE04;
    case 192u: goto L_0895CE14;
    case 193u: goto L_0895CE24;
    case 194u: goto L_0895CE34;
    case 195u: goto L_0895CE44;
    case 196u: goto L_0895CE54;
    case 197u: goto L_0895CE6C;
    case 198u: goto L_0895CE84;
    case 199u: goto L_0895CE94;
    case 200u: goto L_0895CEA4;
    case 201u: goto L_0895CEBC;
    case 202u: goto L_0895CED4;
    case 203u: goto L_0895CEEC;
    case 204u: goto L_0895CF04;
    case 205u: goto L_0895CF1C;
    case 206u: goto L_0895CF3C;
    case 207u: goto L_0895CF40;
    case 208u: goto L_0895CF4C;
    case 209u: goto L_0895CF70;
    case 210u: goto L_0895CF80;
    case 211u: goto L_0895CFA8;
    case 212u: goto L_0895CFB4;
    case 213u: goto L_0895CFBC;
    case 214u: goto L_0895CFD8;
    case 215u: goto L_0895CFEC;
    case 216u: goto L_0895CFF8;
    case 217u: goto L_0895D020;
    case 218u: goto L_0895D03C;
    case 219u: goto L_0895D044;
    case 220u: goto L_0895D04C;
    case 221u: goto L_0895D054;
    case 222u: goto L_0895D060;
    case 223u: goto L_0895D06C;
    case 224u: goto L_0895D078;
    case 225u: goto L_0895D080;
    case 226u: goto L_0895D088;
    case 227u: goto L_0895D090;
    case 228u: goto L_0895D098;
    case 229u: goto L_0895D0A0;
    case 230u: goto L_0895D0AC;
    case 231u: goto L_0895D0B4;
    case 232u: goto L_0895D0BC;
    case 233u: goto L_0895D0C4;
    case 234u: goto L_0895D0CC;
    case 235u: goto L_0895D0D4;
    case 236u: goto L_0895D0DC;
    case 237u: goto L_0895D0E8;
    case 238u: goto L_0895D0F0;
    case 239u: goto L_0895D0F8;
    case 240u: goto L_0895D100;
    case 241u: goto L_0895D108;
    case 242u: goto L_0895D110;
    case 243u: goto L_0895D11C;
    case 244u: goto L_0895D134;
    case 245u: goto L_0895D140;
    case 246u: goto L_0895D170;
    case 247u: goto L_0895D17C;
    case 248u: goto L_0895D180;
    case 249u: goto L_0895D198;
    case 250u: goto L_0895D1B0;
    case 251u: goto L_0895D1C8;
    case 252u: goto L_0895D1E0;
    case 253u: goto L_0895D1F8;
    case 254u: goto L_0895D210;
    case 255u: goto L_0895D22C;
    case 256u: goto L_0895D230;
    case 257u: goto L_0895D240;
    case 258u: goto L_0895D260;
    case 259u: goto L_0895D270;
    case 260u: goto L_0895D27C;
    case 261u: goto L_0895D284;
    case 262u: goto L_0895D2A0;
    case 263u: goto L_0895D2C8;
    case 264u: goto L_0895D2D8;
    case 265u: goto L_0895D2E8;
    case 266u: goto L_0895D2FC;
    case 267u: goto L_0895D308;
    case 268u: goto L_0895D314;
    case 269u: goto L_0895D328;
    case 270u: goto L_0895D334;
    case 271u: goto L_0895D338;
    case 272u: goto L_0895D33C;
    case 273u: goto L_0895D344;
    case 274u: goto L_0895D350;
    case 275u: goto L_0895D360;
    case 276u: goto L_0895D36C;
    case 277u: goto L_0895D374;
    case 278u: goto L_0895D380;
    case 279u: goto L_0895D38C;
    case 280u: goto L_0895D394;
    case 281u: goto L_0895D39C;
    case 282u: goto L_0895D3A8;
    case 283u: goto L_0895D3B8;
    case 284u: goto L_0895D3C0;
    case 285u: goto L_0895D3CC;
    case 286u: goto L_0895D3D8;
    case 287u: goto L_0895D3E8;
    case 288u: goto L_0895D3F8;
    case 289u: goto L_0895D400;
    case 290u: goto L_0895D408;
    case 291u: goto L_0895D420;
    case 292u: goto L_0895D45C;
    case 293u: goto L_0895D46C;
    case 294u: goto L_0895D470;
    case 295u: goto L_0895D480;
    case 296u: goto L_0895D498;
    case 297u: goto L_0895D4B0;
    case 298u: goto L_0895D4C8;
    case 299u: goto L_0895D4E0;
    case 300u: goto L_0895D4F8;
    case 301u: goto L_0895D510;
    case 302u: goto L_0895D528;
    case 303u: goto L_0895D540;
    case 304u: goto L_0895D558;
    case 305u: goto L_0895D570;
    case 306u: goto L_0895D590;
    case 307u: goto L_0895D594;
    case 308u: goto L_0895D5A0;
    case 309u: goto L_0895D5BC;
    case 310u: goto L_0895D5E0;
    case 311u: goto L_0895D5F0;
    case 312u: goto L_0895D618;
    case 313u: goto L_0895D620;
    case 314u: goto L_0895D63C;
    case 315u: goto L_0895D650;
    case 316u: goto L_0895D65C;
    case 317u: goto L_0895D684;
    case 318u: goto L_0895D6B8;
    case 319u: goto L_0895D6C4;
    case 320u: goto L_0895D6C8;
    case 321u: goto L_0895D6E0;
    case 322u: goto L_0895D6F8;
    case 323u: goto L_0895D710;
    case 324u: goto L_0895D728;
    case 325u: goto L_0895D740;
    case 326u: goto L_0895D758;
    case 327u: goto L_0895D770;
    case 328u: goto L_0895D778;
    case 329u: goto L_0895D790;
    case 330u: goto L_0895D7A0;
    case 331u: goto L_0895D7A8;
    case 332u: goto L_0895D7C0;
    case 333u: goto L_0895D7D8;
    case 334u: goto L_0895D7F8;
    case 335u: goto L_0895D808;
    case 336u: goto L_0895D818;
    case 337u: goto L_0895D834;
    case 338u: goto L_0895D850;
    case 339u: goto L_0895D860;
    case 340u: goto L_0895D868;
    case 341u: goto L_0895D888;
    case 342u: goto L_0895D8CC;
    case 343u: goto L_0895D8EC;
    case 344u: goto L_0895D8F8;
    case 345u: goto L_0895D908;
    case 346u: goto L_0895D91C;
    case 347u: goto L_0895D93C;
    case 348u: goto L_0895D954;
    case 349u: goto L_0895D968;
    case 350u: goto L_0895D978;
    case 351u: goto L_0895D98C;
    case 352u: goto L_0895D9A8;
    case 353u: goto L_0895D9B0;
    case 354u: goto L_0895D9C4;
    case 355u: goto L_0895D9E0;
    case 356u: goto L_0895D9F8;
    case 357u: goto L_0895DA0C;
    case 358u: goto L_0895DA2C;
    case 359u: goto L_0895DA70;
    case 360u: goto L_0895DA90;
    case 361u: goto L_0895DA9C;
    case 362u: goto L_0895DAAC;
    case 363u: goto L_0895DAC0;
    case 364u: goto L_0895DAE0;
    case 365u: goto L_0895DAF8;
    case 366u: goto L_0895DB0C;
    case 367u: goto L_0895DB1C;
    case 368u: goto L_0895DB30;
    case 369u: goto L_0895DB4C;
    case 370u: goto L_0895DB54;
    case 371u: goto L_0895DB68;
    case 372u: goto L_0895DB84;
    case 373u: goto L_0895DB9C;
    case 374u: goto L_0895DBB8;
    case 375u: goto L_0895DBC0;
    case 376u: goto L_0895DBD0;
    case 377u: goto L_0895DBF0;
    case 378u: goto L_0895DC68;
    case 379u: goto L_0895DC74;
    case 380u: goto L_0895DC80;
    case 381u: goto L_0895DC90;
    case 382u: goto L_0895DCA0;
    case 383u: goto L_0895DCB4;
    case 384u: goto L_0895DCC8;
    case 385u: goto L_0895DCE8;
    case 386u: goto L_0895DD04;
    case 387u: goto L_0895DD1C;
    case 388u: goto L_0895DD30;
    case 389u: goto L_0895DD48;
    case 390u: goto L_0895DD54;
    case 391u: goto L_0895DD60;
    case 392u: goto L_0895DD70;
    case 393u: goto L_0895DD7C;
    case 394u: goto L_0895DD90;
    case 395u: goto L_0895DDB0;
    case 396u: goto L_0895DDCC;
    case 397u: goto L_0895DDE4;
    case 398u: goto L_0895DE00;
    case 399u: goto L_0895DE08;
    case 400u: goto L_0895DE18;
    case 401u: goto L_0895DE44;
    case 402u: goto L_0895DE94;
    case 403u: goto L_0895DE9C;
    case 404u: goto L_0895DEC8;
    case 405u: goto L_0895DEDC;
    case 406u: goto L_0895DEE4;
    case 407u: goto L_0895DEF4;
    case 408u: goto L_0895DF04;
    case 409u: goto L_0895DF18;
    case 410u: goto L_0895DF2C;
    case 411u: goto L_0895DF4C;
    case 412u: goto L_0895DF68;
    case 413u: goto L_0895DF80;
    case 414u: goto L_0895DF94;
    case 415u: goto L_0895DFA4;
    case 416u: goto L_0895DFB8;
    case 417u: goto L_0895DFD4;
    case 418u: goto L_0895DFDC;
    case 419u: goto L_0895DFEC;
    case 420u: goto L_0895DFFC;
    case 421u: goto L_0895E014;
    case 422u: goto L_0895E028;
    case 423u: goto L_0895E048;
    case 424u: goto L_0895E064;
    case 425u: goto L_0895E07C;
    case 426u: goto L_0895E098;
    case 427u: goto L_0895E0A0;
    case 428u: goto L_0895E0A8;
    case 429u: goto L_0895E0D4;
    case 430u: goto L_0895E11C;
    case 431u: goto L_0895E12C;
    case 432u: goto L_0895E14C;
    case 433u: goto L_0895E15C;
    case 434u: goto L_0895E16C;
    case 435u: goto L_0895E190;
    case 436u: goto L_0895E198;
    case 437u: goto L_0895E1A0;
    case 438u: goto L_0895E1A8;
    case 439u: goto L_0895E1BC;
    case 440u: goto L_0895E1DC;
    case 441u: goto L_0895E1F8;
    case 442u: goto L_0895E210;
    case 443u: goto L_0895E234;
    case 444u: goto L_0895E248;
    case 445u: goto L_0895E250;
    case 446u: goto L_0895E254;
    case 447u: goto L_0895E284;
    case 448u: goto L_0895E2DC;
    case 449u: goto L_0895E2FC;
    case 450u: goto L_0895E318;
    case 451u: goto L_0895E324;
    case 452u: goto L_0895E328;
    case 453u: goto L_0895E338;
    case 454u: goto L_0895E34C;
    case 455u: goto L_0895E368;
    case 456u: goto L_0895E380;
    case 457u: goto L_0895E390;
    case 458u: goto L_0895E3A8;
    case 459u: goto L_0895E3D4;
    case 460u: goto L_0895E3E8;
    case 461u: goto L_0895E3F8;
    case 462u: goto L_0895E414;
    case 463u: goto L_0895E430;
    case 464u: goto L_0895E44C;
    case 465u: goto L_0895E474;
    case 466u: goto L_0895E494;
    case 467u: goto L_0895E4A8;
    case 468u: goto L_0895E4B4;
    case 469u: goto L_0895E4BC;
    case 470u: goto L_0895E4C8;
    case 471u: goto L_0895E4F4;
    case 472u: goto L_0895E514;
    case 473u: goto L_0895E51C;
    case 474u: goto L_0895E528;
    case 475u: goto L_0895E550;
    case 476u: goto L_0895E564;
    case 477u: goto L_0895E56C;
    case 478u: goto L_0895E578;
    case 479u: goto L_0895E584;
    case 480u: goto L_0895E598;
    case 481u: goto L_0895E5A8;
    case 482u: goto L_0895E5B8;
    case 483u: goto L_0895E5C0;
    case 484u: goto L_0895E5C8;
    case 485u: goto L_0895E5E8;
    case 486u: goto L_0895E5F4;
    case 487u: goto L_0895E614;
    case 488u: goto L_0895E620;
    case 489u: goto L_0895E640;
    case 490u: goto L_0895E648;
    case 491u: goto L_0895E660;
    case 492u: goto L_0895E6A8;
    case 493u: goto L_0895E6BC;
    case 494u: goto L_0895E6CC;
    case 495u: goto L_0895E6DC;
    case 496u: goto L_0895E6E4;
    case 497u: goto L_0895E6F8;
    case 498u: goto L_0895E710;
    case 499u: goto L_0895E720;
    case 500u: goto L_0895E728;
    case 501u: goto L_0895E734;
    case 502u: goto L_0895E740;
    case 503u: goto L_0895E748;
    case 504u: goto L_0895E74C;
    case 505u: goto L_0895E764;
    case 506u: goto L_0895E768;
    case 507u: goto L_0895E774;
    case 508u: goto L_0895E784;
    case 509u: goto L_0895E794;
    case 510u: goto L_0895E7A0;
    case 511u: goto L_0895E7BC;
    case 512u: goto L_0895E7CC;
    case 513u: goto L_0895E7D0;
    case 514u: goto L_0895E7EC;
    case 515u: goto L_0895E7F4;
    case 516u: goto L_0895E7FC;
    case 517u: goto L_0895E810;
    case 518u: goto L_0895E82C;
    case 519u: goto L_0895E85C;
    case 520u: goto L_0895E884;
    case 521u: goto L_0895E88C;
    case 522u: goto L_0895E8A4;
    case 523u: goto L_0895E8B4;
    case 524u: goto L_0895E8BC;
    case 525u: goto L_0895E8CC;
    case 526u: goto L_0895E8D4;
    case 527u: goto L_0895E8E4;
    case 528u: goto L_0895E8EC;
    case 529u: goto L_0895E8FC;
    case 530u: goto L_0895E904;
    case 531u: goto L_0895E914;
    case 532u: goto L_0895E91C;
    case 533u: goto L_0895E92C;
    case 534u: goto L_0895E934;
    case 535u: goto L_0895E944;
    case 536u: goto L_0895E94C;
    case 537u: goto L_0895E95C;
    case 538u: goto L_0895E964;
    case 539u: goto L_0895E974;
    case 540u: goto L_0895E97C;
    case 541u: goto L_0895E98C;
    case 542u: goto L_0895E994;
    case 543u: goto L_0895E9A4;
    case 544u: goto L_0895E9AC;
    case 545u: goto L_0895E9BC;
    case 546u: goto L_0895E9C4;
    case 547u: goto L_0895E9D4;
    case 548u: goto L_0895E9DC;
    case 549u: goto L_0895E9EC;
    case 550u: goto L_0895E9F4;
    case 551u: goto L_0895EA04;
    case 552u: goto L_0895EA0C;
    case 553u: goto L_0895EA1C;
    case 554u: goto L_0895EA24;
    case 555u: goto L_0895EA34;
    case 556u: goto L_0895EA3C;
    case 557u: goto L_0895EA4C;
    case 558u: goto L_0895EA54;
    case 559u: goto L_0895EA64;
    case 560u: goto L_0895EA6C;
    case 561u: goto L_0895EA7C;
    case 562u: goto L_0895EA84;
    case 563u: goto L_0895EA94;
    case 564u: goto L_0895EA9C;
    case 565u: goto L_0895EAAC;
    case 566u: goto L_0895EAB4;
    case 567u: goto L_0895EAC4;
    case 568u: goto L_0895EACC;
    case 569u: goto L_0895EADC;
    case 570u: goto L_0895EAE4;
    case 571u: goto L_0895EAF4;
    case 572u: goto L_0895EAFC;
    case 573u: goto L_0895EB0C;
    case 574u: goto L_0895EB14;
    case 575u: goto L_0895EB24;
    case 576u: goto L_0895EB2C;
    case 577u: goto L_0895EB3C;
    case 578u: goto L_0895EB44;
    case 579u: goto L_0895EB54;
    case 580u: goto L_0895EB58;
    case 581u: goto L_0895EB5C;
    case 582u: goto L_0895EB68;
    case 583u: goto L_0895EB78;
    case 584u: goto L_0895EBB4;
    case 585u: goto L_0895EC0C;
    case 586u: goto L_0895EC28;
    case 587u: goto L_0895EC44;
    case 588u: goto L_0895EC60;
    case 589u: goto L_0895EC74;
    case 590u: goto L_0895EC80;
    case 591u: goto L_0895EC8C;
    case 592u: goto L_0895EC94;
    case 593u: goto L_0895ECB0;
    case 594u: goto L_0895ECD4;
    case 595u: goto L_0895ECE4;
    case 596u: goto L_0895ECF4;
    case 597u: goto L_0895ED24;
    case 598u: goto L_0895ED4C;
    case 599u: goto L_0895ED5C;
    case 600u: goto L_0895ED60;
    case 601u: goto L_0895ED68;
    case 602u: goto L_0895ED84;
    case 603u: goto L_0895ED8C;
    case 604u: goto L_0895ED94;
    case 605u: goto L_0895EDAC;
    case 606u: goto L_0895EDC4;
    case 607u: goto L_0895EDCC;
    case 608u: goto L_0895EDE0;
    case 609u: goto L_0895EDE8;
    case 610u: goto L_0895EDF4;
    case 611u: goto L_0895EE04;
    case 612u: goto L_0895EE18;
    case 613u: goto L_0895EE28;
    case 614u: goto L_0895EE30;
    case 615u: goto L_0895EE40;
    case 616u: goto L_0895EE44;
    case 617u: goto L_0895EE4C;
    case 618u: goto L_0895EE5C;
    case 619u: goto L_0895EE6C;
    case 620u: goto L_0895EE74;
    case 621u: goto L_0895EE88;
    case 622u: goto L_0895EEA0;
    case 623u: goto L_0895EEB8;
    case 624u: goto L_0895EEF8;
    case 625u: goto L_0895EF00;
    case 626u: goto L_0895EF0C;
    case 627u: goto L_0895EF18;
    case 628u: goto L_0895EF24;
    case 629u: goto L_0895EF30;
    case 630u: goto L_0895EF3C;
    case 631u: goto L_0895EF48;
    case 632u: goto L_0895EF54;
    case 633u: goto L_0895EF58;
    case 634u: goto L_0895EF68;
    case 635u: goto L_0895EF78;
    case 636u: goto L_0895EF84;
    case 637u: goto L_0895EF94;
    case 638u: goto L_0895EF9C;
    case 639u: goto L_0895EFAC;
    case 640u: goto L_0895EFB4;
    case 641u: goto L_0895EFC0;
    case 642u: goto L_0895EFC4;
    case 643u: goto L_0895EFD0;
    case 644u: goto L_0895EFE4;
    case 645u: goto L_0895EFF0;
    case 646u: goto L_0895EFF8;
    case 647u: goto L_0895F000;
    case 648u: goto L_0895F008;
    case 649u: goto L_0895F010;
    case 650u: goto L_0895F018;
    case 651u: goto L_0895F020;
    case 652u: goto L_0895F030;
    case 653u: goto L_0895F04C;
    case 654u: goto L_0895F058;
    case 655u: goto L_0895F060;
    case 656u: goto L_0895F074;
    case 657u: goto L_0895F07C;
    case 658u: goto L_0895F084;
    case 659u: goto L_0895F08C;
    case 660u: goto L_0895F0A4;
    case 661u: goto L_0895F0CC;
    case 662u: goto L_0895F0D8;
    case 663u: goto L_0895F0E0;
    case 664u: goto L_0895F0E4;
    case 665u: goto L_0895F0EC;
    case 666u: goto L_0895F0FC;
    case 667u: goto L_0895F104;
    case 668u: goto L_0895F10C;
    case 669u: goto L_0895F114;
    case 670u: goto L_0895F124;
    case 671u: goto L_0895F12C;
    case 672u: goto L_0895F134;
    case 673u: goto L_0895F150;
    case 674u: goto L_0895F158;
    case 675u: goto L_0895F160;
    case 676u: goto L_0895F168;
    case 677u: goto L_0895F16C;
    case 678u: goto L_0895F174;
    case 679u: goto L_0895F17C;
    case 680u: goto L_0895F188;
    case 681u: goto L_0895F194;
    case 682u: goto L_0895F1A0;
    case 683u: goto L_0895F1AC;
    case 684u: goto L_0895F1B8;
    case 685u: goto L_0895F1C4;
    case 686u: goto L_0895F1D0;
    case 687u: goto L_0895F1D8;
    case 688u: goto L_0895F1E0;
    case 689u: goto L_0895F1E8;
    case 690u: goto L_0895F1EC;
    case 691u: goto L_0895F1F4;
    case 692u: goto L_0895F1FC;
    case 693u: goto L_0895F204;
    case 694u: goto L_0895F208;
    case 695u: goto L_0895F210;
    case 696u: goto L_0895F218;
    case 697u: goto L_0895F220;
    case 698u: goto L_0895F224;
    case 699u: goto L_0895F22C;
    case 700u: goto L_0895F234;
    case 701u: goto L_0895F238;
    case 702u: goto L_0895F244;
    case 703u: goto L_0895F24C;
    case 704u: goto L_0895F254;
    case 705u: goto L_0895F268;
    case 706u: goto L_0895F270;
    case 707u: goto L_0895F278;
    case 708u: goto L_0895F28C;
    case 709u: goto L_0895F294;
    case 710u: goto L_0895F2A8;
    case 711u: goto L_0895F2AC;
    case 712u: goto L_0895F2B4;
    case 713u: goto L_0895F2BC;
    case 714u: goto L_0895F2C4;
    case 715u: goto L_0895F2CC;
    case 716u: goto L_0895F2D4;
    case 717u: goto L_0895F2DC;
    case 718u: goto L_0895F2E4;
    case 719u: goto L_0895F2EC;
    case 720u: goto L_0895F2F4;
    case 721u: goto L_0895F2FC;
    case 722u: goto L_0895F304;
    case 723u: goto L_0895F30C;
    case 724u: goto L_0895F314;
    case 725u: goto L_0895F320;
    case 726u: goto L_0895F328;
    case 727u: goto L_0895F330;
    case 728u: goto L_0895F338;
    case 729u: goto L_0895F340;
    case 730u: goto L_0895F35C;
    case 731u: goto L_0895F380;
    case 732u: goto L_0895F39C;
    case 733u: goto L_0895F3A8;
    case 734u: goto L_0895F3CC;
    case 735u: goto L_0895F3D4;
    case 736u: goto L_0895F3DC;
    case 737u: goto L_0895F400;
    case 738u: goto L_0895F408;
    case 739u: goto L_0895F428;
    case 740u: goto L_0895F42C;
    case 741u: goto L_0895F440;
    case 742u: goto L_0895F44C;
    case 743u: goto L_0895F45C;
    case 744u: goto L_0895F4BC;
    case 745u: goto L_0895F4DC;
    case 746u: goto L_0895F4E8;
    case 747u: goto L_0895F50C;
    case 748u: goto L_0895F514;
    case 749u: goto L_0895F530;
    case 750u: goto L_0895F53C;
    case 751u: goto L_0895F554;
    case 752u: goto L_0895F560;
    case 753u: goto L_0895F570;
    case 754u: goto L_0895F598;
    case 755u: goto L_0895F5B4;
    case 756u: goto L_0895F5D8;
    case 757u: goto L_0895F5E4;
    case 758u: goto L_0895F608;
    case 759u: goto L_0895F610;
    case 760u: goto L_0895F634;
    case 761u: goto L_0895F63C;
    case 762u: goto L_0895F660;
    case 763u: goto L_0895F668;
    case 764u: goto L_0895F688;
    case 765u: goto L_0895F68C;
    case 766u: goto L_0895F6A4;
    case 767u: goto L_0895F6B0;
    case 768u: goto L_0895F6C0;
    case 769u: goto L_0895F720;
    case 770u: goto L_0895F740;
    case 771u: goto L_0895F74C;
    case 772u: goto L_0895F770;
    case 773u: goto L_0895F778;
    case 774u: goto L_0895F79C;
    case 775u: goto L_0895F7A4;
    case 776u: goto L_0895F7C0;
    case 777u: goto L_0895F7CC;
    case 778u: goto L_0895F7E4;
    case 779u: goto L_0895F7F0;
    case 780u: goto L_0895F800;
    case 781u: goto L_0895F828;
    case 782u: goto L_0895F844;
    case 783u: goto L_0895F868;
    case 784u: goto L_0895F874;
    case 785u: goto L_0895F898;
    case 786u: goto L_0895F8A0;
    case 787u: goto L_0895F8C4;
    case 788u: goto L_0895F8CC;
    case 789u: goto L_0895F8EC;
    case 790u: goto L_0895F8F0;
    case 791u: goto L_0895F908;
    case 792u: goto L_0895F914;
    case 793u: goto L_0895F924;
    case 794u: goto L_0895F948;
    case 795u: goto L_0895F964;
    case 796u: goto L_0895F988;
    case 797u: goto L_0895F994;
    case 798u: goto L_0895F9B8;
    case 799u: goto L_0895F9C0;
    case 800u: goto L_0895F9E4;
    case 801u: goto L_0895F9EC;
    case 802u: goto L_0895FA10;
    case 803u: goto L_0895FA18;
    case 804u: goto L_0895FA38;
    case 805u: goto L_0895FA3C;
    case 806u: goto L_0895FA54;
    case 807u: goto L_0895FA60;
    case 808u: goto L_0895FA70;
    case 809u: goto L_0895FA98;
    case 810u: goto L_0895FAB4;
    case 811u: goto L_0895FAD8;
    case 812u: goto L_0895FAE4;
    case 813u: goto L_0895FB08;
    case 814u: goto L_0895FB10;
    case 815u: goto L_0895FB34;
    case 816u: goto L_0895FB3C;
    case 817u: goto L_0895FB60;
    case 818u: goto L_0895FB68;
    case 819u: goto L_0895FB88;
    case 820u: goto L_0895FB8C;
    case 821u: goto L_0895FBA4;
    case 822u: goto L_0895FBB0;
    case 823u: goto L_0895FBC0;
    case 824u: goto L_0895FBE8;
    case 825u: goto L_0895FC04;
    case 826u: goto L_0895FC28;
    case 827u: goto L_0895FC34;
    case 828u: goto L_0895FC58;
    case 829u: goto L_0895FC60;
    case 830u: goto L_0895FC84;
    case 831u: goto L_0895FC8C;
    case 832u: goto L_0895FCB0;
    case 833u: goto L_0895FCB8;
    case 834u: goto L_0895FCD8;
    case 835u: goto L_0895FCDC;
    case 836u: goto L_0895FCF4;
    case 837u: goto L_0895FD00;
    case 838u: goto L_0895FD10;
    case 839u: goto L_0895FD38;
    case 840u: goto L_0895FD54;
    case 841u: goto L_0895FD78;
    case 842u: goto L_0895FD84;
    case 843u: goto L_0895FDA8;
    case 844u: goto L_0895FDB0;
    case 845u: goto L_0895FDD4;
    case 846u: goto L_0895FDDC;
    case 847u: goto L_0895FE00;
    case 848u: goto L_0895FE08;
    case 849u: goto L_0895FE28;
    case 850u: goto L_0895FE2C;
    case 851u: goto L_0895FE44;
    case 852u: goto L_0895FE50;
    case 853u: goto L_0895FE60;
    case 854u: goto L_0895FE88;
    case 855u: goto L_0895FEA4;
    case 856u: goto L_0895FEC8;
    case 857u: goto L_0895FED4;
    case 858u: goto L_0895FEF8;
    case 859u: goto L_0895FF00;
    case 860u: goto L_0895FF24;
    case 861u: goto L_0895FF2C;
    case 862u: goto L_0895FF4C;
    case 863u: goto L_0895FF50;
    case 864u: goto L_0895FF68;
    case 865u: goto L_0895FF74;
    case 866u: goto L_0895FF84;
    case 867u: goto L_0895FFAC;
    case 868u: goto L_0895FFC8;
    case 869u: goto L_0895FFEC;
    case 870u: goto L_0895FFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0895C000:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[0];
    ctx.gpr[31] = (0x0895C00Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 412u, 0x08845FF8u>(ctx, &aot_mem) && ctx.pc == 0x0895C00Cu) goto L_0895C00C;
    return;
L_0895C00C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(364)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (16256u << 16u);
      if (branch_taken) {
          goto L_0895C218;
      }
      goto L_0895C020;
    }
L_0895C020:
    ctx.gpr[4] = (17327u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17120u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (2220u << 16u);
    ctx.gpr[4] = (17106u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (17148u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (17194u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[4] = (17172u << 16u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(17172));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0895C068;
L_0895C068:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(368)));
    if (ctx.gpr[20] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
        goto L_0895C0AC;
    }
    goto L_0895C074;
L_0895C074:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0895C0A0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 410u, 0x08845FC0u>(ctx, &aot_mem) && ctx.pc == 0x0895C0A0u) goto L_0895C0A0;
    return;
L_0895C0A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0895C0D8;
      }
      goto L_0895C0A8;
    }
L_0895C0A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    goto L_0895C0AC;
L_0895C0AC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0895C0D4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 410u, 0x08845FC0u>(ctx, &aot_mem) && ctx.pc == 0x0895C0D4u) goto L_0895C0D4;
    return;
L_0895C0D4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 2 ? 1u : 0u);
    goto L_0895C0D8;
L_0895C0D8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0895C144;
      }
      goto L_0895C0E0;
    }
L_0895C0E0:
    if (static_cast<std::int32_t>(ctx.gpr[20]) < 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(364)));
        goto L_0895C204;
    }
    goto L_0895C0E8;
L_0895C0E8:
    if (static_cast<std::int32_t>(ctx.gpr[20]) > 0) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(380)));
        goto L_0895C160;
    }
    goto L_0895C0F0;
L_0895C0F0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(376)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0895C100u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0895C100u) goto L_0895C100;
    return;
L_0895C100:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(360)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[30]);
    ctx.gpr[31] = (0x0895C11Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 351u, 0x08845B5Cu>(ctx, &aot_mem) && ctx.pc == 0x0895C11Cu) goto L_0895C11C;
    return;
L_0895C11C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x0895C130u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 351u, 0x08845B5Cu>(ctx, &aot_mem) && ctx.pc == 0x0895C130u) goto L_0895C130;
    return;
L_0895C130:
    ctx.gpr[31] = (0x0895C138u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 362u, 0x08845C8Cu>(ctx, &aot_mem) && ctx.pc == 0x0895C138u) goto L_0895C138;
    return;
L_0895C138:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(364)));
      if (branch_taken) {
          goto L_0895C204;
      }
      goto L_0895C140;
    }
L_0895C140:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 3 ? 1u : 0u);
    goto L_0895C144;
L_0895C144:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0895C1AC;
      }
      goto L_0895C14C;
    }
L_0895C14C:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(360)));
        goto L_0895C1E0;
    }
    goto L_0895C154;
L_0895C154:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(364)));
      if (branch_taken) {
          goto L_0895C204;
      }
      goto L_0895C15C;
    }
L_0895C15C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(380)));
    goto L_0895C160;
L_0895C160:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0895C16Cu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0895C16Cu) goto L_0895C16C;
    return;
L_0895C16C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(360)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[30]);
    ctx.gpr[31] = (0x0895C188u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 351u, 0x08845B5Cu>(ctx, &aot_mem) && ctx.pc == 0x0895C188u) goto L_0895C188;
    return;
L_0895C188:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0895C19Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 351u, 0x08845B5Cu>(ctx, &aot_mem) && ctx.pc == 0x0895C19Cu) goto L_0895C19C;
    return;
L_0895C19C:
    ctx.gpr[31] = (0x0895C1A4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 362u, 0x08845C8Cu>(ctx, &aot_mem) && ctx.pc == 0x0895C1A4u) goto L_0895C1A4;
    return;
L_0895C1A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(364)));
      if (branch_taken) {
          goto L_0895C204;
      }
      goto L_0895C1AC;
    }
L_0895C1AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(360)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[6] = (17182u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[30]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0895C1CCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 351u, 0x08845B5Cu>(ctx, &aot_mem) && ctx.pc == 0x0895C1CCu) goto L_0895C1CC;
    return;
L_0895C1CC:
    ctx.gpr[31] = (0x0895C1D4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 362u, 0x08845C8Cu>(ctx, &aot_mem) && ctx.pc == 0x0895C1D4u) goto L_0895C1D4;
    return;
L_0895C1D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(364)));
      if (branch_taken) {
          goto L_0895C204;
      }
      goto L_0895C1DC;
    }
L_0895C1DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(360)));
    goto L_0895C1E0;
L_0895C1E0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[30]);
    ctx.gpr[31] = (0x0895C1F8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 351u, 0x08845B5Cu>(ctx, &aot_mem) && ctx.pc == 0x0895C1F8u) goto L_0895C1F8;
    return;
L_0895C1F8:
    ctx.gpr[31] = (0x0895C200u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 362u, 0x08845C8Cu>(ctx, &aot_mem) && ctx.pc == 0x0895C200u) goto L_0895C200;
    return;
L_0895C200:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(364)));
    goto L_0895C204;
L_0895C204:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0895C068;
      }
      goto L_0895C214;
    }
L_0895C214:
    ctx.gpr[5] = (16256u << 16u);
    goto L_0895C218;
L_0895C218:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0895C224u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 412u, 0x08845FF8u>(ctx, &aot_mem) && ctx.pc == 0x0895C224u) goto L_0895C224;
    return;
L_0895C224:
    ctx.gpr[31] = (0x0895C22Cu);
    ctx.gpr[4] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x0895C22Cu) goto L_0895C22C;
    return;
L_0895C22C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    ctx.gpr[4] = (16153u << 16u);
      if (branch_taken) {
          goto L_0895C374;
      }
      goto L_0895C234;
    }
L_0895C234:
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0895C244u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 412u, 0x08845FF8u>(ctx, &aot_mem) && ctx.pc == 0x0895C244u) goto L_0895C244;
    return;
L_0895C244:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0895C274u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 410u, 0x08845FC0u>(ctx, &aot_mem) && ctx.pc == 0x0895C274u) goto L_0895C274;
    return;
L_0895C274:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0895C284u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17180));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0895C284u) goto L_0895C284;
    return;
L_0895C284:
    ctx.gpr[6] = (17268u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (17173u << 16u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0895C2A0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 351u, 0x08845B5Cu>(ctx, &aot_mem) && ctx.pc == 0x0895C2A0u) goto L_0895C2A0;
    return;
L_0895C2A0:
    ctx.gpr[31] = (0x0895C2A8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 362u, 0x08845C8Cu>(ctx, &aot_mem) && ctx.pc == 0x0895C2A8u) goto L_0895C2A8;
    return;
L_0895C2A8:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0895C2B8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17188));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0895C2B8u) goto L_0895C2B8;
    return;
L_0895C2B8:
    ctx.gpr[6] = (17291u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (17196u << 16u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0895C2D4u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 351u, 0x08845B5Cu>(ctx, &aot_mem) && ctx.pc == 0x0895C2D4u) goto L_0895C2D4;
    return;
L_0895C2D4:
    ctx.gpr[31] = (0x0895C2DCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 362u, 0x08845C8Cu>(ctx, &aot_mem) && ctx.pc == 0x0895C2DCu) goto L_0895C2DC;
    return;
L_0895C2DC:
    ctx.gpr[4] = (0u | 153u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(628), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(629), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(630), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(631), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (16294u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0895C308u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 412u, 0x08845FF8u>(ctx, &aot_mem) && ctx.pc == 0x0895C308u) goto L_0895C308;
    return;
L_0895C308:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[31] = (0x0895C31Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 410u, 0x08845FC0u>(ctx, &aot_mem) && ctx.pc == 0x0895C31Cu) goto L_0895C31C;
    return;
L_0895C31C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(392)));
    ctx.gpr[6] = (0u | 30u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17192));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0895C340u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0895C340u) goto L_0895C340;
    return;
L_0895C340:
    ctx.gpr[6] = (17271u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (17183u << 16u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0895C35Cu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 351u, 0x08845B5Cu>(ctx, &aot_mem) && ctx.pc == 0x0895C35Cu) goto L_0895C35C;
    return;
L_0895C35C:
    ctx.gpr[31] = (0x0895C364u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 362u, 0x08845C8Cu>(ctx, &aot_mem) && ctx.pc == 0x0895C364u) goto L_0895C364;
    return;
L_0895C364:
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0895C374u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 412u, 0x08845FF8u>(ctx, &aot_mem) && ctx.pc == 0x0895C374u) goto L_0895C374;
    return;
L_0895C374:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(384)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895C38C;
      }
      goto L_0895C384;
    }
L_0895C384:
    ctx.gpr[31] = (0x0895C38Cu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(404));
    goto L_0895C5EC;
L_0895C38C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(660)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(664)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(668)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(672)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(676)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(680)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(684)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(688)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(692)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895C3D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[4] & 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0895C424;
      }
      goto L_0895C3F8;
    }
L_0895C3F8:
    ctx.gpr[4] = (0u | 21u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0895C410u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 830u, 0x08807750u>(ctx, &aot_mem) && ctx.pc == 0x0895C410u) goto L_0895C410;
    return;
L_0895C410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    goto L_0895C424;
L_0895C424:
    ctx.gpr[5] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 128u);
      if (branch_taken) {
          goto L_0895C464;
      }
      goto L_0895C430;
    }
L_0895C430:
    ctx.gpr[4] = (0u | 21u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0895C448u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 830u, 0x08807750u>(ctx, &aot_mem) && ctx.pc == 0x0895C448u) goto L_0895C448;
    return;
L_0895C448:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[4] & 128u);
    goto L_0895C464;
L_0895C464:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
      if (branch_taken) {
          goto L_0895C4D4;
      }
      goto L_0895C46C;
    }
L_0895C46C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_0895C4A4;
      }
      goto L_0895C474;
    }
L_0895C474:
    ctx.gpr[4] = (0u | 21u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0895C48Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 830u, 0x08807750u>(ctx, &aot_mem) && ctx.pc == 0x0895C48Cu) goto L_0895C48C;
    return;
L_0895C48C:
    ctx.gpr[2] = (0u | 3u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895C4A4:
    ctx.gpr[4] = (0u | 21u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0895C4BCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 830u, 0x08807750u>(ctx, &aot_mem) && ctx.pc == 0x0895C4BCu) goto L_0895C4BC;
    return;
L_0895C4BC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895C4D4:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_0895C51C;
      }
      goto L_0895C4E0;
    }
L_0895C4E0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[7] = (17177u << 16u);
      if (branch_taken) {
          goto L_0895C558;
      }
      goto L_0895C4E8;
    }
L_0895C4E8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (17126u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (17072u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 65535u);
    ctx.gpr[7] = (16984u << 16u);
    ctx.gpr[31] = (0x0895C514u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 483u, 0x0895A444u>(ctx, &aot_mem) && ctx.pc == 0x0895C514u) goto L_0895C514;
    return;
L_0895C514:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
      if (branch_taken) {
          goto L_0895C558;
      }
      goto L_0895C51C;
    }
L_0895C51C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (17268u << 16u);
      if (branch_taken) {
          goto L_0895C558;
      }
      goto L_0895C528;
    }
L_0895C528:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (17126u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (17072u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 65535u);
    ctx.gpr[7] = (16984u << 16u);
    ctx.gpr[31] = (0x0895C554u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 483u, 0x0895A444u>(ctx, &aot_mem) && ctx.pc == 0x0895C554u) goto L_0895C554;
    return;
L_0895C554:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
    goto L_0895C558;
L_0895C558:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_0895C59C;
      }
      goto L_0895C560;
    }
L_0895C560:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[7] = (17177u << 16u);
      if (branch_taken) {
          goto L_0895C5D4;
      }
      goto L_0895C568;
    }
L_0895C568:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (17126u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 65535u);
    ctx.gpr[7] = (17072u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (16984u << 16u);
    ctx.gpr[31] = (0x0895C594u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 483u, 0x0895A444u>(ctx, &aot_mem) && ctx.pc == 0x0895C594u) goto L_0895C594;
    return;
L_0895C594:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C5D4;
      }
      goto L_0895C59C;
    }
L_0895C59C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (17268u << 16u);
      if (branch_taken) {
          goto L_0895C5D4;
      }
      goto L_0895C5A8;
    }
L_0895C5A8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (17126u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 65535u);
    ctx.gpr[7] = (17072u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (16984u << 16u);
    ctx.gpr[31] = (0x0895C5D4u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 483u, 0x0895A444u>(ctx, &aot_mem) && ctx.pc == 0x0895C5D4u) goto L_0895C5D4;
    return;
L_0895C5D4:
    ctx.gpr[2] = (0u | 2u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895C5EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-512));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[6] = (0u | 84u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), ctx.gpr[31]);
    ctx.gpr[31] = (0x0895C63Cu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(10144));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 471u, 0x08AAAB90u>(ctx, &aot_mem) && ctx.pc == 0x0895C63Cu) goto L_0895C63C;
    return;
L_0895C63C:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(252));
    ctx.gpr[17] = (0u | 3u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_0895C648;
L_0895C648:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0895C658u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893D6E8u>(ctx, &aot_mem) && ctx.pc == 0x0895C658u) goto L_0895C658;
    return;
L_0895C658:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(72), 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-84));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-84));
      if (branch_taken) {
          goto L_0895C648;
      }
      goto L_0895C66C;
    }
L_0895C66C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(372));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(392));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(60));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(412));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(120));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(252));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[17] = (0u | 3u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_0895C79C;
L_0895C79C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0895C7A8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 220u, 0x0893D628u>(ctx, &aot_mem) && ctx.pc == 0x0895C7A8u) goto L_0895C7A8;
    return;
L_0895C7A8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-84));
      if (branch_taken) {
          goto L_0895C79C;
      }
      goto L_0895C7B4;
    }
L_0895C7B4:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0895C7CCu);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895C7CCu) goto L_0895C7CC;
    return;
L_0895C7CC:
    ctx.gpr[31] = (0x0895C7D4u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 203u, 0x0893D540u>(ctx, &aot_mem) && ctx.pc == 0x0895C7D4u) goto L_0895C7D4;
    return;
L_0895C7D4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x0895C7E0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 396u, 0x08845EC0u>(ctx, &aot_mem) && ctx.pc == 0x0895C7E0u) goto L_0895C7E0;
    return;
L_0895C7E0:
    ctx.gpr[4] = (16896u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[0];
    ctx.gpr[31] = (0x0895C7F4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 412u, 0x08845FF8u>(ctx, &aot_mem) && ctx.pc == 0x0895C7F4u) goto L_0895C7F4;
    return;
L_0895C7F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (16256u << 16u);
      if (branch_taken) {
          goto L_0895C994;
      }
      goto L_0895C808;
    }
L_0895C808:
    ctx.gpr[4] = (17231u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17058u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (17198u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (17148u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (17287u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0895C83C;
L_0895C83C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[18] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_0895C880;
    }
    goto L_0895C84C;
L_0895C84C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0895C878u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 410u, 0x08845FC0u>(ctx, &aot_mem) && ctx.pc == 0x0895C878u) goto L_0895C878;
    return;
L_0895C878:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C8A8;
      }
      goto L_0895C880;
    }
L_0895C880:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0895C8A8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 410u, 0x08845FC0u>(ctx, &aot_mem) && ctx.pc == 0x0895C8A8u) goto L_0895C8A8;
    return;
L_0895C8A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) > 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0895C914;
      }
      goto L_0895C8B0;
    }
L_0895C8B0:
    if (static_cast<std::int32_t>(ctx.gpr[18]) < 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
        goto L_0895C980;
    }
    goto L_0895C8B8;
L_0895C8B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0895C8E4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 410u, 0x08845FC0u>(ctx, &aot_mem) && ctx.pc == 0x0895C8E4u) goto L_0895C8E4;
    return;
L_0895C8E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(168)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[21]);
    ctx.gpr[31] = (0x0895C900u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 351u, 0x08845B5Cu>(ctx, &aot_mem) && ctx.pc == 0x0895C900u) goto L_0895C900;
    return;
L_0895C900:
    ctx.gpr[31] = (0x0895C908u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 362u, 0x08845C8Cu>(ctx, &aot_mem) && ctx.pc == 0x0895C908u) goto L_0895C908;
    return;
L_0895C908:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
      if (branch_taken) {
          goto L_0895C980;
      }
      goto L_0895C910;
    }
L_0895C910:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    goto L_0895C914;
L_0895C914:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0895C92C;
      }
      goto L_0895C91C;
    }
L_0895C91C:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(168)));
        goto L_0895C95C;
    }
    goto L_0895C924;
L_0895C924:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
      if (branch_taken) {
          goto L_0895C980;
      }
      goto L_0895C92C;
    }
L_0895C92C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(168)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[21]);
    ctx.gpr[31] = (0x0895C948u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 351u, 0x08845B5Cu>(ctx, &aot_mem) && ctx.pc == 0x0895C948u) goto L_0895C948;
    return;
L_0895C948:
    ctx.gpr[31] = (0x0895C950u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 362u, 0x08845C8Cu>(ctx, &aot_mem) && ctx.pc == 0x0895C950u) goto L_0895C950;
    return;
L_0895C950:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
      if (branch_taken) {
          goto L_0895C980;
      }
      goto L_0895C958;
    }
L_0895C958:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(168)));
    goto L_0895C95C;
L_0895C95C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[21]);
    ctx.gpr[31] = (0x0895C974u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 351u, 0x08845B5Cu>(ctx, &aot_mem) && ctx.pc == 0x0895C974u) goto L_0895C974;
    return;
L_0895C974:
    ctx.gpr[31] = (0x0895C97Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 362u, 0x08845C8Cu>(ctx, &aot_mem) && ctx.pc == 0x0895C97Cu) goto L_0895C97C;
    return;
L_0895C97C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    goto L_0895C980;
L_0895C980:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0895C83C;
      }
      goto L_0895C990;
    }
L_0895C990:
    ctx.gpr[5] = (16256u << 16u);
    goto L_0895C994;
L_0895C994:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C9A0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 412u, 0x08845FF8u>(ctx, &aot_mem) && ctx.pc == 0x0895C9A0u) goto L_0895C9A0;
    return;
L_0895C9A0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(492)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895C9D8:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28528)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28532), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895C9EC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895CA18;
      }
      goto L_0895C9F8;
    }
L_0895C9F8:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[2] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2192));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    goto L_0895CA18;
L_0895CA18:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895CA20:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0895CA50;
      }
      goto L_0895CA2C;
    }
L_0895CA2C:
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2224u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14744));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(232)));
    goto L_0895CA50;
L_0895CA50:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895CA70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0895CA80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 274u, 0x08955500u>(ctx, &aot_mem) && ctx.pc == 0x0895CA80u) goto L_0895CA80;
    return;
L_0895CA80:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895CA8C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28656)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28660), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895CAA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0895CAB0u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x0895CAB0u) goto L_0895CAB0;
    return;
L_0895CAB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_0895CAC4;
      }
      goto L_0895CAB8;
    }
L_0895CAB8:
    ctx.gpr[31] = (0x0895CAC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 57u, 0x08964478u>(ctx, &aot_mem) && ctx.pc == 0x0895CAC0u) goto L_0895CAC0;
    return;
L_0895CAC0:
    ctx.gpr[4] = (2222u << 16u);
    goto L_0895CAC4;
L_0895CAC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 156u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0895CAD8u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895CAD8u) goto L_0895CAD8;
    return;
L_0895CAD8:
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28672), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0895CAF0u);
    ctx.gpr[6] = (0u | 156u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0895CAF0u) goto L_0895CAF0;
    return;
L_0895CAF0:
    ctx.gpr[31] = (0x0895CAF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 9u, 0x089640D8u>(ctx, &aot_mem) && ctx.pc == 0x0895CAF8u) goto L_0895CAF8;
    return;
L_0895CAF8:
    ctx.gpr[31] = (0x0895CB00u);
    // nop
    goto L_0895E528;
L_0895CB00:
    ctx.gpr[31] = (0x0895CB08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 208u, 0x089613E8u>(ctx, &aot_mem) && ctx.pc == 0x0895CB08u) goto L_0895CB08;
    return;
L_0895CB08:
    ctx.gpr[31] = (0x0895CB10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 288u, 0x08962590u>(ctx, &aot_mem) && ctx.pc == 0x0895CB10u) goto L_0895CB10;
    return;
L_0895CB10:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895CB1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0895CB34u);
    // nop
    goto L_0895CDD0;
L_0895CB34:
    ctx.gpr[31] = (0x0895CB3Cu);
    // nop
    goto L_0895D420;
L_0895CB3C:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0895CB58u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895CB58u) goto L_0895CB58;
    return;
L_0895CB58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(152), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0895CB70u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895CB70u) goto L_0895CB70;
    return;
L_0895CB70:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28672), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895CB88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[8] = (0u | 128u);
    ctx.gpr[6] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0895CC50;
      }
      goto L_0895CBC0;
    }
L_0895CBC0:
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_0895CBE0;
    }
    goto L_0895CBC8;
L_0895CBC8:
    ctx.gpr[31] = (0x0895CBD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 410u, 0x08963C14u>(ctx, &aot_mem) && ctx.pc == 0x0895CBD0u) goto L_0895CBD0;
    return;
L_0895CBD0:
    ctx.gpr[31] = (0x0895CBD8u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 358u, 0x0883AC84u>(ctx, &aot_mem) && ctx.pc == 0x0895CBD8u) goto L_0895CBD8;
    return;
L_0895CBD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CD80;
      }
      goto L_0895CBE0;
    }
L_0895CBE0:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[8] = (0u | 1u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
        goto L_0895CBF4;
    }
    goto L_0895CBF4;
L_0895CBF4:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CC34;
      }
      goto L_0895CC04;
    }
L_0895CC04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    goto L_0895CC08;
L_0895CC08:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4556)));
    if (ctx.gpr[9] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
        goto L_0895CC28;
    }
    goto L_0895CC14;
L_0895CC14:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
        goto L_0895CC28;
    }
    goto L_0895CC20;
L_0895CC20:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_0895CC28;
L_0895CC28:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4560));
      if (branch_taken) {
          goto L_0895CC08;
      }
      goto L_0895CC34;
    }
L_0895CC34:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0895CD80;
      }
      goto L_0895CC3C;
    }
L_0895CC3C:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[31] = (0x0895CC48u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 358u, 0x0883AC84u>(ctx, &aot_mem) && ctx.pc == 0x0895CC48u) goto L_0895CC48;
    return;
L_0895CC48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CD80;
      }
      goto L_0895CC50;
    }
L_0895CC50:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(124));
      if (branch_taken) {
          goto L_0895CD80;
      }
      goto L_0895CC58;
    }
L_0895CC58:
    ctx.gpr[31] = (0x0895CC60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 158u, 0x0884CA28u>(ctx, &aot_mem) && ctx.pc == 0x0895CC60u) goto L_0895CC60;
    return;
L_0895CC60:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[16] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28672)));
      if (branch_taken) {
          goto L_0895CCB8;
      }
      goto L_0895CC70;
    }
L_0895CC70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(4560));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4532)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4536)));
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0895CD80;
      }
      goto L_0895CCA4;
    }
L_0895CCA4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4536), ctx.gpr[4]);
    ctx.gpr[31] = (0x0895CCB0u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 358u, 0x0883AC84u>(ctx, &aot_mem) && ctx.pc == 0x0895CCB0u) goto L_0895CCB0;
    return;
L_0895CCB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CD80;
      }
      goto L_0895CCB8;
    }
L_0895CCB8:
    ctx.gpr[5] = (ctx.gpr[16] & 4u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_0895CCFC;
    }
    goto L_0895CCC4;
L_0895CCC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(4560));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4536)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0895CD80;
      }
      goto L_0895CCE8;
    }
L_0895CCE8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4536), ctx.gpr[5]);
    ctx.gpr[31] = (0x0895CCF4u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 358u, 0x0883AC84u>(ctx, &aot_mem) && ctx.pc == 0x0895CCF4u) goto L_0895CCF4;
    return;
L_0895CCF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CD80;
      }
      goto L_0895CCFC;
    }
L_0895CCFC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[16] & 2u);
      if (branch_taken) {
          goto L_0895CD80;
      }
      goto L_0895CD04;
    }
L_0895CD04:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_0895CD48;
      }
      goto L_0895CD0C;
    }
L_0895CD0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0895CD38;
      }
      goto L_0895CD1C;
    }
L_0895CD1C:
    ctx.gpr[31] = (0x0895CD24u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 358u, 0x0883AC84u>(ctx, &aot_mem) && ctx.pc == 0x0895CD24u) goto L_0895CD24;
    return;
L_0895CD24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28672)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(140), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28672)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(144), 0u);
      if (branch_taken) {
          goto L_0895CD80;
      }
      goto L_0895CD38;
    }
L_0895CD38:
    ctx.gpr[31] = (0x0895CD40u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 358u, 0x0883AC84u>(ctx, &aot_mem) && ctx.pc == 0x0895CD40u) goto L_0895CD40;
    return;
L_0895CD40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CD80;
      }
      goto L_0895CD48;
    }
L_0895CD48:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CD80;
      }
      goto L_0895CD50;
    }
L_0895CD50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CD78;
      }
      goto L_0895CD5C;
    }
L_0895CD5C:
    ctx.gpr[31] = (0x0895CD64u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 358u, 0x0883AC84u>(ctx, &aot_mem) && ctx.pc == 0x0895CD64u) goto L_0895CD64;
    return;
L_0895CD64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28672)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(140), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28672)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(144), 0u);
      if (branch_taken) {
          goto L_0895CD80;
      }
      goto L_0895CD78;
    }
L_0895CD78:
    ctx.gpr[31] = (0x0895CD80u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 358u, 0x0883AC84u>(ctx, &aot_mem) && ctx.pc == 0x0895CD80u) goto L_0895CD80;
    return;
L_0895CD80:
    ctx.gpr[31] = (0x0895CD88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 265u, 0x08962214u>(ctx, &aot_mem) && ctx.pc == 0x0895CD88u) goto L_0895CD88;
    return;
L_0895CD88:
    ctx.gpr[31] = (0x0895CD90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 364u, 0x089638D8u>(ctx, &aot_mem) && ctx.pc == 0x0895CD90u) goto L_0895CD90;
    return;
L_0895CD90:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_0895CDAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0895CDBCu);
    // nop
    goto L_0895D020;
L_0895CDBC:
    ctx.gpr[31] = (0x0895CDC4u);
    // nop
    goto L_0895D2A0;
L_0895CDC4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895CDD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x0895CE04u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0895CE04u) goto L_0895CE04;
    return;
L_0895CE04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (0x0895CE14u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0895CE14u) goto L_0895CE14;
    return;
L_0895CE14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (0x0895CE24u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0895CE24u) goto L_0895CE24;
    return;
L_0895CE24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (0x0895CE34u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 474u, 0x0883B820u>(ctx, &aot_mem) && ctx.pc == 0x0895CE34u) goto L_0895CE34;
    return;
L_0895CE34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (0x0895CE44u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0895CE44u) goto L_0895CE44;
    return;
L_0895CE44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (0x0895CE54u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(460));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0895CE54u) goto L_0895CE54;
    return;
L_0895CE54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0895CE6Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895CE6Cu) goto L_0895CE6C;
    return;
L_0895CE6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(148), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (0u | 2u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[18] = (0u | 1u);
        goto L_0895CE84;
    }
    goto L_0895CE84;
L_0895CE84:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0895CFF8;
      }
      goto L_0895CE94;
    }
L_0895CE94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[31] = (0x0895CEA4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4544)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0895CEA4u) goto L_0895CEA4;
    return;
L_0895CEA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4544)));
    ctx.gpr[31] = (0x0895CEBCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0895CEBCu) goto L_0895CEBC;
    return;
L_0895CEBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4544)));
    ctx.gpr[31] = (0x0895CED4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 504u, 0x0883BD64u>(ctx, &aot_mem) && ctx.pc == 0x0895CED4u) goto L_0895CED4;
    return;
L_0895CED4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4544)));
    ctx.gpr[31] = (0x0895CEECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0895CEECu) goto L_0895CEEC;
    return;
L_0895CEEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4544)));
    ctx.gpr[31] = (0x0895CF04u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 485u, 0x0883BBF8u>(ctx, &aot_mem) && ctx.pc == 0x0895CF04u) goto L_0895CF04;
    return;
L_0895CF04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4544)));
    ctx.gpr[31] = (0x0895CF1Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(460));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0895CF1Cu) goto L_0895CF1C;
    return;
L_0895CF1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4544)));
      if (branch_taken) {
          goto L_0895CF70;
      }
      goto L_0895CF3C;
    }
L_0895CF3C:
    ctx.gpr[22] = (0u | 0u);
    goto L_0895CF40;
L_0895CF40:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[31] = (0x0895CF4Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(552));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0895CF4Cu) goto L_0895CF4C;
    return;
L_0895CF4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(92));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4544)));
      if (branch_taken) {
          goto L_0895CF40;
      }
      goto L_0895CF70;
    }
L_0895CF70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0895CF80u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895CF80u) goto L_0895CF80;
    return;
L_0895CF80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4544), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 68 ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_0895CFEC;
    }
    goto L_0895CFA8;
L_0895CFA8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4556)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_0895CFEC;
    }
    goto L_0895CFB4;
L_0895CFB4:
    ctx.gpr[31] = (0x0895CFBCu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 405u, 0x0883F740u>(ctx, &aot_mem) && ctx.pc == 0x0895CFBCu) goto L_0895CFBC;
    return;
L_0895CFBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0895CFD8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4556)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895CFD8u) goto L_0895CFD8;
    return;
L_0895CFD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4556), 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0895CFEC;
L_0895CFEC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4560));
      if (branch_taken) {
          goto L_0895CE94;
      }
      goto L_0895CFF8;
    }
L_0895CFF8:
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
L_0895D020:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_0895D060;
    }
    goto L_0895D03C;
L_0895D03C:
    ctx.gpr[31] = (0x0895D044u);
    // nop
    goto L_0895D11C;
L_0895D044:
    ctx.gpr[31] = (0x0895D04Cu);
    ctx.gpr[4] = (0u | 0u);
    goto L_0895D140;
L_0895D04C:
    ctx.gpr[31] = (0x0895D054u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0895D684;
L_0895D054:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895D060:
    ctx.gpr[7] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0895D0E8;
      }
      goto L_0895D06C;
    }
L_0895D06C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895D0AC;
      }
      goto L_0895D078;
    }
L_0895D078:
    ctx.gpr[31] = (0x0895D080u);
    ctx.gpr[4] = (0u | 1u);
    goto L_0895D140;
L_0895D080:
    ctx.gpr[31] = (0x0895D088u);
    ctx.gpr[4] = (0u | 1u);
    goto L_0895D684;
L_0895D088:
    ctx.gpr[31] = (0x0895D090u);
    // nop
    goto L_0895D11C;
L_0895D090:
    ctx.gpr[31] = (0x0895D098u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0895D140;
L_0895D098:
    ctx.gpr[31] = (0x0895D0A0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0895D684;
L_0895D0A0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895D0AC:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0895D110;
      }
      goto L_0895D0B4;
    }
L_0895D0B4:
    ctx.gpr[31] = (0x0895D0BCu);
    ctx.gpr[4] = (0u | 0u);
    goto L_0895D140;
L_0895D0BC:
    ctx.gpr[31] = (0x0895D0C4u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0895D684;
L_0895D0C4:
    ctx.gpr[31] = (0x0895D0CCu);
    // nop
    goto L_0895D11C;
L_0895D0CC:
    ctx.gpr[31] = (0x0895D0D4u);
    ctx.gpr[4] = (0u | 1u);
    goto L_0895D140;
L_0895D0D4:
    ctx.gpr[31] = (0x0895D0DCu);
    ctx.gpr[4] = (0u | 1u);
    goto L_0895D684;
L_0895D0DC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895D0E8:
    ctx.gpr[31] = (0x0895D0F0u);
    // nop
    goto L_0895D11C;
L_0895D0F0:
    ctx.gpr[31] = (0x0895D0F8u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0895D140;
L_0895D0F8:
    ctx.gpr[31] = (0x0895D100u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0895D684;
L_0895D100:
    ctx.gpr[31] = (0x0895D108u);
    ctx.gpr[4] = (0u | 1u);
    goto L_0895D140;
L_0895D108:
    ctx.gpr[31] = (0x0895D110u);
    ctx.gpr[4] = (0u | 1u);
    goto L_0895D684;
L_0895D110:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895D11C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28672)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0895D134u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0895D134u) goto L_0895D134;
    return;
L_0895D134:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895D140:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(4560));
      if (branch_taken) {
          goto L_0895D180;
      }
      goto L_0895D170;
    }
L_0895D170:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895D284;
      }
      goto L_0895D17C;
    }
L_0895D17C:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(4560));
    goto L_0895D180;
L_0895D180:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[17] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x0895D198u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4544)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0895D198u) goto L_0895D198;
    return;
L_0895D198:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4544)));
    ctx.gpr[31] = (0x0895D1B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0895D1B0u) goto L_0895D1B0;
    return;
L_0895D1B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4544)));
    ctx.gpr[31] = (0x0895D1C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 516u, 0x0883BDF0u>(ctx, &aot_mem) && ctx.pc == 0x0895D1C8u) goto L_0895D1C8;
    return;
L_0895D1C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4544)));
    ctx.gpr[31] = (0x0895D1E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0895D1E0u) goto L_0895D1E0;
    return;
L_0895D1E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4544)));
    ctx.gpr[31] = (0x0895D1F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 492u, 0x0883BC58u>(ctx, &aot_mem) && ctx.pc == 0x0895D1F8u) goto L_0895D1F8;
    return;
L_0895D1F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4544)));
    ctx.gpr[31] = (0x0895D210u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(460));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0895D210u) goto L_0895D210;
    return;
L_0895D210:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_0895D260;
      }
      goto L_0895D22C;
    }
L_0895D22C:
    ctx.gpr[19] = (0u | 0u);
    goto L_0895D230;
L_0895D230:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4544)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[31] = (0x0895D240u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(552));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0895D240u) goto L_0895D240;
    return;
L_0895D240:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_0895D230;
      }
      goto L_0895D260;
    }
L_0895D260:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 68 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D284;
      }
      goto L_0895D270;
    }
L_0895D270:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4556)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D284;
      }
      goto L_0895D27C;
    }
L_0895D27C:
    ctx.gpr[31] = (0x0895D284u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 416u, 0x0883F7F4u>(ctx, &aot_mem) && ctx.pc == 0x0895D284u) goto L_0895D284;
    return;
L_0895D284:
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
L_0895D2A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28672)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0895D2C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0895D2C8u) goto L_0895D2C8;
    return;
L_0895D2C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (0x0895D2D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0895D2D8u) goto L_0895D2D8;
    return;
L_0895D2D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (0x0895D2E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 478u, 0x0883B858u>(ctx, &aot_mem) && ctx.pc == 0x0895D2E8u) goto L_0895D2E8;
    return;
L_0895D2E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[16] = (0u | 7u);
      if (branch_taken) {
          goto L_0895D338;
      }
      goto L_0895D2FC;
    }
L_0895D2FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_0895D33C;
    }
    goto L_0895D308;
L_0895D308:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (0x0895D314u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(460));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0895D314u) goto L_0895D314;
    return;
L_0895D314:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[6] == ctx.gpr[5]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_0895D33C;
    }
    goto L_0895D328;
L_0895D328:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (0x0895D334u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0895D334u) goto L_0895D334;
    return;
L_0895D334:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28672)));
    goto L_0895D338;
L_0895D338:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_0895D33C;
L_0895D33C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    ctx.gpr[6] = (0u | 6u);
      if (branch_taken) {
          goto L_0895D394;
      }
      goto L_0895D344;
    }
L_0895D344:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u | 6u);
      if (branch_taken) {
          goto L_0895D394;
      }
      goto L_0895D350;
    }
L_0895D350:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 2u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_0895D374;
    }
    goto L_0895D360;
L_0895D360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (0x0895D36Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0895D36Cu) goto L_0895D36C;
    return;
L_0895D36C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_0895D374;
L_0895D374:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 31 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0895D38C;
      }
      goto L_0895D380;
    }
L_0895D380:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_0895D408;
      }
      goto L_0895D38C;
    }
L_0895D38C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0895D408;
      }
      goto L_0895D394;
    }
L_0895D394:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0895D408;
      }
      goto L_0895D39C;
    }
L_0895D39C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[5] == 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
        goto L_0895D408;
    }
    goto L_0895D3A8;
L_0895D3A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 2u);
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_0895D3C0;
    }
    goto L_0895D3B8;
L_0895D3B8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0895D408;
      }
      goto L_0895D3C0;
    }
L_0895D3C0:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 31 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0895D3E8;
      }
      goto L_0895D3CC;
    }
L_0895D3CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (0x0895D3D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0895D3D8u) goto L_0895D3D8;
    return;
L_0895D3D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28672)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_0895D408;
      }
      goto L_0895D3E8;
    }
L_0895D3E8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 31 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895D408;
      }
      goto L_0895D3F8;
    }
L_0895D3F8:
    ctx.gpr[31] = (0x0895D400u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 358u, 0x0883AC84u>(ctx, &aot_mem) && ctx.pc == 0x0895D400u) goto L_0895D400;
    return;
L_0895D400:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D408;
      }
      goto L_0895D408;
    }
L_0895D408:
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
L_0895D420:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[16] = (0u | 1u);
        goto L_0895D45C;
    }
    goto L_0895D45C;
L_0895D45C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0895D65C;
      }
      goto L_0895D46C;
    }
L_0895D46C:
    ctx.gpr[22] = (2222u << 16u);
    goto L_0895D470;
L_0895D470:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[31] = (0x0895D480u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0895D480u) goto L_0895D480;
    return;
L_0895D480:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[31] = (0x0895D498u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(180));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0895D498u) goto L_0895D498;
    return;
L_0895D498:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[31] = (0x0895D4B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0895D4B0u) goto L_0895D4B0;
    return;
L_0895D4B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[31] = (0x0895D4C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(540));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0895D4C8u) goto L_0895D4C8;
    return;
L_0895D4C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[31] = (0x0895D4E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(720));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0895D4E0u) goto L_0895D4E0;
    return;
L_0895D4E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[31] = (0x0895D4F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(900));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0895D4F8u) goto L_0895D4F8;
    return;
L_0895D4F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[31] = (0x0895D510u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1080));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0895D510u) goto L_0895D510;
    return;
L_0895D510:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[31] = (0x0895D528u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1260));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0895D528u) goto L_0895D528;
    return;
L_0895D528:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[31] = (0x0895D540u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1440));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0895D540u) goto L_0895D540;
    return;
L_0895D540:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[31] = (0x0895D558u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1620));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0895D558u) goto L_0895D558;
    return;
L_0895D558:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[31] = (0x0895D570u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1800));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0895D570u) goto L_0895D570;
    return;
L_0895D570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
      if (branch_taken) {
          goto L_0895D5E0;
      }
      goto L_0895D590;
    }
L_0895D590:
    ctx.gpr[21] = (0u | 0u);
    goto L_0895D594;
L_0895D594:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[31] = (0x0895D5A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1980));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0895D5A0u) goto L_0895D5A0;
    return;
L_0895D5A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[31] = (0x0895D5BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3240));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0895D5BCu) goto L_0895D5BC;
    return;
L_0895D5BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(180));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
      if (branch_taken) {
          goto L_0895D594;
      }
      goto L_0895D5E0;
    }
L_0895D5E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0895D5F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895D5F0u) goto L_0895D5F0;
    return;
L_0895D5F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4548), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 68 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_0895D650;
    }
    goto L_0895D618;
L_0895D618:
    ctx.gpr[31] = (0x0895D620u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4552)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0895D620u) goto L_0895D620;
    return;
L_0895D620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0895D63Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4552)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895D63Cu) goto L_0895D63C;
    return;
L_0895D63C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4552), 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0895D650;
L_0895D650:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4560));
      if (branch_taken) {
          goto L_0895D470;
      }
      goto L_0895D65C;
    }
L_0895D65C:
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
L_0895D684:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(4560));
      if (branch_taken) {
          goto L_0895D6C8;
      }
      goto L_0895D6B8;
    }
L_0895D6B8:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895D868;
      }
      goto L_0895D6C4;
    }
L_0895D6C4:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(4560));
    goto L_0895D6C8;
L_0895D6C8:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[17] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x0895D6E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0895D6E0u) goto L_0895D6E0;
    return;
L_0895D6E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[31] = (0x0895D6F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1080));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0895D6F8u) goto L_0895D6F8;
    return;
L_0895D6F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[31] = (0x0895D710u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(180));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0895D710u) goto L_0895D710;
    return;
L_0895D710:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[31] = (0x0895D728u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1260));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0895D728u) goto L_0895D728;
    return;
L_0895D728:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[31] = (0x0895D740u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0895D740u) goto L_0895D740;
    return;
L_0895D740:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[31] = (0x0895D758u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1440));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0895D758u) goto L_0895D758;
    return;
L_0895D758:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
      if (branch_taken) {
          goto L_0895D7A0;
      }
      goto L_0895D770;
    }
L_0895D770:
    ctx.gpr[31] = (0x0895D778u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(540));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0895D778u) goto L_0895D778;
    return;
L_0895D778:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[31] = (0x0895D790u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1620));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0895D790u) goto L_0895D790;
    return;
L_0895D790:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    goto L_0895D7A0;
L_0895D7A0:
    ctx.gpr[31] = (0x0895D7A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(720));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0895D7A8u) goto L_0895D7A8;
    return;
L_0895D7A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[31] = (0x0895D7C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(900));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0895D7C0u) goto L_0895D7C0;
    return;
L_0895D7C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[31] = (0x0895D7D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1800));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0895D7D8u) goto L_0895D7D8;
    return;
L_0895D7D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4532)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
        goto L_0895D7F8;
    }
    goto L_0895D7F8;
L_0895D7F8:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0895D850;
      }
      goto L_0895D808;
    }
L_0895D808:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[31] = (0x0895D818u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1980));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0895D818u) goto L_0895D818;
    return;
L_0895D818:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[31] = (0x0895D834u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3240));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0895D834u) goto L_0895D834;
    return;
L_0895D834:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_0895D808;
      }
      goto L_0895D850;
    }
L_0895D850:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 68 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895D868;
      }
      goto L_0895D860;
    }
L_0895D860:
    ctx.gpr[31] = (0x0895D868u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4552)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0895D868u) goto L_0895D868;
    return;
L_0895D868:
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
L_0895D888:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(4560));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28672)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[18] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x0895D8CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 197u, 0x08A9CA08u>(ctx, &aot_mem) && ctx.pc == 0x0895D8CCu) goto L_0895D8CC;
    return;
L_0895D8CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(152)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_0895D9B0;
      }
      goto L_0895D8EC;
    }
L_0895D8EC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.gpr[16] = (0u | 15u);
      if (branch_taken) {
          goto L_0895D908;
      }
      goto L_0895D8F8;
    }
L_0895D8F8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(152)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[18]);
    goto L_0895D908;
L_0895D908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1112));
    ctx.gpr[31] = (0x0895D91Cu);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0895D91Cu) goto L_0895D91C;
    return;
L_0895D91C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[31] = (0x0895D93Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1112));
    goto L_0895E660;
L_0895D93C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[31] = (0x0895D954u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1080));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x0895D954u) goto L_0895D954;
    return;
L_0895D954:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x0895D968u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 197u, 0x08A9CA08u>(ctx, &aot_mem) && ctx.pc == 0x0895D968u) goto L_0895D968;
    return;
L_0895D968:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[2]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_0895D9A8;
      }
      goto L_0895D978;
    }
L_0895D978:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(152)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[31] = (0x0895D98Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 197u, 0x08A9CA08u>(ctx, &aot_mem) && ctx.pc == 0x0895D98Cu) goto L_0895D98C;
    return;
L_0895D98C:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[16]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0895DA0C;
      }
      goto L_0895D9A8;
    }
L_0895D9A8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0895DA0C;
      }
      goto L_0895D9B0;
    }
L_0895D9B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1112));
    ctx.gpr[31] = (0x0895D9C4u);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0895D9C4u) goto L_0895D9C4;
    return;
L_0895D9C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0895D9E0u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(1112));
    goto L_0895E660;
L_0895D9E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[31] = (0x0895D9F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1080));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x0895D9F8u) goto L_0895D9F8;
    return;
L_0895D9F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    goto L_0895DA0C;
L_0895DA0C:
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
L_0895DA2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(4560));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[16] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x0895DA70u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 197u, 0x08A9CA08u>(ctx, &aot_mem) && ctx.pc == 0x0895DA70u) goto L_0895DA70;
    return;
L_0895DA70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[19] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(152)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0895DB54;
      }
      goto L_0895DA90;
    }
L_0895DA90:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.gpr[18] = (0u | 15u);
      if (branch_taken) {
          goto L_0895DAAC;
      }
      goto L_0895DA9C;
    }
L_0895DA9C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(152)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[16]);
    goto L_0895DAAC;
L_0895DAAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1292));
    ctx.gpr[31] = (0x0895DAC0u);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0895DAC0u) goto L_0895DAC0;
    return;
L_0895DAC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[31] = (0x0895DAE0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1292));
    goto L_0895E660;
L_0895DAE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[31] = (0x0895DAF8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1260));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x0895DAF8u) goto L_0895DAF8;
    return;
L_0895DAF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x0895DB0Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 197u, 0x08A9CA08u>(ctx, &aot_mem) && ctx.pc == 0x0895DB0Cu) goto L_0895DB0C;
    return;
L_0895DB0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[2]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_0895DB4C;
      }
      goto L_0895DB1C;
    }
L_0895DB1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(152)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[31] = (0x0895DB30u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 197u, 0x08A9CA08u>(ctx, &aot_mem) && ctx.pc == 0x0895DB30u) goto L_0895DB30;
    return;
L_0895DB30:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0895DBD0;
      }
      goto L_0895DB4C;
    }
L_0895DB4C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
      if (branch_taken) {
          goto L_0895DBD0;
      }
      goto L_0895DB54;
    }
L_0895DB54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1292));
    ctx.gpr[31] = (0x0895DB68u);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0895DB68u) goto L_0895DB68;
    return;
L_0895DB68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x0895DB84u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(1292));
    goto L_0895E660;
L_0895DB84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[31] = (0x0895DB9Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1260));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x0895DB9Cu) goto L_0895DB9C;
    return;
L_0895DB9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[5] == ctx.gpr[18]) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
        goto L_0895DBD0;
    }
    goto L_0895DBB8;
L_0895DBB8:
    ctx.gpr[31] = (0x0895DBC0u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 358u, 0x0883AC84u>(ctx, &aot_mem) && ctx.pc == 0x0895DBC0u) goto L_0895DBC0;
    return;
L_0895DBC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    goto L_0895DBD0;
L_0895DBD0:
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
L_0895DBF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(4560));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(152)));
    ctx.gpr[18] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[19] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[22] = (2220u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(17956));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[23] = (2221u << 16u);
      if (branch_taken) {
          goto L_0895DC74;
      }
      goto L_0895DC68;
    }
L_0895DC68:
    ctx.gpr[6] = (0u | 100u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[16] = (ctx.lo);
    goto L_0895DC74;
L_0895DC74:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_0895DD54;
      }
      goto L_0895DC80;
    }
L_0895DC80:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0895DC90u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0895DC90u) goto L_0895DC90;
    return;
L_0895DC90:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0895DCA0u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0895DCA0u) goto L_0895DCA0;
    return;
L_0895DCA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[31] = (0x0895DCB4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_0895E660;
L_0895DCB4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(28860)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0895DCC8u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0895DCC8u) goto L_0895DCC8;
    return;
L_0895DCC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[31] = (0x0895DCE8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1472));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0895DCE8u) goto L_0895DCE8;
    return;
L_0895DCE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[31] = (0x0895DD04u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1472));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0895DD04u) goto L_0895DD04;
    return;
L_0895DD04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[31] = (0x0895DD1Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1440));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x0895DD1Cu) goto L_0895DD1C;
    return;
L_0895DD1C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 16 ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0895DD48;
      }
      goto L_0895DD30;
    }
L_0895DD30:
    ctx.gpr[5] = (0u | 15u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[16]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0895DE18;
      }
      goto L_0895DD48;
    }
L_0895DD48:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0895DE18;
      }
      goto L_0895DD54;
    }
L_0895DD54:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0895DD60u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0895DD60u) goto L_0895DD60;
    return;
L_0895DD60:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0895DD70u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0895DD70u) goto L_0895DD70;
    return;
L_0895DD70:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895DD7Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_0895E660;
L_0895DD7C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(28860)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0895DD90u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0895DD90u) goto L_0895DD90;
    return;
L_0895DD90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[31] = (0x0895DDB0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1472));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0895DDB0u) goto L_0895DDB0;
    return;
L_0895DDB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[31] = (0x0895DDCCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1472));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0895DDCCu) goto L_0895DDCC;
    return;
L_0895DDCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[31] = (0x0895DDE4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1440));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x0895DDE4u) goto L_0895DDE4;
    return;
L_0895DDE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[5] == ctx.gpr[16]) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
        goto L_0895DE18;
    }
    goto L_0895DE00;
L_0895DE00:
    ctx.gpr[31] = (0x0895DE08u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 358u, 0x0883AC84u>(ctx, &aot_mem) && ctx.pc == 0x0895DE08u) goto L_0895DE08;
    return;
L_0895DE08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    goto L_0895DE18;
L_0895DE18:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895DE44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(4560));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_0895E0A0;
      }
      goto L_0895DE94;
    }
L_0895DE94:
    ctx.gpr[31] = (0x0895DE9Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 197u, 0x08A9CA08u>(ctx, &aot_mem) && ctx.pc == 0x0895DE9Cu) goto L_0895DE9C;
    return;
L_0895DE9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[16] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[21] = (2220u << 16u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(17956));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[22] = (2221u << 16u);
      if (branch_taken) {
          goto L_0895DFDC;
      }
      goto L_0895DEC8;
    }
L_0895DEC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[23] = (0u | 15u);
      if (branch_taken) {
          goto L_0895DEE4;
      }
      goto L_0895DEDC;
    }
L_0895DEDC:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0895DEE4;
L_0895DEE4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0895DEF4u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0895DEF4u) goto L_0895DEF4;
    return;
L_0895DEF4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0895DF04u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0895DF04u) goto L_0895DF04;
    return;
L_0895DF04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x0895DF18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_0895E660;
L_0895DF18:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(28860)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0895DF2Cu);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0895DF2Cu) goto L_0895DF2C;
    return;
L_0895DF2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[31] = (0x0895DF4Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1652));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0895DF4Cu) goto L_0895DF4C;
    return;
L_0895DF4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[31] = (0x0895DF68u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1652));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0895DF68u) goto L_0895DF68;
    return;
L_0895DF68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[31] = (0x0895DF80u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1620));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x0895DF80u) goto L_0895DF80;
    return;
L_0895DF80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x0895DF94u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 197u, 0x08A9CA08u>(ctx, &aot_mem) && ctx.pc == 0x0895DF94u) goto L_0895DF94;
    return;
L_0895DF94:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[2]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0895DFD4;
      }
      goto L_0895DFA4;
    }
L_0895DFA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(152)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[31] = (0x0895DFB8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 197u, 0x08A9CA08u>(ctx, &aot_mem) && ctx.pc == 0x0895DFB8u) goto L_0895DFB8;
    return;
L_0895DFB8:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0895E0A8;
      }
      goto L_0895DFD4;
    }
L_0895DFD4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[23]);
      if (branch_taken) {
          goto L_0895E0A8;
      }
      goto L_0895DFDC;
    }
L_0895DFDC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0895DFECu);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0895DFECu) goto L_0895DFEC;
    return;
L_0895DFEC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0895DFFCu);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0895DFFCu) goto L_0895DFFC;
    return;
L_0895DFFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x0895E014u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_0895E660;
L_0895E014:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(28860)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0895E028u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0895E028u) goto L_0895E028;
    return;
L_0895E028:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[31] = (0x0895E048u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1652));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0895E048u) goto L_0895E048;
    return;
L_0895E048:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[31] = (0x0895E064u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1652));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0895E064u) goto L_0895E064;
    return;
L_0895E064:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[31] = (0x0895E07Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1620));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x0895E07Cu) goto L_0895E07C;
    return;
L_0895E07C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[31] = (0x0895E098u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 358u, 0x0883AC84u>(ctx, &aot_mem) && ctx.pc == 0x0895E098u) goto L_0895E098;
    return;
L_0895E098:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E0A8;
      }
      goto L_0895E0A0;
    }
L_0895E0A0:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    goto L_0895E0A8;
L_0895E0A8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895E0D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 20 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0895E250;
      }
      goto L_0895E11C;
    }
L_0895E11C:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[6]);
      if (branch_taken) {
          goto L_0895E234;
      }
      goto L_0895E12C;
    }
L_0895E12C:
    ctx.gpr[23] = (2220u << 16u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[30] = (0u | 100u);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(17956));
    ctx.gpr[22] = (2221u << 16u);
    goto L_0895E14C;
L_0895E14C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0895E15Cu);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0895E15Cu) goto L_0895E15C;
    return;
L_0895E15C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0895E16Cu);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0895E16Cu) goto L_0895E16C;
    return;
L_0895E16C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[30]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895E198;
      }
      goto L_0895E190;
    }
L_0895E190:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_0895E198;
L_0895E198:
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.gpr[4] = (0u | 0u);
        goto L_0895E1A0;
    }
    goto L_0895E1A0;
L_0895E1A0:
    ctx.gpr[31] = (0x0895E1A8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_0895E660;
L_0895E1A8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(28860)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0895E1BCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0895E1BCu) goto L_0895E1BC;
    return;
L_0895E1BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[31] = (0x0895E1DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1832));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0895E1DCu) goto L_0895E1DC;
    return;
L_0895E1DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[31] = (0x0895E1F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1832));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0895E1F8u) goto L_0895E1F8;
    return;
L_0895E1F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[31] = (0x0895E210u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1800));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x0895E210u) goto L_0895E210;
    return;
L_0895E210:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[21]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4560));
      if (branch_taken) {
          goto L_0895E14C;
      }
      goto L_0895E234;
    }
L_0895E234:
    ctx.gpr[5] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[31] = (0x0895E248u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 358u, 0x0883AC84u>(ctx, &aot_mem) && ctx.pc == 0x0895E248u) goto L_0895E248;
    return;
L_0895E248:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E254;
      }
      goto L_0895E250;
    }
L_0895E250:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_0895E254;
L_0895E254:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895E284:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(4560));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[17] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4540)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    ctx.gpr[31] = (0x0895E2DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1472)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 197u, 0x08A9CA08u>(ctx, &aot_mem) && ctx.pc == 0x0895E2DCu) goto L_0895E2DC;
    return;
L_0895E2DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[20] = (ctx.gpr[20] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[22] = (ctx.gpr[18] << 5u);
      if (branch_taken) {
          goto L_0895E3E8;
      }
      goto L_0895E2FC;
    }
L_0895E2FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4532)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_0895E3E8;
      }
      goto L_0895E318;
    }
L_0895E318:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1472)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0895E328;
      }
      goto L_0895E324;
    }
L_0895E324:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0895E328;
L_0895E328:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0895E338u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0895E338u) goto L_0895E338;
    return;
L_0895E338:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[31] = (0x0895E34Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_0895E660;
L_0895E34C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[31] = (0x0895E368u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3092));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0895E368u) goto L_0895E368;
    return;
L_0895E368:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[31] = (0x0895E380u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1472)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 197u, 0x08A9CA08u>(ctx, &aot_mem) && ctx.pc == 0x0895E380u) goto L_0895E380;
    return;
L_0895E380:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_0895E3D4;
      }
      goto L_0895E390;
    }
L_0895E390:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[31] = (0x0895E3A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1472)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 197u, 0x08A9CA08u>(ctx, &aot_mem) && ctx.pc == 0x0895E3A8u) goto L_0895E3A8;
    return;
L_0895E3A8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] >> 31u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_0895E4C8;
      }
      goto L_0895E3D4;
    }
L_0895E3D4:
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_0895E4C8;
      }
      goto L_0895E3E8;
    }
L_0895E3E8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0895E3F8u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0895E3F8u) goto L_0895E3F8;
    return;
L_0895E3F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[31] = (0x0895E414u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1472)));
    goto L_0895E660;
L_0895E414:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[31] = (0x0895E430u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3092));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0895E430u) goto L_0895E430;
    return;
L_0895E430:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1652));
    ctx.gpr[31] = (0x0895E44Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0895E44Cu) goto L_0895E44C;
    return;
L_0895E44C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4532)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(112)));
        goto L_0895E494;
    }
    goto L_0895E474;
L_0895E474:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_0895E4C8;
      }
      goto L_0895E494;
    }
L_0895E494:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E4B4;
      }
      goto L_0895E4A8;
    }
L_0895E4A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4536)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4536), ctx.gpr[5]);
    goto L_0895E4B4;
L_0895E4B4:
    ctx.gpr[31] = (0x0895E4BCu);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 358u, 0x0883AC84u>(ctx, &aot_mem) && ctx.pc == 0x0895E4BCu) goto L_0895E4BC;
    return;
L_0895E4BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[17]);
    goto L_0895E4C8;
L_0895E4C8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4540), ctx.gpr[18]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895E4F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (0u | 0u);
        goto L_0895E514;
    }
    goto L_0895E514;
L_0895E514:
    ctx.gpr[31] = (0x0895E51Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 187u, 0x08934DF0u>(ctx, &aot_mem) && ctx.pc == 0x0895E51Cu) goto L_0895E51C;
    return;
L_0895E51C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895E528:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_0895E578;
      }
      goto L_0895E550;
    }
L_0895E550:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (0u | 100u);
      if (branch_taken) {
          goto L_0895E56C;
      }
      goto L_0895E564;
    }
L_0895E564:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[16] = (ctx.lo);
    goto L_0895E56C;
L_0895E56C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_0895E640;
      }
      goto L_0895E578;
    }
L_0895E578:
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 3u);
      if (branch_taken) {
          goto L_0895E5B8;
      }
      goto L_0895E584;
    }
L_0895E584:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 68 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895E640;
      }
      goto L_0895E598;
    }
L_0895E598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 100u);
      if (branch_taken) {
          goto L_0895E640;
      }
      goto L_0895E5A8;
    }
L_0895E5A8:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[16] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E640;
      }
      goto L_0895E5B8;
    }
L_0895E5B8:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0895E640;
      }
      goto L_0895E5C0;
    }
L_0895E5C0:
    ctx.gpr[31] = (0x0895E5C8u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 209u, 0x088BD67Cu>(ctx, &aot_mem) && ctx.pc == 0x0895E5C8u) goto L_0895E5C8;
    return;
L_0895E5C8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(4560));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 68 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895E640;
      }
      goto L_0895E5E8;
    }
L_0895E5E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[31] = (0x0895E5F4u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 209u, 0x088BD67Cu>(ctx, &aot_mem) && ctx.pc == 0x0895E5F4u) goto L_0895E5F4;
    return;
L_0895E5F4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(4560));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895E640;
      }
      goto L_0895E614;
    }
L_0895E614:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[31] = (0x0895E620u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 209u, 0x088BD67Cu>(ctx, &aot_mem) && ctx.pc == 0x0895E620u) goto L_0895E620;
    return;
L_0895E620:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(4560));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (0u | 100u);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[16] = (ctx.lo);
    goto L_0895E640;
L_0895E640:
    ctx.gpr[31] = (0x0895E648u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 542u, 0x088328E8u>(ctx, &aot_mem) && ctx.pc == 0x0895E648u) goto L_0895E648;
    return;
L_0895E648:
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
L_0895E660:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    ctx.gpr[31] = (0x0895E6A8u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0895E6A8u) goto L_0895E6A8;
    return;
L_0895E6A8:
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0895E6BCu);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0895E6BCu) goto L_0895E6BC;
    return;
L_0895E6BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[31] = (0x0895E6CCu);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(17964));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 197u, 0x08A9CA08u>(ctx, &aot_mem) && ctx.pc == 0x0895E6CCu) goto L_0895E6CC;
    return;
L_0895E6CC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895E6DCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0895E6DCu) goto L_0895E6DC;
    return;
L_0895E6DC:
    ctx.gpr[31] = (0x0895E6E4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0895E6E4u) goto L_0895E6E4;
    return;
L_0895E6E4:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_0895E768;
      }
      goto L_0895E6F8;
    }
L_0895E6F8:
    ctx.gpr[16] = (ctx.gpr[29] | 0u);
    ctx.gpr[22] = (2221u << 16u);
    ctx.gpr[23] = (0u | 3u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (ctx.gpr[20] + ctx.gpr[21]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(28860));
    goto L_0895E710;
L_0895E710:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[18]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-1))))));
        goto L_0895E748;
    }
    goto L_0895E720;
L_0895E720:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-1))))));
        goto L_0895E740;
    }
    goto L_0895E728;
L_0895E728:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0895E734u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9E0F4u>(ctx, &aot_mem) && ctx.pc == 0x0895E734u) goto L_0895E734;
    return;
L_0895E734:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-1))))));
    goto L_0895E740;
L_0895E740:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895E74C;
      }
      goto L_0895E748;
    }
L_0895E748:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0895E74C;
L_0895E74C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0895E710;
      }
      goto L_0895E764;
    }
L_0895E764:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_0895E768;
L_0895E768:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0895E774u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0895E774u) goto L_0895E774;
    return;
L_0895E774:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (2221u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28672)));
      if (branch_taken) {
          goto L_0895E794;
      }
      goto L_0895E784;
    }
L_0895E784:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0895E7F4;
      }
      goto L_0895E794;
    }
L_0895E794:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x0895E7A0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0895E7A0u) goto L_0895E7A0;
    return;
L_0895E7A0:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28860));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[30] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0895E7BCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0895E7BCu) goto L_0895E7BC;
    return;
L_0895E7BC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0895E82C;
      }
      goto L_0895E7CC;
    }
L_0895E7CC:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    goto L_0895E7D0;
L_0895E7D0:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(15))))));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0895E7D0;
      }
      goto L_0895E7EC;
    }
L_0895E7EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E82C;
      }
      goto L_0895E7F4;
    }
L_0895E7F4:
    ctx.gpr[31] = (0x0895E7FCu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0895E7FCu) goto L_0895E7FC;
    return;
L_0895E7FC:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[30]);
      if (branch_taken) {
          goto L_0895E82C;
      }
      goto L_0895E810;
    }
L_0895E810:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(15))))));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0895E810;
      }
      goto L_0895E82C;
    }
L_0895E82C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895E85C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[18] < static_cast<std::uint32_t>(45) ? 1u : 0u);
    goto L_0895E884;
L_0895E884:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_0895EB5C;
    }
    goto L_0895E88C;
L_0895E88C:
    ctx.gpr[18] = (ctx.gpr[18] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[18]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(18120)));
    jump_target = ctx.gpr[1];
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895E8A4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895E8B4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0895F35C;
L_0895E8B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0895EB58;
      }
      goto L_0895E8BC;
    }
L_0895E8BC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895E8CCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0895F45C;
L_0895E8CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0895EB58;
      }
      goto L_0895E8D4;
    }
L_0895E8D4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895E8E4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0895F570;
L_0895E8E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0895EB58;
      }
      goto L_0895E8EC;
    }
L_0895E8EC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895E8FCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0895F6C0;
L_0895E8FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0895EB58;
      }
      goto L_0895E904;
    }
L_0895E904:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895E914u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0895F800;
L_0895E914:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0895EB58;
      }
      goto L_0895E91C;
    }
L_0895E91C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895E92Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0895F924;
L_0895E92C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0895EB58;
      }
      goto L_0895E934;
    }
L_0895E934:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895E944u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0895FA70;
L_0895E944:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0895EB58;
      }
      goto L_0895E94C;
    }
L_0895E94C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895E95Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0895FBC0;
L_0895E95C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0895EB58;
      }
      goto L_0895E964;
    }
L_0895E964:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895E974u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0895FD10;
L_0895E974:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0895EB58;
      }
      goto L_0895E97C;
    }
L_0895E97C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895E98Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0895FE60;
L_0895E98C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0895EB58;
      }
      goto L_0895E994;
    }
L_0895E994:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895E9A4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0895FF84;
L_0895E9A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0895EB58;
      }
      goto L_0895E9AC;
    }
L_0895E9AC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895E9BCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 12u, 0x089600D4u>(ctx, &aot_mem) && ctx.pc == 0x0895E9BCu) goto L_0895E9BC;
    return;
L_0895E9BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0895EB58;
      }
      goto L_0895E9C4;
    }
L_0895E9C4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895E9D4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 27u, 0x08960224u>(ctx, &aot_mem) && ctx.pc == 0x0895E9D4u) goto L_0895E9D4;
    return;
L_0895E9D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0895EB58;
      }
      goto L_0895E9DC;
    }
L_0895E9DC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895E9ECu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 42u, 0x08960374u>(ctx, &aot_mem) && ctx.pc == 0x0895E9ECu) goto L_0895E9EC;
    return;
L_0895E9EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0895EB58;
      }
      goto L_0895E9F4;
    }
L_0895E9F4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895EA04u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 57u, 0x089604C4u>(ctx, &aot_mem) && ctx.pc == 0x0895EA04u) goto L_0895EA04;
    return;
L_0895EA04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0895EB58;
      }
      goto L_0895EA0C;
    }
L_0895EA0C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895EA1Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 68u, 0x089605BCu>(ctx, &aot_mem) && ctx.pc == 0x0895EA1Cu) goto L_0895EA1C;
    return;
L_0895EA1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0895EB58;
      }
      goto L_0895EA24;
    }
L_0895EA24:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895EA34u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 86u, 0x089607F0u>(ctx, &aot_mem) && ctx.pc == 0x0895EA34u) goto L_0895EA34;
    return;
L_0895EA34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0895EB58;
      }
      goto L_0895EA3C;
    }
L_0895EA3C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895EA4Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 90u, 0x08960898u>(ctx, &aot_mem) && ctx.pc == 0x0895EA4Cu) goto L_0895EA4C;
    return;
L_0895EA4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0895EB58;
      }
      goto L_0895EA54;
    }
L_0895EA54:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895EA64u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 111u, 0x08960A2Cu>(ctx, &aot_mem) && ctx.pc == 0x0895EA64u) goto L_0895EA64;
    return;
L_0895EA64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0895EB58;
      }
      goto L_0895EA6C;
    }
L_0895EA6C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895EA7Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 119u, 0x08960AF8u>(ctx, &aot_mem) && ctx.pc == 0x0895EA7Cu) goto L_0895EA7C;
    return;
L_0895EA7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0895EB58;
      }
      goto L_0895EA84;
    }
L_0895EA84:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895EA94u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 108u, 0x0896479Cu>(ctx, &aot_mem) && ctx.pc == 0x0895EA94u) goto L_0895EA94;
    return;
L_0895EA94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0895EB58;
      }
      goto L_0895EA9C;
    }
L_0895EA9C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895EAACu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 129u, 0x08960BF0u>(ctx, &aot_mem) && ctx.pc == 0x0895EAACu) goto L_0895EAAC;
    return;
L_0895EAAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0895EB58;
      }
      goto L_0895EAB4;
    }
L_0895EAB4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895EAC4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 136u, 0x08960CB0u>(ctx, &aot_mem) && ctx.pc == 0x0895EAC4u) goto L_0895EAC4;
    return;
L_0895EAC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0895EB58;
      }
      goto L_0895EACC;
    }
L_0895EACC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895EADCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 140u, 0x08960D48u>(ctx, &aot_mem) && ctx.pc == 0x0895EADCu) goto L_0895EADC;
    return;
L_0895EADC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0895EB58;
      }
      goto L_0895EAE4;
    }
L_0895EAE4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895EAF4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 153u, 0x08960E6Cu>(ctx, &aot_mem) && ctx.pc == 0x0895EAF4u) goto L_0895EAF4;
    return;
L_0895EAF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0895EB58;
      }
      goto L_0895EAFC;
    }
L_0895EAFC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895EB0Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 168u, 0x08960FBCu>(ctx, &aot_mem) && ctx.pc == 0x0895EB0Cu) goto L_0895EB0C;
    return;
L_0895EB0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0895EB58;
      }
      goto L_0895EB14;
    }
L_0895EB14:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895EB24u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 172u, 0x08961054u>(ctx, &aot_mem) && ctx.pc == 0x0895EB24u) goto L_0895EB24;
    return;
L_0895EB24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0895EB58;
      }
      goto L_0895EB2C;
    }
L_0895EB2C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895EB3Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 185u, 0x0896118Cu>(ctx, &aot_mem) && ctx.pc == 0x0895EB3Cu) goto L_0895EB3C;
    return;
L_0895EB3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0895EB58;
      }
      goto L_0895EB44;
    }
L_0895EB44:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895EB54u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 196u, 0x08961284u>(ctx, &aot_mem) && ctx.pc == 0x0895EB54u) goto L_0895EB54;
    return;
L_0895EB54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_0895EB58;
L_0895EB58:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0895EB5C;
L_0895EB5C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 45 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[18] < static_cast<std::uint32_t>(45) ? 1u : 0u);
      if (branch_taken) {
          goto L_0895E884;
      }
      goto L_0895EB68;
    }
L_0895EB68:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895EB78u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 200u, 0x0896131Cu>(ctx, &aot_mem) && ctx.pc == 0x0895EB78u) goto L_0895EB78;
    return;
L_0895EB78:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(4560));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4532), ctx.gpr[5]);
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
L_0895EBB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1680));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(4560));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1668), ctx.gpr[30]);
    ctx.gpr[30] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(28672)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1664), ctx.gpr[23]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(152)));
    ctx.gpr[23] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1636), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1640), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1644), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1648), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1652), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1656), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1660), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1672), ctx.gpr[31]);
    ctx.gpr[31] = (0x0895EC0Cu);
    ctx.gpr[6] = (0u | 1440u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0895EC0Cu) goto L_0895EC0C;
    return;
L_0895EC0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1456));
    ctx.gpr[6] = (0u | 180u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
    ctx.gpr[31] = (0x0895EC28u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1472));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0895EC28u) goto L_0895EC28;
    return;
L_0895EC28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1440u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[31] = (0x0895EC44u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0895EC44u) goto L_0895EC44;
    return;
L_0895EC44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 180u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[31] = (0x0895EC60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1472));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0895EC60u) goto L_0895EC60;
    return;
L_0895EC60:
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(28676));
    goto L_0895EC74;
L_0895EC74:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (ctx.gpr[29] | 0u);
    goto L_0895EC80;
L_0895EC80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0895EC8Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0895EC8Cu) goto L_0895EC8C;
    return;
L_0895EC8C:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_0895ECD4;
    }
    goto L_0895EC94;
L_0895EC94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x0895ECB0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0895ECB0u) goto L_0895ECB0;
    return;
L_0895ECB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1456)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1472), ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_0895ECD4;
L_0895ECD4:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0895EC80;
      }
      goto L_0895ECE4;
    }
L_0895ECE4:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0895EC74;
      }
      goto L_0895ECF4;
    }
L_0895ECF4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1636)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1640)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1644)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1648)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1652)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1656)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1660)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1664)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1668)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1672)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1680));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895ED24:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[6] = (2224u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1880));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), 0u);
        goto L_0895ED4C;
    }
    goto L_0895ED4C;
L_0895ED4C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0895ED60;
      }
      goto L_0895ED5C;
    }
L_0895ED5C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_0895ED60;
L_0895ED60:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895ED68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[31]);
    ctx.gpr[31] = (0x0895ED84u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x0895ED84u) goto L_0895ED84;
    return;
L_0895ED84:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895EEA0;
      }
      goto L_0895ED8C;
    }
L_0895ED8C:
    ctx.gpr[31] = (0x0895ED94u);
    // nop
    goto L_0895F0A4;
L_0895ED94:
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 156u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0895EDACu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895EDACu) goto L_0895EDAC;
    return;
L_0895EDAC:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28672), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0895EDC4u);
    ctx.gpr[6] = (0u | 156u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0895EDC4u) goto L_0895EDC4;
    return;
L_0895EDC4:
    ctx.gpr[31] = (0x0895EDCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 9u, 0x089640D8u>(ctx, &aot_mem) && ctx.pc == 0x0895EDCCu) goto L_0895EDCC;
    return;
L_0895EDCC:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0895EDE0u);
    ctx.gpr[6] = (0u | 88u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0895EDE0u) goto L_0895EDE0;
    return;
L_0895EDE0:
    ctx.gpr[31] = (0x0895EDE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 527u, 0x088327C8u>(ctx, &aot_mem) && ctx.pc == 0x0895EDE8u) goto L_0895EDE8;
    return;
L_0895EDE8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895EDF4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0895EDF4u) goto L_0895EDF4;
    return;
L_0895EDF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0895EE18;
      }
      goto L_0895EE04;
    }
L_0895EE04:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 100 ? 1u : 0u);
      if (branch_taken) {
          goto L_0895EE28;
      }
      goto L_0895EE18;
    }
L_0895EE18:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 100 ? 1u : 0u);
    goto L_0895EE28;
L_0895EE28:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 10u);
      if (branch_taken) {
          goto L_0895EE40;
      }
      goto L_0895EE30;
    }
L_0895EE30:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0895EE44;
      }
      goto L_0895EE40;
    }
L_0895EE40:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    goto L_0895EE44;
L_0895EE44:
    ctx.gpr[31] = (0x0895EE4Cu);
    ctx.gpr[4] = (0u | 0u);
    goto L_0895C9EC;
L_0895EE4C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0895EE5Cu);
    ctx.gpr[6] = (0u | 90u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0895EE5Cu) goto L_0895EE5C;
    return;
L_0895EE5C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(166))))));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.gpr[31] = (0x0895EE6Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 622u, 0x08842FE8u>(ctx, &aot_mem) && ctx.pc == 0x0895EE6Cu) goto L_0895EE6C;
    return;
L_0895EE6C:
    ctx.gpr[31] = (0x0895EE74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 635u, 0x0891E9C0u>(ctx, &aot_mem) && ctx.pc == 0x0895EE74u) goto L_0895EE74;
    return;
L_0895EE74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0895EE88u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895EE88u) goto L_0895EE88;
    return;
L_0895EE88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(152), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0895EEA0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895EEA0u) goto L_0895EEA0;
    return;
L_0895EEA0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895EEB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(62))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(64))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(66))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[18];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0895EF54;
      }
      goto L_0895EEF8;
    }
L_0895EEF8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0895EF58;
      }
      goto L_0895EF00;
    }
L_0895EF00:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(68))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[18];
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0895EF58;
      }
      goto L_0895EF0C;
    }
L_0895EF0C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(70))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[18];
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0895EF58;
      }
      goto L_0895EF18;
    }
L_0895EF18:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(72))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[18];
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0895EF58;
      }
      goto L_0895EF24;
    }
L_0895EF24:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(74))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[18];
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0895EF58;
      }
      goto L_0895EF30;
    }
L_0895EF30:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(76))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[18];
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0895EF58;
      }
      goto L_0895EF3C;
    }
L_0895EF3C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(78))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[18];
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0895EF58;
      }
      goto L_0895EF48;
    }
L_0895EF48:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(80))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0895F000;
      }
      goto L_0895EF54;
    }
L_0895EF54:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    goto L_0895EF58;
L_0895EF58:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[18];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_0895EF78;
      }
      goto L_0895EF68;
    }
L_0895EF68:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[7]);
      if (branch_taken) {
          goto L_0895EFC0;
      }
      goto L_0895EF78;
    }
L_0895EF78:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(76))))));
    if (ctx.gpr[7] != ctx.gpr[18]) {
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(80))))));
        goto L_0895EF94;
    }
    goto L_0895EF84;
L_0895EF84:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[7]);
      if (branch_taken) {
          goto L_0895EFC0;
      }
      goto L_0895EF94;
    }
L_0895EF94:
    if (ctx.gpr[7] != ctx.gpr[18]) {
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(78))))));
        goto L_0895EFAC;
    }
    goto L_0895EF9C;
L_0895EF9C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[7]);
      if (branch_taken) {
          goto L_0895EFC0;
      }
      goto L_0895EFAC;
    }
L_0895EFAC:
    if (ctx.gpr[7] != ctx.gpr[18]) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_0895EFC4;
    }
    goto L_0895EFB4;
L_0895EFB4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[7]);
    goto L_0895EFC0;
L_0895EFC0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_0895EFC4;
L_0895EFC4:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[18];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
      if (branch_taken) {
          goto L_0895EFE4;
      }
      goto L_0895EFD0;
    }
L_0895EFD0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895EFF0;
      }
      goto L_0895EFE4;
    }
L_0895EFE4:
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    goto L_0895EFF0;
L_0895EFF0:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
        goto L_0895EFF8;
    }
    goto L_0895EFF8;
L_0895EFF8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0895F08C;
      }
      goto L_0895F000;
    }
L_0895F000:
    ctx.gpr[31] = (0x0895F008u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x0895F008u) goto L_0895F008;
    return;
L_0895F008:
    if (ctx.gpr[2] != ctx.gpr[18]) {
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
        goto L_0895F08C;
    }
    goto L_0895F010;
L_0895F010:
    ctx.gpr[31] = (0x0895F018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 209u, 0x088BD67Cu>(ctx, &aot_mem) && ctx.pc == 0x0895F018u) goto L_0895F018;
    return;
L_0895F018:
    ctx.gpr[31] = (0x0895F020u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0895C9EC;
L_0895F020:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0895F030u);
    ctx.gpr[6] = (0u | 90u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0895F030u) goto L_0895F030;
    return;
L_0895F030:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(72))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_0895F058;
      }
      goto L_0895F04C;
    }
L_0895F04C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    goto L_0895F058;
L_0895F058:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[18];
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_0895F074;
      }
      goto L_0895F060;
    }
L_0895F060:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895F07C;
      }
      goto L_0895F074;
    }
L_0895F074:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    goto L_0895F07C;
L_0895F07C:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
        goto L_0895F084;
    }
    goto L_0895F084;
L_0895F084:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0895F08C;
      }
      goto L_0895F08C;
    }
L_0895F08C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F0A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-416));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), ctx.gpr[31]);
    ctx.gpr[31] = (0x0895F0CCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x0895F0CCu) goto L_0895F0CC;
    return;
L_0895F0CC:
    ctx.gpr[16] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0895F0E4;
      }
      goto L_0895F0D8;
    }
L_0895F0D8:
    ctx.gpr[31] = (0x0895F0E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 209u, 0x088BD67Cu>(ctx, &aot_mem) && ctx.pc == 0x0895F0E0u) goto L_0895F0E0;
    return;
L_0895F0E0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_0895F0E4;
L_0895F0E4:
    ctx.gpr[31] = (0x0895F0ECu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0895C9EC;
L_0895F0EC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0895F0FCu);
    ctx.gpr[6] = (0u | 90u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0895F0FCu) goto L_0895F0FC;
    return;
L_0895F0FC:
    ctx.gpr[31] = (0x0895F104u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(78))))));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 573u, 0x08832C6Cu>(ctx, &aot_mem) && ctx.pc == 0x0895F104u) goto L_0895F104;
    return;
L_0895F104:
    ctx.gpr[31] = (0x0895F10Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x0895F10Cu) goto L_0895F10C;
    return;
L_0895F10C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(108));
      if (branch_taken) {
          goto L_0895F160;
      }
      goto L_0895F114;
    }
L_0895F114:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0895F124u);
    ctx.gpr[6] = (0u | 276u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0895F124u) goto L_0895F124;
    return;
L_0895F124:
    ctx.gpr[31] = (0x0895F12Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 115u, 0x08934858u>(ctx, &aot_mem) && ctx.pc == 0x0895F12Cu) goto L_0895F12C;
    return;
L_0895F12C:
    ctx.gpr[31] = (0x0895F134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 142u, 0x08934AA0u>(ctx, &aot_mem) && ctx.pc == 0x0895F134u) goto L_0895F134;
    return;
L_0895F134:
    ctx.gpr[4] = (ctx.gpr[2] << 6u);
    ctx.gpr[5] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    if (ctx.gpr[4] != ctx.gpr[17]) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
        goto L_0895F16C;
    }
    goto L_0895F150;
L_0895F150:
    ctx.gpr[31] = (0x0895F158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 565u, 0x08832B7Cu>(ctx, &aot_mem) && ctx.pc == 0x0895F158u) goto L_0895F158;
    return;
L_0895F158:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
      if (branch_taken) {
          goto L_0895F16C;
      }
      goto L_0895F160;
    }
L_0895F160:
    ctx.gpr[31] = (0x0895F168u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 557u, 0x08832A8Cu>(ctx, &aot_mem) && ctx.pc == 0x0895F168u) goto L_0895F168;
    return;
L_0895F168:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    goto L_0895F16C;
L_0895F16C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(82))))));
      if (branch_taken) {
          goto L_0895F1D0;
      }
      goto L_0895F174;
    }
L_0895F174:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0895F1D0;
      }
      goto L_0895F17C;
    }
L_0895F17C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(84))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0895F1D0;
      }
      goto L_0895F188;
    }
L_0895F188:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0895F1D0;
      }
      goto L_0895F194;
    }
L_0895F194:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0895F1D0;
      }
      goto L_0895F1A0;
    }
L_0895F1A0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(90))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0895F1D0;
      }
      goto L_0895F1AC;
    }
L_0895F1AC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0895F1D0;
      }
      goto L_0895F1B8;
    }
L_0895F1B8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(94))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0895F1D0;
      }
      goto L_0895F1C4;
    }
L_0895F1C4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(96))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0895F238;
      }
      goto L_0895F1D0;
    }
L_0895F1D0:
    if (ctx.gpr[4] != ctx.gpr[17]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(92))))));
        goto L_0895F1EC;
    }
    goto L_0895F1D8;
L_0895F1D8:
    ctx.gpr[31] = (0x0895F1E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 591u, 0x08832DC8u>(ctx, &aot_mem) && ctx.pc == 0x0895F1E0u) goto L_0895F1E0;
    return;
L_0895F1E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0895F238;
      }
      goto L_0895F1E8;
    }
L_0895F1E8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(92))))));
    goto L_0895F1EC;
L_0895F1EC:
    if (ctx.gpr[4] != ctx.gpr[17]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(96))))));
        goto L_0895F208;
    }
    goto L_0895F1F4;
L_0895F1F4:
    ctx.gpr[31] = (0x0895F1FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 595u, 0x08832E40u>(ctx, &aot_mem) && ctx.pc == 0x0895F1FCu) goto L_0895F1FC;
    return;
L_0895F1FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0895F238;
      }
      goto L_0895F204;
    }
L_0895F204:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(96))))));
    goto L_0895F208;
L_0895F208:
    if (ctx.gpr[4] != ctx.gpr[17]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(94))))));
        goto L_0895F224;
    }
    goto L_0895F210;
L_0895F210:
    ctx.gpr[31] = (0x0895F218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 599u, 0x08832EB8u>(ctx, &aot_mem) && ctx.pc == 0x0895F218u) goto L_0895F218;
    return;
L_0895F218:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0895F238;
      }
      goto L_0895F220;
    }
L_0895F220:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(94))))));
    goto L_0895F224;
L_0895F224:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0895F238;
      }
      goto L_0895F22C;
    }
L_0895F22C:
    ctx.gpr[31] = (0x0895F234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 603u, 0x08832F30u>(ctx, &aot_mem) && ctx.pc == 0x0895F234u) goto L_0895F234;
    return;
L_0895F234:
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    goto L_0895F238;
L_0895F238:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0895F244u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x0895F244u) goto L_0895F244;
    return;
L_0895F244:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
    ctx.gpr[4] = (2224u << 16u);
      if (branch_taken) {
          goto L_0895F294;
      }
      goto L_0895F24C;
    }
L_0895F24C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (2224u << 16u);
      if (branch_taken) {
          goto L_0895F270;
      }
      goto L_0895F254;
    }
L_0895F254:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1880));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F270;
      }
      goto L_0895F268;
    }
L_0895F268:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0895F2AC;
      }
      goto L_0895F270;
    }
L_0895F270:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    ctx.gpr[4] = (2224u << 16u);
      if (branch_taken) {
          goto L_0895F2AC;
      }
      goto L_0895F278;
    }
L_0895F278:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1880));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F2AC;
      }
      goto L_0895F28C;
    }
L_0895F28C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0895F2AC;
      }
      goto L_0895F294;
    }
L_0895F294:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1880));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F2AC;
      }
      goto L_0895F2A8;
    }
L_0895F2A8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0895F2AC;
L_0895F2AC:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0895F338;
      }
      goto L_0895F2B4;
    }
L_0895F2B4:
    ctx.gpr[31] = (0x0895F2BCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x0895F2BCu) goto L_0895F2BC;
    return;
L_0895F2BC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895F2D4;
      }
      goto L_0895F2C4;
    }
L_0895F2C4:
    ctx.gpr[31] = (0x0895F2CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 569u, 0x08832BF4u>(ctx, &aot_mem) && ctx.pc == 0x0895F2CCu) goto L_0895F2CC;
    return;
L_0895F2CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F2DC;
      }
      goto L_0895F2D4;
    }
L_0895F2D4:
    ctx.gpr[31] = (0x0895F2DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 561u, 0x08832B04u>(ctx, &aot_mem) && ctx.pc == 0x0895F2DCu) goto L_0895F2DC;
    return;
L_0895F2DC:
    ctx.gpr[31] = (0x0895F2E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 576u, 0x08832CB0u>(ctx, &aot_mem) && ctx.pc == 0x0895F2E4u) goto L_0895F2E4;
    return;
L_0895F2E4:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0895F2FC;
      }
      goto L_0895F2EC;
    }
L_0895F2EC:
    ctx.gpr[31] = (0x0895F2F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 587u, 0x08832D50u>(ctx, &aot_mem) && ctx.pc == 0x0895F2F4u) goto L_0895F2F4;
    return;
L_0895F2F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F304;
      }
      goto L_0895F2FC;
    }
L_0895F2FC:
    ctx.gpr[31] = (0x0895F304u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 582u, 0x08832D08u>(ctx, &aot_mem) && ctx.pc == 0x0895F304u) goto L_0895F304;
    return;
L_0895F304:
    ctx.gpr[31] = (0x0895F30Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 586u, 0x08832D40u>(ctx, &aot_mem) && ctx.pc == 0x0895F30Cu) goto L_0895F30C;
    return;
L_0895F30C:
    ctx.gpr[31] = (0x0895F314u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 581u, 0x08832CF8u>(ctx, &aot_mem) && ctx.pc == 0x0895F314u) goto L_0895F314;
    return;
L_0895F314:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895F328;
      }
      goto L_0895F320;
    }
L_0895F320:
    ctx.gpr[31] = (0x0895F328u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 577u, 0x08832CC0u>(ctx, &aot_mem) && ctx.pc == 0x0895F328u) goto L_0895F328;
    return;
L_0895F328:
    ctx.gpr[31] = (0x0895F330u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 575u, 0x08832CA0u>(ctx, &aot_mem) && ctx.pc == 0x0895F330u) goto L_0895F330;
    return;
L_0895F330:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F340;
      }
      goto L_0895F338;
    }
L_0895F338:
    ctx.gpr[31] = (0x0895F340u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 575u, 0x08832CA0u>(ctx, &aot_mem) && ctx.pc == 0x0895F340u) goto L_0895F340;
    return;
L_0895F340:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F35C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(20))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(4560));
      if (branch_taken) {
          goto L_0895F44C;
      }
      goto L_0895F380;
    }
L_0895F380:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(152)));
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[9];
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0895F3A8;
      }
      goto L_0895F39C;
    }
L_0895F39C:
    ctx.gpr[9] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[9] = (0u | 3u);
      if (branch_taken) {
          goto L_0895F3CC;
      }
      goto L_0895F3A8;
    }
L_0895F3A8:
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (0u | 500u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1472), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0895F428;
      }
      goto L_0895F3CC;
    }
L_0895F3CC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[9];
    ctx.gpr[9] = (0u | 4u);
      if (branch_taken) {
          goto L_0895F3DC;
      }
      goto L_0895F3D4;
    }
L_0895F3D4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_0895F400;
      }
      goto L_0895F3DC;
    }
L_0895F3DC:
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (0u | 1000u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1472), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0895F428;
      }
      goto L_0895F400;
    }
L_0895F400:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] << 5u);
      if (branch_taken) {
          goto L_0895F42C;
      }
      goto L_0895F408;
    }
L_0895F408:
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (0u | 2000u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1472), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    goto L_0895F428;
L_0895F428:
    ctx.gpr[4] = (ctx.gpr[6] << 5u);
    goto L_0895F42C;
L_0895F42C:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28676)));
    ctx.gpr[31] = (0x0895F440u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0895F440u) goto L_0895F440;
    return;
L_0895F440:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0895F44C;
L_0895F44C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F45C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(4560));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[10] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[8] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1472), 0u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(152)));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_0895F4DC;
      }
      goto L_0895F4BC;
    }
L_0895F4BC:
    ctx.gpr[6] = (0u | 500u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1472), ctx.gpr[6]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    goto L_0895F4DC;
L_0895F4DC:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(24))))));
    if (ctx.gpr[11] != ctx.gpr[4]) {
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(26))))));
        goto L_0895F50C;
    }
    goto L_0895F4E8;
L_0895F4E8:
    ctx.gpr[6] = (0u | 1500u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1472), ctx.gpr[6]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(26))))));
    goto L_0895F50C;
L_0895F50C:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 3000u);
      if (branch_taken) {
          goto L_0895F530;
      }
      goto L_0895F514;
    }
L_0895F514:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1472), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    goto L_0895F530;
L_0895F530:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1472)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] << 5u);
      if (branch_taken) {
          goto L_0895F560;
      }
      goto L_0895F53C;
    }
L_0895F53C:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28676));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29));
    ctx.gpr[31] = (0x0895F554u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0895F554u) goto L_0895F554;
    return;
L_0895F554:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0895F560;
L_0895F560:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F570:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(30))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(4560));
      if (branch_taken) {
          goto L_0895F6B0;
      }
      goto L_0895F598;
    }
L_0895F598:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(152)));
    ctx.gpr[9] = (0u | 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0895F5D8;
      }
      goto L_0895F5B4;
    }
L_0895F5B4:
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (0u | 150u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1472), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0895F688;
      }
      goto L_0895F5D8;
    }
L_0895F5D8:
    ctx.gpr[9] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[9] = (0u | 4u);
      if (branch_taken) {
          goto L_0895F608;
      }
      goto L_0895F5E4;
    }
L_0895F5E4:
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (0u | 300u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1472), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0895F688;
      }
      goto L_0895F608;
    }
L_0895F608:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[9] = (0u | 5u);
      if (branch_taken) {
          goto L_0895F634;
      }
      goto L_0895F610;
    }
L_0895F610:
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (0u | 750u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1472), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0895F688;
      }
      goto L_0895F634;
    }
L_0895F634:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
      if (branch_taken) {
          goto L_0895F660;
      }
      goto L_0895F63C;
    }
L_0895F63C:
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (0u | 1500u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1472), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0895F688;
      }
      goto L_0895F660;
    }
L_0895F660:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] << 5u);
      if (branch_taken) {
          goto L_0895F68C;
      }
      goto L_0895F668;
    }
L_0895F668:
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (0u | 2000u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1472), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    goto L_0895F688;
L_0895F688:
    ctx.gpr[4] = (ctx.gpr[6] << 5u);
    goto L_0895F68C;
L_0895F68C:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28676));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29));
    ctx.gpr[31] = (0x0895F6A4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0895F6A4u) goto L_0895F6A4;
    return;
L_0895F6A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0895F6B0;
L_0895F6B0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F6C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(4560));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[10] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[8] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1472), 0u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(152)));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_0895F740;
      }
      goto L_0895F720;
    }
L_0895F720:
    ctx.gpr[6] = (0u | 300u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1472), ctx.gpr[6]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    goto L_0895F740;
L_0895F740:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(38))))));
    if (ctx.gpr[11] != ctx.gpr[4]) {
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(40))))));
        goto L_0895F770;
    }
    goto L_0895F74C;
L_0895F74C:
    ctx.gpr[6] = (0u | 750u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1472), ctx.gpr[6]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(40))))));
    goto L_0895F770;
L_0895F770:
    if (ctx.gpr[11] != ctx.gpr[4]) {
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(42))))));
        goto L_0895F79C;
    }
    goto L_0895F778;
L_0895F778:
    ctx.gpr[6] = (0u | 1500u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1472), ctx.gpr[6]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(42))))));
    goto L_0895F79C;
L_0895F79C:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 2000u);
      if (branch_taken) {
          goto L_0895F7C0;
      }
      goto L_0895F7A4;
    }
L_0895F7A4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1472), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    goto L_0895F7C0;
L_0895F7C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1472)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] << 5u);
      if (branch_taken) {
          goto L_0895F7F0;
      }
      goto L_0895F7CC;
    }
L_0895F7CC:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28676));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29));
    ctx.gpr[31] = (0x0895F7E4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0895F7E4u) goto L_0895F7E4;
    return;
L_0895F7E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0895F7F0;
L_0895F7F0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F800:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(48))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(4560));
      if (branch_taken) {
          goto L_0895F914;
      }
      goto L_0895F828;
    }
L_0895F828:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(152)));
    ctx.gpr[9] = (0u | 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0895F868;
      }
      goto L_0895F844;
    }
L_0895F844:
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (0u | 500u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1472), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0895F8EC;
      }
      goto L_0895F868;
    }
L_0895F868:
    ctx.gpr[9] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[9] = (0u | 4u);
      if (branch_taken) {
          goto L_0895F898;
      }
      goto L_0895F874;
    }
L_0895F874:
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (0u | 750u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1472), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0895F8EC;
      }
      goto L_0895F898;
    }
L_0895F898:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_0895F8C4;
      }
      goto L_0895F8A0;
    }
L_0895F8A0:
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (0u | 1000u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1472), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0895F8EC;
      }
      goto L_0895F8C4;
    }
L_0895F8C4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] << 5u);
      if (branch_taken) {
          goto L_0895F8F0;
      }
      goto L_0895F8CC;
    }
L_0895F8CC:
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (0u | 1500u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1472), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    goto L_0895F8EC;
L_0895F8EC:
    ctx.gpr[4] = (ctx.gpr[6] << 5u);
    goto L_0895F8F0;
L_0895F8F0:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28676));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29));
    ctx.gpr[31] = (0x0895F908u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0895F908u) goto L_0895F908;
    return;
L_0895F908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0895F914;
L_0895F914:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F924:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(32))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(4560));
      if (branch_taken) {
          goto L_0895FA60;
      }
      goto L_0895F948;
    }
L_0895F948:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(152)));
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0895F988;
      }
      goto L_0895F964;
    }
L_0895F964:
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (0u | 1500u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1472), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0895FA38;
      }
      goto L_0895F988;
    }
L_0895F988:
    ctx.gpr[9] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[9] = (0u | 3u);
      if (branch_taken) {
          goto L_0895F9B8;
      }
      goto L_0895F994;
    }
L_0895F994:
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (0u | 2000u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1472), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0895FA38;
      }
      goto L_0895F9B8;
    }
L_0895F9B8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[9] = (0u | 4u);
      if (branch_taken) {
          goto L_0895F9E4;
      }
      goto L_0895F9C0;
    }
L_0895F9C0:
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (0u | 3500u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1472), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0895FA38;
      }
      goto L_0895F9E4;
    }
L_0895F9E4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_0895FA10;
      }
      goto L_0895F9EC;
    }
L_0895F9EC:
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (0u | 5000u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1472), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0895FA38;
      }
      goto L_0895FA10;
    }
L_0895FA10:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] << 5u);
      if (branch_taken) {
          goto L_0895FA3C;
      }
      goto L_0895FA18;
    }
L_0895FA18:
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (0u | 8000u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1472), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    goto L_0895FA38;
L_0895FA38:
    ctx.gpr[4] = (ctx.gpr[6] << 5u);
    goto L_0895FA3C;
L_0895FA3C:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28676));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29));
    ctx.gpr[31] = (0x0895FA54u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0895FA54u) goto L_0895FA54;
    return;
L_0895FA54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0895FA60;
L_0895FA60:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895FA70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(68))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(4560));
      if (branch_taken) {
          goto L_0895FBB0;
      }
      goto L_0895FA98;
    }
L_0895FA98:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(152)));
    ctx.gpr[9] = (0u | 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0895FAD8;
      }
      goto L_0895FAB4;
    }
L_0895FAB4:
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (0u | 750u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1472), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0895FB88;
      }
      goto L_0895FAD8;
    }
L_0895FAD8:
    ctx.gpr[9] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[9] = (0u | 4u);
      if (branch_taken) {
          goto L_0895FB08;
      }
      goto L_0895FAE4;
    }
L_0895FAE4:
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (0u | 1000u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1472), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0895FB88;
      }
      goto L_0895FB08;
    }
L_0895FB08:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[9] = (0u | 5u);
      if (branch_taken) {
          goto L_0895FB34;
      }
      goto L_0895FB10;
    }
L_0895FB10:
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (0u | 1500u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1472), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0895FB88;
      }
      goto L_0895FB34;
    }
L_0895FB34:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
      if (branch_taken) {
          goto L_0895FB60;
      }
      goto L_0895FB3C;
    }
L_0895FB3C:
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (0u | 2000u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1472), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0895FB88;
      }
      goto L_0895FB60;
    }
L_0895FB60:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] << 5u);
      if (branch_taken) {
          goto L_0895FB8C;
      }
      goto L_0895FB68;
    }
L_0895FB68:
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (0u | 3500u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1472), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    goto L_0895FB88;
L_0895FB88:
    ctx.gpr[4] = (ctx.gpr[6] << 5u);
    goto L_0895FB8C;
L_0895FB8C:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28676));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29));
    ctx.gpr[31] = (0x0895FBA4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0895FBA4u) goto L_0895FBA4;
    return;
L_0895FBA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0895FBB0;
L_0895FBB0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895FBC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(34))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(4560));
      if (branch_taken) {
          goto L_0895FD00;
      }
      goto L_0895FBE8;
    }
L_0895FBE8:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(152)));
    ctx.gpr[9] = (0u | 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0895FC28;
      }
      goto L_0895FC04;
    }
L_0895FC04:
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (0u | 500u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1472), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0895FCD8;
      }
      goto L_0895FC28;
    }
L_0895FC28:
    ctx.gpr[9] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[9] = (0u | 4u);
      if (branch_taken) {
          goto L_0895FC58;
      }
      goto L_0895FC34;
    }
L_0895FC34:
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (0u | 750u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1472), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0895FCD8;
      }
      goto L_0895FC58;
    }
L_0895FC58:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[9] = (0u | 5u);
      if (branch_taken) {
          goto L_0895FC84;
      }
      goto L_0895FC60;
    }
L_0895FC60:
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (0u | 1500u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1472), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0895FCD8;
      }
      goto L_0895FC84;
    }
L_0895FC84:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
      if (branch_taken) {
          goto L_0895FCB0;
      }
      goto L_0895FC8C;
    }
L_0895FC8C:
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (0u | 2000u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1472), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0895FCD8;
      }
      goto L_0895FCB0;
    }
L_0895FCB0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] << 5u);
      if (branch_taken) {
          goto L_0895FCDC;
      }
      goto L_0895FCB8;
    }
L_0895FCB8:
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (0u | 3000u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1472), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    goto L_0895FCD8;
L_0895FCD8:
    ctx.gpr[4] = (ctx.gpr[6] << 5u);
    goto L_0895FCDC;
L_0895FCDC:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28676));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29));
    ctx.gpr[31] = (0x0895FCF4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0895FCF4u) goto L_0895FCF4;
    return;
L_0895FCF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0895FD00;
L_0895FD00:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895FD10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(66))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(4560));
      if (branch_taken) {
          goto L_0895FE50;
      }
      goto L_0895FD38;
    }
L_0895FD38:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(152)));
    ctx.gpr[9] = (0u | 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0895FD78;
      }
      goto L_0895FD54;
    }
L_0895FD54:
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (0u | 200u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1472), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0895FE28;
      }
      goto L_0895FD78;
    }
L_0895FD78:
    ctx.gpr[9] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[9] = (0u | 4u);
      if (branch_taken) {
          goto L_0895FDA8;
      }
      goto L_0895FD84;
    }
L_0895FD84:
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (0u | 500u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1472), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0895FE28;
      }
      goto L_0895FDA8;
    }
L_0895FDA8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[9] = (0u | 5u);
      if (branch_taken) {
          goto L_0895FDD4;
      }
      goto L_0895FDB0;
    }
L_0895FDB0:
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (0u | 1000u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1472), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0895FE28;
      }
      goto L_0895FDD4;
    }
L_0895FDD4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
      if (branch_taken) {
          goto L_0895FE00;
      }
      goto L_0895FDDC;
    }
L_0895FDDC:
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (0u | 1500u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1472), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0895FE28;
      }
      goto L_0895FE00;
    }
L_0895FE00:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] << 5u);
      if (branch_taken) {
          goto L_0895FE2C;
      }
      goto L_0895FE08;
    }
L_0895FE08:
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (0u | 2000u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1472), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    goto L_0895FE28;
L_0895FE28:
    ctx.gpr[4] = (ctx.gpr[6] << 5u);
    goto L_0895FE2C;
L_0895FE2C:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28676));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29));
    ctx.gpr[31] = (0x0895FE44u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0895FE44u) goto L_0895FE44;
    return;
L_0895FE44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0895FE50;
L_0895FE50:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895FE60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(46))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(4560));
      if (branch_taken) {
          goto L_0895FF74;
      }
      goto L_0895FE88;
    }
L_0895FE88:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(152)));
    ctx.gpr[9] = (0u | 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0895FEC8;
      }
      goto L_0895FEA4;
    }
L_0895FEA4:
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (0u | 500u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1472), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0895FF4C;
      }
      goto L_0895FEC8;
    }
L_0895FEC8:
    ctx.gpr[9] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[9] = (0u | 4u);
      if (branch_taken) {
          goto L_0895FEF8;
      }
      goto L_0895FED4;
    }
L_0895FED4:
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (0u | 1000u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1472), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0895FF4C;
      }
      goto L_0895FEF8;
    }
L_0895FEF8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_0895FF24;
      }
      goto L_0895FF00;
    }
L_0895FF00:
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (0u | 2000u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1472), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0895FF4C;
      }
      goto L_0895FF24;
    }
L_0895FF24:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] << 5u);
      if (branch_taken) {
          goto L_0895FF50;
      }
      goto L_0895FF2C;
    }
L_0895FF2C:
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (0u | 3000u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1472), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    goto L_0895FF4C;
L_0895FF4C:
    ctx.gpr[4] = (ctx.gpr[6] << 5u);
    goto L_0895FF50;
L_0895FF50:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28676));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29));
    ctx.gpr[31] = (0x0895FF68u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0895FF68u) goto L_0895FF68;
    return;
L_0895FF68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0895FF74;
L_0895FF74:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895FF84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(70))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(4560));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 11u, 0x089600C4u>(ctx, &aot_mem); return;
      }
      goto L_0895FFAC;
    }
L_0895FFAC:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(152)));
    ctx.gpr[9] = (0u | 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0895FFEC;
      }
      goto L_0895FFC8;
    }
L_0895FFC8:
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (0u | 1000u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1472), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 8u, 0x0896009Cu>(ctx, &aot_mem); return;
      }
      goto L_0895FFEC;
    }
L_0895FFEC:
    ctx.gpr[9] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[9] = (0u | 4u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 2u, 0x0896001Cu>(ctx, &aot_mem); return;
      }
      goto L_0895FFF8;
    }
L_0895FFF8:
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (0u | 1500u);
    ctx.pc = 0x08960000u; return;
}

void recomp_unit_0086(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0086_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_86(Runtime &runtime) {
    runtime.register_generated_unit(86u, 0x0895C000u, 16384u, &recomp_unit_0086, &recomp_unit_0086_entry);
    runtime.register_function(0x0895C000u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C00Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C020u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C068u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C074u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C0A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C0A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C0ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C0D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C0D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C0E0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C0E8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C0F0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C100u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C11Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C130u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C138u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C140u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C144u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C14Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C154u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C15Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C160u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C16Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C188u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C19Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C1A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C1ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C1CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C1D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C1DCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C1E0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C1F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C200u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C204u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C214u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C218u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C224u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C22Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C234u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C244u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C274u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C284u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C2A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C2A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C2B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C2D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C2DCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C308u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C31Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C340u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C35Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C364u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C374u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C384u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C38Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C3D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C3F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C410u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C424u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C430u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C448u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C464u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C46Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C474u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C48Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C4A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C4BCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C4D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C4E0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C4E8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C514u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C51Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C528u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C554u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C558u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C560u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C568u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C594u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C59Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C5A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C5D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C5ECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C63Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C648u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C658u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C66Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C79Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C7A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C7B4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C7CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C7D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C7E0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C7F4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C808u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C83Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C84Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C878u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C880u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C8A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C8B0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C8B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C8E4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C900u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C908u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C910u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C914u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C91Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C924u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C92Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C948u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C950u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C958u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C95Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C974u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C97Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C980u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C990u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C994u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C9A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C9D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C9ECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C9F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CA18u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CA20u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CA2Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CA50u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CA70u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CA80u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CA8Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CAA0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CAB0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CAB8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CAC0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CAC4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CAD8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CAF0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CAF8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB00u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB08u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB10u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB1Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB34u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB3Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB58u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB70u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB88u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CBC0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CBC8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CBD0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CBD8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CBE0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CBF4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CC04u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CC08u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CC14u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CC20u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CC28u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CC34u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CC3Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CC48u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CC50u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CC58u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CC60u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CC70u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CCA4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CCB0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CCB8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CCC4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CCE8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CCF4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CCFCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD04u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD0Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD1Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD24u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD38u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD40u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD48u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD50u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD5Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD64u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD78u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD80u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD88u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD90u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CDACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CDBCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CDC4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CDD0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE04u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE14u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE24u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE34u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE44u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE54u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE6Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE84u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE94u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CEA4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CEBCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CED4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CEECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CF04u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CF1Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CF3Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CF40u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CF4Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CF70u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CF80u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CFA8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CFB4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CFBCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CFD8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CFECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CFF8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D020u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D03Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D044u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D04Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D054u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D060u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D06Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D078u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D080u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D088u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D090u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D098u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D0A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D0ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D0B4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D0BCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D0C4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D0CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D0D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D0DCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D0E8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D0F0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D0F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D100u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D108u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D110u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D11Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D134u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D140u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D170u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D17Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D180u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D198u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D1B0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D1C8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D1E0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D1F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D210u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D22Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D230u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D240u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D260u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D270u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D27Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D284u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D2A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D2C8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D2D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D2E8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D2FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D308u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D314u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D328u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D334u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D338u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D33Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D344u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D350u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D360u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D36Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D374u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D380u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D38Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D394u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D39Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D3A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D3B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D3C0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D3CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D3D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D3E8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D3F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D400u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D408u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D420u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D45Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D46Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D470u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D480u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D498u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D4B0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D4C8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D4E0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D4F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D510u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D528u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D540u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D558u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D570u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D590u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D594u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D5A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D5BCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D5E0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D5F0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D618u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D620u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D63Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D650u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D65Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D684u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D6B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D6C4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D6C8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D6E0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D6F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D710u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D728u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D740u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D758u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D770u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D778u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D790u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D7A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D7A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D7C0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D7D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D7F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D808u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D818u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D834u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D850u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D860u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D868u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D888u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D8CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D8ECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D8F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D908u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D91Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D93Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D954u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D968u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D978u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D98Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D9A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D9B0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D9C4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D9E0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D9F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DA0Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DA2Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DA70u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DA90u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DA9Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DAACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DAC0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DAE0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DAF8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DB0Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DB1Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DB30u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DB4Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DB54u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DB68u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DB84u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DB9Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DBB8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DBC0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DBD0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DBF0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DC68u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DC74u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DC80u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DC90u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DCA0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DCB4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DCC8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DCE8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DD04u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DD1Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DD30u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DD48u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DD54u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DD60u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DD70u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DD7Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DD90u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DDB0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DDCCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DDE4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DE00u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DE08u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DE18u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DE44u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DE94u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DE9Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DEC8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DEDCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DEE4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DEF4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DF04u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DF18u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DF2Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DF4Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DF68u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DF80u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DF94u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DFA4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DFB8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DFD4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DFDCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DFECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DFFCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E014u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E028u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E048u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E064u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E07Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E098u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E0A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E0A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E0D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E11Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E12Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E14Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E15Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E16Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E190u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E198u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E1A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E1A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E1BCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E1DCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E1F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E210u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E234u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E248u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E250u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E254u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E284u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E2DCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E2FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E318u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E324u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E328u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E338u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E34Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E368u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E380u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E390u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E3A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E3D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E3E8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E3F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E414u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E430u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E44Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E474u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E494u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E4A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E4B4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E4BCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E4C8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E4F4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E514u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E51Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E528u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E550u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E564u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E56Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E578u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E584u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E598u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E5A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E5B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E5C0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E5C8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E5E8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E5F4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E614u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E620u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E640u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E648u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E660u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E6A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E6BCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E6CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E6DCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E6E4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E6F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E710u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E720u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E728u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E734u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E740u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E748u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E74Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E764u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E768u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E774u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E784u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E794u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E7A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E7BCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E7CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E7D0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E7ECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E7F4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E7FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E810u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E82Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E85Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E884u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E88Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E8A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E8B4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E8BCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E8CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E8D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E8E4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E8ECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E8FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E904u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E914u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E91Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E92Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E934u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E944u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E94Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E95Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E964u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E974u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E97Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E98Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E994u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E9A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E9ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E9BCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E9C4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E9D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E9DCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E9ECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E9F4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA04u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA0Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA1Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA24u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA34u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA3Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA4Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA54u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA64u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA6Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA7Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA84u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA94u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA9Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EAACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EAB4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EAC4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EACCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EADCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EAE4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EAF4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EAFCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB0Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB14u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB24u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB2Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB3Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB44u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB54u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB58u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB5Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB68u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB78u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EBB4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC0Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC28u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC44u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC60u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC74u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC80u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC8Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC94u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ECB0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ECD4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ECE4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ECF4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ED24u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ED4Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ED5Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ED60u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ED68u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ED84u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ED8Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ED94u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EDACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EDC4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EDCCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EDE0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EDE8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EDF4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EE04u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EE18u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EE28u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EE30u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EE40u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EE44u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EE4Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EE5Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EE6Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EE74u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EE88u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EEA0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EEB8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EEF8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF00u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF0Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF18u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF24u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF30u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF3Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF48u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF54u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF58u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF68u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF78u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF84u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF94u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF9Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EFACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EFB4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EFC0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EFC4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EFD0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EFE4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EFF0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EFF8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F000u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F008u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F010u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F018u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F020u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F030u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F04Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F058u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F060u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F074u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F07Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F084u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F08Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F0A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F0CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F0D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F0E0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F0E4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F0ECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F0FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F104u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F10Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F114u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F124u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F12Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F134u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F150u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F158u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F160u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F168u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F16Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F174u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F17Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F188u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F194u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F1A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F1ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F1B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F1C4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F1D0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F1D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F1E0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F1E8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F1ECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F1F4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F1FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F204u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F208u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F210u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F218u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F220u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F224u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F22Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F234u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F238u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F244u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F24Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F254u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F268u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F270u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F278u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F28Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F294u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F2A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F2ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F2B4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F2BCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F2C4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F2CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F2D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F2DCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F2E4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F2ECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F2F4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F2FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F304u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F30Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F314u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F320u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F328u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F330u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F338u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F340u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F35Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F380u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F39Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F3A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F3CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F3D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F3DCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F400u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F408u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F428u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F42Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F440u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F44Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F45Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F4BCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F4DCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F4E8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F50Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F514u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F530u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F53Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F554u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F560u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F570u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F598u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F5B4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F5D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F5E4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F608u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F610u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F634u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F63Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F660u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F668u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F688u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F68Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F6A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F6B0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F6C0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F720u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F740u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F74Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F770u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F778u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F79Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F7A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F7C0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F7CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F7E4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F7F0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F800u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F828u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F844u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F868u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F874u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F898u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F8A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F8C4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F8CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F8ECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F8F0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F908u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F914u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F924u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F948u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F964u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F988u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F994u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F9B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F9C0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F9E4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F9ECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FA10u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FA18u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FA38u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FA3Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FA54u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FA60u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FA70u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FA98u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FAB4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FAD8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FAE4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FB08u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FB10u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FB34u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FB3Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FB60u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FB68u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FB88u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FB8Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FBA4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FBB0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FBC0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FBE8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FC04u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FC28u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FC34u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FC58u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FC60u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FC84u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FC8Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FCB0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FCB8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FCD8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FCDCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FCF4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FD00u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FD10u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FD38u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FD54u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FD78u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FD84u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FDA8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FDB0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FDD4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FDDCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FE00u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FE08u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FE28u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FE2Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FE44u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FE50u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FE60u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FE88u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FEA4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FEC8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FED4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FEF8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FF00u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FF24u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FF2Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FF4Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FF50u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FF68u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FF74u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FF84u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FFACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FFC8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FFECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FFF8u, &recomp_unit_0086, "recomp_unit_0086");
}
} // namespace psprecomp

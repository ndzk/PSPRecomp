#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0022[4090] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 9,
    0, 10, 0, 11, 12, 0, 13, 0, 14, 0, 0, 15, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 19, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0,
    25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 30, 0, 31, 0, 0, 0, 0,
    0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 37, 0, 0, 38,
    0, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 41, 0, 42, 0, 43, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46,
    0, 47, 0, 0, 0, 48, 0, 0, 49, 0, 50, 0, 0, 51, 0, 52, 0, 0, 0, 53, 0, 54, 0, 55, 0, 56, 0, 0, 0, 0, 0, 57,
    0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60,
    0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 64, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0,
    0, 67, 0, 68, 0, 69, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0,
    74, 0, 75, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 82,
    0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 88, 0, 89, 0, 90, 0, 0, 0, 91, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 94, 0, 0, 95, 96, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0,
    0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 106, 0, 0, 107, 0, 108, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 111, 112,
    0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0,
    0, 124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0,
    131, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0,
    0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0,
    0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 144, 0, 145, 0, 0, 146, 0, 147, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 150, 0,
    0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0,
    156, 0, 0, 0, 157, 0, 158, 0, 0, 159, 0, 0, 0, 160, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0,
    0, 0, 164, 0, 0, 165, 0, 166, 0, 167, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 0, 172, 0, 173,
    0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 177, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 181,
    0, 0, 0, 182, 0, 183, 0, 0, 0, 184, 0, 185, 0, 186, 0, 0, 0, 187, 188, 0, 189, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0,
    0, 192, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 195, 0, 196, 0, 197, 0, 198, 0, 199, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0,
    202, 0, 0, 203, 0, 204, 0, 205, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 210, 0, 211,
    0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0, 0, 217, 0, 218, 219, 0, 0, 0, 220, 0,
    221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0,
    0, 227, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 238, 0, 0, 0, 0,
    0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 244, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 250,
    0, 0, 0, 0, 251, 0, 0, 252, 0, 253, 0, 0, 0, 254, 0, 0, 255, 0, 0, 0, 256, 0, 257, 0, 258, 0, 0, 0, 259, 0, 0, 0,
    260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 271, 0,
    0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 277, 0, 0,
    0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 285, 0, 286, 0, 0, 0, 287, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 291, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0,
    295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 300, 0, 0, 301, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0,
    0, 305, 0, 0, 0, 0, 0, 0, 306, 0, 0, 307, 0, 308, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 312, 0, 0, 313, 314,
    0, 315, 0, 0, 316, 317, 0, 318, 0, 0, 0, 319, 0, 320, 0, 321, 322, 0, 323, 0, 0, 0, 0, 324, 0, 325, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 328, 0, 0, 0, 329,
    0, 0, 330, 0, 0, 0, 331, 0, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0, 334, 0, 335, 0, 336, 0, 0, 337, 338, 0, 0, 0, 0, 339,
    0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 343, 0, 0, 344, 0, 0, 345, 0, 0, 346, 0, 0, 0, 347, 0, 0, 348, 0,
    349, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 353, 0, 354, 355, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 359, 0, 360, 0, 0, 0, 361, 0, 362, 0, 0, 0, 363, 0, 364,
    0, 365, 0, 366, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 370, 371, 0, 372, 0, 0, 0, 0, 373, 0, 374, 0,
    0, 375, 0, 376, 0, 377, 0, 378, 0, 379, 0, 0, 0, 0, 380, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0, 383, 0, 0, 0,
    0, 0, 0, 0, 0, 384, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 387, 0, 388, 0, 389, 0, 390, 0, 391, 0, 0, 0, 0, 0,
    0, 0, 0, 392, 0, 0, 393, 0, 0, 0, 394, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 397, 0, 398, 0, 399, 0, 0, 0, 400,
    0, 401, 0, 402, 0, 0, 0, 0, 403, 0, 0, 404, 0, 405, 0, 406, 0, 0, 407, 0, 408, 0, 409, 0, 0, 0, 410, 0, 0, 411, 0, 412,
    0, 413, 0, 414, 0, 0, 415, 0, 0, 0, 416, 0, 0, 0, 417, 0, 418, 0, 419, 0, 0, 0, 420, 0, 0, 0, 421, 0, 422, 0, 423, 424,
    0, 425, 0, 426, 0, 427, 0, 0, 428, 0, 0, 429, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 433,
    0, 0, 434, 0, 435, 0, 436, 437, 0, 438, 0, 439, 0, 440, 0, 441, 0, 442, 0, 443, 0, 444, 0, 445, 0, 0, 0, 0, 446, 0, 0, 0,
    0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0,
    453, 0, 454, 0, 455, 0, 456, 0, 457, 0, 458, 0, 0, 0, 459, 0, 460, 0, 461, 0, 0, 0, 0, 462, 0, 0, 463, 0, 464, 0, 465, 0,
    466, 0, 0, 467, 0, 0, 0, 468, 0, 0, 0, 469, 0, 470, 0, 471, 0, 0, 0, 472, 0, 0, 0, 473, 0, 474, 0, 475, 476, 0, 477, 0,
    478, 0, 479, 0, 0, 480, 0, 481, 0, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 485, 0, 0, 486, 0, 487,
    0, 488, 0, 0, 489, 0, 0, 490, 0, 491, 0, 0, 492, 0, 493, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 496, 0, 497, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0,
    501, 0, 0, 502, 0, 503, 0, 0, 504, 0, 505, 506, 0, 0, 507, 0, 508, 0, 0, 0, 0, 509, 0, 0, 0, 0, 510, 0, 511, 0, 512, 0,
    0, 513, 0, 0, 514, 0, 0, 515, 516, 0, 0, 517, 0, 0, 0, 518, 0, 0, 519, 0, 0, 520, 0, 0, 0, 521, 0, 522, 0, 523, 0, 0,
    524, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0,
    0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0,
    0, 529, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 535, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 538, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    540, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 545, 0, 0,
    0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0,
    0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 550, 0, 551, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 553, 0, 0, 0, 554, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0,
    0, 0, 0, 559, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0,
    0, 0, 0, 563, 0, 0, 564, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 567, 0, 568, 0, 0, 569, 0, 0,
    0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 572, 0, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0,
    0, 0, 0, 0, 0, 0, 575, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 578, 0, 579, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 582, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 585, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 587, 0, 0, 588, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    603, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 606, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 608,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 612, 0, 0, 0,
    0, 613, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 615, 0, 616, 0, 0, 0, 617, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 619, 0, 0,
    620, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 622, 0, 0, 623, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 625, 0, 626, 0, 0, 0, 627,
    0, 0, 0, 628, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 630, 0, 0, 0, 631, 0, 632, 0, 633, 0, 0, 0, 634, 0, 0, 0, 635, 0,
    0, 0, 636, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 0, 638, 0, 639, 0, 0, 0, 0, 640, 0, 641, 0, 0, 0, 0, 642,
    0, 643, 0, 0, 0, 644, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 646, 0, 0, 0, 647, 0, 0, 0, 648, 649, 0, 650, 0, 0, 0,
    0, 0, 651, 0, 0, 0, 652, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 656, 0, 0,
    657, 0, 658, 0, 659, 0, 660, 0, 0, 661, 0, 0, 0, 0, 0, 0, 662, 0, 663, 0, 0, 664, 0, 665, 0, 666, 0, 667, 0, 668, 0, 669,
    0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 673, 0, 0, 0,
    0, 0, 0, 674, 0, 675, 0, 0, 0, 676, 0, 0, 677, 0, 0, 0, 0, 678, 0, 0, 679, 0, 0, 680, 0, 681, 0, 682, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 683, 684, 0, 685, 0, 686, 0, 687, 0, 0, 688, 0, 689, 0, 690, 0, 691,
    0, 692, 0, 693, 0, 694, 0, 695, 696, 697, 0, 698, 0, 699, 0, 0, 0, 0, 0, 0, 0, 700, 0, 701, 0, 0, 702, 0, 703, 0, 704, 0,
    705, 0, 706, 707, 708, 0, 709, 0, 710, 0, 711, 0, 0, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 714, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 716, 0, 0, 717, 0, 718, 719, 0, 720, 721, 0, 722, 0, 723, 0, 724, 0, 0, 725, 0, 726, 0, 0, 727, 0, 728, 0, 729, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 730, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 731, 0, 0, 0, 0, 0, 0, 0, 0, 732, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 733, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 735, 0, 736, 0, 737, 0, 738, 0, 739, 0, 0, 740, 0,
    0, 0, 741, 0, 742, 0, 743, 0, 744, 0, 745, 0, 746, 0, 747, 0, 748, 0, 0, 749, 0, 0, 0, 0, 750, 0, 751, 0, 752, 0, 753, 0,
    754, 0, 755, 0, 756, 0, 0, 0, 0, 0, 757, 0, 758, 0, 759, 0, 0, 0, 0, 0, 760, 0, 0, 0, 0, 0, 761, 0, 0, 0, 0, 762,
    0, 763, 0, 764, 0, 765, 0, 766, 0, 0, 0, 0, 0, 767, 0, 768, 0, 769, 0, 0, 0, 770, 0, 0, 0, 771, 0, 772, 0, 773, 0, 774,
    0, 775, 0, 776, 0, 0, 0, 0, 0, 777, 0, 778, 0, 0, 779, 0, 0, 0, 0, 0, 0, 0, 0, 780, 0, 0, 0, 0, 0, 0, 781, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 782, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 783, 0, 0, 0, 784, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 785,
};
void recomp_unit_0022_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0885C000u;
        entry_id = (entry_delta < 16360u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0022[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0885C000;
    case 2u: goto L_0885C014;
    case 3u: goto L_0885C054;
    case 4u: goto L_0885C06C;
    case 5u: goto L_0885C07C;
    case 6u: goto L_0885C0BC;
    case 7u: goto L_0885C0E4;
    case 8u: goto L_0885C0F4;
    case 9u: goto L_0885C0FC;
    case 10u: goto L_0885C104;
    case 11u: goto L_0885C10C;
    case 12u: goto L_0885C110;
    case 13u: goto L_0885C118;
    case 14u: goto L_0885C120;
    case 15u: goto L_0885C12C;
    case 16u: goto L_0885C138;
    case 17u: goto L_0885C140;
    case 18u: goto L_0885C15C;
    case 19u: goto L_0885C184;
    case 20u: goto L_0885C18C;
    case 21u: goto L_0885C1A4;
    case 22u: goto L_0885C1B8;
    case 23u: goto L_0885C1CC;
    case 24u: goto L_0885C1E0;
    case 25u: goto L_0885C200;
    case 26u: goto L_0885C22C;
    case 27u: goto L_0885C238;
    case 28u: goto L_0885C24C;
    case 29u: goto L_0885C258;
    case 30u: goto L_0885C264;
    case 31u: goto L_0885C26C;
    case 32u: goto L_0885C288;
    case 33u: goto L_0885C2A8;
    case 34u: goto L_0885C2B0;
    case 35u: goto L_0885C2D4;
    case 36u: goto L_0885C2E0;
    case 37u: goto L_0885C2F0;
    case 38u: goto L_0885C2FC;
    case 39u: goto L_0885C31C;
    case 40u: goto L_0885C324;
    case 41u: goto L_0885C33C;
    case 42u: goto L_0885C344;
    case 43u: goto L_0885C34C;
    case 44u: goto L_0885C354;
    case 45u: goto L_0885C36C;
    case 46u: goto L_0885C37C;
    case 47u: goto L_0885C384;
    case 48u: goto L_0885C394;
    case 49u: goto L_0885C3A0;
    case 50u: goto L_0885C3A8;
    case 51u: goto L_0885C3B4;
    case 52u: goto L_0885C3BC;
    case 53u: goto L_0885C3CC;
    case 54u: goto L_0885C3D4;
    case 55u: goto L_0885C3DC;
    case 56u: goto L_0885C3E4;
    case 57u: goto L_0885C3FC;
    case 58u: goto L_0885C408;
    case 59u: goto L_0885C41C;
    case 60u: goto L_0885C47C;
    case 61u: goto L_0885C490;
    case 62u: goto L_0885C4A8;
    case 63u: goto L_0885C4C0;
    case 64u: goto L_0885C4C8;
    case 65u: goto L_0885C4D0;
    case 66u: goto L_0885C4E0;
    case 67u: goto L_0885C504;
    case 68u: goto L_0885C50C;
    case 69u: goto L_0885C514;
    case 70u: goto L_0885C528;
    case 71u: goto L_0885C534;
    case 72u: goto L_0885C554;
    case 73u: goto L_0885C570;
    case 74u: goto L_0885C580;
    case 75u: goto L_0885C588;
    case 76u: goto L_0885C590;
    case 77u: goto L_0885C5A0;
    case 78u: goto L_0885C5C4;
    case 79u: goto L_0885C5CC;
    case 80u: goto L_0885C5D4;
    case 81u: goto L_0885C5F8;
    case 82u: goto L_0885C5FC;
    case 83u: goto L_0885C608;
    case 84u: goto L_0885C618;
    case 85u: goto L_0885C62C;
    case 86u: goto L_0885C644;
    case 87u: goto L_0885C64C;
    case 88u: goto L_0885C658;
    case 89u: goto L_0885C660;
    case 90u: goto L_0885C668;
    case 91u: goto L_0885C678;
    case 92u: goto L_0885C6A4;
    case 93u: goto L_0885C6BC;
    case 94u: goto L_0885C6C0;
    case 95u: goto L_0885C6CC;
    case 96u: goto L_0885C6D0;
    case 97u: goto L_0885C6E4;
    case 98u: goto L_0885C6EC;
    case 99u: goto L_0885C710;
    case 100u: goto L_0885C72C;
    case 101u: goto L_0885C738;
    case 102u: goto L_0885C748;
    case 103u: goto L_0885C768;
    case 104u: goto L_0885C774;
    case 105u: goto L_0885C7B0;
    case 106u: goto L_0885C7B8;
    case 107u: goto L_0885C7C4;
    case 108u: goto L_0885C7CC;
    case 109u: goto L_0885C7E0;
    case 110u: goto L_0885C7EC;
    case 111u: goto L_0885C7F8;
    case 112u: goto L_0885C7FC;
    case 113u: goto L_0885C820;
    case 114u: goto L_0885C84C;
    case 115u: goto L_0885C8A4;
    case 116u: goto L_0885C8B0;
    case 117u: goto L_0885C8E8;
    case 118u: goto L_0885C928;
    case 119u: goto L_0885C934;
    case 120u: goto L_0885C974;
    case 121u: goto L_0885C97C;
    case 122u: goto L_0885C9BC;
    case 123u: goto L_0885C9F4;
    case 124u: goto L_0885CA04;
    case 125u: goto L_0885CA14;
    case 126u: goto L_0885CA24;
    case 127u: goto L_0885CA30;
    case 128u: goto L_0885CA48;
    case 129u: goto L_0885CA50;
    case 130u: goto L_0885CA64;
    case 131u: goto L_0885CA80;
    case 132u: goto L_0885CA8C;
    case 133u: goto L_0885CA9C;
    case 134u: goto L_0885CAB8;
    case 135u: goto L_0885CAC8;
    case 136u: goto L_0885CAD4;
    case 137u: goto L_0885CAF8;
    case 138u: goto L_0885CB10;
    case 139u: goto L_0885CB38;
    case 140u: goto L_0885CB54;
    case 141u: goto L_0885CB78;
    case 142u: goto L_0885CB8C;
    case 143u: goto L_0885CB98;
    case 144u: goto L_0885CBAC;
    case 145u: goto L_0885CBB4;
    case 146u: goto L_0885CBC0;
    case 147u: goto L_0885CBC8;
    case 148u: goto L_0885CBDC;
    case 149u: goto L_0885CBE4;
    case 150u: goto L_0885CBF8;
    case 151u: goto L_0885CC18;
    case 152u: goto L_0885CC28;
    case 153u: goto L_0885CC30;
    case 154u: goto L_0885CC40;
    case 155u: goto L_0885CC74;
    case 156u: goto L_0885CC80;
    case 157u: goto L_0885CC90;
    case 158u: goto L_0885CC98;
    case 159u: goto L_0885CCA4;
    case 160u: goto L_0885CCB4;
    case 161u: goto L_0885CCBC;
    case 162u: goto L_0885CCC8;
    case 163u: goto L_0885CCF8;
    case 164u: goto L_0885CD08;
    case 165u: goto L_0885CD14;
    case 166u: goto L_0885CD1C;
    case 167u: goto L_0885CD24;
    case 168u: goto L_0885CD2C;
    case 169u: goto L_0885CD44;
    case 170u: goto L_0885CD60;
    case 171u: goto L_0885CD68;
    case 172u: goto L_0885CD74;
    case 173u: goto L_0885CD7C;
    case 174u: goto L_0885CD88;
    case 175u: goto L_0885CDA0;
    case 176u: goto L_0885CDB0;
    case 177u: goto L_0885CDB8;
    case 178u: goto L_0885CDC0;
    case 179u: goto L_0885CDE0;
    case 180u: goto L_0885CDEC;
    case 181u: goto L_0885CDFC;
    case 182u: goto L_0885CE0C;
    case 183u: goto L_0885CE14;
    case 184u: goto L_0885CE24;
    case 185u: goto L_0885CE2C;
    case 186u: goto L_0885CE34;
    case 187u: goto L_0885CE44;
    case 188u: goto L_0885CE48;
    case 189u: goto L_0885CE50;
    case 190u: goto L_0885CE58;
    case 191u: goto L_0885CE68;
    case 192u: goto L_0885CE84;
    case 193u: goto L_0885CE94;
    case 194u: goto L_0885CEA0;
    case 195u: goto L_0885CEB0;
    case 196u: goto L_0885CEB8;
    case 197u: goto L_0885CEC0;
    case 198u: goto L_0885CEC8;
    case 199u: goto L_0885CED0;
    case 200u: goto L_0885CEE0;
    case 201u: goto L_0885CEEC;
    case 202u: goto L_0885CF00;
    case 203u: goto L_0885CF0C;
    case 204u: goto L_0885CF14;
    case 205u: goto L_0885CF1C;
    case 206u: goto L_0885CF24;
    case 207u: goto L_0885CF30;
    case 208u: goto L_0885CF64;
    case 209u: goto L_0885CF6C;
    case 210u: goto L_0885CF74;
    case 211u: goto L_0885CF7C;
    case 212u: goto L_0885CF84;
    case 213u: goto L_0885CF8C;
    case 214u: goto L_0885CFA8;
    case 215u: goto L_0885CFBC;
    case 216u: goto L_0885CFC4;
    case 217u: goto L_0885CFDC;
    case 218u: goto L_0885CFE4;
    case 219u: goto L_0885CFE8;
    case 220u: goto L_0885CFF8;
    case 221u: goto L_0885D000;
    case 222u: goto L_0885D010;
    case 223u: goto L_0885D030;
    case 224u: goto L_0885D048;
    case 225u: goto L_0885D05C;
    case 226u: goto L_0885D070;
    case 227u: goto L_0885D084;
    case 228u: goto L_0885D094;
    case 229u: goto L_0885D0A4;
    case 230u: goto L_0885D0B4;
    case 231u: goto L_0885D0C4;
    case 232u: goto L_0885D0D8;
    case 233u: goto L_0885D0F4;
    case 234u: goto L_0885D150;
    case 235u: goto L_0885D17C;
    case 236u: goto L_0885D1D8;
    case 237u: goto L_0885D1E4;
    case 238u: goto L_0885D1EC;
    case 239u: goto L_0885D208;
    case 240u: goto L_0885D21C;
    case 241u: goto L_0885D228;
    case 242u: goto L_0885D23C;
    case 243u: goto L_0885D250;
    case 244u: goto L_0885D288;
    case 245u: goto L_0885D298;
    case 246u: goto L_0885D2A0;
    case 247u: goto L_0885D2C0;
    case 248u: goto L_0885D2D4;
    case 249u: goto L_0885D2F0;
    case 250u: goto L_0885D2FC;
    case 251u: goto L_0885D310;
    case 252u: goto L_0885D31C;
    case 253u: goto L_0885D324;
    case 254u: goto L_0885D334;
    case 255u: goto L_0885D340;
    case 256u: goto L_0885D350;
    case 257u: goto L_0885D358;
    case 258u: goto L_0885D360;
    case 259u: goto L_0885D370;
    case 260u: goto L_0885D380;
    case 261u: goto L_0885D3E0;
    case 262u: goto L_0885D3FC;
    case 263u: goto L_0885D4A4;
    case 264u: goto L_0885D4C0;
    case 265u: goto L_0885D4D0;
    case 266u: goto L_0885D540;
    case 267u: goto L_0885D54C;
    case 268u: goto L_0885D5AC;
    case 269u: goto L_0885D5D0;
    case 270u: goto L_0885D5F0;
    case 271u: goto L_0885D5F8;
    case 272u: goto L_0885D610;
    case 273u: goto L_0885D620;
    case 274u: goto L_0885D630;
    case 275u: goto L_0885D6C4;
    case 276u: goto L_0885D6EC;
    case 277u: goto L_0885D6F4;
    case 278u: goto L_0885D70C;
    case 279u: goto L_0885D720;
    case 280u: goto L_0885D740;
    case 281u: goto L_0885D79C;
    case 282u: goto L_0885D7B4;
    case 283u: goto L_0885D7C0;
    case 284u: goto L_0885D7D4;
    case 285u: goto L_0885D7E0;
    case 286u: goto L_0885D7E8;
    case 287u: goto L_0885D7F8;
    case 288u: goto L_0885D830;
    case 289u: goto L_0885D854;
    case 290u: goto L_0885D86C;
    case 291u: goto L_0885D878;
    case 292u: goto L_0885D8A4;
    case 293u: goto L_0885D8D0;
    case 294u: goto L_0885D8F8;
    case 295u: goto L_0885D900;
    case 296u: goto L_0885D918;
    case 297u: goto L_0885D940;
    case 298u: goto L_0885D970;
    case 299u: goto L_0885D9A4;
    case 300u: goto L_0885D9B0;
    case 301u: goto L_0885D9BC;
    case 302u: goto L_0885D9C8;
    case 303u: goto L_0885D9D8;
    case 304u: goto L_0885D9E8;
    case 305u: goto L_0885DA04;
    case 306u: goto L_0885DA20;
    case 307u: goto L_0885DA2C;
    case 308u: goto L_0885DA34;
    case 309u: goto L_0885DA40;
    case 310u: goto L_0885DA50;
    case 311u: goto L_0885DA64;
    case 312u: goto L_0885DA6C;
    case 313u: goto L_0885DA78;
    case 314u: goto L_0885DA7C;
    case 315u: goto L_0885DA84;
    case 316u: goto L_0885DA90;
    case 317u: goto L_0885DA94;
    case 318u: goto L_0885DA9C;
    case 319u: goto L_0885DAAC;
    case 320u: goto L_0885DAB4;
    case 321u: goto L_0885DABC;
    case 322u: goto L_0885DAC0;
    case 323u: goto L_0885DAC8;
    case 324u: goto L_0885DADC;
    case 325u: goto L_0885DAE4;
    case 326u: goto L_0885DB18;
    case 327u: goto L_0885DB64;
    case 328u: goto L_0885DB6C;
    case 329u: goto L_0885DB7C;
    case 330u: goto L_0885DB88;
    case 331u: goto L_0885DB98;
    case 332u: goto L_0885DBA4;
    case 333u: goto L_0885DBC0;
    case 334u: goto L_0885DBC8;
    case 335u: goto L_0885DBD0;
    case 336u: goto L_0885DBD8;
    case 337u: goto L_0885DBE4;
    case 338u: goto L_0885DBE8;
    case 339u: goto L_0885DBFC;
    case 340u: goto L_0885DC0C;
    case 341u: goto L_0885DC1C;
    case 342u: goto L_0885DC2C;
    case 343u: goto L_0885DC38;
    case 344u: goto L_0885DC44;
    case 345u: goto L_0885DC50;
    case 346u: goto L_0885DC5C;
    case 347u: goto L_0885DC6C;
    case 348u: goto L_0885DC78;
    case 349u: goto L_0885DC80;
    case 350u: goto L_0885DC8C;
    case 351u: goto L_0885DC9C;
    case 352u: goto L_0885DCAC;
    case 353u: goto L_0885DCBC;
    case 354u: goto L_0885DCC4;
    case 355u: goto L_0885DCC8;
    case 356u: goto L_0885DCD4;
    case 357u: goto L_0885DD04;
    case 358u: goto L_0885DD3C;
    case 359u: goto L_0885DD44;
    case 360u: goto L_0885DD4C;
    case 361u: goto L_0885DD5C;
    case 362u: goto L_0885DD64;
    case 363u: goto L_0885DD74;
    case 364u: goto L_0885DD7C;
    case 365u: goto L_0885DD84;
    case 366u: goto L_0885DD8C;
    case 367u: goto L_0885DD94;
    case 368u: goto L_0885DDB0;
    case 369u: goto L_0885DDC4;
    case 370u: goto L_0885DDD0;
    case 371u: goto L_0885DDD4;
    case 372u: goto L_0885DDDC;
    case 373u: goto L_0885DDF0;
    case 374u: goto L_0885DDF8;
    case 375u: goto L_0885DE04;
    case 376u: goto L_0885DE0C;
    case 377u: goto L_0885DE14;
    case 378u: goto L_0885DE1C;
    case 379u: goto L_0885DE24;
    case 380u: goto L_0885DE38;
    case 381u: goto L_0885DE4C;
    case 382u: goto L_0885DE64;
    case 383u: goto L_0885DE70;
    case 384u: goto L_0885DE94;
    case 385u: goto L_0885DE9C;
    case 386u: goto L_0885DEC0;
    case 387u: goto L_0885DEC8;
    case 388u: goto L_0885DED0;
    case 389u: goto L_0885DED8;
    case 390u: goto L_0885DEE0;
    case 391u: goto L_0885DEE8;
    case 392u: goto L_0885DF0C;
    case 393u: goto L_0885DF18;
    case 394u: goto L_0885DF28;
    case 395u: goto L_0885DF30;
    case 396u: goto L_0885DF40;
    case 397u: goto L_0885DF5C;
    case 398u: goto L_0885DF64;
    case 399u: goto L_0885DF6C;
    case 400u: goto L_0885DF7C;
    case 401u: goto L_0885DF84;
    case 402u: goto L_0885DF8C;
    case 403u: goto L_0885DFA0;
    case 404u: goto L_0885DFAC;
    case 405u: goto L_0885DFB4;
    case 406u: goto L_0885DFBC;
    case 407u: goto L_0885DFC8;
    case 408u: goto L_0885DFD0;
    case 409u: goto L_0885DFD8;
    case 410u: goto L_0885DFE8;
    case 411u: goto L_0885DFF4;
    case 412u: goto L_0885DFFC;
    case 413u: goto L_0885E004;
    case 414u: goto L_0885E00C;
    case 415u: goto L_0885E018;
    case 416u: goto L_0885E028;
    case 417u: goto L_0885E038;
    case 418u: goto L_0885E040;
    case 419u: goto L_0885E048;
    case 420u: goto L_0885E058;
    case 421u: goto L_0885E068;
    case 422u: goto L_0885E070;
    case 423u: goto L_0885E078;
    case 424u: goto L_0885E07C;
    case 425u: goto L_0885E084;
    case 426u: goto L_0885E08C;
    case 427u: goto L_0885E094;
    case 428u: goto L_0885E0A0;
    case 429u: goto L_0885E0AC;
    case 430u: goto L_0885E0B8;
    case 431u: goto L_0885E0C8;
    case 432u: goto L_0885E0D8;
    case 433u: goto L_0885E0FC;
    case 434u: goto L_0885E108;
    case 435u: goto L_0885E110;
    case 436u: goto L_0885E118;
    case 437u: goto L_0885E11C;
    case 438u: goto L_0885E124;
    case 439u: goto L_0885E12C;
    case 440u: goto L_0885E134;
    case 441u: goto L_0885E13C;
    case 442u: goto L_0885E144;
    case 443u: goto L_0885E14C;
    case 444u: goto L_0885E154;
    case 445u: goto L_0885E15C;
    case 446u: goto L_0885E170;
    case 447u: goto L_0885E184;
    case 448u: goto L_0885E19C;
    case 449u: goto L_0885E1A8;
    case 450u: goto L_0885E1CC;
    case 451u: goto L_0885E1D4;
    case 452u: goto L_0885E1F8;
    case 453u: goto L_0885E200;
    case 454u: goto L_0885E208;
    case 455u: goto L_0885E210;
    case 456u: goto L_0885E218;
    case 457u: goto L_0885E220;
    case 458u: goto L_0885E228;
    case 459u: goto L_0885E238;
    case 460u: goto L_0885E240;
    case 461u: goto L_0885E248;
    case 462u: goto L_0885E25C;
    case 463u: goto L_0885E268;
    case 464u: goto L_0885E270;
    case 465u: goto L_0885E278;
    case 466u: goto L_0885E280;
    case 467u: goto L_0885E28C;
    case 468u: goto L_0885E29C;
    case 469u: goto L_0885E2AC;
    case 470u: goto L_0885E2B4;
    case 471u: goto L_0885E2BC;
    case 472u: goto L_0885E2CC;
    case 473u: goto L_0885E2DC;
    case 474u: goto L_0885E2E4;
    case 475u: goto L_0885E2EC;
    case 476u: goto L_0885E2F0;
    case 477u: goto L_0885E2F8;
    case 478u: goto L_0885E300;
    case 479u: goto L_0885E308;
    case 480u: goto L_0885E314;
    case 481u: goto L_0885E31C;
    case 482u: goto L_0885E32C;
    case 483u: goto L_0885E33C;
    case 484u: goto L_0885E34C;
    case 485u: goto L_0885E368;
    case 486u: goto L_0885E374;
    case 487u: goto L_0885E37C;
    case 488u: goto L_0885E384;
    case 489u: goto L_0885E390;
    case 490u: goto L_0885E39C;
    case 491u: goto L_0885E3A4;
    case 492u: goto L_0885E3B0;
    case 493u: goto L_0885E3B8;
    case 494u: goto L_0885E3C0;
    case 495u: goto L_0885E3E4;
    case 496u: goto L_0885E418;
    case 497u: goto L_0885E420;
    case 498u: goto L_0885E430;
    case 499u: goto L_0885E454;
    case 500u: goto L_0885E46C;
    case 501u: goto L_0885E480;
    case 502u: goto L_0885E48C;
    case 503u: goto L_0885E494;
    case 504u: goto L_0885E4A0;
    case 505u: goto L_0885E4A8;
    case 506u: goto L_0885E4AC;
    case 507u: goto L_0885E4B8;
    case 508u: goto L_0885E4C0;
    case 509u: goto L_0885E4D4;
    case 510u: goto L_0885E4E8;
    case 511u: goto L_0885E4F0;
    case 512u: goto L_0885E4F8;
    case 513u: goto L_0885E504;
    case 514u: goto L_0885E510;
    case 515u: goto L_0885E51C;
    case 516u: goto L_0885E520;
    case 517u: goto L_0885E52C;
    case 518u: goto L_0885E53C;
    case 519u: goto L_0885E548;
    case 520u: goto L_0885E554;
    case 521u: goto L_0885E564;
    case 522u: goto L_0885E56C;
    case 523u: goto L_0885E574;
    case 524u: goto L_0885E580;
    case 525u: goto L_0885E5A0;
    case 526u: goto L_0885E5F0;
    case 527u: goto L_0885E60C;
    case 528u: goto L_0885E678;
    case 529u: goto L_0885E684;
    case 530u: goto L_0885E690;
    case 531u: goto L_0885E6DC;
    case 532u: goto L_0885E730;
    case 533u: goto L_0885E744;
    case 534u: goto L_0885E75C;
    case 535u: goto L_0885E778;
    case 536u: goto L_0885E7E4;
    case 537u: goto L_0885E860;
    case 538u: goto L_0885E870;
    case 539u: goto L_0885E8AC;
    case 540u: goto L_0885E900;
    case 541u: goto L_0885E91C;
    case 542u: goto L_0885E9A0;
    case 543u: goto L_0885E9C8;
    case 544u: goto L_0885E9D8;
    case 545u: goto L_0885E9F4;
    case 546u: goto L_0885EA18;
    case 547u: goto L_0885EA30;
    case 548u: goto L_0885EA70;
    case 549u: goto L_0885EA94;
    case 550u: goto L_0885EAB4;
    case 551u: goto L_0885EABC;
    case 552u: goto L_0885EAD8;
    case 553u: goto L_0885EAE8;
    case 554u: goto L_0885EAF8;
    case 555u: goto L_0885EB3C;
    case 556u: goto L_0885EB54;
    case 557u: goto L_0885EB6C;
    case 558u: goto L_0885EBF8;
    case 559u: goto L_0885EC0C;
    case 560u: goto L_0885EC18;
    case 561u: goto L_0885EC58;
    case 562u: goto L_0885ECE8;
    case 563u: goto L_0885ED0C;
    case 564u: goto L_0885ED18;
    case 565u: goto L_0885ED34;
    case 566u: goto L_0885ED58;
    case 567u: goto L_0885ED60;
    case 568u: goto L_0885ED68;
    case 569u: goto L_0885ED74;
    case 570u: goto L_0885ED90;
    case 571u: goto L_0885EDB4;
    case 572u: goto L_0885EDBC;
    case 573u: goto L_0885EDC8;
    case 574u: goto L_0885EDF4;
    case 575u: goto L_0885EE18;
    case 576u: goto L_0885EE24;
    case 577u: goto L_0885EE50;
    case 578u: goto L_0885EE70;
    case 579u: goto L_0885EE78;
    case 580u: goto L_0885EEA4;
    case 581u: goto L_0885EEC8;
    case 582u: goto L_0885EED0;
    case 583u: goto L_0885EEE8;
    case 584u: goto L_0885EF20;
    case 585u: goto L_0885EF30;
    case 586u: goto L_0885EF44;
    case 587u: goto L_0885EF5C;
    case 588u: goto L_0885EF68;
    case 589u: goto L_0885EF9C;
    case 590u: goto L_0885EFCC;
    case 591u: goto L_0885EFEC;
    case 592u: goto L_0885F020;
    case 593u: goto L_0885F034;
    case 594u: goto L_0885F050;
    case 595u: goto L_0885F0AC;
    case 596u: goto L_0885F0C0;
    case 597u: goto L_0885F0DC;
    case 598u: goto L_0885F16C;
    case 599u: goto L_0885F1A4;
    case 600u: goto L_0885F1E0;
    case 601u: goto L_0885F214;
    case 602u: goto L_0885F250;
    case 603u: goto L_0885F280;
    case 604u: goto L_0885F298;
    case 605u: goto L_0885F2C4;
    case 606u: goto L_0885F2CC;
    case 607u: goto L_0885F2E8;
    case 608u: goto L_0885F2FC;
    case 609u: goto L_0885F32C;
    case 610u: goto L_0885F344;
    case 611u: goto L_0885F358;
    case 612u: goto L_0885F370;
    case 613u: goto L_0885F384;
    case 614u: goto L_0885F398;
    case 615u: goto L_0885F3B0;
    case 616u: goto L_0885F3B8;
    case 617u: goto L_0885F3C8;
    case 618u: goto L_0885F3DC;
    case 619u: goto L_0885F3F4;
    case 620u: goto L_0885F400;
    case 621u: goto L_0885F414;
    case 622u: goto L_0885F42C;
    case 623u: goto L_0885F438;
    case 624u: goto L_0885F44C;
    case 625u: goto L_0885F464;
    case 626u: goto L_0885F46C;
    case 627u: goto L_0885F47C;
    case 628u: goto L_0885F48C;
    case 629u: goto L_0885F4A0;
    case 630u: goto L_0885F4B8;
    case 631u: goto L_0885F4C8;
    case 632u: goto L_0885F4D0;
    case 633u: goto L_0885F4D8;
    case 634u: goto L_0885F4E8;
    case 635u: goto L_0885F4F8;
    case 636u: goto L_0885F508;
    case 637u: goto L_0885F524;
    case 638u: goto L_0885F544;
    case 639u: goto L_0885F54C;
    case 640u: goto L_0885F560;
    case 641u: goto L_0885F568;
    case 642u: goto L_0885F57C;
    case 643u: goto L_0885F584;
    case 644u: goto L_0885F594;
    case 645u: goto L_0885F5AC;
    case 646u: goto L_0885F5C4;
    case 647u: goto L_0885F5D4;
    case 648u: goto L_0885F5E4;
    case 649u: goto L_0885F5E8;
    case 650u: goto L_0885F5F0;
    case 651u: goto L_0885F608;
    case 652u: goto L_0885F618;
    case 653u: goto L_0885F630;
    case 654u: goto L_0885F648;
    case 655u: goto L_0885F664;
    case 656u: goto L_0885F674;
    case 657u: goto L_0885F680;
    case 658u: goto L_0885F688;
    case 659u: goto L_0885F690;
    case 660u: goto L_0885F698;
    case 661u: goto L_0885F6A4;
    case 662u: goto L_0885F6C0;
    case 663u: goto L_0885F6C8;
    case 664u: goto L_0885F6D4;
    case 665u: goto L_0885F6DC;
    case 666u: goto L_0885F6E4;
    case 667u: goto L_0885F6EC;
    case 668u: goto L_0885F6F4;
    case 669u: goto L_0885F6FC;
    case 670u: goto L_0885F708;
    case 671u: goto L_0885F778;
    case 672u: goto L_0885F7DC;
    case 673u: goto L_0885F7F0;
    case 674u: goto L_0885F80C;
    case 675u: goto L_0885F814;
    case 676u: goto L_0885F824;
    case 677u: goto L_0885F830;
    case 678u: goto L_0885F844;
    case 679u: goto L_0885F850;
    case 680u: goto L_0885F85C;
    case 681u: goto L_0885F864;
    case 682u: goto L_0885F86C;
    case 683u: goto L_0885F8BC;
    case 684u: goto L_0885F8C0;
    case 685u: goto L_0885F8C8;
    case 686u: goto L_0885F8D0;
    case 687u: goto L_0885F8D8;
    case 688u: goto L_0885F8E4;
    case 689u: goto L_0885F8EC;
    case 690u: goto L_0885F8F4;
    case 691u: goto L_0885F8FC;
    case 692u: goto L_0885F904;
    case 693u: goto L_0885F90C;
    case 694u: goto L_0885F914;
    case 695u: goto L_0885F91C;
    case 696u: goto L_0885F920;
    case 697u: goto L_0885F924;
    case 698u: goto L_0885F92C;
    case 699u: goto L_0885F934;
    case 700u: goto L_0885F954;
    case 701u: goto L_0885F95C;
    case 702u: goto L_0885F968;
    case 703u: goto L_0885F970;
    case 704u: goto L_0885F978;
    case 705u: goto L_0885F980;
    case 706u: goto L_0885F988;
    case 707u: goto L_0885F98C;
    case 708u: goto L_0885F990;
    case 709u: goto L_0885F998;
    case 710u: goto L_0885F9A0;
    case 711u: goto L_0885F9A8;
    case 712u: goto L_0885F9C4;
    case 713u: goto L_0885FA38;
    case 714u: goto L_0885FA40;
    case 715u: goto L_0885FA50;
    case 716u: goto L_0885FA8C;
    case 717u: goto L_0885FA98;
    case 718u: goto L_0885FAA0;
    case 719u: goto L_0885FAA4;
    case 720u: goto L_0885FAAC;
    case 721u: goto L_0885FAB0;
    case 722u: goto L_0885FAB8;
    case 723u: goto L_0885FAC0;
    case 724u: goto L_0885FAC8;
    case 725u: goto L_0885FAD4;
    case 726u: goto L_0885FADC;
    case 727u: goto L_0885FAE8;
    case 728u: goto L_0885FAF0;
    case 729u: goto L_0885FAF8;
    case 730u: goto L_0885FB40;
    case 731u: goto L_0885FBD0;
    case 732u: goto L_0885FBF4;
    case 733u: goto L_0885FC1C;
    case 734u: goto L_0885FC3C;
    case 735u: goto L_0885FC4C;
    case 736u: goto L_0885FC54;
    case 737u: goto L_0885FC5C;
    case 738u: goto L_0885FC64;
    case 739u: goto L_0885FC6C;
    case 740u: goto L_0885FC78;
    case 741u: goto L_0885FC88;
    case 742u: goto L_0885FC90;
    case 743u: goto L_0885FC98;
    case 744u: goto L_0885FCA0;
    case 745u: goto L_0885FCA8;
    case 746u: goto L_0885FCB0;
    case 747u: goto L_0885FCB8;
    case 748u: goto L_0885FCC0;
    case 749u: goto L_0885FCCC;
    case 750u: goto L_0885FCE0;
    case 751u: goto L_0885FCE8;
    case 752u: goto L_0885FCF0;
    case 753u: goto L_0885FCF8;
    case 754u: goto L_0885FD00;
    case 755u: goto L_0885FD08;
    case 756u: goto L_0885FD10;
    case 757u: goto L_0885FD28;
    case 758u: goto L_0885FD30;
    case 759u: goto L_0885FD38;
    case 760u: goto L_0885FD50;
    case 761u: goto L_0885FD68;
    case 762u: goto L_0885FD7C;
    case 763u: goto L_0885FD84;
    case 764u: goto L_0885FD8C;
    case 765u: goto L_0885FD94;
    case 766u: goto L_0885FD9C;
    case 767u: goto L_0885FDB4;
    case 768u: goto L_0885FDBC;
    case 769u: goto L_0885FDC4;
    case 770u: goto L_0885FDD4;
    case 771u: goto L_0885FDE4;
    case 772u: goto L_0885FDEC;
    case 773u: goto L_0885FDF4;
    case 774u: goto L_0885FDFC;
    case 775u: goto L_0885FE04;
    case 776u: goto L_0885FE0C;
    case 777u: goto L_0885FE24;
    case 778u: goto L_0885FE2C;
    case 779u: goto L_0885FE38;
    case 780u: goto L_0885FE5C;
    case 781u: goto L_0885FE78;
    case 782u: goto L_0885FF78;
    case 783u: goto L_0885FFA4;
    case 784u: goto L_0885FFB4;
    case 785u: goto L_0885FFE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0885C000:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
      if (branch_taken) {
          goto L_0885C054;
      }
      goto L_0885C014;
    }
L_0885C014:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[30] / ctx.fpr[12];
    ctx.gpr[6] = (ctx.gpr[18] - ctx.gpr[17]);
    ctx.gpr[7] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[28];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    goto L_0885C054;
L_0885C054:
    ctx.gpr[6] = (17378u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0885C06Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 487u, 0x0883BC14u>(ctx, &aot_mem) && ctx.pc == 0x0885C06Cu) goto L_0885C06C;
    return;
L_0885C06C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0885C07Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 416u, 0x0885AA0Cu>(ctx, &aot_mem) && ctx.pc == 0x0885C07Cu) goto L_0885C07C;
    return;
L_0885C07C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C0BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 4u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[16] = (0u | 368u);
    ctx.gpr[17] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    goto L_0885C0E4;
L_0885C0E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[18];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0885C104;
      }
      goto L_0885C0F4;
    }
L_0885C0F4:
    ctx.gpr[31] = (0x0885C0FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 530u, 0x0883BF7Cu>(ctx, &aot_mem) && ctx.pc == 0x0885C0FCu) goto L_0885C0FC;
    return;
L_0885C0FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0885C110;
      }
      goto L_0885C104;
    }
L_0885C104:
    ctx.gpr[31] = (0x0885C10Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0885C10Cu) goto L_0885C10C;
    return;
L_0885C10C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    goto L_0885C110;
L_0885C110:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) > 0;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-92));
      if (branch_taken) {
          goto L_0885C0E4;
      }
      goto L_0885C118;
    }
L_0885C118:
    ctx.gpr[31] = (0x0885C120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 593u, 0x0885BD88u>(ctx, &aot_mem) && ctx.pc == 0x0885C120u) goto L_0885C120;
    return;
L_0885C120:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[31] = (0x0885C12Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0885C12Cu) goto L_0885C12C;
    return;
L_0885C12C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[31] = (0x0885C138u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 492u, 0x0883BC58u>(ctx, &aot_mem) && ctx.pc == 0x0885C138u) goto L_0885C138;
    return;
L_0885C138:
    ctx.gpr[31] = (0x0885C140u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 430u, 0x0885AB94u>(ctx, &aot_mem) && ctx.pc == 0x0885C140u) goto L_0885C140;
    return;
L_0885C140:
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
L_0885C15C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_0885C184;
L_0885C184:
    ctx.gpr[31] = (0x0885C18Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0885C18Cu) goto L_0885C18C;
    return;
L_0885C18C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
      if (branch_taken) {
          goto L_0885C184;
      }
      goto L_0885C1A4;
    }
L_0885C1A4:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0885C1B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885C1B8u) goto L_0885C1B8;
    return;
L_0885C1B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(180), 0u);
    ctx.gpr[31] = (0x0885C1CCu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0885C1CCu) goto L_0885C1CC;
    return;
L_0885C1CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0885C1E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885C1E0u) goto L_0885C1E0;
    return;
L_0885C1E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), 0u);
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
L_0885C200:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22692)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    goto L_0885C22C;
L_0885C22C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    ctx.gpr[31] = (0x0885C238u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0885C238u) goto L_0885C238;
    return;
L_0885C238:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22692)));
      if (branch_taken) {
          goto L_0885C22C;
      }
      goto L_0885C24C;
    }
L_0885C24C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0885C26C;
      }
      goto L_0885C258;
    }
L_0885C258:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0885C26C;
      }
      goto L_0885C264;
    }
L_0885C264:
    ctx.gpr[31] = (0x0885C26Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0885C26Cu) goto L_0885C26C;
    return;
L_0885C26C:
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
L_0885C288:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0885C2FC;
      }
      goto L_0885C2A8;
    }
L_0885C2A8:
    ctx.gpr[31] = (0x0885C2B0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0885CA64;
L_0885C2B0:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[5] = (578u << 16u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27836));
    ctx.gpr[31] = (0x0885C2D4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22563));
    ctx.pc = 0x08AB4764u;
    return;
L_0885C2D4:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0885C2F0;
      }
      goto L_0885C2E0;
    }
L_0885C2E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[4] ^ 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_0885C2F0;
      }
      goto L_0885C2F0;
    }
L_0885C2F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0885C36C;
      }
      goto L_0885C2FC;
    }
L_0885C2FC:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(140)));
    ctx.gpr[6] = (0u | 44u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0885C354;
      }
      goto L_0885C31C;
    }
L_0885C31C:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0885C344;
      }
      goto L_0885C324;
    }
L_0885C324:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8)));
    ctx.gpr[31] = (0x0885C33Cu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_0885C37C;
L_0885C33C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885C36C;
      }
      goto L_0885C344;
    }
L_0885C344:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 68u);
      if (branch_taken) {
          goto L_0885C354;
      }
      goto L_0885C34C;
    }
L_0885C34C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0885C36C;
      }
      goto L_0885C354;
    }
L_0885C354:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[31] = (0x0885C36Cu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_0885C37C;
L_0885C36C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C37C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C384:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0885C394u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 319u, 0x088BDD98u>(ctx, &aot_mem) && ctx.pc == 0x0885C394u) goto L_0885C394;
    return;
L_0885C394:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x0885C3A0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x0885C3A0u) goto L_0885C3A0;
    return;
L_0885C3A0:
    ctx.gpr[31] = (0x0885C3A8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 319u, 0x088BDD98u>(ctx, &aot_mem) && ctx.pc == 0x0885C3A8u) goto L_0885C3A8;
    return;
L_0885C3A8:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[31] = (0x0885C3B4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x0885C3B4u) goto L_0885C3B4;
    return;
L_0885C3B4:
    ctx.gpr[31] = (0x0885C3BCu);
    // nop
    goto L_0885DAE4;
L_0885C3BC:
    ctx.gpr[4] = (2182u << 16u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x0885C3CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26212));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x0885C3CCu) goto L_0885C3CC;
    return;
L_0885C3CC:
    ctx.gpr[31] = (0x0885C3D4u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 705u, 0x0884BCE4u>(ctx, &aot_mem) && ctx.pc == 0x0885C3D4u) goto L_0885C3D4;
    return;
L_0885C3D4:
    ctx.gpr[31] = (0x0885C3DCu);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 712u, 0x0884BD54u>(ctx, &aot_mem) && ctx.pc == 0x0885C3DCu) goto L_0885C3DC;
    return;
L_0885C3DC:
    ctx.gpr[31] = (0x0885C3E4u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 713u, 0x0884BD6Cu>(ctx, &aot_mem) && ctx.pc == 0x0885C3E4u) goto L_0885C3E4;
    return;
L_0885C3E4:
    ctx.gpr[4] = (2183u << 16u);
    ctx.gpr[5] = (2183u << 16u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18056));
    ctx.gpr[31] = (0x0885C3FCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-17548));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x0885C3FCu) goto L_0885C3FC;
    return;
L_0885C3FC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C408:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0885C41Cu);
    // nop
    goto L_0885C9F4;
L_0885C41C:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(200), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(212), 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(236), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(108), 0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0885C47C;
L_0885C47C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0885C47C;
      }
      goto L_0885C490;
    }
L_0885C490:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0885C4A8u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885C4A8u) goto L_0885C4A8;
    return;
L_0885C4A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0885C4C0u);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0885C4C0u) goto L_0885C4C0;
    return;
L_0885C4C0:
    ctx.gpr[31] = (0x0885C4C8u);
    // nop
    goto L_0885C6EC;
L_0885C4C8:
    ctx.gpr[31] = (0x0885C4D0u);
    // nop
    goto L_0885C4E0;
L_0885C4D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C4E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[4] = (0u | 1u);
    goto L_0885C504;
L_0885C504:
    ctx.gpr[31] = (0x0885C50Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 288u, 0x0884D2A0u>(ctx, &aot_mem) && ctx.pc == 0x0885C50Cu) goto L_0885C50C;
    return;
L_0885C50C:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_0885C528;
    }
    goto L_0885C514;
L_0885C514:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0885C528;
L_0885C528:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 68 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0885C504;
      }
      goto L_0885C534;
    }
L_0885C534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0885C554u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885C554u) goto L_0885C554;
    return;
L_0885C554:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[31] = (0x0885C570u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0885C570u) goto L_0885C570;
    return;
L_0885C570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[4] = (0u | 1u);
    goto L_0885C580;
L_0885C580:
    ctx.gpr[31] = (0x0885C588u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 288u, 0x0884D2A0u>(ctx, &aot_mem) && ctx.pc == 0x0885C588u) goto L_0885C588;
    return;
L_0885C588:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_0885C5FC;
    }
    goto L_0885C590;
L_0885C590:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885C5C4;
      }
      goto L_0885C5A0;
    }
L_0885C5A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0885C5F8;
      }
      goto L_0885C5C4;
    }
L_0885C5C4:
    ctx.gpr[31] = (0x0885C5CCu);
    // nop
    goto L_0885CA14;
L_0885C5CC:
    if (ctx.gpr[17] == ctx.gpr[2]) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_0885C5FC;
    }
    goto L_0885C5D4;
L_0885C5D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    goto L_0885C5F8;
L_0885C5F8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0885C5FC;
L_0885C5FC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 68 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0885C580;
      }
      goto L_0885C608;
    }
L_0885C608:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x0885C618u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    goto L_0885C62C;
L_0885C618:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C62C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[12] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[12]) <= 0;
    ctx.gpr[9] = (2221u << 16u);
      if (branch_taken) {
          goto L_0885C6E4;
      }
      goto L_0885C644;
    }
L_0885C644:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(8764));
    ctx.gpr[3] = (ctx.gpr[12] | 0u);
    goto L_0885C64C;
L_0885C64C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 1u));
      if (branch_taken) {
          goto L_0885C6D0;
      }
      goto L_0885C658;
    }
L_0885C658:
    ctx.gpr[6] = (ctx.gpr[12] << 2u);
    ctx.gpr[2] = (ctx.gpr[3] - ctx.gpr[12]);
    goto L_0885C660;
L_0885C660:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[7] = (ctx.gpr[12] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_0885C6BC;
      }
      goto L_0885C668;
    }
L_0885C668:
    ctx.gpr[11] = (ctx.gpr[7] << 2u);
    ctx.gpr[8] = (ctx.gpr[2] << 2u);
    ctx.gpr[11] = (ctx.gpr[4] + ctx.gpr[11]);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    goto L_0885C678;
L_0885C678:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[13] = (ctx.gpr[10] << 2u);
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[9]);
    ctx.gpr[14] = (ctx.gpr[7] << 2u);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.gpr[14] = (ctx.gpr[14] + ctx.gpr[9]);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[14]) ? 1u : 0u);
    if (ctx.gpr[13] == 0u) {
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
        goto L_0885C6C0;
    }
    goto L_0885C6A4;
L_0885C6A4:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[2] = (ctx.gpr[2] - ctx.gpr[12]);
    ctx.gpr[11] = (ctx.gpr[11] - ctx.gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[6]);
      if (branch_taken) {
          goto L_0885C678;
      }
      goto L_0885C6BC;
    }
L_0885C6BC:
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_0885C6C0;
L_0885C6C0:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[2] = (ctx.gpr[3] - ctx.gpr[12]);
      if (branch_taken) {
          goto L_0885C660;
      }
      goto L_0885C6CC;
    }
L_0885C6CC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 1u));
    goto L_0885C6D0;
L_0885C6D0:
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[6]);
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[12]) > 0;
    ctx.gpr[3] = (ctx.gpr[12] | 0u);
      if (branch_taken) {
          goto L_0885C64C;
      }
      goto L_0885C6E4;
    }
L_0885C6E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C6EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 4592u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0885C710u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885C710u) goto L_0885C710;
    return;
L_0885C710:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0885C72Cu);
    ctx.gpr[6] = (0u | 4592u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0885C72Cu) goto L_0885C72C;
    return;
L_0885C72C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[31] = (0x0885C738u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 179u, 0x0884CBF8u>(ctx, &aot_mem) && ctx.pc == 0x0885C738u) goto L_0885C738;
    return;
L_0885C738:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C748:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0885C768u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 530u, 0x08842960u>(ctx, &aot_mem) && ctx.pc == 0x0885C768u) goto L_0885C768;
    return;
L_0885C768:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C774:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    goto L_0885C7B0;
L_0885C7B0:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(-3));
      if (branch_taken) {
          goto L_0885C7E0;
      }
      goto L_0885C7B8;
    }
L_0885C7B8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(-3));
      if (branch_taken) {
          goto L_0885C7E0;
      }
      goto L_0885C7C4;
    }
L_0885C7C4:
    ctx.gpr[31] = (0x0885C7CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 77u, 0x089AD318u>(ctx, &aot_mem) && ctx.pc == 0x0885C7CCu) goto L_0885C7CC;
    return;
L_0885C7CC:
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[19]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.hi);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0885C7B0;
      }
      goto L_0885C7E0;
    }
L_0885C7E0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[16]);
      if (branch_taken) {
          goto L_0885C7F8;
      }
      goto L_0885C7EC;
    }
L_0885C7EC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0885C7FC;
      }
      goto L_0885C7F8;
    }
L_0885C7F8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    goto L_0885C7FC;
L_0885C7FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C820:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (2222u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(148)));
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 255u);
      if (branch_taken) {
          goto L_0885C8A4;
      }
      goto L_0885C84C;
    }
L_0885C84C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 123u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 82u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C8A4:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[4]) < 101 ? 1u : 0u);
    if (ctx.gpr[9] == 0u) {
    ctx.gpr[4] = (0u | 100u);
        goto L_0885C8B0;
    }
    goto L_0885C8B0;
L_0885C8B0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[9] = (16968u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[9] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[4]) < 25 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(148)));
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_0885C928;
      }
      goto L_0885C8E8;
    }
L_0885C8E8:
    ctx.gpr[4] = (0u | 123u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (0u | 82u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(5)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(7)));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C928:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 75 ? 1u : 0u);
      if (branch_taken) {
          goto L_0885C974;
      }
      goto L_0885C934;
    }
L_0885C934:
    ctx.gpr[4] = (0u | 224u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 82u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(9)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(10)));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(11)));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C974:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 12u);
      if (branch_taken) {
          goto L_0885C9BC;
      }
      goto L_0885C97C;
    }
L_0885C97C:
    ctx.gpr[4] = (0u | 157u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 79u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(13)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(14)));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(15)));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C9BC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885C9F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0885CA04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 203u, 0x088BD634u>(ctx, &aot_mem) && ctx.pc == 0x0885CA04u) goto L_0885CA04;
    return;
L_0885CA04:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885CA14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0885CA24u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 319u, 0x088BDD98u>(ctx, &aot_mem) && ctx.pc == 0x0885CA24u) goto L_0885CA24;
    return;
L_0885CA24:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885CA30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0885CA48u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 319u, 0x088BDD98u>(ctx, &aot_mem) && ctx.pc == 0x0885CA48u) goto L_0885CA48;
    return;
L_0885CA48:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.gpr[16] = (0u | 1u);
        goto L_0885CA50;
    }
    goto L_0885CA50;
L_0885CA50:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885CA64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0885CA80u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 468u, 0x089296B4u>(ctx, &aot_mem) && ctx.pc == 0x0885CA80u) goto L_0885CA80;
    return;
L_0885CA80:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885CA8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0885CA9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 478u, 0x08929770u>(ctx, &aot_mem) && ctx.pc == 0x0885CA9Cu) goto L_0885CA9C;
    return;
L_0885CA9C:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885CAB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0885CAC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 484u, 0x089297E4u>(ctx, &aot_mem) && ctx.pc == 0x0885CAC8u) goto L_0885CAC8;
    return;
L_0885CAC8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885CAD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    ctx.gpr[5] = (0u | 160u);
    ctx.gpr[4] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0885CAF8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10732));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885CAF8u) goto L_0885CAF8;
    return;
L_0885CAF8:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22692)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(212), ctx.gpr[2]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885CB10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0885CB38u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(10732));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0885CB38u) goto L_0885CB38;
    return;
L_0885CB38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885CB54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0885CBAC;
      }
      goto L_0885CB78;
    }
L_0885CB78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0885CB8Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 601u, 0x08929F68u>(ctx, &aot_mem) && ctx.pc == 0x0885CB8Cu) goto L_0885CB8C;
    return;
L_0885CB8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_0885CB98;
L_0885CB98:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885CBAC:
    ctx.gpr[31] = (0x0885CBB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 620u, 0x0892A0ECu>(ctx, &aot_mem) && ctx.pc == 0x0885CBB4u) goto L_0885CBB4;
    return;
L_0885CBB4:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0885CB98;
      }
      goto L_0885CBC0;
    }
L_0885CBC0:
    ctx.gpr[31] = (0x0885CBC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 631u, 0x0892A17Cu>(ctx, &aot_mem) && ctx.pc == 0x0885CBC8u) goto L_0885CBC8;
    return;
L_0885CBC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(216), ctx.gpr[2]);
    ctx.gpr[31] = (0x0885CBDCu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 632u, 0x0892A18Cu>(ctx, &aot_mem) && ctx.pc == 0x0885CBDCu) goto L_0885CBDC;
    return;
L_0885CBDC:
    ctx.gpr[31] = (0x0885CBE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 613u, 0x0892A060u>(ctx, &aot_mem) && ctx.pc == 0x0885CBE4u) goto L_0885CBE4;
    return;
L_0885CBE4:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885CBF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_0885CC30;
      }
      goto L_0885CC18;
    }
L_0885CC18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0885CC28u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885CC28u) goto L_0885CC28;
    return;
L_0885CC28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(212), 0u);
    goto L_0885CC30;
L_0885CC30:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885CC40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0885CC74u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x0885CC74u) goto L_0885CC74;
    return;
L_0885CC74:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885CC80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0885CC90u);
    // nop
    goto L_0885EF9C;
L_0885CC90:
    ctx.gpr[31] = (0x0885CC98u);
    // nop
    goto L_0885D380;
L_0885CC98:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885CCA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0885CCB4u);
    // nop
    goto L_0885D010;
L_0885CCB4:
    ctx.gpr[31] = (0x0885CCBCu);
    // nop
    goto L_0885D6C4;
L_0885CCBC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885CCC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(47)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
        goto L_0885CD08;
    }
    goto L_0885CCF8;
L_0885CCF8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(200), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), 0u);
      if (branch_taken) {
          goto L_0885CF7C;
      }
      goto L_0885CD08;
    }
L_0885CD08:
    ctx.gpr[18] = (0u | 1u);
    if (ctx.gpr[5] != ctx.gpr[18]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
        goto L_0885CD68;
    }
    goto L_0885CD14;
L_0885CD14:
    ctx.gpr[31] = (0x0885CD1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 128u, 0x088BCDECu>(ctx, &aot_mem) && ctx.pc == 0x0885CD1Cu) goto L_0885CD1C;
    return;
L_0885CD1C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0885CF7C;
      }
      goto L_0885CD24;
    }
L_0885CD24:
    ctx.gpr[31] = (0x0885CD2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 127u, 0x088BCDE4u>(ctx, &aot_mem) && ctx.pc == 0x0885CD2Cu) goto L_0885CD2C;
    return;
L_0885CD2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), 0u);
    goto L_0885CD44;
L_0885CD44:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(60), 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0885CD44;
      }
      goto L_0885CD60;
    }
L_0885CD60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885CF7C;
      }
      goto L_0885CD68;
    }
L_0885CD68:
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0885CF7C;
      }
      goto L_0885CD74;
    }
L_0885CD74:
    ctx.gpr[31] = (0x0885CD7Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 261u, 0x08821820u>(ctx, &aot_mem) && ctx.pc == 0x0885CD7Cu) goto L_0885CD7C;
    return;
L_0885CD7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          goto L_0885CDB8;
      }
      goto L_0885CD88;
    }
L_0885CD88:
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(108), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885CE48;
      }
      goto L_0885CDA0;
    }
L_0885CDA0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(200), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[31] = (0x0885CDB0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), 0u);
    goto L_0885CA64;
L_0885CDB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(108)));
    goto L_0885CDB8;
L_0885CDB8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (2220u << 16u);
      if (branch_taken) {
          goto L_0885CE48;
      }
      goto L_0885CDC0;
    }
L_0885CDC0:
    ctx.gpr[5] = (578u << 16u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27836));
    ctx.gpr[31] = (0x0885CDE0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22563));
    ctx.pc = 0x08AB4764u;
    return;
L_0885CDE0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
      if (branch_taken) {
          goto L_0885CDFC;
      }
      goto L_0885CDEC;
    }
L_0885CDEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_0885CDFC;
      }
      goto L_0885CDFC;
    }
L_0885CDFC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    if (ctx.gpr[19] == ctx.gpr[6]) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
        goto L_0885CE48;
    }
    goto L_0885CE0C;
L_0885CE0C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0885CE2C;
      }
      goto L_0885CE14;
    }
L_0885CE14:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(200), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[31] = (0x0885CE24u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), 0u);
    goto L_0885CA64;
L_0885CE24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
      if (branch_taken) {
          goto L_0885CE44;
      }
      goto L_0885CE2C;
    }
L_0885CE2C:
    ctx.gpr[31] = (0x0885CE34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 124u, 0x088BCDBCu>(ctx, &aot_mem) && ctx.pc == 0x0885CE34u) goto L_0885CE34;
    return;
L_0885CE34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    goto L_0885CE44;
L_0885CE44:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    goto L_0885CE48;
L_0885CE48:
    ctx.gpr[31] = (0x0885CE50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 206u, 0x088BD65Cu>(ctx, &aot_mem) && ctx.pc == 0x0885CE50u) goto L_0885CE50;
    return;
L_0885CE50:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885CF7C;
      }
      goto L_0885CE58;
    }
L_0885CE58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
      if (branch_taken) {
          goto L_0885CEC8;
      }
      goto L_0885CE68;
    }
L_0885CE68:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(200)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885CEB8;
      }
      goto L_0885CE84;
    }
L_0885CE84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(196)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0885CEA0;
      }
      goto L_0885CE94;
    }
L_0885CE94:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(196), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(200)));
    goto L_0885CEA0;
L_0885CEA0:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(200), ctx.gpr[4]);
    ctx.gpr[31] = (0x0885CEB0u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0885CEB0u) goto L_0885CEB0;
    return;
L_0885CEB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885CF7C;
      }
      goto L_0885CEB8;
    }
L_0885CEB8:
    ctx.gpr[31] = (0x0885CEC0u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0885CEC0u) goto L_0885CEC0;
    return;
L_0885CEC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885CF7C;
      }
      goto L_0885CEC8;
    }
L_0885CEC8:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_0885CF24;
    }
    goto L_0885CED0;
L_0885CED0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885CF14;
      }
      goto L_0885CEE0;
    }
L_0885CEE0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0885CF00;
      }
      goto L_0885CEEC;
    }
L_0885CEEC:
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    goto L_0885CF00;
L_0885CF00:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(200), ctx.gpr[5]);
    ctx.gpr[31] = (0x0885CF0Cu);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0885CF0Cu) goto L_0885CF0C;
    return;
L_0885CF0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885CF7C;
      }
      goto L_0885CF14;
    }
L_0885CF14:
    ctx.gpr[31] = (0x0885CF1Cu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0885CF1Cu) goto L_0885CF1C;
    return;
L_0885CF1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885CF7C;
      }
      goto L_0885CF24;
    }
L_0885CF24:
    ctx.gpr[4] = (0u | 64u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 128u);
      if (branch_taken) {
          goto L_0885CF6C;
      }
      goto L_0885CF30;
    }
L_0885CF30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(200), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[31] = (0x0885CF64u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0885CF64u) goto L_0885CF64;
    return;
L_0885CF64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885CF7C;
      }
      goto L_0885CF6C;
    }
L_0885CF6C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0885CF7C;
      }
      goto L_0885CF74;
    }
L_0885CF74:
    ctx.gpr[31] = (0x0885CF7Cu);
    // nop
    goto L_0885DA04;
L_0885CF7C:
    ctx.gpr[31] = (0x0885CF84u);
    // nop
    goto L_0885D740;
L_0885CF84:
    ctx.gpr[31] = (0x0885CF8Cu);
    // nop
    goto L_0885D0F4;
L_0885CF8C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885CFA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0885CFBCu);
    // nop
    goto L_0885D2D4;
L_0885CFBC:
    ctx.gpr[31] = (0x0885CFC4u);
    // nop
    goto L_0885D970;
L_0885CFC4:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
        goto L_0885CFE8;
    }
    goto L_0885CFDC;
L_0885CFDC:
    ctx.gpr[31] = (0x0885CFE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 493u, 0x08929858u>(ctx, &aot_mem) && ctx.pc == 0x0885CFE4u) goto L_0885CFE4;
    return;
L_0885CFE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    goto L_0885CFE8;
L_0885CFE8:
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0885D000;
      }
      goto L_0885CFF8;
    }
L_0885CFF8:
    ctx.gpr[31] = (0x0885D000u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 629u, 0x0892A160u>(ctx, &aot_mem) && ctx.pc == 0x0885D000u) goto L_0885D000;
    return;
L_0885D000:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885D010:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0885D030u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 520u, 0x0883BE94u>(ctx, &aot_mem) && ctx.pc == 0x0885D030u) goto L_0885D030;
    return;
L_0885D030:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0885D048u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885D048u) goto L_0885D048;
    return;
L_0885D048:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), 0u);
    ctx.gpr[31] = (0x0885D05Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 526u, 0x0883BF44u>(ctx, &aot_mem) && ctx.pc == 0x0885D05Cu) goto L_0885D05C;
    return;
L_0885D05C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0885D070u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885D070u) goto L_0885D070;
    return;
L_0885D070:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(164), 0u);
    ctx.gpr[31] = (0x0885D084u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0885D084u) goto L_0885D084;
    return;
L_0885D084:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.gpr[31] = (0x0885D094u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 136u, 0x08839150u>(ctx, &aot_mem) && ctx.pc == 0x0885D094u) goto L_0885D094;
    return;
L_0885D094:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.gpr[31] = (0x0885D0A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 474u, 0x0883B820u>(ctx, &aot_mem) && ctx.pc == 0x0885D0A4u) goto L_0885D0A4;
    return;
L_0885D0A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.gpr[31] = (0x0885D0B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 474u, 0x0883B820u>(ctx, &aot_mem) && ctx.pc == 0x0885D0B4u) goto L_0885D0B4;
    return;
L_0885D0B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.gpr[31] = (0x0885D0C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 485u, 0x0883BBF8u>(ctx, &aot_mem) && ctx.pc == 0x0885D0C4u) goto L_0885D0C4;
    return;
L_0885D0C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0885D0D8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885D0D8u) goto L_0885D0D8;
    return;
L_0885D0D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(204), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885D0F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (17172u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (16900u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (17060u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0885D150u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 528u, 0x0883BF60u>(ctx, &aot_mem) && ctx.pc == 0x0885D150u) goto L_0885D150;
    return;
L_0885D150:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(204)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (17155u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(204)));
      if (branch_taken) {
          goto L_0885D1D8;
      }
      goto L_0885D17C;
    }
L_0885D17C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[13] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(200)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(196)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[7]);
    ctx.gpr[7] = (16512u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(204)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(380), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D1E4;
      }
      goto L_0885D1D8;
    }
L_0885D1D8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(380), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(204)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_0885D1E4;
L_0885D1E4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2220u << 16u);
      if (branch_taken) {
          goto L_0885D208;
      }
      goto L_0885D1EC;
    }
L_0885D1EC:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27812));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(204)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(368));
      if (branch_taken) {
          goto L_0885D21C;
      }
      goto L_0885D208;
    }
L_0885D208:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27796));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(204)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(368));
    goto L_0885D21C;
L_0885D21C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0885D228u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 487u, 0x0883BC14u>(ctx, &aot_mem) && ctx.pc == 0x0885D228u) goto L_0885D228;
    return;
L_0885D228:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885D2C0;
      }
      goto L_0885D23C;
    }
L_0885D23C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (17247u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
      if (branch_taken) {
          goto L_0885D2A0;
      }
      goto L_0885D250;
    }
L_0885D250:
    ctx.gpr[4] = (17289u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(204)));
    ctx.gpr[5] = (17242u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(204)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(204)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(204)));
    ctx.gpr[31] = (0x0885D288u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 476u, 0x0883B83Cu>(ctx, &aot_mem) && ctx.pc == 0x0885D288u) goto L_0885D288;
    return;
L_0885D288:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.gpr[31] = (0x0885D298u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 476u, 0x0883B83Cu>(ctx, &aot_mem) && ctx.pc == 0x0885D298u) goto L_0885D298;
    return;
L_0885D298:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885D2C0;
      }
      goto L_0885D2A0;
    }
L_0885D2A0:
    ctx.gpr[4] = (17232u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(204)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(204)));
    ctx.gpr[31] = (0x0885D2C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 476u, 0x0883B83Cu>(ctx, &aot_mem) && ctx.pc == 0x0885D2C0u) goto L_0885D2C0;
    return;
L_0885D2C0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885D2D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0885D2F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0885D2F0u) goto L_0885D2F0;
    return;
L_0885D2F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[31] = (0x0885D2FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 522u, 0x0883BEB0u>(ctx, &aot_mem) && ctx.pc == 0x0885D2FCu) goto L_0885D2FC;
    return;
L_0885D2FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885D370;
      }
      goto L_0885D310;
    }
L_0885D310:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
      if (branch_taken) {
          goto L_0885D358;
      }
      goto L_0885D31C;
    }
L_0885D31C:
    ctx.gpr[31] = (0x0885D324u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 478u, 0x0883B858u>(ctx, &aot_mem) && ctx.pc == 0x0885D324u) goto L_0885D324;
    return;
L_0885D324:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.gpr[31] = (0x0885D334u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 478u, 0x0883B858u>(ctx, &aot_mem) && ctx.pc == 0x0885D334u) goto L_0885D334;
    return;
L_0885D334:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[31] = (0x0885D340u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 530u, 0x0883BF7Cu>(ctx, &aot_mem) && ctx.pc == 0x0885D340u) goto L_0885D340;
    return;
L_0885D340:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.gpr[31] = (0x0885D350u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 492u, 0x0883BC58u>(ctx, &aot_mem) && ctx.pc == 0x0885D350u) goto L_0885D350;
    return;
L_0885D350:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885D370;
      }
      goto L_0885D358;
    }
L_0885D358:
    ctx.gpr[31] = (0x0885D360u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 478u, 0x0883B858u>(ctx, &aot_mem) && ctx.pc == 0x0885D360u) goto L_0885D360;
    return;
L_0885D360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.gpr[31] = (0x0885D370u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 138u, 0x0883916Cu>(ctx, &aot_mem) && ctx.pc == 0x0885D370u) goto L_0885D370;
    return;
L_0885D370:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885D380:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 900u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0885D3E0u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885D3E0u) goto L_0885D3E0;
    return;
L_0885D3E0:
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22692)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(208), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0885D3FCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0885D3FCu) goto L_0885D3FC;
    return;
L_0885D3FC:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27780));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27776));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[7] = (2220u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-27760));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[30] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    ctx.gpr[22] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (16992u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16816u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17177u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16900u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17073u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16840u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    ctx.gpr[16] = (0u | 0u);
    goto L_0885D4A4;
L_0885D4A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[18] = (0u | 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0885D540;
      }
      goto L_0885D4C0;
    }
L_0885D4C0:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(9072)));
    ctx.gpr[31] = (0x0885D4D0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0885D4D0u) goto L_0885D4D0;
    return;
L_0885D4D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[6] = (17263u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[21]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[21]));
      if (branch_taken) {
          goto L_0885D5F0;
      }
      goto L_0885D540;
    }
L_0885D540:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x0885D54Cu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0885D54Cu) goto L_0885D54C;
    return;
L_0885D54C:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22692)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(168));
      if (branch_taken) {
          goto L_0885D5D0;
      }
      goto L_0885D5AC;
    }
L_0885D5AC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[20]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[20]));
      if (branch_taken) {
          goto L_0885D5F0;
      }
      goto L_0885D5D0;
    }
L_0885D5D0:
    ctx.gpr[30] = (0u & 255u);
    ctx.gpr[22] = (ctx.gpr[30] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[30]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[23] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[23]));
    goto L_0885D5F0;
L_0885D5F0:
    ctx.gpr[31] = (0x0885D5F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x0885D5F8u) goto L_0885D5F8;
    return;
L_0885D5F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x0885D610u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0885D610u) goto L_0885D610;
    return;
L_0885D610:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[31] = (0x0885D620u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x0885D620u) goto L_0885D620;
    return;
L_0885D620:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_0885D4A4;
      }
      goto L_0885D630;
    }
L_0885D630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[23]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885D6C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_0885D6EC;
L_0885D6EC:
    ctx.gpr[31] = (0x0885D6F4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0885D6F4u) goto L_0885D6F4;
    return;
L_0885D6F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
      if (branch_taken) {
          goto L_0885D6EC;
      }
      goto L_0885D70C;
    }
L_0885D70C:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0885D720u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885D720u) goto L_0885D720;
    return;
L_0885D720:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(208), 0u);
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
L_0885D740:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[31] = (0x0885D79Cu);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0885D79Cu) goto L_0885D79C;
    return;
L_0885D79C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(9076)));
    ctx.gpr[31] = (0x0885D7B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0885D7B4u) goto L_0885D7B4;
    return;
L_0885D7B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[31] = (0x0885D7C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x0885D7C0u) goto L_0885D7C0;
    return;
L_0885D7C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[16] = (0u | 4u);
        goto L_0885D7D4;
    }
    goto L_0885D7D4;
L_0885D7D4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_0885D940;
      }
      goto L_0885D7E0;
    }
L_0885D7E0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_0885D940;
      }
      goto L_0885D7E8;
    }
L_0885D7E8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0885D940;
      }
      goto L_0885D7F8;
    }
L_0885D7F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[30] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[23] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[22] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    ctx.gpr[16] = (0u | 180u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    goto L_0885D830;
L_0885D830:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    ctx.gpr[21] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x0885D854u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0885D854u) goto L_0885D854;
    return;
L_0885D854:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[31] = (0x0885D86Cu);
    ctx.gpr[21] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    goto L_0885C748;
L_0885D86C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0885D878u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0885D878u) goto L_0885D878;
    return;
L_0885D878:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(168));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[8];
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_0885D8D0;
      }
      goto L_0885D8A4;
    }
L_0885D8A4:
    ctx.gpr[30] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[30] | 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0885D8F8;
      }
      goto L_0885D8D0;
    }
L_0885D8D0:
    ctx.gpr[23] = (0u & 255u);
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    ctx.gpr[18] = (ctx.gpr[22] | 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[21] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    goto L_0885D8F8;
L_0885D8F8:
    ctx.gpr[31] = (0x0885D900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x0885D900u) goto L_0885D900;
    return;
L_0885D900:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0885D830;
      }
      goto L_0885D918;
    }
L_0885D918:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[21]));
    goto L_0885D940;
L_0885D940:
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
L_0885D970:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[16] = (0u | 4u);
        goto L_0885D9A4;
    }
    goto L_0885D9A4;
L_0885D9A4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0885D9E8;
      }
      goto L_0885D9B0;
    }
L_0885D9B0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0885D9E8;
      }
      goto L_0885D9BC;
    }
L_0885D9BC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0885D9E8;
      }
      goto L_0885D9C8;
    }
L_0885D9C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[31] = (0x0885D9D8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0885D9D8u) goto L_0885D9D8;
    return;
L_0885D9D8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_0885D9C8;
      }
      goto L_0885D9E8;
    }
L_0885D9E8:
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
L_0885DA04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DA2C;
      }
      goto L_0885DA20;
    }
L_0885DA20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.gpr[31] = (0x0885DA2Cu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    goto L_0885CB10;
L_0885DA2C:
    ctx.gpr[31] = (0x0885DA34u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0885DA34u) goto L_0885DA34;
    return;
L_0885DA34:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885DA40:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22692)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0885DAC0;
      }
      goto L_0885DA50;
    }
L_0885DA50:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(236)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[2] = (0u | 1u);
        goto L_0885DA64;
    }
    goto L_0885DA64;
L_0885DA64:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DA7C;
      }
      goto L_0885DA6C;
    }
L_0885DA6C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885DA7C;
      }
      goto L_0885DA78;
    }
L_0885DA78:
    ctx.gpr[2] = (0u | 1u);
    goto L_0885DA7C;
L_0885DA7C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DA94;
      }
      goto L_0885DA84;
    }
L_0885DA84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885DA94;
      }
      goto L_0885DA90;
    }
L_0885DA90:
    ctx.gpr[2] = (0u | 1u);
    goto L_0885DA94;
L_0885DA94:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885DAC0;
      }
      goto L_0885DA9C;
    }
L_0885DA9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_0885DABC;
      }
      goto L_0885DAAC;
    }
L_0885DAAC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_0885DABC;
      }
      goto L_0885DAB4;
    }
L_0885DAB4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0885DAC0;
      }
      goto L_0885DABC;
    }
L_0885DABC:
    ctx.gpr[2] = (0u | 1u);
    goto L_0885DAC0;
L_0885DAC0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885DAC8:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[2] = (0u | 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(47)));
        goto L_0885DADC;
    }
    goto L_0885DADC;
L_0885DADC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885DAE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    ctx.gpr[31] = (0x0885DB18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 79u, 0x0886CAD4u>(ctx, &aot_mem) && ctx.pc == 0x0885DB18u) goto L_0885DB18;
    return;
L_0885DB18:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9080));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27752));
    ctx.gpr[5] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8492));
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27740));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    goto L_0885DB64;
L_0885DB64:
    ctx.gpr[31] = (0x0885DB6Cu);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x0885DB6Cu) goto L_0885DB6C;
    return;
L_0885DB6C:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[30];
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8376)));
      if (branch_taken) {
          goto L_0885DB88;
      }
      goto L_0885DB7C;
    }
L_0885DB7C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 68 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
        goto L_0885DBA4;
    }
    goto L_0885DB88;
L_0885DB88:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0885DB98u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0885DB98u) goto L_0885DB98;
    return;
L_0885DB98:
    ctx.gpr[16] = (2222u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
      if (branch_taken) {
          goto L_0885DBC8;
      }
      goto L_0885DBA4;
    }
L_0885DBA4:
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0885DBC0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0885DBC0u) goto L_0885DBC0;
    return;
L_0885DBC0:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    goto L_0885DBC8;
L_0885DBC8:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[30];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 68 ? 1u : 0u);
      if (branch_taken) {
          goto L_0885DBD8;
      }
      goto L_0885DBD0;
    }
L_0885DBD0:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(232)));
        goto L_0885DBE8;
    }
    goto L_0885DBD8;
L_0885DBD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[18] == ctx.gpr[4]) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_0885DCC8;
    }
    goto L_0885DBE4;
L_0885DBE4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(232)));
    goto L_0885DBE8;
L_0885DBE8:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0885DBFCu);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0885DBFCu) goto L_0885DBFC;
    return;
L_0885DBFC:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0885DC0Cu);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0885DC0Cu) goto L_0885DC0C;
    return;
L_0885DC0C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0885DC1Cu);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0885DC1Cu) goto L_0885DC1C;
    return;
L_0885DC1C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0885DC2Cu);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0885DC2Cu) goto L_0885DC2C;
    return;
L_0885DC2C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0885DC38u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x0885DC38u) goto L_0885DC38;
    return;
L_0885DC38:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0885DCC4;
      }
      goto L_0885DC44;
    }
L_0885DC44:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0885DC50u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x0885DC50u) goto L_0885DC50;
    return;
L_0885DC50:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0885DC5Cu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 584u, 0x0880A830u>(ctx, &aot_mem) && ctx.pc == 0x0885DC5Cu) goto L_0885DC5C;
    return;
L_0885DC5C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0885DC6Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x0885DC6Cu) goto L_0885DC6C;
    return;
L_0885DC6C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[16] = (0u | 2u);
      if (branch_taken) {
          goto L_0885DC9C;
      }
      goto L_0885DC78;
    }
L_0885DC78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (0u | 0u);
    goto L_0885DC80;
L_0885DC80:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[17] == ctx.gpr[6]) {
    ctx.gpr[16] = (0u | 3u);
        goto L_0885DC8C;
    }
    goto L_0885DC8C;
L_0885DC8C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 22 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0885DC80;
      }
      goto L_0885DC9C;
    }
L_0885DC9C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0885DCACu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x0885DCACu) goto L_0885DCAC;
    return;
L_0885DCAC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0885DCBCu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 96u, 0x0886CBCCu>(ctx, &aot_mem) && ctx.pc == 0x0885DCBCu) goto L_0885DCBC;
    return;
L_0885DCBC:
    ctx.gpr[31] = (0x0885DCC4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 555u, 0x0880A5E8u>(ctx, &aot_mem) && ctx.pc == 0x0885DCC4u) goto L_0885DCC4;
    return;
L_0885DCC4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0885DCC8;
L_0885DCC8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885DB64;
      }
      goto L_0885DCD4;
    }
L_0885DCD4:
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
L_0885DD04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(236)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0885DD4C;
      }
      goto L_0885DD3C;
    }
L_0885DD3C:
    ctx.gpr[31] = (0x0885DD44u);
    // nop
    goto L_0885E3E4;
L_0885DD44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885E3C0;
      }
      goto L_0885DD4C;
    }
L_0885DD4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(220)));
    ctx.gpr[18] = (0u | 1u);
    if (ctx.gpr[5] != ctx.gpr[18]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_0885DD8C;
    }
    goto L_0885DD5C;
L_0885DD5C:
    ctx.gpr[31] = (0x0885DD64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 204u, 0x088BD640u>(ctx, &aot_mem) && ctx.pc == 0x0885DD64u) goto L_0885DD64;
    return;
L_0885DD64:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 3001u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 4001u);
      if (branch_taken) {
          goto L_0885DD7C;
      }
      goto L_0885DD74;
    }
L_0885DD74:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0885E3B8;
      }
      goto L_0885DD7C;
    }
L_0885DD7C:
    ctx.gpr[31] = (0x0885DD84u);
    // nop
    goto L_0885C384;
L_0885DD84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885E3B8;
      }
      goto L_0885DD8C;
    }
L_0885DD8C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[19] = (0u | 4u);
      if (branch_taken) {
          goto L_0885DDF0;
      }
      goto L_0885DD94;
    }
L_0885DD94:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0885DDF0;
      }
      goto L_0885DDB0;
    }
L_0885DDB0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0885DDD4;
      }
      goto L_0885DDC4;
    }
L_0885DDC4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885DDD4;
      }
      goto L_0885DDD0;
    }
L_0885DDD0:
    ctx.gpr[5] = (0u | 0u);
    goto L_0885DDD4;
L_0885DDD4:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0885DDF0;
      }
      goto L_0885DDDC;
    }
L_0885DDDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    goto L_0885DDF0;
L_0885DDF0:
    ctx.gpr[31] = (0x0885DDF8u);
    // nop
    goto L_0885C9F4;
L_0885DDF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0885E13C;
      }
      goto L_0885DE04;
    }
L_0885DE04:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.gpr[6] = (0u | 3u);
      if (branch_taken) {
          goto L_0885DE14;
      }
      goto L_0885DE0C;
    }
L_0885DE0C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0885DEC0;
      }
      goto L_0885DE14;
    }
L_0885DE14:
    ctx.gpr[31] = (0x0885DE1Cu);
    // nop
    goto L_0885CB54;
L_0885DE1C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0885E12C;
      }
      goto L_0885DE24;
    }
L_0885DE24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_0885DE94;
      }
      goto L_0885DE38;
    }
L_0885DE38:
    ctx.gpr[5] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[31] = (0x0885DE4Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 519u, 0x0883271Cu>(ctx, &aot_mem) && ctx.pc == 0x0885DE4Cu) goto L_0885DE4C;
    return;
L_0885DE4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x0885DE64u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    goto L_0885C748;
L_0885DE64:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0885DE70u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0885DE70u) goto L_0885DE70;
    return;
L_0885DE70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(200), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_0885E12C;
      }
      goto L_0885DE94;
    }
L_0885DE94:
    ctx.gpr[31] = (0x0885DE9Cu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    goto L_0885CA64;
L_0885DE9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(200), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_0885E12C;
      }
      goto L_0885DEC0;
    }
L_0885DEC0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0885DFBC;
      }
      goto L_0885DEC8;
    }
L_0885DEC8:
    ctx.gpr[31] = (0x0885DED0u);
    // nop
    goto L_0885CAB8;
L_0885DED0:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0885E12C;
      }
      goto L_0885DED8;
    }
L_0885DED8:
    ctx.gpr[31] = (0x0885DEE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 203u, 0x088BD634u>(ctx, &aot_mem) && ctx.pc == 0x0885DEE0u) goto L_0885DEE0;
    return;
L_0885DEE0:
    ctx.gpr[31] = (0x0885DEE8u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(10752));
    if (rt.invoke_chained_direct<&recomp_unit_0071_entry, 71u, 243u, 0x089210E0u>(ctx, &aot_mem) && ctx.pc == 0x0885DEE8u) goto L_0885DEE8;
    return;
L_0885DEE8:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[5] = (578u << 16u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27836));
    ctx.gpr[31] = (0x0885DF0Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22563));
    ctx.pc = 0x08AB4764u;
    return;
L_0885DF0C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0885DF28;
      }
      goto L_0885DF18;
    }
L_0885DF18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_0885DF28;
      }
      goto L_0885DF28;
    }
L_0885DF28:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885DF64;
      }
      goto L_0885DF30;
    }
L_0885DF30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0885DF40;
L_0885DF40:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(60), 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0885DF40;
      }
      goto L_0885DF5C;
    }
L_0885DF5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DFAC;
      }
      goto L_0885DF64;
    }
L_0885DF64:
    ctx.gpr[31] = (0x0885DF6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 526u, 0x08842924u>(ctx, &aot_mem) && ctx.pc == 0x0885DF6Cu) goto L_0885DF6C;
    return;
L_0885DF6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[20] = (0u | 0u);
    goto L_0885DF7C;
L_0885DF7C:
    ctx.gpr[31] = (0x0885DF84u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 542u, 0x08842A08u>(ctx, &aot_mem) && ctx.pc == 0x0885DF84u) goto L_0885DF84;
    return;
L_0885DF84:
    if (ctx.gpr[2] != ctx.gpr[18]) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_0885DFA0;
    }
    goto L_0885DF8C;
L_0885DF8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0885DFA0;
L_0885DFA0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885DF7C;
      }
      goto L_0885DFAC;
    }
L_0885DFAC:
    ctx.gpr[31] = (0x0885DFB4u);
    // nop
    goto L_0885CA8C;
L_0885DFB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885E12C;
      }
      goto L_0885DFBC;
    }
L_0885DFBC:
    ctx.gpr[4] = (0u | 6u);
    if (ctx.gpr[6] != ctx.gpr[4]) {
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(47)));
        goto L_0885E004;
    }
    goto L_0885DFC8;
L_0885DFC8:
    ctx.gpr[31] = (0x0885DFD0u);
    // nop
    goto L_0885CA30;
L_0885DFD0:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0885E12C;
      }
      goto L_0885DFD8;
    }
L_0885DFD8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0885DFFC;
      }
      goto L_0885DFE8;
    }
L_0885DFE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0885DFFC;
      }
      goto L_0885DFF4;
    }
L_0885DFF4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(220), ctx.gpr[18]);
      if (branch_taken) {
          goto L_0885E12C;
      }
      goto L_0885DFFC;
    }
L_0885DFFC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(220), ctx.gpr[18]);
      if (branch_taken) {
          goto L_0885E12C;
      }
      goto L_0885E004;
    }
L_0885E004:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885E12C;
      }
      goto L_0885E00C;
    }
L_0885E00C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(45)));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_0885E094;
    }
    goto L_0885E018;
L_0885E018:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0885E12C;
      }
      goto L_0885E028;
    }
L_0885E028:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0885E12C;
      }
      goto L_0885E038;
    }
L_0885E038:
    ctx.gpr[31] = (0x0885E040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 206u, 0x088BD65Cu>(ctx, &aot_mem) && ctx.pc == 0x0885E040u) goto L_0885E040;
    return;
L_0885E040:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0885E07C;
      }
      goto L_0885E048;
    }
L_0885E048:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 128u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0885E07C;
      }
      goto L_0885E058;
    }
L_0885E058:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & 3072u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0885E07C;
      }
      goto L_0885E068;
    }
L_0885E068:
    ctx.gpr[31] = (0x0885E070u);
    // nop
    goto L_0885C288;
L_0885E070:
    ctx.gpr[31] = (0x0885E078u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0885E078u) goto L_0885E078;
    return;
L_0885E078:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0885E07C;
L_0885E07C:
    ctx.gpr[31] = (0x0885E084u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 316u, 0x0885A1A0u>(ctx, &aot_mem) && ctx.pc == 0x0885E084u) goto L_0885E084;
    return;
L_0885E084:
    ctx.gpr[31] = (0x0885E08Cu);
    // nop
    goto L_0885EC58;
L_0885E08C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885E12C;
      }
      goto L_0885E094;
    }
L_0885E094:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 50 ? 1u : 0u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
        goto L_0885E0AC;
    }
    goto L_0885E0A0;
L_0885E0A0:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0885E12C;
      }
      goto L_0885E0AC;
    }
L_0885E0AC:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[6] != ctx.gpr[7]) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
        goto L_0885E12C;
    }
    goto L_0885E0B8;
L_0885E0B8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(188)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[6] != ctx.gpr[18]) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
        goto L_0885E12C;
    }
    goto L_0885E0C8;
L_0885E0C8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(192)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[6] != ctx.gpr[18]) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
        goto L_0885E12C;
    }
    goto L_0885E0D8;
L_0885E0D8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0885E11C;
      }
      goto L_0885E0FC;
    }
L_0885E0FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0885E11C;
      }
      goto L_0885E108;
    }
L_0885E108:
    ctx.gpr[31] = (0x0885E110u);
    // nop
    goto L_0885CC40;
L_0885E110:
    ctx.gpr[31] = (0x0885E118u);
    // nop
    goto L_0885C37C;
L_0885E118:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    goto L_0885E11C;
L_0885E11C:
    ctx.gpr[31] = (0x0885E124u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 315u, 0x088BDD28u>(ctx, &aot_mem) && ctx.pc == 0x0885E124u) goto L_0885E124;
    return;
L_0885E124:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885E12C;
      }
      goto L_0885E12C;
    }
L_0885E12C:
    ctx.gpr[31] = (0x0885E134u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0885CCC8;
L_0885E134:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885E3B8;
      }
      goto L_0885E13C;
    }
L_0885E13C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.gpr[6] = (0u | 3u);
      if (branch_taken) {
          goto L_0885E14C;
      }
      goto L_0885E144;
    }
L_0885E144:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0885E1F8;
      }
      goto L_0885E14C;
    }
L_0885E14C:
    ctx.gpr[31] = (0x0885E154u);
    // nop
    goto L_0885CB54;
L_0885E154:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0885E3B0;
      }
      goto L_0885E15C;
    }
L_0885E15C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_0885E1CC;
      }
      goto L_0885E170;
    }
L_0885E170:
    ctx.gpr[5] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[31] = (0x0885E184u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 519u, 0x0883271Cu>(ctx, &aot_mem) && ctx.pc == 0x0885E184u) goto L_0885E184;
    return;
L_0885E184:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x0885E19Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    goto L_0885C748;
L_0885E19C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0885E1A8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0885E1A8u) goto L_0885E1A8;
    return;
L_0885E1A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(200), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_0885E3B0;
      }
      goto L_0885E1CC;
    }
L_0885E1CC:
    ctx.gpr[31] = (0x0885E1D4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    goto L_0885CA64;
L_0885E1D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(200), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_0885E3B0;
      }
      goto L_0885E1F8;
    }
L_0885E1F8:
    if (ctx.gpr[4] != ctx.gpr[18]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(47)));
        goto L_0885E278;
    }
    goto L_0885E200;
L_0885E200:
    ctx.gpr[31] = (0x0885E208u);
    // nop
    goto L_0885CAB8;
L_0885E208:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0885E3B0;
      }
      goto L_0885E210;
    }
L_0885E210:
    ctx.gpr[31] = (0x0885E218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 203u, 0x088BD634u>(ctx, &aot_mem) && ctx.pc == 0x0885E218u) goto L_0885E218;
    return;
L_0885E218:
    ctx.gpr[31] = (0x0885E220u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(10752));
    if (rt.invoke_chained_direct<&recomp_unit_0071_entry, 71u, 243u, 0x089210E0u>(ctx, &aot_mem) && ctx.pc == 0x0885E220u) goto L_0885E220;
    return;
L_0885E220:
    ctx.gpr[31] = (0x0885E228u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 526u, 0x08842924u>(ctx, &aot_mem) && ctx.pc == 0x0885E228u) goto L_0885E228;
    return;
L_0885E228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[20] = (0u | 0u);
    goto L_0885E238;
L_0885E238:
    ctx.gpr[31] = (0x0885E240u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 542u, 0x08842A08u>(ctx, &aot_mem) && ctx.pc == 0x0885E240u) goto L_0885E240;
    return;
L_0885E240:
    if (ctx.gpr[2] != ctx.gpr[18]) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_0885E25C;
    }
    goto L_0885E248;
L_0885E248:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0885E25C;
L_0885E25C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885E238;
      }
      goto L_0885E268;
    }
L_0885E268:
    ctx.gpr[31] = (0x0885E270u);
    // nop
    goto L_0885CA8C;
L_0885E270:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885E3B0;
      }
      goto L_0885E278;
    }
L_0885E278:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885E3B0;
      }
      goto L_0885E280;
    }
L_0885E280:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(45)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_0885E308;
    }
    goto L_0885E28C;
L_0885E28C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0885E3B0;
      }
      goto L_0885E29C;
    }
L_0885E29C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0885E3B0;
      }
      goto L_0885E2AC;
    }
L_0885E2AC:
    ctx.gpr[31] = (0x0885E2B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 206u, 0x088BD65Cu>(ctx, &aot_mem) && ctx.pc == 0x0885E2B4u) goto L_0885E2B4;
    return;
L_0885E2B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0885E2F0;
      }
      goto L_0885E2BC;
    }
L_0885E2BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 128u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0885E2F0;
      }
      goto L_0885E2CC;
    }
L_0885E2CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & 3072u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0885E2F0;
      }
      goto L_0885E2DC;
    }
L_0885E2DC:
    ctx.gpr[31] = (0x0885E2E4u);
    // nop
    goto L_0885C288;
L_0885E2E4:
    ctx.gpr[31] = (0x0885E2ECu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0885E2ECu) goto L_0885E2EC;
    return;
L_0885E2EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0885E2F0;
L_0885E2F0:
    ctx.gpr[31] = (0x0885E2F8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 316u, 0x0885A1A0u>(ctx, &aot_mem) && ctx.pc == 0x0885E2F8u) goto L_0885E2F8;
    return;
L_0885E2F8:
    ctx.gpr[31] = (0x0885E300u);
    // nop
    goto L_0885EC58;
L_0885E300:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885E3B0;
      }
      goto L_0885E308;
    }
L_0885E308:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0885E31C;
      }
      goto L_0885E314;
    }
L_0885E314:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0885E3B0;
      }
      goto L_0885E31C;
    }
L_0885E31C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[4] != ctx.gpr[6]) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
        goto L_0885E3B0;
    }
    goto L_0885E32C;
L_0885E32C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[4] != ctx.gpr[18]) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
        goto L_0885E3B0;
    }
    goto L_0885E33C;
L_0885E33C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[4] != ctx.gpr[18]) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
        goto L_0885E3B0;
    }
    goto L_0885E34C;
L_0885E34C:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0885E39C;
      }
      goto L_0885E368;
    }
L_0885E368:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0885E39C;
      }
      goto L_0885E374;
    }
L_0885E374:
    ctx.gpr[31] = (0x0885E37Cu);
    // nop
    goto L_0885CC40;
L_0885E37C:
    ctx.gpr[31] = (0x0885E384u);
    // nop
    goto L_0885C37C;
L_0885E384:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[31] = (0x0885E390u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 317u, 0x088BDD60u>(ctx, &aot_mem) && ctx.pc == 0x0885E390u) goto L_0885E390;
    return;
L_0885E390:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(220), ctx.gpr[18]);
      if (branch_taken) {
          goto L_0885E3B0;
      }
      goto L_0885E39C;
    }
L_0885E39C:
    ctx.gpr[31] = (0x0885E3A4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 317u, 0x088BDD60u>(ctx, &aot_mem) && ctx.pc == 0x0885E3A4u) goto L_0885E3A4;
    return;
L_0885E3A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(220), ctx.gpr[18]);
      if (branch_taken) {
          goto L_0885E3B0;
      }
      goto L_0885E3B0;
    }
L_0885E3B0:
    ctx.gpr[31] = (0x0885E3B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0885CCC8;
L_0885E3B8:
    ctx.gpr[31] = (0x0885E3C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 272u, 0x08859F44u>(ctx, &aot_mem) && ctx.pc == 0x0885E3C0u) goto L_0885E3C0;
    return;
L_0885E3C0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885E3E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[16] = (0u | 2u);
      if (branch_taken) {
          goto L_0885E480;
      }
      goto L_0885E418;
    }
L_0885E418:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0885E4A8;
      }
      goto L_0885E420;
    }
L_0885E420:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0885E430u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0885E430u) goto L_0885E430;
    return;
L_0885E430:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8384)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8388));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(9036)));
    ctx.gpr[31] = (0x0885E454u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 605u, 0x0897A8A0u>(ctx, &aot_mem) && ctx.pc == 0x0885E454u) goto L_0885E454;
    return;
L_0885E454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[6] = (0u | 130u);
    ctx.gpr[31] = (0x0885E46Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 465u, 0x08809CF0u>(ctx, &aot_mem) && ctx.pc == 0x0885E46Cu) goto L_0885E46C;
    return;
L_0885E46C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0885E4A8;
      }
      goto L_0885E480;
    }
L_0885E480:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(232)));
        goto L_0885E4AC;
    }
    goto L_0885E48C;
L_0885E48C:
    ctx.gpr[31] = (0x0885E494u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 469u, 0x08809D90u>(ctx, &aot_mem) && ctx.pc == 0x0885E494u) goto L_0885E494;
    return;
L_0885E494:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
      if (branch_taken) {
          goto L_0885E4A8;
      }
      goto L_0885E4A0;
    }
L_0885E4A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_0885E4A8;
L_0885E4A8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(232)));
    goto L_0885E4AC;
L_0885E4AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (static_cast<std::int32_t>(ctx.gpr[5]) > 0) {
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
        goto L_0885E4E8;
    }
    goto L_0885E4B8;
L_0885E4B8:
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
        goto L_0885E520;
    }
    goto L_0885E4C0;
L_0885E4C0:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[6] = (0u | 130u);
    ctx.gpr[31] = (0x0885E4D4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(9168));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 465u, 0x08809CF0u>(ctx, &aot_mem) && ctx.pc == 0x0885E4D4u) goto L_0885E4D4;
    return;
L_0885E4D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(232)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0885E51C;
      }
      goto L_0885E4E8;
    }
L_0885E4E8:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
        goto L_0885E520;
    }
    goto L_0885E4F0;
L_0885E4F0:
    ctx.gpr[31] = (0x0885E4F8u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 469u, 0x08809D90u>(ctx, &aot_mem) && ctx.pc == 0x0885E4F8u) goto L_0885E4F8;
    return;
L_0885E4F8:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
      if (branch_taken) {
          goto L_0885E51C;
      }
      goto L_0885E504;
    }
L_0885E504:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(232)));
    ctx.gpr[31] = (0x0885E510u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 522u, 0x0880A0E8u>(ctx, &aot_mem) && ctx.pc == 0x0885E510u) goto L_0885E510;
    return;
L_0885E510:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(232)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_0885E51C;
L_0885E51C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    goto L_0885E520;
L_0885E520:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0885E580;
      }
      goto L_0885E52C;
    }
L_0885E52C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(232)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0885E580;
      }
      goto L_0885E53C;
    }
L_0885E53C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    ctx.gpr[31] = (0x0885E548u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 881u, 0x0882F7DCu>(ctx, &aot_mem) && ctx.pc == 0x0885E548u) goto L_0885E548;
    return;
L_0885E548:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[31] = (0x0885E554u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 761u, 0x0882EFC4u>(ctx, &aot_mem) && ctx.pc == 0x0885E554u) goto L_0885E554;
    return;
L_0885E554:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[31] = (0x0885E564u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x0885E564u) goto L_0885E564;
    return;
L_0885E564:
    ctx.gpr[31] = (0x0885E56Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 214u, 0x08859B94u>(ctx, &aot_mem) && ctx.pc == 0x0885E56Cu) goto L_0885E56C;
    return;
L_0885E56C:
    ctx.gpr[31] = (0x0885E574u);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 862u, 0x0881F4CCu>(ctx, &aot_mem) && ctx.pc == 0x0885E574u) goto L_0885E574;
    return;
L_0885E574:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(236), ctx.gpr[18]);
    goto L_0885E580;
L_0885E580:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_0885E5A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 460u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0885E5F0u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885E5F0u) goto L_0885E5F0;
    return;
L_0885E5F0:
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(160), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0885E60Cu);
    ctx.gpr[6] = (0u | 460u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0885E60Cu) goto L_0885E60C;
    return;
L_0885E60C:
    ctx.gpr[5] = (17285u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (16984u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17209u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (16944u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0885E684;
      }
      goto L_0885E678;
    }
L_0885E678:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
      if (branch_taken) {
          goto L_0885E690;
      }
      goto L_0885E684;
    }
L_0885E684:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    goto L_0885E690;
L_0885E690:
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[19] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[31] = (0x0885E6DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x0885E6DCu) goto L_0885E6DC;
    return;
L_0885E6DC:
    ctx.gpr[5] = (17286u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (16988u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (17205u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16936u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.gpr[31] = (0x0885E730u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 524u, 0x0883BECCu>(ctx, &aot_mem) && ctx.pc == 0x0885E730u) goto L_0885E730;
    return;
L_0885E730:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0885E744u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885E744u) goto L_0885E744;
    return;
L_0885E744:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0885E75Cu);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0885E75Cu) goto L_0885E75C;
    return;
L_0885E75C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    ctx.gpr[31] = (0x0885E778u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883F120u>(ctx, &aot_mem) && ctx.pc == 0x0885E778u) goto L_0885E778;
    return;
L_0885E778:
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[19] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (17287u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    ctx.gpr[4] = (17090u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[5] << 24u);
    ctx.gpr[21] = (ctx.gpr[6] << 24u);
    ctx.gpr[22] = (ctx.gpr[7] << 24u);
    ctx.gpr[4] = (16384u << 16u);
    ctx.gpr[16] = (0u | 2u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 184u);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 24u));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 24u));
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 24u));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 24u));
    goto L_0885E7E4;
L_0885E7E4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.gpr[31] = (0x0885E860u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x0885E860u) goto L_0885E860;
    return;
L_0885E860:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0885E7E4;
      }
      goto L_0885E870;
    }
L_0885E870:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885E8AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 720u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0885E900u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885E900u) goto L_0885E900;
    return;
L_0885E900:
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22692)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(180), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0885E91Cu);
    ctx.gpr[6] = (0u | 720u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0885E91Cu) goto L_0885E91C;
    return;
L_0885E91C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (16772u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27776));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[7] = (2220u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-27760));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[30] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (17310u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16944u << 16u);
    ctx.gpr[23] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    ctx.gpr[4] = (17034u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    ctx.gpr[16] = (0u | 0u);
    goto L_0885E9A0;
L_0885E9A0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(180)));
    ctx.gpr[20] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[8] = (ctx.gpr[17] + ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[4];
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
      if (branch_taken) {
          goto L_0885E9F4;
      }
      goto L_0885E9C8;
    }
L_0885E9C8:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(9072)));
    ctx.gpr[31] = (0x0885E9D8u);
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0885E9D8u) goto L_0885E9D8;
    return;
L_0885E9D8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0885EA30;
      }
      goto L_0885E9F4;
    }
L_0885E9F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[8] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[31] = (0x0885EA18u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0885EA18u) goto L_0885EA18;
    return;
L_0885EA18:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(180)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[16]);
    goto L_0885EA30;
L_0885EA30:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(180)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(180)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(168));
      if (branch_taken) {
          goto L_0885EA94;
      }
      goto L_0885EA70;
    }
L_0885EA70:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[19]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_0885EAB4;
      }
      goto L_0885EA94;
    }
L_0885EA94:
    ctx.gpr[30] = (0u & 255u);
    ctx.gpr[23] = (ctx.gpr[30] | 0u);
    ctx.gpr[21] = (ctx.gpr[23] | 0u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[22] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[22]));
    goto L_0885EAB4;
L_0885EAB4:
    ctx.gpr[31] = (0x0885EABCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x0885EABCu) goto L_0885EABC;
    return;
L_0885EABC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x0885EAD8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0885EAD8u) goto L_0885EAD8;
    return;
L_0885EAD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    ctx.gpr[31] = (0x0885EAE8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x0885EAE8u) goto L_0885EAE8;
    return;
L_0885EAE8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_0885E9A0;
      }
      goto L_0885EAF8;
    }
L_0885EAF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 180u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0885EB3Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885EB3Cu) goto L_0885EB3C;
    return;
L_0885EB3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0885EB54u);
    ctx.gpr[6] = (0u | 180u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0885EB54u) goto L_0885EB54;
    return;
L_0885EB54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27780));
    ctx.gpr[31] = (0x0885EB6Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0885EB6Cu) goto L_0885EB6C;
    return;
L_0885EB6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (16816u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (17283u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[6] | 32768u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16968u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.gpr[7] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x0885EBF8u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x0885EBF8u) goto L_0885EBF8;
    return;
L_0885EBF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.gpr[31] = (0x0885EC0Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0885EC0Cu) goto L_0885EC0C;
    return;
L_0885EC0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[31] = (0x0885EC18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x0885EC18u) goto L_0885EC18;
    return;
L_0885EC18:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
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
L_0885EC58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (16772u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[30]);
    ctx.gpr[30] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[23]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[23] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    goto L_0885ECE8;
L_0885ECE8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(180)));
    ctx.gpr[22] = (0u | 255u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[17] = (ctx.gpr[19] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[7];
    ctx.gpr[22] = (ctx.gpr[22] & 255u);
      if (branch_taken) {
          goto L_0885ED58;
      }
      goto L_0885ED0C;
    }
L_0885ED0C:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0885ED18u);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0885ED18u) goto L_0885ED18;
    return;
L_0885ED18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(9072)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x0885ED34u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0885ED34u) goto L_0885ED34;
    return;
L_0885ED34:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(168));
      if (branch_taken) {
          goto L_0885EE70;
      }
      goto L_0885ED58;
    }
L_0885ED58:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_0885EDB4;
      }
      goto L_0885ED60;
    }
L_0885ED60:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0885EDB4;
      }
      goto L_0885ED68;
    }
L_0885ED68:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0885ED74u);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0885ED74u) goto L_0885ED74;
    return;
L_0885ED74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x0885ED90u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0885ED90u) goto L_0885ED90;
    return;
L_0885ED90:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(168));
      if (branch_taken) {
          goto L_0885EE70;
      }
      goto L_0885EDB4;
    }
L_0885EDB4:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
      if (branch_taken) {
          goto L_0885EE18;
      }
      goto L_0885EDBC;
    }
L_0885EDBC:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0885EDC8u);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0885EDC8u) goto L_0885EDC8;
    return;
L_0885EDC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x0885EDF4u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0885EDF4u) goto L_0885EDF4;
    return;
L_0885EDF4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(168));
      if (branch_taken) {
          goto L_0885EE70;
      }
      goto L_0885EE18;
    }
L_0885EE18:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0885EE24u);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0885EE24u) goto L_0885EE24;
    return;
L_0885EE24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x0885EE50u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0885EE50u) goto L_0885EE50;
    return;
L_0885EE50:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(168));
    goto L_0885EE70;
L_0885EE70:
    if (ctx.gpr[19] != ctx.gpr[4]) {
    ctx.gpr[30] = (0u & 255u);
        goto L_0885EEA4;
    }
    goto L_0885EE78;
L_0885EE78:
    ctx.gpr[20] = (ctx.gpr[22] | 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[22]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[22]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0885EEC8;
      }
      goto L_0885EEA4;
    }
L_0885EEA4:
    ctx.gpr[21] = (ctx.gpr[30] | 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[23] = (ctx.gpr[22] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[30]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[23]));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[16]);
    goto L_0885EEC8;
L_0885EEC8:
    ctx.gpr[31] = (0x0885EED0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x0885EED0u) goto L_0885EED0;
    return;
L_0885EED0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22692)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_0885ECE8;
      }
      goto L_0885EEE8;
    }
L_0885EEE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[23]));
      if (branch_taken) {
          goto L_0885EF68;
      }
      goto L_0885EF20;
    }
L_0885EF20:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0885EF68;
      }
      goto L_0885EF30;
    }
L_0885EF30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(184)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x0885EF44u);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0885EF44u) goto L_0885EF44;
    return;
L_0885EF44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x0885EF5Cu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0885EF5Cu) goto L_0885EF5C;
    return;
L_0885EF5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[31] = (0x0885EF68u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x0885EF68u) goto L_0885EF68;
    return;
L_0885EF68:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
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
L_0885EF9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 92u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0885EFCCu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885EFCCu) goto L_0885EFCC;
    return;
L_0885EFCC:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[6] = (0u | 92u);
    ctx.gpr[31] = (0x0885EFECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0885EFECu) goto L_0885EFEC;
    return;
L_0885EFEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (17152u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (16924u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[31] = (0x0885F020u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 518u, 0x0883BE0Cu>(ctx, &aot_mem) && ctx.pc == 0x0885F020u) goto L_0885F020;
    return;
L_0885F020:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 92u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0885F034u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885F034u) goto L_0885F034;
    return;
L_0885F034:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(164), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[6] = (0u | 92u);
    ctx.gpr[31] = (0x0885F050u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0885F050u) goto L_0885F050;
    return;
L_0885F050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (17172u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (17060u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (17205u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (16896u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[31] = (0x0885F0ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 524u, 0x0883BECCu>(ctx, &aot_mem) && ctx.pc == 0x0885F0ACu) goto L_0885F0AC;
    return;
L_0885F0AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 460u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0885F0C0u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885F0C0u) goto L_0885F0C0;
    return;
L_0885F0C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(204), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[6] = (0u | 460u);
    ctx.gpr[31] = (0x0885F0DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0885F0DCu) goto L_0885F0DC;
    return;
L_0885F0DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (17392u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (17288u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 120u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[31] = (0x0885F16Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x0885F16Cu) goto L_0885F16C;
    return;
L_0885F16C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (17164u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (17153u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.gpr[31] = (0x0885F1A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 134u, 0x088390C0u>(ctx, &aot_mem) && ctx.pc == 0x0885F1A4u) goto L_0885F1A4;
    return;
L_0885F1A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (17232u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (17247u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.gpr[31] = (0x0885F1E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 129u, 0x0883D148u>(ctx, &aot_mem) && ctx.pc == 0x0885F1E0u) goto L_0885F1E0;
    return;
L_0885F1E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (17242u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.gpr[31] = (0x0885F214u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 129u, 0x0883D148u>(ctx, &aot_mem) && ctx.pc == 0x0885F214u) goto L_0885F214;
    return;
L_0885F214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (17316u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(368));
    ctx.gpr[31] = (0x0885F250u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 480u, 0x0883BB48u>(ctx, &aot_mem) && ctx.pc == 0x0885F250u) goto L_0885F250;
    return;
L_0885F250:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[5] = (16448u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[6] = (17155u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(204)));
      if (branch_taken) {
          goto L_0885F298;
      }
      goto L_0885F280;
    }
L_0885F280:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(380), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
      if (branch_taken) {
          goto L_0885F2C4;
      }
      goto L_0885F298;
    }
L_0885F298:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(380), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22692)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    goto L_0885F2C4;
L_0885F2C4:
    ctx.gpr[31] = (0x0885F2CCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 487u, 0x0883BC14u>(ctx, &aot_mem) && ctx.pc == 0x0885F2CCu) goto L_0885F2CC;
    return;
L_0885F2CC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885F2E8:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8380)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8384), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885F2FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 176u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0885F32Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885F32Cu) goto L_0885F32C;
    return;
L_0885F32C:
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(22696), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0885F344u);
    ctx.gpr[6] = (0u | 176u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0885F344u) goto L_0885F344;
    return;
L_0885F344:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 24u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0885F358u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885F358u) goto L_0885F358;
    return;
L_0885F358:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22696)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0885F370u);
    ctx.gpr[6] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0885F370u) goto L_0885F370;
    return;
L_0885F370:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22696)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x0885F384u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27472));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 595u, 0x088473B4u>(ctx, &aot_mem) && ctx.pc == 0x0885F384u) goto L_0885F384;
    return;
L_0885F384:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 21120u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0885F398u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885F398u) goto L_0885F398;
    return;
L_0885F398:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22696)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0885F3B0u);
    ctx.gpr[6] = (0u | 21120u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0885F3B0u) goto L_0885F3B0;
    return;
L_0885F3B0:
    ctx.gpr[31] = (0x0885F3B8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 592u, 0x08847378u>(ctx, &aot_mem) && ctx.pc == 0x0885F3B8u) goto L_0885F3B8;
    return;
L_0885F3B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22696)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0885F3C8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 275u, 0x08841980u>(ctx, &aot_mem) && ctx.pc == 0x0885F3C8u) goto L_0885F3C8;
    return;
L_0885F3C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 232u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0885F3DCu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885F3DCu) goto L_0885F3DC;
    return;
L_0885F3DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22696)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0885F3F4u);
    ctx.gpr[6] = (0u | 232u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0885F3F4u) goto L_0885F3F4;
    return;
L_0885F3F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22696)));
    ctx.gpr[31] = (0x0885F400u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 336u, 0x08841D40u>(ctx, &aot_mem) && ctx.pc == 0x0885F400u) goto L_0885F400;
    return;
L_0885F400:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 2800u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0885F414u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885F414u) goto L_0885F414;
    return;
L_0885F414:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22696)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0885F42Cu);
    ctx.gpr[6] = (0u | 2800u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0885F42Cu) goto L_0885F42C;
    return;
L_0885F42C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22696)));
    ctx.gpr[31] = (0x0885F438u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 358u, 0x08841EC4u>(ctx, &aot_mem) && ctx.pc == 0x0885F438u) goto L_0885F438;
    return;
L_0885F438:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 512u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0885F44Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885F44Cu) goto L_0885F44C;
    return;
L_0885F44C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22696)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0885F464u);
    ctx.gpr[6] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0885F464u) goto L_0885F464;
    return;
L_0885F464:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    goto L_0885F46C;
L_0885F46C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22696)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x0885F47Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 741u, 0x0882EE90u>(ctx, &aot_mem) && ctx.pc == 0x0885F47Cu) goto L_0885F47C;
    return;
L_0885F47C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0885F46C;
      }
      goto L_0885F48C;
    }
L_0885F48C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 144u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0885F4A0u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885F4A0u) goto L_0885F4A0;
    return;
L_0885F4A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22696)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0885F4B8u);
    ctx.gpr[6] = (0u | 144u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0885F4B8u) goto L_0885F4B8;
    return;
L_0885F4B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22696)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x0885F4C8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_0885F708;
L_0885F4C8:
    ctx.gpr[31] = (0x0885F4D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 333u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x0885F4D0u) goto L_0885F4D0;
    return;
L_0885F4D0:
    ctx.gpr[31] = (0x0885F4D8u);
    // nop
    goto L_0885FC1C;
L_0885F4D8:
    ctx.gpr[4] = (2182u << 16u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x0885F4E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13056));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 702u, 0x0884BCB8u>(ctx, &aot_mem) && ctx.pc == 0x0885F4E8u) goto L_0885F4E8;
    return;
L_0885F4E8:
    ctx.gpr[4] = (2182u << 16u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x0885F4F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2460));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 706u, 0x0884BCFCu>(ctx, &aot_mem) && ctx.pc == 0x0885F4F8u) goto L_0885F4F8;
    return;
L_0885F4F8:
    ctx.gpr[4] = (2182u << 16u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x0885F508u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2396));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 709u, 0x0884BD28u>(ctx, &aot_mem) && ctx.pc == 0x0885F508u) goto L_0885F508;
    return;
L_0885F508:
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
L_0885F524:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x0885F544u);
    // nop
    goto L_0885FCCC;
L_0885F544:
    ctx.gpr[31] = (0x0885F54Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 338u, 0x08861FA0u>(ctx, &aot_mem) && ctx.pc == 0x0885F54Cu) goto L_0885F54C;
    return;
L_0885F54C:
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22696)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (2222u << 16u);
      if (branch_taken) {
          goto L_0885F584;
      }
      goto L_0885F560;
    }
L_0885F560:
    ctx.gpr[31] = (0x0885F568u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 563u, 0x08847174u>(ctx, &aot_mem) && ctx.pc == 0x0885F568u) goto L_0885F568;
    return;
L_0885F568:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22696)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0885F57Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885F57Cu) goto L_0885F57C;
    return;
L_0885F57C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22696)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), 0u);
    goto L_0885F584;
L_0885F584:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0885F594u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885F594u) goto L_0885F594;
    return;
L_0885F594:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22696)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0885F5ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885F5ACu) goto L_0885F5AC;
    return;
L_0885F5AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22696)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0885F5C4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885F5C4u) goto L_0885F5C4;
    return;
L_0885F5C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22696)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0885F5D4u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(84), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 761u, 0x0882EFC4u>(ctx, &aot_mem) && ctx.pc == 0x0885F5D4u) goto L_0885F5D4;
    return;
L_0885F5D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22696)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0885F608;
      }
      goto L_0885F5E4;
    }
L_0885F5E4:
    ctx.gpr[18] = (0u | 0u);
    goto L_0885F5E8;
L_0885F5E8:
    ctx.gpr[31] = (0x0885F5F0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 742u, 0x0882EEA8u>(ctx, &aot_mem) && ctx.pc == 0x0885F5F0u) goto L_0885F5F0;
    return;
L_0885F5F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22696)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_0885F5E8;
      }
      goto L_0885F608;
    }
L_0885F608:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0885F618u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885F618u) goto L_0885F618;
    return;
L_0885F618:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22696)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0885F630u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885F630u) goto L_0885F630;
    return;
L_0885F630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22696)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0885F648u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885F648u) goto L_0885F648;
    return;
L_0885F648:
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
L_0885F664:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0885F674u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x0885F674u) goto L_0885F674;
    return;
L_0885F674:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0885F698;
      }
      goto L_0885F680;
    }
L_0885F680:
    ctx.gpr[31] = (0x0885F688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 209u, 0x088BD67Cu>(ctx, &aot_mem) && ctx.pc == 0x0885F688u) goto L_0885F688;
    return;
L_0885F688:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885F698;
      }
      goto L_0885F690;
    }
L_0885F690:
    ctx.gpr[31] = (0x0885F698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 206u, 0x088BD65Cu>(ctx, &aot_mem) && ctx.pc == 0x0885F698u) goto L_0885F698;
    return;
L_0885F698:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885F6A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22696)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885F6FC;
      }
      goto L_0885F6C0;
    }
L_0885F6C0:
    ctx.gpr[31] = (0x0885F6C8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x0885F6C8u) goto L_0885F6C8;
    return;
L_0885F6C8:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0885F6F4;
      }
      goto L_0885F6D4;
    }
L_0885F6D4:
    ctx.gpr[31] = (0x0885F6DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 209u, 0x088BD67Cu>(ctx, &aot_mem) && ctx.pc == 0x0885F6DCu) goto L_0885F6DC;
    return;
L_0885F6DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885F6FC;
      }
      goto L_0885F6E4;
    }
L_0885F6E4:
    ctx.gpr[31] = (0x0885F6ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 206u, 0x088BD65Cu>(ctx, &aot_mem) && ctx.pc == 0x0885F6ECu) goto L_0885F6EC;
    return;
L_0885F6EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885F6FC;
      }
      goto L_0885F6F4;
    }
L_0885F6F4:
    ctx.gpr[31] = (0x0885F6FCu);
    // nop
    goto L_0885FDD4;
L_0885F6FC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885F708:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22696)));
    ctx.gpr[5] = (0u << 7u);
    ctx.gpr[7] = (0u + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(136), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885F778:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22696)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] << 7u);
    ctx.gpr[8] = (0u + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 5u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[8] << 2u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22696)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (0u | 8u);
      if (branch_taken) {
          goto L_0885F8BC;
      }
      goto L_0885F7DC;
    }
L_0885F7DC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (0u | 1024u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[8];
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_0885F824;
      }
      goto L_0885F7F0;
    }
L_0885F7F0:
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22696)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0885F814;
      }
      goto L_0885F80C;
    }
L_0885F80C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22696)));
    goto L_0885F814;
L_0885F814:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(136), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22696)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_0885F824;
L_0885F824:
    ctx.gpr[8] = (0u | 2048u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[8];
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0885F85C;
      }
      goto L_0885F830;
    }
L_0885F830:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22696)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[7] = (0u | 2u);
      if (branch_taken) {
          goto L_0885F850;
      }
      goto L_0885F844;
    }
L_0885F844:
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22696)));
    goto L_0885F850;
L_0885F850:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(136), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22696)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    goto L_0885F85C;
L_0885F85C:
    if (ctx.gpr[6] == ctx.gpr[7]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_0885F8C0;
    }
    goto L_0885F864;
L_0885F864:
    ctx.gpr[31] = (0x0885F86Cu);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0885F86Cu) goto L_0885F86C;
    return;
L_0885F86C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22696)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22696)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22696)));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22696)));
    ctx.gpr[31] = (0x0885F8BCu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    goto L_0885FB40;
L_0885F8BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_0885F8C0;
L_0885F8C0:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0885F8D8;
      }
      goto L_0885F8C8;
    }
L_0885F8C8:
    ctx.gpr[31] = (0x0885F8D0u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 315u, 0x08861D68u>(ctx, &aot_mem) && ctx.pc == 0x0885F8D0u) goto L_0885F8D0;
    return;
L_0885F8D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0885F920;
      }
      goto L_0885F8D8;
    }
L_0885F8D8:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_0885F8F4;
      }
      goto L_0885F8E4;
    }
L_0885F8E4:
    ctx.gpr[31] = (0x0885F8ECu);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 315u, 0x08861D68u>(ctx, &aot_mem) && ctx.pc == 0x0885F8ECu) goto L_0885F8EC;
    return;
L_0885F8EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0885F920;
      }
      goto L_0885F8F4;
    }
L_0885F8F4:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0885F90C;
      }
      goto L_0885F8FC;
    }
L_0885F8FC:
    ctx.gpr[31] = (0x0885F904u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 315u, 0x08861D68u>(ctx, &aot_mem) && ctx.pc == 0x0885F904u) goto L_0885F904;
    return;
L_0885F904:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0885F920;
      }
      goto L_0885F90C;
    }
L_0885F90C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0885F924;
      }
      goto L_0885F914;
    }
L_0885F914:
    ctx.gpr[31] = (0x0885F91Cu);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 315u, 0x08861D68u>(ctx, &aot_mem) && ctx.pc == 0x0885F91Cu) goto L_0885F91C;
    return;
L_0885F91C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_0885F920;
L_0885F920:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0885F924;
L_0885F924:
    if (ctx.gpr[19] == ctx.gpr[4]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_0885F95C;
    }
    goto L_0885F92C;
L_0885F92C:
    ctx.gpr[31] = (0x0885F934u);
    ctx.gpr[4] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0885F934u) goto L_0885F934;
    return;
L_0885F934:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22696)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22696)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22696)));
    ctx.gpr[31] = (0x0885F954u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    goto L_0885FB40;
L_0885F954:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_0885F98C;
      }
      goto L_0885F95C;
    }
L_0885F95C:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0885F980;
      }
      goto L_0885F968;
    }
L_0885F968:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0885F980;
      }
      goto L_0885F970;
    }
L_0885F970:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_0885F980;
      }
      goto L_0885F978;
    }
L_0885F978:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 512u);
      if (branch_taken) {
          goto L_0885F990;
      }
      goto L_0885F980;
    }
L_0885F980:
    ctx.gpr[31] = (0x0885F988u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0885F988u) goto L_0885F988;
    return;
L_0885F988:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_0885F98C;
L_0885F98C:
    ctx.gpr[4] = (0u | 512u);
    goto L_0885F990;
L_0885F990:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0885F9A8;
      }
      goto L_0885F998;
    }
L_0885F998:
    ctx.gpr[31] = (0x0885F9A0u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0885F9A0u) goto L_0885F9A0;
    return;
L_0885F9A0:
    ctx.gpr[31] = (0x0885F9A8u);
    // nop
    goto L_0885F9C4;
L_0885F9A8:
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
L_0885F9C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22696)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] << 7u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[7] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[30] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (0u | 5u);
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[23] = (0u | 3u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(9236));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    goto L_0885FA38;
L_0885FA38:
    ctx.gpr[31] = (0x0885FA40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 77u, 0x089AD318u>(ctx, &aot_mem) && ctx.pc == 0x0885FA40u) goto L_0885FA40;
    return;
L_0885FA40:
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[20]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[18] = (ctx.hi);
    ctx.gpr[31] = (0x0885FA50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 77u, 0x089AD318u>(ctx, &aot_mem) && ctx.pc == 0x0885FA50u) goto L_0885FA50;
    return;
L_0885FA50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22696)));
    ctx.gpr[5] = (ctx.gpr[18] << 7u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[19] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[31] = (0x0885FA8Cu);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x0885FA8Cu) goto L_0885FA8C;
    return;
L_0885FA8C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] == ctx.gpr[22]) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 24 ? 1u : 0u);
        goto L_0885FAA4;
    }
    goto L_0885FA98;
L_0885FA98:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_0885FAB0;
      }
      goto L_0885FAA0;
    }
L_0885FAA0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 24 ? 1u : 0u);
    goto L_0885FAA4;
L_0885FAA4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885FA38;
      }
      goto L_0885FAAC;
    }
L_0885FAAC:
    ctx.gpr[4] = (0u | 2u);
    goto L_0885FAB0;
L_0885FAB0:
    ctx.gpr[31] = (0x0885FAB8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 288u, 0x0884D2A0u>(ctx, &aot_mem) && ctx.pc == 0x0885FAB8u) goto L_0885FAB8;
    return;
L_0885FAB8:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[22];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0885FA38;
      }
      goto L_0885FAC0;
    }
L_0885FAC0:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    goto L_0885FAC8;
L_0885FAC8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0885FADC;
      }
      goto L_0885FAD4;
    }
L_0885FAD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_0885FAE8;
      }
      goto L_0885FADC;
    }
L_0885FADC:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0885FAC8;
      }
      goto L_0885FAE8;
    }
L_0885FAE8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885FA38;
      }
      goto L_0885FAF0;
    }
L_0885FAF0:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_0885FA38;
      }
      goto L_0885FAF8;
    }
L_0885FAF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22696)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(136), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[22]);
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
L_0885FB40:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22696)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[7] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[5] = (0u | 1u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
      if (branch_taken) {
          goto L_0885FBF4;
      }
      goto L_0885FBD0;
    }
L_0885FBD0:
    ctx.gpr[5] = (16672u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[5] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885FBF4:
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[5] = (0u | 30u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885FC1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 32u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0885FC3Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885FC3Cu) goto L_0885FC3C;
    return;
L_0885FC3C:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22696)));
    ctx.gpr[31] = (0x0885FC4Cu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(140), ctx.gpr[2]);
    goto L_0885FE38;
L_0885FC4C:
    ctx.gpr[31] = (0x0885FC54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 27u, 0x088601B4u>(ctx, &aot_mem) && ctx.pc == 0x0885FC54u) goto L_0885FC54;
    return;
L_0885FC54:
    ctx.gpr[31] = (0x0885FC5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 622u, 0x088638C0u>(ctx, &aot_mem) && ctx.pc == 0x0885FC5Cu) goto L_0885FC5C;
    return;
L_0885FC5C:
    ctx.gpr[31] = (0x0885FC64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 84u, 0x088607B4u>(ctx, &aot_mem) && ctx.pc == 0x0885FC64u) goto L_0885FC64;
    return;
L_0885FC64:
    ctx.gpr[31] = (0x0885FC6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 132u, 0x08860DC0u>(ctx, &aot_mem) && ctx.pc == 0x0885FC6Cu) goto L_0885FC6C;
    return;
L_0885FC6C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885FC78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0885FC88u);
    // nop
    goto L_0885FFB4;
L_0885FC88:
    ctx.gpr[31] = (0x0885FC90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 30u, 0x0886029Cu>(ctx, &aot_mem) && ctx.pc == 0x0885FC90u) goto L_0885FC90;
    return;
L_0885FC90:
    ctx.gpr[31] = (0x0885FC98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 40u, 0x08860394u>(ctx, &aot_mem) && ctx.pc == 0x0885FC98u) goto L_0885FC98;
    return;
L_0885FC98:
    ctx.gpr[31] = (0x0885FCA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 89u, 0x0886085Cu>(ctx, &aot_mem) && ctx.pc == 0x0885FCA0u) goto L_0885FCA0;
    return;
L_0885FCA0:
    ctx.gpr[31] = (0x0885FCA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 99u, 0x08860970u>(ctx, &aot_mem) && ctx.pc == 0x0885FCA8u) goto L_0885FCA8;
    return;
L_0885FCA8:
    ctx.gpr[31] = (0x0885FCB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 636u, 0x08863BB0u>(ctx, &aot_mem) && ctx.pc == 0x0885FCB0u) goto L_0885FCB0;
    return;
L_0885FCB0:
    ctx.gpr[31] = (0x0885FCB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 165u, 0x08861074u>(ctx, &aot_mem) && ctx.pc == 0x0885FCB8u) goto L_0885FCB8;
    return;
L_0885FCB8:
    ctx.gpr[31] = (0x0885FCC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 200u, 0x088613C4u>(ctx, &aot_mem) && ctx.pc == 0x0885FCC0u) goto L_0885FCC0;
    return;
L_0885FCC0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885FCCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0885FCE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860068u>(ctx, &aot_mem) && ctx.pc == 0x0885FCE0u) goto L_0885FCE0;
    return;
L_0885FCE0:
    ctx.gpr[31] = (0x0885FCE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 32u, 0x088602FCu>(ctx, &aot_mem) && ctx.pc == 0x0885FCE8u) goto L_0885FCE8;
    return;
L_0885FCE8:
    ctx.gpr[31] = (0x0885FCF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 45u, 0x0886044Cu>(ctx, &aot_mem) && ctx.pc == 0x0885FCF0u) goto L_0885FCF0;
    return;
L_0885FCF0:
    ctx.gpr[31] = (0x0885FCF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 90u, 0x08860864u>(ctx, &aot_mem) && ctx.pc == 0x0885FCF8u) goto L_0885FCF8;
    return;
L_0885FCF8:
    ctx.gpr[31] = (0x0885FD00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 110u, 0x08860AF8u>(ctx, &aot_mem) && ctx.pc == 0x0885FD00u) goto L_0885FD00;
    return;
L_0885FD00:
    ctx.gpr[31] = (0x0885FD08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 137u, 0x08860E44u>(ctx, &aot_mem) && ctx.pc == 0x0885FD08u) goto L_0885FD08;
    return;
L_0885FD08:
    ctx.gpr[31] = (0x0885FD10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 169u, 0x08861124u>(ctx, &aot_mem) && ctx.pc == 0x0885FD10u) goto L_0885FD10;
    return;
L_0885FD10:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22696)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0885FD30;
      }
      goto L_0885FD28;
    }
L_0885FD28:
    ctx.gpr[31] = (0x0885FD30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 190u, 0x088612FCu>(ctx, &aot_mem) && ctx.pc == 0x0885FD30u) goto L_0885FD30;
    return;
L_0885FD30:
    ctx.gpr[31] = (0x0885FD38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 216u, 0x08861694u>(ctx, &aot_mem) && ctx.pc == 0x0885FD38u) goto L_0885FD38;
    return;
L_0885FD38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22696)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0885FD50u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885FD50u) goto L_0885FD50;
    return;
L_0885FD50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22696)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(140), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885FD68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0885FD7Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 59u, 0x08860554u>(ctx, &aot_mem) && ctx.pc == 0x0885FD7Cu) goto L_0885FD7C;
    return;
L_0885FD7C:
    ctx.gpr[31] = (0x0885FD84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 93u, 0x088608B0u>(ctx, &aot_mem) && ctx.pc == 0x0885FD84u) goto L_0885FD84;
    return;
L_0885FD84:
    ctx.gpr[31] = (0x0885FD8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 118u, 0x08860B9Cu>(ctx, &aot_mem) && ctx.pc == 0x0885FD8Cu) goto L_0885FD8C;
    return;
L_0885FD8C:
    ctx.gpr[31] = (0x0885FD94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 174u, 0x08861184u>(ctx, &aot_mem) && ctx.pc == 0x0885FD94u) goto L_0885FD94;
    return;
L_0885FD94:
    ctx.gpr[31] = (0x0885FD9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 650u, 0x08863F30u>(ctx, &aot_mem) && ctx.pc == 0x0885FD9Cu) goto L_0885FD9C;
    return;
L_0885FD9C:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22696)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0885FDBC;
      }
      goto L_0885FDB4;
    }
L_0885FDB4:
    ctx.gpr[31] = (0x0885FDBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 193u, 0x08861348u>(ctx, &aot_mem) && ctx.pc == 0x0885FDBCu) goto L_0885FDBC;
    return;
L_0885FDBC:
    ctx.gpr[31] = (0x0885FDC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 223u, 0x08861720u>(ctx, &aot_mem) && ctx.pc == 0x0885FDC4u) goto L_0885FDC4;
    return;
L_0885FDC4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885FDD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0885FDE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 147u, 0x08860F14u>(ctx, &aot_mem) && ctx.pc == 0x0885FDE4u) goto L_0885FDE4;
    return;
L_0885FDE4:
    ctx.gpr[31] = (0x0885FDECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 10u, 0x088600F4u>(ctx, &aot_mem) && ctx.pc == 0x0885FDECu) goto L_0885FDEC;
    return;
L_0885FDEC:
    ctx.gpr[31] = (0x0885FDF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 96u, 0x0886093Cu>(ctx, &aot_mem) && ctx.pc == 0x0885FDF4u) goto L_0885FDF4;
    return;
L_0885FDF4:
    ctx.gpr[31] = (0x0885FDFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 127u, 0x08860D5Cu>(ctx, &aot_mem) && ctx.pc == 0x0885FDFCu) goto L_0885FDFC;
    return;
L_0885FDFC:
    ctx.gpr[31] = (0x0885FE04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 67u, 0x088606D4u>(ctx, &aot_mem) && ctx.pc == 0x0885FE04u) goto L_0885FE04;
    return;
L_0885FE04:
    ctx.gpr[31] = (0x0885FE0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 238u, 0x08861894u>(ctx, &aot_mem) && ctx.pc == 0x0885FE0Cu) goto L_0885FE0C;
    return;
L_0885FE0C:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22696)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0885FE2C;
      }
      goto L_0885FE24;
    }
L_0885FE24:
    ctx.gpr[31] = (0x0885FE2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 386u, 0x088621FCu>(ctx, &aot_mem) && ctx.pc == 0x0885FE2Cu) goto L_0885FE2C;
    return;
L_0885FE2C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885FE38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 276u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0885FE5Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885FE5Cu) goto L_0885FE5C;
    return;
L_0885FE5C:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22696)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0885FE78u);
    ctx.gpr[6] = (0u | 276u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0885FE78u) goto L_0885FE78;
    return;
L_0885FE78:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22696)));
    ctx.gpr[4] = (17285u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16912u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17233u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17210u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (17295u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(96)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17181u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16956u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17288u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (16920u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    ctx.gpr[7] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (ctx.gpr[5] << 24u);
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.gpr[5] = (ctx.gpr[6] << 24u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    ctx.gpr[4] = (ctx.gpr[11] << 24u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 24u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    goto L_0885FF78;
L_0885FF78:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(96)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[8]);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[9]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0885FF78;
      }
      goto L_0885FFA4;
    }
L_0885FFA4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885FFB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    goto L_0885FFE4;
L_0885FFE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22696)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.pc = 0x08860000u; return;
}

void recomp_unit_0022(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0022_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_22(Runtime &runtime) {
    runtime.register_generated_unit(22u, 0x0885C000u, 16384u, &recomp_unit_0022, &recomp_unit_0022_entry);
    runtime.register_function(0x0885C000u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C014u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C054u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C06Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C07Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C0BCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C0E4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C0F4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C0FCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C104u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C10Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C110u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C118u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C120u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C12Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C138u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C140u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C15Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C184u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C18Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C1A4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C1B8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C1CCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C1E0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C200u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C22Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C238u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C24Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C258u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C264u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C26Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C288u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C2A8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C2B0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C2D4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C2E0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C2F0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C2FCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C31Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C324u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C33Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C344u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C34Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C354u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C36Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C37Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C384u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C394u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C3A0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C3A8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C3B4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C3BCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C3CCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C3D4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C3DCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C3E4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C3FCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C408u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C41Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C47Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C490u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C4A8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C4C0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C4C8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C4D0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C4E0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C504u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C50Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C514u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C528u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C534u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C554u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C570u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C580u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C588u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C590u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C5A0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C5C4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C5CCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C5D4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C5F8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C5FCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C608u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C618u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C62Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C644u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C64Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C658u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C660u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C668u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C678u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C6A4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C6BCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C6C0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C6CCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C6D0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C6E4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C6ECu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C710u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C72Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C738u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C748u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C768u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C774u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C7B0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C7B8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C7C4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C7CCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C7E0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C7ECu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C7F8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C7FCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C820u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C84Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C8A4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C8B0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C8E8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C928u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C934u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C974u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C97Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C9BCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885C9F4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CA04u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CA14u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CA24u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CA30u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CA48u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CA50u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CA64u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CA80u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CA8Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CA9Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CAB8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CAC8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CAD4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CAF8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CB10u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CB38u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CB54u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CB78u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CB8Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CB98u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CBACu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CBB4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CBC0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CBC8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CBDCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CBE4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CBF8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CC18u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CC28u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CC30u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CC40u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CC74u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CC80u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CC90u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CC98u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CCA4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CCB4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CCBCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CCC8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CCF8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CD08u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CD14u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CD1Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CD24u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CD2Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CD44u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CD60u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CD68u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CD74u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CD7Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CD88u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CDA0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CDB0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CDB8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CDC0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CDE0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CDECu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CDFCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CE0Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CE14u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CE24u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CE2Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CE34u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CE44u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CE48u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CE50u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CE58u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CE68u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CE84u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CE94u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CEA0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CEB0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CEB8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CEC0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CEC8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CED0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CEE0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CEECu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CF00u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CF0Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CF14u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CF1Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CF24u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CF30u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CF64u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CF6Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CF74u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CF7Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CF84u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CF8Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CFA8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CFBCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CFC4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CFDCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CFE4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CFE8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885CFF8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D000u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D010u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D030u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D048u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D05Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D070u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D084u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D094u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D0A4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D0B4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D0C4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D0D8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D0F4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D150u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D17Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D1D8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D1E4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D1ECu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D208u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D21Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D228u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D23Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D250u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D288u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D298u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D2A0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D2C0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D2D4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D2F0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D2FCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D310u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D31Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D324u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D334u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D340u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D350u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D358u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D360u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D370u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D380u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D3E0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D3FCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D4A4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D4C0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D4D0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D540u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D54Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D5ACu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D5D0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D5F0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D5F8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D610u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D620u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D630u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D6C4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D6ECu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D6F4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D70Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D720u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D740u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D79Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D7B4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D7C0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D7D4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D7E0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D7E8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D7F8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D830u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D854u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D86Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D878u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D8A4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D8D0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D8F8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D900u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D918u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D940u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D970u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D9A4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D9B0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D9BCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D9C8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D9D8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885D9E8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DA04u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DA20u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DA2Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DA34u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DA40u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DA50u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DA64u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DA6Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DA78u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DA7Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DA84u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DA90u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DA94u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DA9Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DAACu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DAB4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DABCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DAC0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DAC8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DADCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DAE4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DB18u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DB64u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DB6Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DB7Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DB88u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DB98u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DBA4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DBC0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DBC8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DBD0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DBD8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DBE4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DBE8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DBFCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DC0Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DC1Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DC2Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DC38u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DC44u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DC50u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DC5Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DC6Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DC78u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DC80u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DC8Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DC9Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DCACu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DCBCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DCC4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DCC8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DCD4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DD04u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DD3Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DD44u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DD4Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DD5Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DD64u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DD74u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DD7Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DD84u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DD8Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DD94u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DDB0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DDC4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DDD0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DDD4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DDDCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DDF0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DDF8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DE04u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DE0Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DE14u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DE1Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DE24u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DE38u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DE4Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DE64u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DE70u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DE94u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DE9Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DEC0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DEC8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DED0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DED8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DEE0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DEE8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DF0Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DF18u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DF28u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DF30u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DF40u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DF5Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DF64u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DF6Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DF7Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DF84u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DF8Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DFA0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DFACu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DFB4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DFBCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DFC8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DFD0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DFD8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DFE8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DFF4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885DFFCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E004u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E00Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E018u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E028u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E038u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E040u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E048u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E058u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E068u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E070u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E078u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E07Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E084u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E08Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E094u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E0A0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E0ACu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E0B8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E0C8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E0D8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E0FCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E108u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E110u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E118u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E11Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E124u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E12Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E134u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E13Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E144u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E14Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E154u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E15Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E170u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E184u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E19Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E1A8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E1CCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E1D4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E1F8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E200u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E208u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E210u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E218u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E220u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E228u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E238u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E240u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E248u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E25Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E268u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E270u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E278u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E280u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E28Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E29Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E2ACu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E2B4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E2BCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E2CCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E2DCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E2E4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E2ECu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E2F0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E2F8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E300u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E308u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E314u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E31Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E32Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E33Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E34Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E368u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E374u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E37Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E384u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E390u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E39Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E3A4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E3B0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E3B8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E3C0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E3E4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E418u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E420u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E430u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E454u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E46Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E480u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E48Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E494u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E4A0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E4A8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E4ACu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E4B8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E4C0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E4D4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E4E8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E4F0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E4F8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E504u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E510u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E51Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E520u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E52Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E53Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E548u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E554u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E564u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E56Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E574u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E580u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E5A0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E5F0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E60Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E678u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E684u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E690u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E6DCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E730u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E744u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E75Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E778u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E7E4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E860u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E870u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E8ACu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E900u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E91Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E9A0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E9C8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E9D8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885E9F4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EA18u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EA30u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EA70u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EA94u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EAB4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EABCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EAD8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EAE8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EAF8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EB3Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EB54u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EB6Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EBF8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EC0Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EC18u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EC58u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885ECE8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885ED0Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885ED18u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885ED34u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885ED58u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885ED60u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885ED68u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885ED74u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885ED90u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EDB4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EDBCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EDC8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EDF4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EE18u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EE24u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EE50u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EE70u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EE78u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EEA4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EEC8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EED0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EEE8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EF20u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EF30u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EF44u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EF5Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EF68u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EF9Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EFCCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885EFECu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F020u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F034u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F050u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F0ACu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F0C0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F0DCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F16Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F1A4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F1E0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F214u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F250u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F280u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F298u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F2C4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F2CCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F2E8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F2FCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F32Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F344u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F358u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F370u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F384u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F398u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F3B0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F3B8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F3C8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F3DCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F3F4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F400u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F414u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F42Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F438u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F44Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F464u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F46Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F47Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F48Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F4A0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F4B8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F4C8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F4D0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F4D8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F4E8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F4F8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F508u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F524u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F544u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F54Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F560u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F568u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F57Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F584u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F594u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F5ACu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F5C4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F5D4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F5E4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F5E8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F5F0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F608u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F618u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F630u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F648u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F664u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F674u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F680u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F688u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F690u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F698u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F6A4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F6C0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F6C8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F6D4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F6DCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F6E4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F6ECu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F6F4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F6FCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F708u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F778u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F7DCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F7F0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F80Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F814u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F824u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F830u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F844u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F850u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F85Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F864u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F86Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F8BCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F8C0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F8C8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F8D0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F8D8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F8E4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F8ECu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F8F4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F8FCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F904u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F90Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F914u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F91Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F920u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F924u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F92Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F934u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F954u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F95Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F968u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F970u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F978u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F980u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F988u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F98Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F990u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F998u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F9A0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F9A8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885F9C4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FA38u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FA40u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FA50u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FA8Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FA98u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FAA0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FAA4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FAACu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FAB0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FAB8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FAC0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FAC8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FAD4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FADCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FAE8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FAF0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FAF8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FB40u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FBD0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FBF4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FC1Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FC3Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FC4Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FC54u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FC5Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FC64u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FC6Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FC78u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FC88u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FC90u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FC98u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FCA0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FCA8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FCB0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FCB8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FCC0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FCCCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FCE0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FCE8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FCF0u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FCF8u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FD00u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FD08u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FD10u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FD28u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FD30u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FD38u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FD50u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FD68u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FD7Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FD84u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FD8Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FD94u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FD9Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FDB4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FDBCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FDC4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FDD4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FDE4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FDECu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FDF4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FDFCu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FE04u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FE0Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FE24u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FE2Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FE38u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FE5Cu, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FE78u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FF78u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FFA4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FFB4u, &recomp_unit_0022, "recomp_unit_0022");
    runtime.register_function(0x0885FFE4u, &recomp_unit_0022, "recomp_unit_0022");
}
} // namespace psprecomp

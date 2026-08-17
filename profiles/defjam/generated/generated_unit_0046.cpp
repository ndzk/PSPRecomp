#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0046[4095] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 7,
    0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0,
    14, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 20, 0,
    0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0,
    0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 31, 0, 32, 0, 33, 0, 34,
    0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 38, 0, 0, 0, 39, 0, 40, 0, 0, 41, 0, 42, 0, 0, 0, 0,
    0, 0, 43, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 46, 0, 47, 0, 48, 0, 49, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0,
    0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0,
    0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 67, 0, 0, 0,
    0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0,
    81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0,
    0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 101,
    0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0,
    105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0,
    111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0,
    0, 115, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120,
    0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 126, 0, 0, 127, 0, 128, 0, 0, 0, 0,
    129, 0, 130, 0, 131, 0, 132, 0, 133, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139,
    0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 144,
    145, 146, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0,
    0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 168, 169,
    0, 0, 170, 0, 171, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 174, 0, 175, 0, 176, 0, 0, 0, 0, 177, 0, 178, 0, 179, 0, 0, 0,
    0, 180, 0, 0, 181, 0, 0, 0, 182, 0, 183, 0, 184, 185, 0, 186, 0, 0, 187, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190,
    0, 0, 191, 0, 0, 192, 0, 0, 193, 0, 194, 0, 0, 195, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 198, 0, 199, 0, 0, 200, 0,
    0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 205, 0, 206, 0, 0, 0, 207, 0, 208, 0, 209,
    0, 0, 0, 0, 210, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0,
    215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 218, 0, 219, 0, 220, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223,
    0, 0, 224, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 233, 0, 234, 0, 0, 235, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 238,
    0, 239, 0, 0, 240, 0, 241, 242, 0, 243, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 246, 0, 247, 0, 0, 248, 0, 0, 249, 0,
    250, 251, 0, 252, 0, 253, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 258,
    0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0,
    264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 269, 0, 0, 270, 0, 0,
    0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 275, 0, 0, 276, 0, 0, 0, 0, 277, 0, 278, 0, 0,
    0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 281, 0, 282, 0, 283, 0, 284, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0, 287, 0, 288,
    289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 292, 0, 293, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0,
    297, 0, 298, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 302, 0, 303, 304, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0,
    306, 0, 0, 307, 0, 308, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 312, 0, 313, 314, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 319, 0, 320, 0, 321, 0, 322, 0, 0, 323, 324, 0, 325, 0, 0, 0, 0, 326, 0, 0, 327, 0, 328, 0, 329, 330,
    0, 0, 0, 0, 331, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 335, 0, 336, 0, 0, 0, 337, 0, 0, 0, 338,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 340, 0, 341, 0, 342, 0, 0, 343, 0, 0,
    0, 344, 0, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 0, 347, 0, 348, 0, 349, 0, 350, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0,
    0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 356, 0, 0, 0, 0, 357, 0, 358, 0, 0, 0, 0, 359, 0, 0, 360, 0, 361,
    0, 362, 0, 0, 0, 363, 0, 364, 0, 365, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 368, 0, 0, 0, 0, 369, 0, 0, 370, 0, 371, 0,
    372, 0, 0, 0, 373, 0, 374, 0, 375, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 377, 0, 378, 0, 379, 0, 380, 0, 381, 0, 382, 0,
    383, 0, 384, 0, 385, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 387, 0, 388, 0, 389, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391,
    0, 392, 0, 393, 0, 0, 394, 0, 0, 395, 0, 396, 0, 397, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0,
    400, 0, 401, 0, 0, 0, 402, 0, 403, 0, 404, 0, 0, 405, 0, 406, 0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 409,
    0, 410, 0, 411, 0, 412, 0, 0, 0, 0, 413, 0, 0, 414, 0, 415, 0, 416, 0, 0, 0, 0, 0, 417, 0, 418, 0, 0, 0, 0, 0, 419,
    0, 420, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 423, 0, 424, 0, 425, 0, 426, 0, 427, 0, 0, 0, 0, 0, 428, 0, 0,
    0, 429, 0, 430, 0, 0, 431, 0, 0, 0, 432, 0, 433, 0, 434, 0, 0, 435, 0, 436, 0, 0, 437, 0, 0, 0, 0, 438, 0, 439, 0, 440,
    0, 0, 0, 441, 0, 442, 0, 443, 0, 0, 0, 444, 0, 0, 0, 0, 445, 0, 446, 0, 447, 0, 0, 0, 448, 0, 449, 0, 450, 0, 0, 0,
    451, 0, 0, 0, 452, 0, 453, 0, 454, 0, 0, 455, 0, 0, 0, 456, 0, 0, 457, 0, 0, 0, 458, 0, 0, 459, 0, 0, 0, 0, 0, 0,
    0, 460, 0, 0, 0, 0, 461, 0, 462, 0, 0, 0, 463, 0, 0, 0, 0, 464, 0, 465, 0, 0, 0, 466, 0, 467, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 468, 0, 0, 469, 0, 0, 470, 0, 0, 0, 471, 0, 472, 0, 0, 0, 473, 0, 474, 0, 0, 0, 475, 0, 0, 0, 0, 0, 476,
    0, 0, 0, 477, 0, 0, 0, 0, 0, 478, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 481, 0, 482, 483, 0, 484, 0,
    0, 0, 0, 485, 0, 0, 0, 0, 0, 486, 0, 487, 0, 0, 488, 0, 489, 0, 0, 0, 490, 0, 491, 492, 0, 493, 0, 0, 0, 0, 494, 0,
    495, 0, 0, 0, 496, 0, 0, 0, 0, 497, 0, 0, 0, 0, 498, 0, 0, 0, 0, 499, 0, 500, 0, 0, 0, 0, 0, 501, 0, 502, 0, 503,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 505, 0, 0, 506, 0, 0, 0, 507, 0, 508, 0, 0, 0, 509, 0, 0, 0, 0, 510,
    0, 511, 0, 0, 0, 512, 0, 0, 0, 0, 513, 0, 0, 0, 514, 0, 0, 0, 515, 0, 516, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0,
    518, 0, 519, 0, 520, 0, 0, 521, 0, 522, 0, 0, 0, 523, 0, 524, 0, 0, 525, 0, 526, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0,
    528, 0, 0, 0, 0, 0, 529, 0, 530, 0, 0, 0, 0, 531, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0,
    0, 534, 0, 0, 535, 0, 536, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 539, 0, 0, 0, 0, 540, 0, 541, 0, 0,
    542, 0, 543, 0, 544, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 547, 0, 548, 0, 0, 0, 0, 549, 0,
    0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 552, 0, 0, 553, 0, 554, 0, 0, 0, 555, 0, 0, 0, 0,
    0, 0, 556, 0, 0, 0, 0, 557, 0, 0, 0, 0, 558, 0, 559, 0, 0, 560, 0, 561, 0, 562, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0,
    0, 564, 0, 0, 0, 565, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 568, 0, 569, 0, 0, 0, 0,
    570, 0, 0, 0, 0, 571, 572, 0, 0, 573, 0, 0, 0, 574, 575, 0, 0, 576, 0, 0, 577, 0, 0, 578, 0, 579, 0, 0, 0, 0, 0, 580,
    0, 0, 581, 0, 582, 0, 0, 0, 0, 583, 0, 584, 0, 0, 0, 0, 0, 585, 0, 586, 0, 0, 0, 587, 0, 588, 0, 0, 0, 589, 0, 0,
    0, 0, 0, 0, 590, 0, 0, 591, 0, 0, 0, 0, 592, 0, 593, 0, 594, 0, 0, 0, 0, 595, 0, 0, 0, 0, 596, 0, 0, 0, 597, 0,
    0, 598, 0, 0, 0, 599, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 601, 0, 602, 0, 603, 0, 0, 0, 604, 0, 605, 0, 0, 606, 0, 0,
    607, 0, 608, 0, 0, 0, 0, 0, 609, 0, 0, 610, 0, 611, 0, 612, 0, 0, 0, 613, 0, 0, 614, 0, 615, 0, 616, 0, 617, 0, 618, 0,
    619, 0, 620, 0, 621, 622, 0, 0, 623, 0, 0, 624, 0, 0, 0, 0, 0, 0, 625, 0, 626, 0, 627, 0, 0, 0, 0, 628, 0, 629, 0, 630,
    0, 631, 0, 0, 0, 0, 0, 632, 0, 633, 0, 0, 0, 0, 0, 634, 0, 0, 635, 0, 636, 0, 0, 0, 637, 0, 638, 0, 0, 0, 639, 0,
    0, 0, 0, 0, 0, 640, 0, 0, 641, 0, 0, 0, 0, 642, 0, 643, 0, 0, 0, 644, 0, 0, 645, 0, 646, 0, 0, 0, 0, 647, 0, 0,
    0, 0, 648, 0, 0, 0, 649, 0, 0, 650, 0, 0, 0, 651, 0, 0, 0, 652, 0, 0, 0, 653, 0, 0, 654, 0, 655, 0, 0, 0, 0, 0,
    656, 0, 0, 657, 0, 658, 0, 0, 0, 659, 0, 660, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 662, 0, 0, 663, 0, 0, 0, 0, 664, 0,
    665, 0, 0, 0, 666, 0, 0, 667, 0, 668, 0, 0, 0, 0, 669, 0, 0, 0, 0, 670, 0, 0, 0, 671, 0, 0, 672, 0, 0, 0, 673, 0,
    0, 0, 674, 0, 0, 0, 0, 0, 0, 0, 675, 0, 676, 0, 677, 0, 678, 0, 679, 0, 680, 0, 0, 681, 0, 682, 0, 683, 0, 684, 0, 685,
    0, 686, 0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 689, 0, 0, 0, 0, 690, 0, 0, 0, 0, 691, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 692, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 694, 0, 0, 695, 0, 696, 0, 697, 0, 0, 698, 0, 699, 700, 0, 701, 0, 702, 0, 703, 0, 0, 704, 0, 705, 0, 0, 0,
    706, 0, 0, 707, 0, 708, 0, 709, 0, 710, 0, 711, 0, 0, 0, 712, 0, 0, 713, 0, 714, 0, 0, 715, 0, 716, 0, 0, 717, 0, 0, 718,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 720, 0, 721, 722, 0, 723, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 724, 0, 725, 0, 0, 726, 0, 727, 728, 729, 0, 0, 0, 0, 0, 730, 0, 731, 0, 732, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 733, 0, 0, 0, 734, 0, 0, 735, 0, 0, 0, 736, 0, 737, 0, 0, 0, 738, 0, 0, 0, 0, 739, 0, 0, 0,
    740, 0, 0, 0, 741, 0, 0, 742, 0, 0, 0, 743, 0, 744, 0, 0, 0, 0, 0, 745, 0, 746, 0, 0, 0, 747, 0, 0, 0, 0, 0, 0,
    748, 0, 0, 749, 0, 0, 750, 0, 0, 751, 0, 752, 0, 0, 753, 0, 0, 0, 0, 0, 754, 0, 755, 0, 0, 0, 0, 756, 0, 0, 757, 0,
    0, 0, 0, 0, 758, 0, 0, 0, 759, 0, 0, 760, 0, 761, 0, 0, 762, 0, 0, 0, 763, 0, 764, 0, 0, 0, 765, 0, 0, 0, 766, 0,
    0, 0, 767, 0, 0, 0, 0, 0, 0, 0, 768, 0, 769, 0, 0, 0, 770, 771, 0, 772, 0, 773, 0, 0, 0, 0, 0, 774, 0, 775, 0, 0,
    776, 0, 777, 0, 0, 0, 778, 0, 0, 779, 0, 780, 0, 0, 781, 0, 0, 0, 0, 0, 0, 782, 0, 783, 0, 0, 0, 784, 0, 785, 0, 0,
    0, 786, 0, 0, 0, 787, 0, 0, 788, 0, 789, 0, 790, 0, 791, 0, 0, 792, 0, 0, 0, 0, 0, 0, 0, 0, 0, 793, 0, 0, 794, 0,
    0, 0, 795, 796, 797, 0, 798, 0, 0, 799, 0, 0, 800, 0, 0, 0, 801, 0, 0, 0, 0, 0, 802, 0, 0, 803, 0, 0, 804, 0, 0, 0,
    0, 0, 805, 0, 806, 0, 0, 0, 0, 0, 807, 0, 808, 0, 0, 0, 0, 0, 809, 0, 0, 0, 0, 0, 810, 0, 0, 0, 811, 0, 0, 812,
    0, 813, 0, 0, 814, 0, 0, 0, 815, 0, 0, 0, 816, 0, 0, 0, 0, 0, 817, 0, 0, 818, 0, 819, 0, 820, 0, 0, 0, 821, 0, 0,
    0, 0, 0, 0, 822, 0, 0, 0, 0, 823, 0, 0, 824, 0, 0, 825, 0, 0, 0, 0, 826, 0, 0, 0, 0, 827, 0, 828, 0, 0, 829, 0,
    0, 0, 0, 830, 0, 831, 0, 0, 0, 0, 832, 0, 833, 0, 0, 0, 0, 834, 0, 0, 0, 0, 0, 835, 0, 0, 0, 836, 0, 0, 837, 0,
    0, 0, 838, 839, 0, 840, 0, 841, 0, 0, 0, 0, 0, 842, 0, 843, 0, 0, 844, 0, 0, 0, 845, 0, 0, 0, 846, 0, 0, 0, 0, 0,
    0, 847, 0, 848, 0, 0, 849, 0, 0, 0, 0, 0, 850, 0, 851, 0, 0, 0, 0, 852, 0, 0, 853, 0, 0, 0, 854, 0, 0, 855, 0, 0,
    0, 856, 0, 857, 0, 0, 0, 858, 0, 0, 0, 859, 0, 0, 0, 860, 0, 0, 0, 0, 0, 0, 861, 0, 862, 0, 0, 863, 0, 864, 0, 0,
    865, 0, 0, 0, 0, 0, 0, 866, 0, 867, 0, 0, 0, 868, 0, 869, 0, 0, 0, 870, 0, 0, 0, 871, 0, 0, 872, 0, 873, 0, 874, 0,
    875, 0, 0, 876, 0, 0, 0, 0, 0, 0, 0, 0, 0, 877, 0, 0, 878, 0, 0, 879, 0, 0, 0, 880, 0, 0, 0, 0, 0, 881, 0, 0,
    882, 0, 0, 883, 0, 0, 0, 0, 0, 884, 0, 885, 0, 0, 0, 0, 0, 886, 0, 887, 0, 0, 0, 0, 0, 888, 0, 0, 0, 889, 0, 0,
    890, 0, 0, 0, 891, 0, 0, 0, 892, 0, 0, 0, 0, 0, 893, 0, 0, 894, 0, 895, 0, 896, 0, 0, 0, 897, 0, 0, 0, 0, 0, 0,
    898, 0, 0, 0, 0, 899, 0, 0, 0, 0, 900, 0, 901, 0, 0, 902, 0, 0, 0, 0, 903, 0, 904, 0, 0, 0, 0, 905, 0, 906, 0, 0,
    0, 0, 907, 0, 0, 0, 0, 0, 0, 0, 0, 0, 908, 0, 0, 909, 0, 0, 0, 910, 0, 0, 0, 911, 0, 0, 0, 0, 912, 0, 0, 0,
    0, 0, 0, 0, 913, 0, 0, 0, 914, 0, 915, 0, 0, 916, 917, 918, 0, 0, 0, 0, 919, 0, 0, 0, 920, 0, 921, 0, 922, 0, 923,
};
void recomp_unit_0046_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088BC000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0046[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088BC000;
    case 2u: goto L_088BC01C;
    case 3u: goto L_088BC030;
    case 4u: goto L_088BC04C;
    case 5u: goto L_088BC05C;
    case 6u: goto L_088BC06C;
    case 7u: goto L_088BC07C;
    case 8u: goto L_088BC08C;
    case 9u: goto L_088BC0A4;
    case 10u: goto L_088BC0BC;
    case 11u: goto L_088BC0C4;
    case 12u: goto L_088BC0E0;
    case 13u: goto L_088BC0F0;
    case 14u: goto L_088BC100;
    case 15u: goto L_088BC110;
    case 16u: goto L_088BC120;
    case 17u: goto L_088BC130;
    case 18u: goto L_088BC158;
    case 19u: goto L_088BC160;
    case 20u: goto L_088BC178;
    case 21u: goto L_088BC18C;
    case 22u: goto L_088BC1AC;
    case 23u: goto L_088BC1B4;
    case 24u: goto L_088BC1D4;
    case 25u: goto L_088BC1E4;
    case 26u: goto L_088BC1F4;
    case 27u: goto L_088BC20C;
    case 28u: goto L_088BC238;
    case 29u: goto L_088BC250;
    case 30u: goto L_088BC25C;
    case 31u: goto L_088BC264;
    case 32u: goto L_088BC26C;
    case 33u: goto L_088BC274;
    case 34u: goto L_088BC27C;
    case 35u: goto L_088BC290;
    case 36u: goto L_088BC2AC;
    case 37u: goto L_088BC2B8;
    case 38u: goto L_088BC2C0;
    case 39u: goto L_088BC2D0;
    case 40u: goto L_088BC2D8;
    case 41u: goto L_088BC2E4;
    case 42u: goto L_088BC2EC;
    case 43u: goto L_088BC308;
    case 44u: goto L_088BC318;
    case 45u: goto L_088BC324;
    case 46u: goto L_088BC334;
    case 47u: goto L_088BC33C;
    case 48u: goto L_088BC344;
    case 49u: goto L_088BC34C;
    case 50u: goto L_088BC354;
    case 51u: goto L_088BC360;
    case 52u: goto L_088BC384;
    case 53u: goto L_088BC3A0;
    case 54u: goto L_088BC3F0;
    case 55u: goto L_088BC43C;
    case 56u: goto L_088BC44C;
    case 57u: goto L_088BC468;
    case 58u: goto L_088BC478;
    case 59u: goto L_088BC490;
    case 60u: goto L_088BC4A8;
    case 61u: goto L_088BC4C8;
    case 62u: goto L_088BC52C;
    case 63u: goto L_088BC538;
    case 64u: goto L_088BC57C;
    case 65u: goto L_088BC5DC;
    case 66u: goto L_088BC5E4;
    case 67u: goto L_088BC5F0;
    case 68u: goto L_088BC60C;
    case 69u: goto L_088BC61C;
    case 70u: goto L_088BC62C;
    case 71u: goto L_088BC670;
    case 72u: goto L_088BC690;
    case 73u: goto L_088BC6A0;
    case 74u: goto L_088BC6B4;
    case 75u: goto L_088BC6D0;
    case 76u: goto L_088BC6E8;
    case 77u: goto L_088BC7A0;
    case 78u: goto L_088BC7B8;
    case 79u: goto L_088BC860;
    case 80u: goto L_088BC878;
    case 81u: goto L_088BC880;
    case 82u: goto L_088BC898;
    case 83u: goto L_088BC8A8;
    case 84u: goto L_088BC8B8;
    case 85u: goto L_088BC8E8;
    case 86u: goto L_088BC910;
    case 87u: goto L_088BC928;
    case 88u: goto L_088BC93C;
    case 89u: goto L_088BC944;
    case 90u: goto L_088BC95C;
    case 91u: goto L_088BC96C;
    case 92u: goto L_088BC990;
    case 93u: goto L_088BC9B4;
    case 94u: goto L_088BC9BC;
    case 95u: goto L_088BC9CC;
    case 96u: goto L_088BC9DC;
    case 97u: goto L_088BC9F4;
    case 98u: goto L_088BCA38;
    case 99u: goto L_088BCA58;
    case 100u: goto L_088BCA68;
    case 101u: goto L_088BCA7C;
    case 102u: goto L_088BCA98;
    case 103u: goto L_088BCAB0;
    case 104u: goto L_088BCB68;
    case 105u: goto L_088BCB80;
    case 106u: goto L_088BCC28;
    case 107u: goto L_088BCC40;
    case 108u: goto L_088BCC48;
    case 109u: goto L_088BCC60;
    case 110u: goto L_088BCC70;
    case 111u: goto L_088BCC80;
    case 112u: goto L_088BCCB0;
    case 113u: goto L_088BCCD8;
    case 114u: goto L_088BCCF0;
    case 115u: goto L_088BCD04;
    case 116u: goto L_088BCD0C;
    case 117u: goto L_088BCD24;
    case 118u: goto L_088BCD34;
    case 119u: goto L_088BCD58;
    case 120u: goto L_088BCD7C;
    case 121u: goto L_088BCD84;
    case 122u: goto L_088BCD94;
    case 123u: goto L_088BCDA4;
    case 124u: goto L_088BCDBC;
    case 125u: goto L_088BCDCC;
    case 126u: goto L_088BCDD8;
    case 127u: goto L_088BCDE4;
    case 128u: goto L_088BCDEC;
    case 129u: goto L_088BCE00;
    case 130u: goto L_088BCE08;
    case 131u: goto L_088BCE10;
    case 132u: goto L_088BCE18;
    case 133u: goto L_088BCE20;
    case 134u: goto L_088BCE28;
    case 135u: goto L_088BCE3C;
    case 136u: goto L_088BCEA0;
    case 137u: goto L_088BCEC0;
    case 138u: goto L_088BCED8;
    case 139u: goto L_088BCF7C;
    case 140u: goto L_088BCF98;
    case 141u: goto L_088BCFA4;
    case 142u: goto L_088BCFEC;
    case 143u: goto L_088BCFF4;
    case 144u: goto L_088BCFFC;
    case 145u: goto L_088BD000;
    case 146u: goto L_088BD004;
    case 147u: goto L_088BD010;
    case 148u: goto L_088BD0AC;
    case 149u: goto L_088BD0C4;
    case 150u: goto L_088BD0D8;
    case 151u: goto L_088BD0F4;
    case 152u: goto L_088BD104;
    case 153u: goto L_088BD198;
    case 154u: goto L_088BD1AC;
    case 155u: goto L_088BD1BC;
    case 156u: goto L_088BD204;
    case 157u: goto L_088BD218;
    case 158u: goto L_088BD240;
    case 159u: goto L_088BD258;
    case 160u: goto L_088BD270;
    case 161u: goto L_088BD2A4;
    case 162u: goto L_088BD2AC;
    case 163u: goto L_088BD2D8;
    case 164u: goto L_088BD3A0;
    case 165u: goto L_088BD3B4;
    case 166u: goto L_088BD3D4;
    case 167u: goto L_088BD3F0;
    case 168u: goto L_088BD3F8;
    case 169u: goto L_088BD3FC;
    case 170u: goto L_088BD408;
    case 171u: goto L_088BD410;
    case 172u: goto L_088BD41C;
    case 173u: goto L_088BD430;
    case 174u: goto L_088BD43C;
    case 175u: goto L_088BD444;
    case 176u: goto L_088BD44C;
    case 177u: goto L_088BD460;
    case 178u: goto L_088BD468;
    case 179u: goto L_088BD470;
    case 180u: goto L_088BD484;
    case 181u: goto L_088BD490;
    case 182u: goto L_088BD4A0;
    case 183u: goto L_088BD4A8;
    case 184u: goto L_088BD4B0;
    case 185u: goto L_088BD4B4;
    case 186u: goto L_088BD4BC;
    case 187u: goto L_088BD4C8;
    case 188u: goto L_088BD4D4;
    case 189u: goto L_088BD4E0;
    case 190u: goto L_088BD57C;
    case 191u: goto L_088BD588;
    case 192u: goto L_088BD594;
    case 193u: goto L_088BD5A0;
    case 194u: goto L_088BD5A8;
    case 195u: goto L_088BD5B4;
    case 196u: goto L_088BD5C4;
    case 197u: goto L_088BD5D0;
    case 198u: goto L_088BD5E4;
    case 199u: goto L_088BD5EC;
    case 200u: goto L_088BD5F8;
    case 201u: goto L_088BD60C;
    case 202u: goto L_088BD614;
    case 203u: goto L_088BD634;
    case 204u: goto L_088BD640;
    case 205u: goto L_088BD654;
    case 206u: goto L_088BD65C;
    case 207u: goto L_088BD66C;
    case 208u: goto L_088BD674;
    case 209u: goto L_088BD67C;
    case 210u: goto L_088BD690;
    case 211u: goto L_088BD698;
    case 212u: goto L_088BD6A8;
    case 213u: goto L_088BD6D4;
    case 214u: goto L_088BD6DC;
    case 215u: goto L_088BD700;
    case 216u: goto L_088BD718;
    case 217u: goto L_088BD72C;
    case 218u: goto L_088BD738;
    case 219u: goto L_088BD740;
    case 220u: goto L_088BD748;
    case 221u: goto L_088BD750;
    case 222u: goto L_088BD75C;
    case 223u: goto L_088BD77C;
    case 224u: goto L_088BD788;
    case 225u: goto L_088BD790;
    case 226u: goto L_088BD798;
    case 227u: goto L_088BD7B4;
    case 228u: goto L_088BD7D0;
    case 229u: goto L_088BD7EC;
    case 230u: goto L_088BD7F4;
    case 231u: goto L_088BD82C;
    case 232u: goto L_088BD834;
    case 233u: goto L_088BD83C;
    case 234u: goto L_088BD844;
    case 235u: goto L_088BD850;
    case 236u: goto L_088BD858;
    case 237u: goto L_088BD874;
    case 238u: goto L_088BD87C;
    case 239u: goto L_088BD884;
    case 240u: goto L_088BD890;
    case 241u: goto L_088BD898;
    case 242u: goto L_088BD89C;
    case 243u: goto L_088BD8A4;
    case 244u: goto L_088BD8AC;
    case 245u: goto L_088BD8D0;
    case 246u: goto L_088BD8D8;
    case 247u: goto L_088BD8E0;
    case 248u: goto L_088BD8EC;
    case 249u: goto L_088BD8F8;
    case 250u: goto L_088BD900;
    case 251u: goto L_088BD904;
    case 252u: goto L_088BD90C;
    case 253u: goto L_088BD914;
    case 254u: goto L_088BD91C;
    case 255u: goto L_088BD940;
    case 256u: goto L_088BD958;
    case 257u: goto L_088BD96C;
    case 258u: goto L_088BD97C;
    case 259u: goto L_088BD990;
    case 260u: goto L_088BD9A8;
    case 261u: goto L_088BD9D0;
    case 262u: goto L_088BD9E0;
    case 263u: goto L_088BD9F0;
    case 264u: goto L_088BDA00;
    case 265u: goto L_088BDA10;
    case 266u: goto L_088BDA28;
    case 267u: goto L_088BDA50;
    case 268u: goto L_088BDA60;
    case 269u: goto L_088BDA68;
    case 270u: goto L_088BDA74;
    case 271u: goto L_088BDA8C;
    case 272u: goto L_088BDAA0;
    case 273u: goto L_088BDAB4;
    case 274u: goto L_088BDAC4;
    case 275u: goto L_088BDACC;
    case 276u: goto L_088BDAD8;
    case 277u: goto L_088BDAEC;
    case 278u: goto L_088BDAF4;
    case 279u: goto L_088BDB10;
    case 280u: goto L_088BDB20;
    case 281u: goto L_088BDB28;
    case 282u: goto L_088BDB30;
    case 283u: goto L_088BDB38;
    case 284u: goto L_088BDB40;
    case 285u: goto L_088BDB4C;
    case 286u: goto L_088BDB68;
    case 287u: goto L_088BDB74;
    case 288u: goto L_088BDB7C;
    case 289u: goto L_088BDB80;
    case 290u: goto L_088BDB98;
    case 291u: goto L_088BDBAC;
    case 292u: goto L_088BDBB8;
    case 293u: goto L_088BDBC0;
    case 294u: goto L_088BDBC4;
    case 295u: goto L_088BDBD8;
    case 296u: goto L_088BDBF4;
    case 297u: goto L_088BDC00;
    case 298u: goto L_088BDC08;
    case 299u: goto L_088BDC0C;
    case 300u: goto L_088BDC24;
    case 301u: goto L_088BDC38;
    case 302u: goto L_088BDC44;
    case 303u: goto L_088BDC4C;
    case 304u: goto L_088BDC50;
    case 305u: goto L_088BDC64;
    case 306u: goto L_088BDC80;
    case 307u: goto L_088BDC8C;
    case 308u: goto L_088BDC94;
    case 309u: goto L_088BDC98;
    case 310u: goto L_088BDCB0;
    case 311u: goto L_088BDCC4;
    case 312u: goto L_088BDCD0;
    case 313u: goto L_088BDCD8;
    case 314u: goto L_088BDCDC;
    case 315u: goto L_088BDD28;
    case 316u: goto L_088BDD38;
    case 317u: goto L_088BDD60;
    case 318u: goto L_088BDD70;
    case 319u: goto L_088BDD98;
    case 320u: goto L_088BDDA0;
    case 321u: goto L_088BDDA8;
    case 322u: goto L_088BDDB0;
    case 323u: goto L_088BDDBC;
    case 324u: goto L_088BDDC0;
    case 325u: goto L_088BDDC8;
    case 326u: goto L_088BDDDC;
    case 327u: goto L_088BDDE8;
    case 328u: goto L_088BDDF0;
    case 329u: goto L_088BDDF8;
    case 330u: goto L_088BDDFC;
    case 331u: goto L_088BDE10;
    case 332u: goto L_088BDE18;
    case 333u: goto L_088BDE28;
    case 334u: goto L_088BDE4C;
    case 335u: goto L_088BDE54;
    case 336u: goto L_088BDE5C;
    case 337u: goto L_088BDE6C;
    case 338u: goto L_088BDE7C;
    case 339u: goto L_088BDED0;
    case 340u: goto L_088BDED8;
    case 341u: goto L_088BDEE0;
    case 342u: goto L_088BDEE8;
    case 343u: goto L_088BDEF4;
    case 344u: goto L_088BDF04;
    case 345u: goto L_088BDF10;
    case 346u: goto L_088BDF2C;
    case 347u: goto L_088BDF38;
    case 348u: goto L_088BDF40;
    case 349u: goto L_088BDF48;
    case 350u: goto L_088BDF50;
    case 351u: goto L_088BDF58;
    case 352u: goto L_088BDF70;
    case 353u: goto L_088BDF88;
    case 354u: goto L_088BDFA0;
    case 355u: goto L_088BDFAC;
    case 356u: goto L_088BDFB8;
    case 357u: goto L_088BDFCC;
    case 358u: goto L_088BDFD4;
    case 359u: goto L_088BDFE8;
    case 360u: goto L_088BDFF4;
    case 361u: goto L_088BDFFC;
    case 362u: goto L_088BE004;
    case 363u: goto L_088BE014;
    case 364u: goto L_088BE01C;
    case 365u: goto L_088BE024;
    case 366u: goto L_088BE034;
    case 367u: goto L_088BE048;
    case 368u: goto L_088BE050;
    case 369u: goto L_088BE064;
    case 370u: goto L_088BE070;
    case 371u: goto L_088BE078;
    case 372u: goto L_088BE080;
    case 373u: goto L_088BE090;
    case 374u: goto L_088BE098;
    case 375u: goto L_088BE0A0;
    case 376u: goto L_088BE0B0;
    case 377u: goto L_088BE0D0;
    case 378u: goto L_088BE0D8;
    case 379u: goto L_088BE0E0;
    case 380u: goto L_088BE0E8;
    case 381u: goto L_088BE0F0;
    case 382u: goto L_088BE0F8;
    case 383u: goto L_088BE100;
    case 384u: goto L_088BE108;
    case 385u: goto L_088BE110;
    case 386u: goto L_088BE12C;
    case 387u: goto L_088BE13C;
    case 388u: goto L_088BE144;
    case 389u: goto L_088BE14C;
    case 390u: goto L_088BE154;
    case 391u: goto L_088BE17C;
    case 392u: goto L_088BE184;
    case 393u: goto L_088BE18C;
    case 394u: goto L_088BE198;
    case 395u: goto L_088BE1A4;
    case 396u: goto L_088BE1AC;
    case 397u: goto L_088BE1B4;
    case 398u: goto L_088BE1BC;
    case 399u: goto L_088BE1F0;
    case 400u: goto L_088BE200;
    case 401u: goto L_088BE208;
    case 402u: goto L_088BE218;
    case 403u: goto L_088BE220;
    case 404u: goto L_088BE228;
    case 405u: goto L_088BE234;
    case 406u: goto L_088BE23C;
    case 407u: goto L_088BE244;
    case 408u: goto L_088BE260;
    case 409u: goto L_088BE27C;
    case 410u: goto L_088BE284;
    case 411u: goto L_088BE28C;
    case 412u: goto L_088BE294;
    case 413u: goto L_088BE2A8;
    case 414u: goto L_088BE2B4;
    case 415u: goto L_088BE2BC;
    case 416u: goto L_088BE2C4;
    case 417u: goto L_088BE2DC;
    case 418u: goto L_088BE2E4;
    case 419u: goto L_088BE2FC;
    case 420u: goto L_088BE304;
    case 421u: goto L_088BE308;
    case 422u: goto L_088BE334;
    case 423u: goto L_088BE33C;
    case 424u: goto L_088BE344;
    case 425u: goto L_088BE34C;
    case 426u: goto L_088BE354;
    case 427u: goto L_088BE35C;
    case 428u: goto L_088BE374;
    case 429u: goto L_088BE384;
    case 430u: goto L_088BE38C;
    case 431u: goto L_088BE398;
    case 432u: goto L_088BE3A8;
    case 433u: goto L_088BE3B0;
    case 434u: goto L_088BE3B8;
    case 435u: goto L_088BE3C4;
    case 436u: goto L_088BE3CC;
    case 437u: goto L_088BE3D8;
    case 438u: goto L_088BE3EC;
    case 439u: goto L_088BE3F4;
    case 440u: goto L_088BE3FC;
    case 441u: goto L_088BE40C;
    case 442u: goto L_088BE414;
    case 443u: goto L_088BE41C;
    case 444u: goto L_088BE42C;
    case 445u: goto L_088BE440;
    case 446u: goto L_088BE448;
    case 447u: goto L_088BE450;
    case 448u: goto L_088BE460;
    case 449u: goto L_088BE468;
    case 450u: goto L_088BE470;
    case 451u: goto L_088BE480;
    case 452u: goto L_088BE490;
    case 453u: goto L_088BE498;
    case 454u: goto L_088BE4A0;
    case 455u: goto L_088BE4AC;
    case 456u: goto L_088BE4BC;
    case 457u: goto L_088BE4C8;
    case 458u: goto L_088BE4D8;
    case 459u: goto L_088BE4E4;
    case 460u: goto L_088BE504;
    case 461u: goto L_088BE518;
    case 462u: goto L_088BE520;
    case 463u: goto L_088BE530;
    case 464u: goto L_088BE544;
    case 465u: goto L_088BE54C;
    case 466u: goto L_088BE55C;
    case 467u: goto L_088BE564;
    case 468u: goto L_088BE58C;
    case 469u: goto L_088BE598;
    case 470u: goto L_088BE5A4;
    case 471u: goto L_088BE5B4;
    case 472u: goto L_088BE5BC;
    case 473u: goto L_088BE5CC;
    case 474u: goto L_088BE5D4;
    case 475u: goto L_088BE5E4;
    case 476u: goto L_088BE5FC;
    case 477u: goto L_088BE60C;
    case 478u: goto L_088BE624;
    case 479u: goto L_088BE62C;
    case 480u: goto L_088BE650;
    case 481u: goto L_088BE664;
    case 482u: goto L_088BE66C;
    case 483u: goto L_088BE670;
    case 484u: goto L_088BE678;
    case 485u: goto L_088BE68C;
    case 486u: goto L_088BE6A4;
    case 487u: goto L_088BE6AC;
    case 488u: goto L_088BE6B8;
    case 489u: goto L_088BE6C0;
    case 490u: goto L_088BE6D0;
    case 491u: goto L_088BE6D8;
    case 492u: goto L_088BE6DC;
    case 493u: goto L_088BE6E4;
    case 494u: goto L_088BE6F8;
    case 495u: goto L_088BE700;
    case 496u: goto L_088BE710;
    case 497u: goto L_088BE724;
    case 498u: goto L_088BE738;
    case 499u: goto L_088BE74C;
    case 500u: goto L_088BE754;
    case 501u: goto L_088BE76C;
    case 502u: goto L_088BE774;
    case 503u: goto L_088BE77C;
    case 504u: goto L_088BE7A8;
    case 505u: goto L_088BE7B4;
    case 506u: goto L_088BE7C0;
    case 507u: goto L_088BE7D0;
    case 508u: goto L_088BE7D8;
    case 509u: goto L_088BE7E8;
    case 510u: goto L_088BE7FC;
    case 511u: goto L_088BE804;
    case 512u: goto L_088BE814;
    case 513u: goto L_088BE828;
    case 514u: goto L_088BE838;
    case 515u: goto L_088BE848;
    case 516u: goto L_088BE850;
    case 517u: goto L_088BE86C;
    case 518u: goto L_088BE880;
    case 519u: goto L_088BE888;
    case 520u: goto L_088BE890;
    case 521u: goto L_088BE89C;
    case 522u: goto L_088BE8A4;
    case 523u: goto L_088BE8B4;
    case 524u: goto L_088BE8BC;
    case 525u: goto L_088BE8C8;
    case 526u: goto L_088BE8D0;
    case 527u: goto L_088BE8DC;
    case 528u: goto L_088BE900;
    case 529u: goto L_088BE918;
    case 530u: goto L_088BE920;
    case 531u: goto L_088BE934;
    case 532u: goto L_088BE948;
    case 533u: goto L_088BE96C;
    case 534u: goto L_088BE984;
    case 535u: goto L_088BE990;
    case 536u: goto L_088BE998;
    case 537u: goto L_088BE9A8;
    case 538u: goto L_088BE9C4;
    case 539u: goto L_088BE9D8;
    case 540u: goto L_088BE9EC;
    case 541u: goto L_088BE9F4;
    case 542u: goto L_088BEA00;
    case 543u: goto L_088BEA08;
    case 544u: goto L_088BEA10;
    case 545u: goto L_088BEA20;
    case 546u: goto L_088BEA44;
    case 547u: goto L_088BEA5C;
    case 548u: goto L_088BEA64;
    case 549u: goto L_088BEA78;
    case 550u: goto L_088BEA8C;
    case 551u: goto L_088BEAB0;
    case 552u: goto L_088BEAC8;
    case 553u: goto L_088BEAD4;
    case 554u: goto L_088BEADC;
    case 555u: goto L_088BEAEC;
    case 556u: goto L_088BEB08;
    case 557u: goto L_088BEB1C;
    case 558u: goto L_088BEB30;
    case 559u: goto L_088BEB38;
    case 560u: goto L_088BEB44;
    case 561u: goto L_088BEB4C;
    case 562u: goto L_088BEB54;
    case 563u: goto L_088BEB64;
    case 564u: goto L_088BEB84;
    case 565u: goto L_088BEB94;
    case 566u: goto L_088BEBA8;
    case 567u: goto L_088BEBCC;
    case 568u: goto L_088BEBE4;
    case 569u: goto L_088BEBEC;
    case 570u: goto L_088BEC00;
    case 571u: goto L_088BEC14;
    case 572u: goto L_088BEC18;
    case 573u: goto L_088BEC24;
    case 574u: goto L_088BEC34;
    case 575u: goto L_088BEC38;
    case 576u: goto L_088BEC44;
    case 577u: goto L_088BEC50;
    case 578u: goto L_088BEC5C;
    case 579u: goto L_088BEC64;
    case 580u: goto L_088BEC7C;
    case 581u: goto L_088BEC88;
    case 582u: goto L_088BEC90;
    case 583u: goto L_088BECA4;
    case 584u: goto L_088BECAC;
    case 585u: goto L_088BECC4;
    case 586u: goto L_088BECCC;
    case 587u: goto L_088BECDC;
    case 588u: goto L_088BECE4;
    case 589u: goto L_088BECF4;
    case 590u: goto L_088BED10;
    case 591u: goto L_088BED1C;
    case 592u: goto L_088BED30;
    case 593u: goto L_088BED38;
    case 594u: goto L_088BED40;
    case 595u: goto L_088BED54;
    case 596u: goto L_088BED68;
    case 597u: goto L_088BED78;
    case 598u: goto L_088BED84;
    case 599u: goto L_088BED94;
    case 600u: goto L_088BEDA4;
    case 601u: goto L_088BEDC0;
    case 602u: goto L_088BEDC8;
    case 603u: goto L_088BEDD0;
    case 604u: goto L_088BEDE0;
    case 605u: goto L_088BEDE8;
    case 606u: goto L_088BEDF4;
    case 607u: goto L_088BEE00;
    case 608u: goto L_088BEE08;
    case 609u: goto L_088BEE20;
    case 610u: goto L_088BEE2C;
    case 611u: goto L_088BEE34;
    case 612u: goto L_088BEE3C;
    case 613u: goto L_088BEE4C;
    case 614u: goto L_088BEE58;
    case 615u: goto L_088BEE60;
    case 616u: goto L_088BEE68;
    case 617u: goto L_088BEE70;
    case 618u: goto L_088BEE78;
    case 619u: goto L_088BEE80;
    case 620u: goto L_088BEE88;
    case 621u: goto L_088BEE90;
    case 622u: goto L_088BEE94;
    case 623u: goto L_088BEEA0;
    case 624u: goto L_088BEEAC;
    case 625u: goto L_088BEEC8;
    case 626u: goto L_088BEED0;
    case 627u: goto L_088BEED8;
    case 628u: goto L_088BEEEC;
    case 629u: goto L_088BEEF4;
    case 630u: goto L_088BEEFC;
    case 631u: goto L_088BEF04;
    case 632u: goto L_088BEF1C;
    case 633u: goto L_088BEF24;
    case 634u: goto L_088BEF3C;
    case 635u: goto L_088BEF48;
    case 636u: goto L_088BEF50;
    case 637u: goto L_088BEF60;
    case 638u: goto L_088BEF68;
    case 639u: goto L_088BEF78;
    case 640u: goto L_088BEF94;
    case 641u: goto L_088BEFA0;
    case 642u: goto L_088BEFB4;
    case 643u: goto L_088BEFBC;
    case 644u: goto L_088BEFCC;
    case 645u: goto L_088BEFD8;
    case 646u: goto L_088BEFE0;
    case 647u: goto L_088BEFF4;
    case 648u: goto L_088BF008;
    case 649u: goto L_088BF018;
    case 650u: goto L_088BF024;
    case 651u: goto L_088BF034;
    case 652u: goto L_088BF044;
    case 653u: goto L_088BF054;
    case 654u: goto L_088BF060;
    case 655u: goto L_088BF068;
    case 656u: goto L_088BF080;
    case 657u: goto L_088BF08C;
    case 658u: goto L_088BF094;
    case 659u: goto L_088BF0A4;
    case 660u: goto L_088BF0AC;
    case 661u: goto L_088BF0BC;
    case 662u: goto L_088BF0D8;
    case 663u: goto L_088BF0E4;
    case 664u: goto L_088BF0F8;
    case 665u: goto L_088BF100;
    case 666u: goto L_088BF110;
    case 667u: goto L_088BF11C;
    case 668u: goto L_088BF124;
    case 669u: goto L_088BF138;
    case 670u: goto L_088BF14C;
    case 671u: goto L_088BF15C;
    case 672u: goto L_088BF168;
    case 673u: goto L_088BF178;
    case 674u: goto L_088BF188;
    case 675u: goto L_088BF1A8;
    case 676u: goto L_088BF1B0;
    case 677u: goto L_088BF1B8;
    case 678u: goto L_088BF1C0;
    case 679u: goto L_088BF1C8;
    case 680u: goto L_088BF1D0;
    case 681u: goto L_088BF1DC;
    case 682u: goto L_088BF1E4;
    case 683u: goto L_088BF1EC;
    case 684u: goto L_088BF1F4;
    case 685u: goto L_088BF1FC;
    case 686u: goto L_088BF204;
    case 687u: goto L_088BF210;
    case 688u: goto L_088BF244;
    case 689u: goto L_088BF250;
    case 690u: goto L_088BF264;
    case 691u: goto L_088BF278;
    case 692u: goto L_088BF2BC;
    case 693u: goto L_088BF2D0;
    case 694u: goto L_088BF310;
    case 695u: goto L_088BF31C;
    case 696u: goto L_088BF324;
    case 697u: goto L_088BF32C;
    case 698u: goto L_088BF338;
    case 699u: goto L_088BF340;
    case 700u: goto L_088BF344;
    case 701u: goto L_088BF34C;
    case 702u: goto L_088BF354;
    case 703u: goto L_088BF35C;
    case 704u: goto L_088BF368;
    case 705u: goto L_088BF370;
    case 706u: goto L_088BF380;
    case 707u: goto L_088BF38C;
    case 708u: goto L_088BF394;
    case 709u: goto L_088BF39C;
    case 710u: goto L_088BF3A4;
    case 711u: goto L_088BF3AC;
    case 712u: goto L_088BF3BC;
    case 713u: goto L_088BF3C8;
    case 714u: goto L_088BF3D0;
    case 715u: goto L_088BF3DC;
    case 716u: goto L_088BF3E4;
    case 717u: goto L_088BF3F0;
    case 718u: goto L_088BF3FC;
    case 719u: goto L_088BF428;
    case 720u: goto L_088BF440;
    case 721u: goto L_088BF448;
    case 722u: goto L_088BF44C;
    case 723u: goto L_088BF454;
    case 724u: goto L_088BF49C;
    case 725u: goto L_088BF4A4;
    case 726u: goto L_088BF4B0;
    case 727u: goto L_088BF4B8;
    case 728u: goto L_088BF4BC;
    case 729u: goto L_088BF4C0;
    case 730u: goto L_088BF4D8;
    case 731u: goto L_088BF4E0;
    case 732u: goto L_088BF4E8;
    case 733u: goto L_088BF518;
    case 734u: goto L_088BF528;
    case 735u: goto L_088BF534;
    case 736u: goto L_088BF544;
    case 737u: goto L_088BF54C;
    case 738u: goto L_088BF55C;
    case 739u: goto L_088BF570;
    case 740u: goto L_088BF580;
    case 741u: goto L_088BF590;
    case 742u: goto L_088BF59C;
    case 743u: goto L_088BF5AC;
    case 744u: goto L_088BF5B4;
    case 745u: goto L_088BF5CC;
    case 746u: goto L_088BF5D4;
    case 747u: goto L_088BF5E4;
    case 748u: goto L_088BF600;
    case 749u: goto L_088BF60C;
    case 750u: goto L_088BF618;
    case 751u: goto L_088BF624;
    case 752u: goto L_088BF62C;
    case 753u: goto L_088BF638;
    case 754u: goto L_088BF650;
    case 755u: goto L_088BF658;
    case 756u: goto L_088BF66C;
    case 757u: goto L_088BF678;
    case 758u: goto L_088BF690;
    case 759u: goto L_088BF6A0;
    case 760u: goto L_088BF6AC;
    case 761u: goto L_088BF6B4;
    case 762u: goto L_088BF6C0;
    case 763u: goto L_088BF6D0;
    case 764u: goto L_088BF6D8;
    case 765u: goto L_088BF6E8;
    case 766u: goto L_088BF6F8;
    case 767u: goto L_088BF708;
    case 768u: goto L_088BF728;
    case 769u: goto L_088BF730;
    case 770u: goto L_088BF740;
    case 771u: goto L_088BF744;
    case 772u: goto L_088BF74C;
    case 773u: goto L_088BF754;
    case 774u: goto L_088BF76C;
    case 775u: goto L_088BF774;
    case 776u: goto L_088BF780;
    case 777u: goto L_088BF788;
    case 778u: goto L_088BF798;
    case 779u: goto L_088BF7A4;
    case 780u: goto L_088BF7AC;
    case 781u: goto L_088BF7B8;
    case 782u: goto L_088BF7D4;
    case 783u: goto L_088BF7DC;
    case 784u: goto L_088BF7EC;
    case 785u: goto L_088BF7F4;
    case 786u: goto L_088BF804;
    case 787u: goto L_088BF814;
    case 788u: goto L_088BF820;
    case 789u: goto L_088BF828;
    case 790u: goto L_088BF830;
    case 791u: goto L_088BF838;
    case 792u: goto L_088BF844;
    case 793u: goto L_088BF86C;
    case 794u: goto L_088BF878;
    case 795u: goto L_088BF888;
    case 796u: goto L_088BF88C;
    case 797u: goto L_088BF890;
    case 798u: goto L_088BF898;
    case 799u: goto L_088BF8A4;
    case 800u: goto L_088BF8B0;
    case 801u: goto L_088BF8C0;
    case 802u: goto L_088BF8D8;
    case 803u: goto L_088BF8E4;
    case 804u: goto L_088BF8F0;
    case 805u: goto L_088BF908;
    case 806u: goto L_088BF910;
    case 807u: goto L_088BF928;
    case 808u: goto L_088BF930;
    case 809u: goto L_088BF948;
    case 810u: goto L_088BF960;
    case 811u: goto L_088BF970;
    case 812u: goto L_088BF97C;
    case 813u: goto L_088BF984;
    case 814u: goto L_088BF990;
    case 815u: goto L_088BF9A0;
    case 816u: goto L_088BF9B0;
    case 817u: goto L_088BF9C8;
    case 818u: goto L_088BF9D4;
    case 819u: goto L_088BF9DC;
    case 820u: goto L_088BF9E4;
    case 821u: goto L_088BF9F4;
    case 822u: goto L_088BFA10;
    case 823u: goto L_088BFA24;
    case 824u: goto L_088BFA30;
    case 825u: goto L_088BFA3C;
    case 826u: goto L_088BFA50;
    case 827u: goto L_088BFA64;
    case 828u: goto L_088BFA6C;
    case 829u: goto L_088BFA78;
    case 830u: goto L_088BFA8C;
    case 831u: goto L_088BFA94;
    case 832u: goto L_088BFAA8;
    case 833u: goto L_088BFAB0;
    case 834u: goto L_088BFAC4;
    case 835u: goto L_088BFADC;
    case 836u: goto L_088BFAEC;
    case 837u: goto L_088BFAF8;
    case 838u: goto L_088BFB08;
    case 839u: goto L_088BFB0C;
    case 840u: goto L_088BFB14;
    case 841u: goto L_088BFB1C;
    case 842u: goto L_088BFB34;
    case 843u: goto L_088BFB3C;
    case 844u: goto L_088BFB48;
    case 845u: goto L_088BFB58;
    case 846u: goto L_088BFB68;
    case 847u: goto L_088BFB84;
    case 848u: goto L_088BFB8C;
    case 849u: goto L_088BFB98;
    case 850u: goto L_088BFBB0;
    case 851u: goto L_088BFBB8;
    case 852u: goto L_088BFBCC;
    case 853u: goto L_088BFBD8;
    case 854u: goto L_088BFBE8;
    case 855u: goto L_088BFBF4;
    case 856u: goto L_088BFC04;
    case 857u: goto L_088BFC0C;
    case 858u: goto L_088BFC1C;
    case 859u: goto L_088BFC2C;
    case 860u: goto L_088BFC3C;
    case 861u: goto L_088BFC58;
    case 862u: goto L_088BFC60;
    case 863u: goto L_088BFC6C;
    case 864u: goto L_088BFC74;
    case 865u: goto L_088BFC80;
    case 866u: goto L_088BFC9C;
    case 867u: goto L_088BFCA4;
    case 868u: goto L_088BFCB4;
    case 869u: goto L_088BFCBC;
    case 870u: goto L_088BFCCC;
    case 871u: goto L_088BFCDC;
    case 872u: goto L_088BFCE8;
    case 873u: goto L_088BFCF0;
    case 874u: goto L_088BFCF8;
    case 875u: goto L_088BFD00;
    case 876u: goto L_088BFD0C;
    case 877u: goto L_088BFD34;
    case 878u: goto L_088BFD40;
    case 879u: goto L_088BFD4C;
    case 880u: goto L_088BFD5C;
    case 881u: goto L_088BFD74;
    case 882u: goto L_088BFD80;
    case 883u: goto L_088BFD8C;
    case 884u: goto L_088BFDA4;
    case 885u: goto L_088BFDAC;
    case 886u: goto L_088BFDC4;
    case 887u: goto L_088BFDCC;
    case 888u: goto L_088BFDE4;
    case 889u: goto L_088BFDF4;
    case 890u: goto L_088BFE00;
    case 891u: goto L_088BFE10;
    case 892u: goto L_088BFE20;
    case 893u: goto L_088BFE38;
    case 894u: goto L_088BFE44;
    case 895u: goto L_088BFE4C;
    case 896u: goto L_088BFE54;
    case 897u: goto L_088BFE64;
    case 898u: goto L_088BFE80;
    case 899u: goto L_088BFE94;
    case 900u: goto L_088BFEA8;
    case 901u: goto L_088BFEB0;
    case 902u: goto L_088BFEBC;
    case 903u: goto L_088BFED0;
    case 904u: goto L_088BFED8;
    case 905u: goto L_088BFEEC;
    case 906u: goto L_088BFEF4;
    case 907u: goto L_088BFF08;
    case 908u: goto L_088BFF30;
    case 909u: goto L_088BFF3C;
    case 910u: goto L_088BFF4C;
    case 911u: goto L_088BFF5C;
    case 912u: goto L_088BFF70;
    case 913u: goto L_088BFF90;
    case 914u: goto L_088BFFA0;
    case 915u: goto L_088BFFA8;
    case 916u: goto L_088BFFB4;
    case 917u: goto L_088BFFB8;
    case 918u: goto L_088BFFBC;
    case 919u: goto L_088BFFD0;
    case 920u: goto L_088BFFE0;
    case 921u: goto L_088BFFE8;
    case 922u: goto L_088BFFF0;
    case 923u: goto L_088BFFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088BC000:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088BC01Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 129u, 0x0883D148u>(ctx, &aot_mem) && ctx.pc == 0x088BC01Cu) goto L_088BC01C;
    return;
L_088BC01C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC030:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16208)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BC04Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 39u, 0x0883C59Cu>(ctx, &aot_mem) && ctx.pc == 0x088BC04Cu) goto L_088BC04C;
    return;
L_088BC04C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16208)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088BC05Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 45u, 0x0883C64Cu>(ctx, &aot_mem) && ctx.pc == 0x088BC05Cu) goto L_088BC05C;
    return;
L_088BC05C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16208)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088BC06Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 51u, 0x0883C6FCu>(ctx, &aot_mem) && ctx.pc == 0x088BC06Cu) goto L_088BC06C;
    return;
L_088BC06C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16208)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088BC07Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 51u, 0x0883C6FCu>(ctx, &aot_mem) && ctx.pc == 0x088BC07Cu) goto L_088BC07C;
    return;
L_088BC07C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16208)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088BC08Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 474u, 0x0883B820u>(ctx, &aot_mem) && ctx.pc == 0x088BC08Cu) goto L_088BC08C;
    return;
L_088BC08C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16208)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088BC0A4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BC0A4u) goto L_088BC0A4;
    return;
L_088BC0A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16208)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC0BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC0C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16208)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BC0E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 41u, 0x0883C5B8u>(ctx, &aot_mem) && ctx.pc == 0x088BC0E0u) goto L_088BC0E0;
    return;
L_088BC0E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16208)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088BC0F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 47u, 0x0883C668u>(ctx, &aot_mem) && ctx.pc == 0x088BC0F0u) goto L_088BC0F0;
    return;
L_088BC0F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16208)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088BC100u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 53u, 0x0883C718u>(ctx, &aot_mem) && ctx.pc == 0x088BC100u) goto L_088BC100;
    return;
L_088BC100:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16208)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088BC110u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 53u, 0x0883C718u>(ctx, &aot_mem) && ctx.pc == 0x088BC110u) goto L_088BC110;
    return;
L_088BC110:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16208)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088BC120u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 478u, 0x0883B858u>(ctx, &aot_mem) && ctx.pc == 0x088BC120u) goto L_088BC120;
    return;
L_088BC120:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC130:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16208)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_088BC158;
L_088BC158:
    ctx.gpr[31] = (0x088BC160u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x088BC160u) goto L_088BC160;
    return;
L_088BC160:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16208)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088BC158;
      }
      goto L_088BC178;
    }
L_088BC178:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088BC18Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BC18Cu) goto L_088BC18C;
    return;
L_088BC18C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16208)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
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
L_088BC1AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC1B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_088BC1D4;
L_088BC1D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16208)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x088BC1E4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088BC1E4u) goto L_088BC1E4;
    return;
L_088BC1E4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_088BC1D4;
      }
      goto L_088BC1F4;
    }
L_088BC1F4:
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
L_088BC20C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088BC238u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BC238u) goto L_088BC238;
    return;
L_088BC238:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16260), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088BC250u);
    ctx.gpr[6] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088BC250u) goto L_088BC250;
    return;
L_088BC250:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16260)));
    ctx.gpr[31] = (0x088BC25Cu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_088BC360;
L_088BC25C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BC274;
      }
      goto L_088BC264;
    }
L_088BC264:
    ctx.gpr[31] = (0x088BC26Cu);
    // nop
    goto L_088BC62C;
L_088BC26C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC27C;
      }
      goto L_088BC274;
    }
L_088BC274:
    ctx.gpr[31] = (0x088BC27Cu);
    // nop
    goto L_088BC9F4;
L_088BC27C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC290:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BC2ACu);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088BC44C;
L_088BC2AC:
    ctx.gpr[17] = (2221u << 16u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[16] = (2222u << 16u);
      if (branch_taken) {
          goto L_088BC2D0;
      }
      goto L_088BC2B8;
    }
L_088BC2B8:
    ctx.gpr[31] = (0x088BC2C0u);
    // nop
    goto L_088BC8E8;
L_088BC2C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16260)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(268)));
      if (branch_taken) {
          goto L_088BC2E4;
      }
      goto L_088BC2D0;
    }
L_088BC2D0:
    ctx.gpr[31] = (0x088BC2D8u);
    // nop
    goto L_088BCCB0;
L_088BC2D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16260)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(268)));
    goto L_088BC2E4;
L_088BC2E4:
    jump_target = ctx.gpr[16];
    ctx.gpr[31] = (0x088BC2ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BC2ECu) goto L_088BC2EC;
    return;
L_088BC2EC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16260), 0u);
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
L_088BC308:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BC318u);
    // nop
    goto L_088BC4A8;
L_088BC318:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC324:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BC344;
      }
      goto L_088BC334;
    }
L_088BC334:
    ctx.gpr[31] = (0x088BC33Cu);
    // nop
    goto L_088BC990;
L_088BC33C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BC34C;
      }
      goto L_088BC344;
    }
L_088BC344:
    ctx.gpr[31] = (0x088BC34Cu);
    // nop
    goto L_088BCD58;
L_088BC34C:
    ctx.gpr[31] = (0x088BC354u);
    // nop
    goto L_088BC5F0;
L_088BC354:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC360:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 184u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088BC384u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BC384u) goto L_088BC384;
    return;
L_088BC384:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088BC3A0u);
    ctx.gpr[6] = (0u | 184u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088BC3A0u) goto L_088BC3A0;
    return;
L_088BC3A0:
    ctx.gpr[5] = (17324u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17203u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17136u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17070u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088BC3F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 43u, 0x0883C5D4u>(ctx, &aot_mem) && ctx.pc == 0x088BC3F0u) goto L_088BC3F0;
    return;
L_088BC3F0:
    ctx.gpr[5] = (17353u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17226u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (16896u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x088BC43Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 49u, 0x0883C684u>(ctx, &aot_mem) && ctx.pc == 0x088BC43Cu) goto L_088BC43C;
    return;
L_088BC43C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC44C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BC468u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 45u, 0x0883C64Cu>(ctx, &aot_mem) && ctx.pc == 0x088BC468u) goto L_088BC468;
    return;
L_088BC468:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x088BC478u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 51u, 0x0883C6FCu>(ctx, &aot_mem) && ctx.pc == 0x088BC478u) goto L_088BC478;
    return;
L_088BC478:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088BC490u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BC490u) goto L_088BC490;
    return;
L_088BC490:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC4A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16260)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088BC52C;
      }
      goto L_088BC4C8;
    }
L_088BC4C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (15744u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[6] = (15872u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_088BC5DC;
      }
      goto L_088BC52C;
    }
L_088BC52C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 101 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (17353u << 16u);
      if (branch_taken) {
          goto L_088BC57C;
      }
      goto L_088BC538;
    }
L_088BC538:
    ctx.gpr[6] = (ctx.gpr[6] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16896u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_088BC5DC;
      }
      goto L_088BC57C;
    }
L_088BC57C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (15744u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[6] = (15872u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(92));
    goto L_088BC5DC;
L_088BC5DC:
    ctx.gpr[31] = (0x088BC5E4u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x088BC5E4u) goto L_088BC5E4;
    return;
L_088BC5E4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC5F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BC60Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 47u, 0x0883C668u>(ctx, &aot_mem) && ctx.pc == 0x088BC60Cu) goto L_088BC60C;
    return;
L_088BC60C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x088BC61Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 53u, 0x0883C718u>(ctx, &aot_mem) && ctx.pc == 0x088BC61Cu) goto L_088BC61C;
    return;
L_088BC61C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BC62C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 92u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088BC670u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BC670u) goto L_088BC670;
    return;
L_088BC670:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    ctx.gpr[6] = (0u | 92u);
    ctx.gpr[31] = (0x088BC690u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088BC690u) goto L_088BC690;
    return;
L_088BC690:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x088BC6A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 24u, 0x0883C3CCu>(ctx, &aot_mem) && ctx.pc == 0x088BC6A0u) goto L_088BC6A0;
    return;
L_088BC6A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 720u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088BC6B4u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BC6B4u) goto L_088BC6B4;
    return;
L_088BC6B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    ctx.gpr[6] = (0u | 720u);
    ctx.gpr[31] = (0x088BC6D0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088BC6D0u) goto L_088BC6D0;
    return;
L_088BC6D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16268)));
    ctx.gpr[31] = (0x088BC6E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088BC6E8u) goto L_088BC6E8;
    return;
L_088BC6E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    ctx.gpr[5] = (16768u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    ctx.gpr[5] = (17154u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    ctx.gpr[5] = (17056u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[20] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (16736u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17156u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16776u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(16268));
    ctx.gpr[4] = (17120u << 16u);
    ctx.gpr[19] = (0u | 1u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 180u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    goto L_088BC7A0;
L_088BC7A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x088BC7B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088BC7B8u) goto L_088BC7B8;
    return;
L_088BC7B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(180));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BC7A0;
      }
      goto L_088BC860;
    }
L_088BC860:
    ctx.gpr[19] = (2220u << 16u);
    ctx.gpr[17] = (2220u << 16u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-12916));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-12900));
    goto L_088BC878;
L_088BC878:
    ctx.gpr[31] = (0x088BC880u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x088BC880u) goto L_088BC880;
    return;
L_088BC880:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x088BC898u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088BC898u) goto L_088BC898;
    return;
L_088BC898:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x088BC8A8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x088BC8A8u) goto L_088BC8A8;
    return;
L_088BC8A8:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_088BC878;
      }
      goto L_088BC8B8;
    }
L_088BC8B8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
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
L_088BC8E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16260)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BC910u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 39u, 0x0883C59Cu>(ctx, &aot_mem) && ctx.pc == 0x088BC910u) goto L_088BC910;
    return;
L_088BC910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16260)));
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088BC928u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BC928u) goto L_088BC928;
    return;
L_088BC928:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16260)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (0u | 0u);
    goto L_088BC93C;
L_088BC93C:
    ctx.gpr[31] = (0x088BC944u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x088BC944u) goto L_088BC944;
    return;
L_088BC944:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16260)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_088BC93C;
      }
      goto L_088BC95C;
    }
L_088BC95C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088BC96Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BC96Cu) goto L_088BC96C;
    return;
L_088BC96C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16260)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
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
L_088BC990:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16260)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BC9B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 41u, 0x0883C5B8u>(ctx, &aot_mem) && ctx.pc == 0x088BC9B4u) goto L_088BC9B4;
    return;
L_088BC9B4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    goto L_088BC9BC;
L_088BC9BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16260)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x088BC9CCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088BC9CCu) goto L_088BC9CC;
    return;
L_088BC9CC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_088BC9BC;
      }
      goto L_088BC9DC;
    }
L_088BC9DC:
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
L_088BC9F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 92u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088BCA38u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BCA38u) goto L_088BCA38;
    return;
L_088BCA38:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    ctx.gpr[6] = (0u | 92u);
    ctx.gpr[31] = (0x088BCA58u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088BCA58u) goto L_088BCA58;
    return;
L_088BCA58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x088BCA68u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 24u, 0x0883C3CCu>(ctx, &aot_mem) && ctx.pc == 0x088BCA68u) goto L_088BCA68;
    return;
L_088BCA68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 540u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088BCA7Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BCA7Cu) goto L_088BCA7C;
    return;
L_088BCA7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    ctx.gpr[6] = (0u | 540u);
    ctx.gpr[31] = (0x088BCA98u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088BCA98u) goto L_088BCA98;
    return;
L_088BCA98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16284)));
    ctx.gpr[31] = (0x088BCAB0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088BCAB0u) goto L_088BCAB0;
    return;
L_088BCAB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    ctx.gpr[5] = (16768u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    ctx.gpr[5] = (17154u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    ctx.gpr[5] = (17056u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[20] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (16736u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17156u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16784u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(16284));
    ctx.gpr[4] = (17140u << 16u);
    ctx.gpr[19] = (0u | 1u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 180u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    goto L_088BCB68;
L_088BCB68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x088BCB80u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088BCB80u) goto L_088BCB80;
    return;
L_088BCB80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(180));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BCB68;
      }
      goto L_088BCC28;
    }
L_088BCC28:
    ctx.gpr[19] = (2220u << 16u);
    ctx.gpr[17] = (2220u << 16u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-12916));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-12900));
    goto L_088BCC40;
L_088BCC40:
    ctx.gpr[31] = (0x088BCC48u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x088BCC48u) goto L_088BCC48;
    return;
L_088BCC48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x088BCC60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088BCC60u) goto L_088BCC60;
    return;
L_088BCC60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16260)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x088BCC70u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x088BCC70u) goto L_088BCC70;
    return;
L_088BCC70:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_088BCC40;
      }
      goto L_088BCC80;
    }
L_088BCC80:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
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
L_088BCCB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16260)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BCCD8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 39u, 0x0883C59Cu>(ctx, &aot_mem) && ctx.pc == 0x088BCCD8u) goto L_088BCCD8;
    return;
L_088BCCD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16260)));
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088BCCF0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BCCF0u) goto L_088BCCF0;
    return;
L_088BCCF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16260)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (0u | 0u);
    goto L_088BCD04;
L_088BCD04:
    ctx.gpr[31] = (0x088BCD0Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x088BCD0Cu) goto L_088BCD0C;
    return;
L_088BCD0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16260)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_088BCD04;
      }
      goto L_088BCD24;
    }
L_088BCD24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088BCD34u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BCD34u) goto L_088BCD34;
    return;
L_088BCD34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16260)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
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
L_088BCD58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16260)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BCD7Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 41u, 0x0883C5B8u>(ctx, &aot_mem) && ctx.pc == 0x088BCD7Cu) goto L_088BCD7C;
    return;
L_088BCD7C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    goto L_088BCD84;
L_088BCD84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16260)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x088BCD94u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088BCD94u) goto L_088BCD94;
    return;
L_088BCD94:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_088BCD84;
      }
      goto L_088BCDA4;
    }
L_088BCDA4:
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
L_088BCDBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BCDCCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 42u, 0x08820300u>(ctx, &aot_mem) && ctx.pc == 0x088BCDCCu) goto L_088BCDCC;
    return;
L_088BCDCC:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[31] = (0x088BCDD8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16296));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 43u, 0x08820310u>(ctx, &aot_mem) && ctx.pc == 0x088BCDD8u) goto L_088BCDD8;
    return;
L_088BCDD8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BCDE4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BCDEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BCE00u);
    ctx.gpr[16] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 41u, 0x088202F0u>(ctx, &aot_mem) && ctx.pc == 0x088BCE00u) goto L_088BCE00;
    return;
L_088BCE00:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BCE28;
      }
      goto L_088BCE08;
    }
L_088BCE08:
    ctx.gpr[31] = (0x088BCE10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 61u, 0x088203E8u>(ctx, &aot_mem) && ctx.pc == 0x088BCE10u) goto L_088BCE10;
    return;
L_088BCE10:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[16] = (0u | 1u);
        goto L_088BCE28;
    }
    goto L_088BCE18;
L_088BCE18:
    ctx.gpr[31] = (0x088BCE20u);
    // nop
    goto L_088BCDBC;
L_088BCE20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BCE28;
      }
      goto L_088BCE28;
    }
L_088BCE28:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BCE3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[7] = (16920u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (0u | 1800u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088BCEA0u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BCEA0u) goto L_088BCEA0;
    return;
L_088BCEA0:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16208)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16208)));
    ctx.gpr[6] = (0u | 1800u);
    ctx.gpr[31] = (0x088BCEC0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088BCEC0u) goto L_088BCEC0;
    return;
L_088BCEC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16208)));
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16212)));
    ctx.gpr[31] = (0x088BCED8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088BCED8u) goto L_088BCED8;
    return;
L_088BCED8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16208)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16208)));
    ctx.gpr[5] = (16784u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16208)));
    ctx.gpr[5] = (17120u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16208)));
    ctx.gpr[5] = (16988u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 204u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 202u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 183u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[23] = (0u | 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16208)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[23]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[22] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-12892));
    ctx.gpr[31] = (0x088BCF7Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x088BCF7Cu) goto L_088BCF7C;
    return;
L_088BCF7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16208)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[21] = (2220u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-12900));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    ctx.gpr[31] = (0x088BCF98u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088BCF98u) goto L_088BCF98;
    return;
L_088BCF98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16208)));
    ctx.gpr[31] = (0x088BCFA4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x088BCFA4u) goto L_088BCFA4;
    return;
L_088BCFA4:
    ctx.gpr[5] = (16544u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16720u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17062u << 16u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(16212));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[5] = (16952u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16208)));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16736u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[30] = (0u | 1u);
    ctx.gpr[20] = (0u | 5u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_088BCFEC;
L_088BCFEC:
    if (ctx.gpr[18] == ctx.gpr[30]) {
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[22];
        goto L_088BD000;
    }
    goto L_088BCFF4;
L_088BCFF4:
    if (ctx.gpr[18] != ctx.gpr[20]) {
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
        goto L_088BD004;
    }
    goto L_088BCFFC;
L_088BCFFC:
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[22];
    goto L_088BD000;
L_088BD000:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    goto L_088BD004;
L_088BD004:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088BD010u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(392));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088BD010u) goto L_088BD010;
    return;
L_088BD010:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16208)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(364), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16208)));
    ctx.fpr[13] = ctx.fpr[20] + ctx.fpr[28];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16208)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16208)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16208)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[23]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(528));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x088BD0ACu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x088BD0ACu) goto L_088BD0AC;
    return;
L_088BD0AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16208)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088BD0C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(520));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088BD0C4u) goto L_088BD0C4;
    return;
L_088BD0C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16208)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088BD0D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x088BD0D8u) goto L_088BD0D8;
    return;
L_088BD0D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16208)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088BCFEC;
      }
      goto L_088BD0F4;
    }
L_088BD0F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(212));
    ctx.gpr[31] = (0x088BD104u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088BD104u) goto L_088BD104;
    return;
L_088BD104:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16208)));
    ctx.gpr[5] = (16704u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), ctx.gpr[30]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16208)));
    ctx.gpr[5] = (17324u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16208)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17181u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16208)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 64u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16208)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[23]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(348));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x088BD198u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x088BD198u) goto L_088BD198;
    return;
L_088BD198:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16208)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x088BD1ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(340));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088BD1ACu) goto L_088BD1AC;
    return;
L_088BD1AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16208)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x088BD1BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(180));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x088BD1BCu) goto L_088BD1BC;
    return;
L_088BD1BC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
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
L_088BD204:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16200)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16204), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BD218:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 13528u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088BD240u);
    ctx.gpr[5] = (0u | 153u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BD240u) goto L_088BD240;
    return;
L_088BD240:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17240), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088BD258u);
    ctx.gpr[6] = (0u | 13528u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088BD258u) goto L_088BD258;
    return;
L_088BD258:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10600), 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10604));
    ctx.gpr[31] = (0x088BD270u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088BD270u) goto L_088BD270;
    return;
L_088BD270:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10708), 0u);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10712), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10652), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10724), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x088BD2A4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10728), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 333u, 0x088C160Cu>(ctx, &aot_mem) && ctx.pc == 0x088BD2A4u) goto L_088BD2A4;
    return;
L_088BD2A4:
    ctx.gpr[31] = (0x088BD2ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 315u, 0x088C1434u>(ctx, &aot_mem) && ctx.pc == 0x088BD2ACu) goto L_088BD2AC;
    return;
L_088BD2AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10732), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10733), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10736), 0u);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10620), ctx.gpr[17]);
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10720), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10740), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[31] = (0x088BD2D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10752));
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 542u, 0x0891E22Cu>(ctx, &aot_mem) && ctx.pc == 0x088BD2D8u) goto L_088BD2D8;
    return;
L_088BD2D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(13524), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(17244), 0u);
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(17248), 0u);
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(17252), ctx.gpr[17]);
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(17256), ctx.gpr[17]);
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(17260), ctx.gpr[17]);
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(17264), ctx.gpr[17]);
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(17268), ctx.gpr[17]);
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(17272), 0u);
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17276), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17277), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17278), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17279), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17280), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17281), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17282), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17283), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17284), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17285), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(17288), 0u);
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(17292), 0u);
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(17300), 0u);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17304));
    ctx.gpr[31] = (0x088BD3A0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11556));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088BD3A0u) goto L_088BD3A0;
    return;
L_088BD3A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BD3B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BD3D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 711u, 0x088C7AF4u>(ctx, &aot_mem) && ctx.pc == 0x088BD3D4u) goto L_088BD3D4;
    return;
L_088BD3D4:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10652)));
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[18] = (2221u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (2221u << 16u);
      if (branch_taken) {
          goto L_088BD3FC;
      }
      goto L_088BD3F0;
    }
L_088BD3F0:
    ctx.gpr[31] = (0x088BD3F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 60u, 0x088C033Cu>(ctx, &aot_mem) && ctx.pc == 0x088BD3F8u) goto L_088BD3F8;
    return;
L_088BD3F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    goto L_088BD3FC;
L_088BD3FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10748)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10744)));
        goto L_088BD43C;
    }
    goto L_088BD408;
L_088BD408:
    ctx.gpr[31] = (0x088BD410u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 761u, 0x0882EFC4u>(ctx, &aot_mem) && ctx.pc == 0x088BD410u) goto L_088BD410;
    return;
L_088BD410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[31] = (0x088BD41Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10748)));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 742u, 0x0882EEA8u>(ctx, &aot_mem) && ctx.pc == 0x088BD41Cu) goto L_088BD41C;
    return;
L_088BD41C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088BD430u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10748)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BD430u) goto L_088BD430;
    return;
L_088BD430:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(10748), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10744)));
    goto L_088BD43C;
L_088BD43C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD468;
      }
      goto L_088BD444;
    }
L_088BD444:
    ctx.gpr[31] = (0x088BD44Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x088BD44Cu) goto L_088BD44C;
    return;
L_088BD44C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088BD460u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10744)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BD460u) goto L_088BD460;
    return;
L_088BD460:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(10744), 0u);
    goto L_088BD468;
L_088BD468:
    ctx.gpr[31] = (0x088BD470u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10648)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 563u, 0x08847174u>(ctx, &aot_mem) && ctx.pc == 0x088BD470u) goto L_088BD470;
    return;
L_088BD470:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088BD484u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10648)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BD484u) goto L_088BD484;
    return;
L_088BD484:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[31] = (0x088BD490u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10648), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 49u, 0x088C029Cu>(ctx, &aot_mem) && ctx.pc == 0x088BD490u) goto L_088BD490;
    return;
L_088BD490:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 29 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BD4B0;
      }
      goto L_088BD4A0;
    }
L_088BD4A0:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
        goto L_088BD4B4;
    }
    goto L_088BD4A8;
L_088BD4A8:
    ctx.gpr[31] = (0x088BD4B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 253u, 0x0897E664u>(ctx, &aot_mem) && ctx.pc == 0x088BD4B0u) goto L_088BD4B0;
    return;
L_088BD4B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    goto L_088BD4B4;
L_088BD4B4:
    ctx.gpr[31] = (0x088BD4BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10540));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 405u, 0x0897F538u>(ctx, &aot_mem) && ctx.pc == 0x088BD4BCu) goto L_088BD4BC;
    return;
L_088BD4BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[31] = (0x088BD4C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8284));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 351u, 0x0897EF44u>(ctx, &aot_mem) && ctx.pc == 0x088BD4C8u) goto L_088BD4C8;
    return;
L_088BD4C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[31] = (0x088BD4D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8276));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 362u, 0x0897F204u>(ctx, &aot_mem) && ctx.pc == 0x088BD4D4u) goto L_088BD4D4;
    return;
L_088BD4D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[31] = (0x088BD4E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8264));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 429u, 0x0897F720u>(ctx, &aot_mem) && ctx.pc == 0x088BD4E0u) goto L_088BD4E0;
    return;
L_088BD4E0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(17252), ctx.gpr[4]);
    ctx.gpr[5] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(17256), ctx.gpr[4]);
    ctx.gpr[5] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(17260), ctx.gpr[4]);
    ctx.gpr[5] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(17264), ctx.gpr[4]);
    ctx.gpr[5] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(17268), ctx.gpr[4]);
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17276), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17277), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17278), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17279), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17280), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17281), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17282), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17283), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17284), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17285), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(17288), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(17248)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(17292), 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(268)));
      if (branch_taken) {
          goto L_088BD594;
      }
      goto L_088BD57C;
    }
L_088BD57C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088BD588u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BD588u) goto L_088BD588;
    return;
L_088BD588:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(17248), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    goto L_088BD594;
L_088BD594:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17244)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088BD5B4;
      }
      goto L_088BD5A0;
    }
L_088BD5A0:
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088BD5A8u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BD5A8u) goto L_088BD5A8;
    return;
L_088BD5A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(17244), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    goto L_088BD5B4;
L_088BD5B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10708)));
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10712)));
        goto L_088BD5E4;
    }
    goto L_088BD5C4;
L_088BD5C4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088BD5D0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BD5D0u) goto L_088BD5D0;
    return;
L_088BD5D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(10708), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10712)));
    goto L_088BD5E4;
L_088BD5E4:
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
        goto L_088BD60C;
    }
    goto L_088BD5EC;
L_088BD5EC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088BD5F8u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BD5F8u) goto L_088BD5F8;
    return;
L_088BD5F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(10712), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_088BD60C;
L_088BD60C:
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088BD614u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BD614u) goto L_088BD614;
    return;
L_088BD614:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17240), 0u);
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
L_088BD634:
    ctx.gpr[4] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BD640:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_088BD654;
    }
    goto L_088BD654;
L_088BD654:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BD65C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD674;
      }
      goto L_088BD66C;
    }
L_088BD66C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BD674:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BD67C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
        goto L_088BD690;
    }
    goto L_088BD690;
L_088BD690:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BD698:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10712)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BD6A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10744)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088BD72C;
      }
      goto L_088BD6D4;
    }
L_088BD6D4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088BD798;
      }
      goto L_088BD6DC;
    }
L_088BD6DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16828)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16832));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17032)));
    ctx.gpr[31] = (0x088BD700u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 605u, 0x0897A8A0u>(ctx, &aot_mem) && ctx.pc == 0x088BD700u) goto L_088BD700;
    return;
L_088BD700:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10744)));
    ctx.gpr[6] = (0u | 153u);
    ctx.gpr[31] = (0x088BD718u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 465u, 0x08809CF0u>(ctx, &aot_mem) && ctx.pc == 0x088BD718u) goto L_088BD718;
    return;
L_088BD718:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10744)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088BD798;
      }
      goto L_088BD72C;
    }
L_088BD72C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BD748;
      }
      goto L_088BD738;
    }
L_088BD738:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (0u | 1u);
        goto L_088BD798;
    }
    goto L_088BD740;
L_088BD740:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD798;
      }
      goto L_088BD748;
    }
L_088BD748:
    ctx.gpr[31] = (0x088BD750u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 469u, 0x08809D90u>(ctx, &aot_mem) && ctx.pc == 0x088BD750u) goto L_088BD750;
    return;
L_088BD750:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BD798;
      }
      goto L_088BD75C;
    }
L_088BD75C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10744)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10744)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10748)));
    ctx.gpr[31] = (0x088BD77Cu);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 881u, 0x0882F7DCu>(ctx, &aot_mem) && ctx.pc == 0x088BD77Cu) goto L_088BD77C;
    return;
L_088BD77C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[31] = (0x088BD788u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10748)));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 761u, 0x0882EFC4u>(ctx, &aot_mem) && ctx.pc == 0x088BD788u) goto L_088BD788;
    return;
L_088BD788:
    ctx.gpr[31] = (0x088BD790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 54u, 0x088C02E8u>(ctx, &aot_mem) && ctx.pc == 0x088BD790u) goto L_088BD790;
    return;
L_088BD790:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BD798;
      }
      goto L_088BD798;
    }
L_088BD798:
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
L_088BD7B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BD7D0u);
    // nop
    goto L_088BD218;
L_088BD7D0:
    ctx.gpr[18] = (2221u << 16u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(17296), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(17296)));
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_088BD844;
      }
      goto L_088BD7EC;
    }
L_088BD7EC:
    ctx.gpr[31] = (0x088BD7F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8264));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 425u, 0x0897F6D0u>(ctx, &aot_mem) && ctx.pc == 0x088BD7F4u) goto L_088BD7F4;
    return;
L_088BD7F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[6] = (2220u << 16u);
    ctx.gpr[7] = (2220u << 16u);
    ctx.gpr[9] = (0u | 30u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8264));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 30u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11548));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-11532));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-11520));
    ctx.gpr[31] = (0x088BD82Cu);
    ctx.gpr[8] = (2u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 417u, 0x0897F62Cu>(ctx, &aot_mem) && ctx.pc == 0x088BD82Cu) goto L_088BD82C;
    return;
L_088BD82C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
      if (branch_taken) {
          goto L_088BD844;
      }
      goto L_088BD834;
    }
L_088BD834:
    ctx.gpr[31] = (0x088BD83Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8264));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 429u, 0x0897F720u>(ctx, &aot_mem) && ctx.pc == 0x088BD83Cu) goto L_088BD83C;
    return;
L_088BD83C:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(17296), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    goto L_088BD844;
L_088BD844:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(17296)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(17296)));
        goto L_088BD89C;
    }
    goto L_088BD850;
L_088BD850:
    ctx.gpr[31] = (0x088BD858u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8276));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 358u, 0x0897F1B4u>(ctx, &aot_mem) && ctx.pc == 0x088BD858u) goto L_088BD858;
    return;
L_088BD858:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[6] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8276));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11508));
    ctx.gpr[31] = (0x088BD874u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-11484));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 354u, 0x0897F17Cu>(ctx, &aot_mem) && ctx.pc == 0x088BD874u) goto L_088BD874;
    return;
L_088BD874:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
      if (branch_taken) {
          goto L_088BD898;
      }
      goto L_088BD87C;
    }
L_088BD87C:
    ctx.gpr[31] = (0x088BD884u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8276));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 362u, 0x0897F204u>(ctx, &aot_mem) && ctx.pc == 0x088BD884u) goto L_088BD884;
    return;
L_088BD884:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[31] = (0x088BD890u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8264));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 429u, 0x0897F720u>(ctx, &aot_mem) && ctx.pc == 0x088BD890u) goto L_088BD890;
    return;
L_088BD890:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(17296), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    goto L_088BD898;
L_088BD898:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(17296)));
    goto L_088BD89C;
L_088BD89C:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(17296)));
        goto L_088BD904;
    }
    goto L_088BD8A4;
L_088BD8A4:
    ctx.gpr[31] = (0x088BD8ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8284));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 339u, 0x0897EE18u>(ctx, &aot_mem) && ctx.pc == 0x088BD8ACu) goto L_088BD8AC;
    return;
L_088BD8AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[8] = (2220u << 16u);
    ctx.gpr[6] = (0u | 16384u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8284));
    ctx.gpr[7] = (0u | 30u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11464));
    ctx.gpr[31] = (0x088BD8D0u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-11444));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 300u, 0x0897EAC4u>(ctx, &aot_mem) && ctx.pc == 0x088BD8D0u) goto L_088BD8D0;
    return;
L_088BD8D0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
      if (branch_taken) {
          goto L_088BD900;
      }
      goto L_088BD8D8;
    }
L_088BD8D8:
    ctx.gpr[31] = (0x088BD8E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8284));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 351u, 0x0897EF44u>(ctx, &aot_mem) && ctx.pc == 0x088BD8E0u) goto L_088BD8E0;
    return;
L_088BD8E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[31] = (0x088BD8ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8276));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 362u, 0x0897F204u>(ctx, &aot_mem) && ctx.pc == 0x088BD8ECu) goto L_088BD8EC;
    return;
L_088BD8EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[31] = (0x088BD8F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8264));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 429u, 0x0897F720u>(ctx, &aot_mem) && ctx.pc == 0x088BD8F8u) goto L_088BD8F8;
    return;
L_088BD8F8:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(17296), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    goto L_088BD900;
L_088BD900:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(17296)));
    goto L_088BD904;
L_088BD904:
    if (ctx.gpr[5] != 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
        goto L_088BD91C;
    }
    goto L_088BD90C;
L_088BD90C:
    ctx.gpr[31] = (0x088BD914u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10540));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 381u, 0x0897F34Cu>(ctx, &aot_mem) && ctx.pc == 0x088BD914u) goto L_088BD914;
    return;
L_088BD914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    goto L_088BD91C;
L_088BD91C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10741), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 24u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088BD940u);
    ctx.gpr[5] = (0u | 153u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BD940u) goto L_088BD940;
    return;
L_088BD940:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(10648), ctx.gpr[2]);
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[31] = (0x088BD958u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11432));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 595u, 0x088473B4u>(ctx, &aot_mem) && ctx.pc == 0x088BD958u) goto L_088BD958;
    return;
L_088BD958:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088BD96Cu);
    ctx.gpr[5] = (0u | 153u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BD96Cu) goto L_088BD96C;
    return;
L_088BD96C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088BD97Cu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(10748), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 741u, 0x0882EE90u>(ctx, &aot_mem) && ctx.pc == 0x088BD97Cu) goto L_088BD97C;
    return;
L_088BD97C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 144u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088BD990u);
    ctx.gpr[5] = (0u | 153u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BD990u) goto L_088BD990;
    return;
L_088BD990:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10744), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088BD9A8u);
    ctx.gpr[6] = (0u | 144u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088BD9A8u) goto L_088BD9A8;
    return;
L_088BD9A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[6] = (300u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10744)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10668), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x088BD9D0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-10582));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 600u, 0x088C225Cu>(ctx, &aot_mem) && ctx.pc == 0x088BD9D0u) goto L_088BD9D0;
    return;
L_088BD9D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x088BD9E0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10720), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 705u, 0x088C7A98u>(ctx, &aot_mem) && ctx.pc == 0x088BD9E0u) goto L_088BD9E0;
    return;
L_088BD9E0:
    ctx.gpr[4] = (2188u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088BD9F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13180));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 702u, 0x0884BCB8u>(ctx, &aot_mem) && ctx.pc == 0x088BD9F0u) goto L_088BD9F0;
    return;
L_088BD9F0:
    ctx.gpr[4] = (2188u << 16u);
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[31] = (0x088BDA00u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9492));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 706u, 0x0884BCFCu>(ctx, &aot_mem) && ctx.pc == 0x088BDA00u) goto L_088BDA00;
    return;
L_088BDA00:
    ctx.gpr[4] = (2188u << 16u);
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[31] = (0x088BDA10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9484));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 709u, 0x0884BD28u>(ctx, &aot_mem) && ctx.pc == 0x088BDA10u) goto L_088BDA10;
    return;
L_088BDA10:
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
L_088BDA28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10740)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[4] & 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] & 2u);
      if (branch_taken) {
          goto L_088BDAC4;
      }
      goto L_088BDA50;
    }
L_088BDA50:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[31] = (0x088BDA60u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10740), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 60u, 0x088C033Cu>(ctx, &aot_mem) && ctx.pc == 0x088BDA60u) goto L_088BDA60;
    return;
L_088BDA60:
    ctx.gpr[31] = (0x088BDA68u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 761u, 0x0882EFC4u>(ctx, &aot_mem) && ctx.pc == 0x088BDA68u) goto L_088BDA68;
    return;
L_088BDA68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[31] = (0x088BDA74u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10748)));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 742u, 0x0882EEA8u>(ctx, &aot_mem) && ctx.pc == 0x088BDA74u) goto L_088BDA74;
    return;
L_088BDA74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088BDA8Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10748)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BDA8Cu) goto L_088BDA8C;
    return;
L_088BDA8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10744)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10748), 0u);
    ctx.gpr[31] = (0x088BDAA0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x088BDAA0u) goto L_088BDAA0;
    return;
L_088BDAA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088BDAB4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10744)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BDAB4u) goto L_088BDAB4;
    return;
L_088BDAB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(10744), 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10740)));
    ctx.gpr[6] = (ctx.gpr[4] & 2u);
    goto L_088BDAC4;
L_088BDAC4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-3));
      if (branch_taken) {
          goto L_088BDAD8;
      }
      goto L_088BDACC;
    }
L_088BDACC:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[31] = (0x088BDAD8u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10740), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088BD3B4;
L_088BDAD8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BDAEC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BDAF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10741)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BDB28;
      }
      goto L_088BDB10;
    }
L_088BDB10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 88 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BDB28;
      }
      goto L_088BDB20;
    }
L_088BDB20:
    ctx.gpr[31] = (0x088BDB28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 71u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x088BDB28u) goto L_088BDB28;
    return;
L_088BDB28:
    ctx.gpr[31] = (0x088BDB30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 369u, 0x088C1810u>(ctx, &aot_mem) && ctx.pc == 0x088BDB30u) goto L_088BDB30;
    return;
L_088BDB30:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BDB40;
      }
      goto L_088BDB38;
    }
L_088BDB38:
    ctx.gpr[31] = (0x088BDB40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 725u, 0x088C7BF4u>(ctx, &aot_mem) && ctx.pc == 0x088BDB40u) goto L_088BDB40;
    return;
L_088BDB40:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BDB4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BDB68u);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 49u, 0x088C029Cu>(ctx, &aot_mem) && ctx.pc == 0x088BDB68u) goto L_088BDB68;
    return;
L_088BDB68:
    ctx.gpr[4] = (0u | 30u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BDB80;
      }
      goto L_088BDB74;
    }
L_088BDB74:
    ctx.gpr[31] = (0x088BDB7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088BECAC;
L_088BDB7C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_088BDB80;
L_088BDB80:
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
L_088BDB98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BDBACu);
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 49u, 0x088C029Cu>(ctx, &aot_mem) && ctx.pc == 0x088BDBACu) goto L_088BDBAC;
    return;
L_088BDBAC:
    ctx.gpr[4] = (0u | 30u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BDBC4;
      }
      goto L_088BDBB8;
    }
L_088BDBB8:
    ctx.gpr[31] = (0x088BDBC0u);
    // nop
    goto L_088BECF4;
L_088BDBC0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_088BDBC4;
L_088BDBC4:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BDBD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BDBF4u);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 49u, 0x088C029Cu>(ctx, &aot_mem) && ctx.pc == 0x088BDBF4u) goto L_088BDBF4;
    return;
L_088BDBF4:
    ctx.gpr[4] = (0u | 37u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BDC0C;
      }
      goto L_088BDC00;
    }
L_088BDC00:
    ctx.gpr[31] = (0x088BDC08u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088BEF24;
L_088BDC08:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_088BDC0C;
L_088BDC0C:
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
L_088BDC24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BDC38u);
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 49u, 0x088C029Cu>(ctx, &aot_mem) && ctx.pc == 0x088BDC38u) goto L_088BDC38;
    return;
L_088BDC38:
    ctx.gpr[4] = (0u | 37u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BDC50;
      }
      goto L_088BDC44;
    }
L_088BDC44:
    ctx.gpr[31] = (0x088BDC4Cu);
    // nop
    goto L_088BEF78;
L_088BDC4C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_088BDC50;
L_088BDC50:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BDC64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BDC80u);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 49u, 0x088C029Cu>(ctx, &aot_mem) && ctx.pc == 0x088BDC80u) goto L_088BDC80;
    return;
L_088BDC80:
    ctx.gpr[4] = (0u | 44u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BDC98;
      }
      goto L_088BDC8C;
    }
L_088BDC8C:
    ctx.gpr[31] = (0x088BDC94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088BF068;
L_088BDC94:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_088BDC98;
L_088BDC98:
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
L_088BDCB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BDCC4u);
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 49u, 0x088C029Cu>(ctx, &aot_mem) && ctx.pc == 0x088BDCC4u) goto L_088BDCC4;
    return;
L_088BDCC4:
    ctx.gpr[4] = (0u | 44u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BDCDC;
      }
      goto L_088BDCD0;
    }
L_088BDCD0:
    ctx.gpr[31] = (0x088BDCD8u);
    // nop
    goto L_088BF0BC;
L_088BDCD8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_088BDCDC;
L_088BDCDC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BDD28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BDD38u);
    // nop
    goto L_088BF638;
L_088BDD38:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BDD60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BDD70u);
    // nop
    goto L_088BFB98;
L_088BDD70:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BDD98:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088BDDB0;
      }
      goto L_088BDDA0;
    }
L_088BDDA0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088BDDC0;
      }
      goto L_088BDDA8;
    }
L_088BDDA8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17264)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BDDB0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088BDDC0;
      }
      goto L_088BDDBC;
    }
L_088BDDBC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17268)));
    goto L_088BDDC0;
L_088BDDC0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BDDC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BDDDCu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 733u, 0x088C7CBCu>(ctx, &aot_mem) && ctx.pc == 0x088BDDDCu) goto L_088BDDDC;
    return;
L_088BDDDC:
    ctx.gpr[4] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088BDDFC;
      }
      goto L_088BDDE8;
    }
L_088BDDE8:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BDE18;
      }
      goto L_088BDDF0;
    }
L_088BDDF0:
    ctx.gpr[31] = (0x088BDDF8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 730u, 0x088C7C40u>(ctx, &aot_mem) && ctx.pc == 0x088BDDF8u) goto L_088BDDF8;
    return;
L_088BDDF8:
    ctx.gpr[4] = (2221u << 16u);
    goto L_088BDDFC;
L_088BDDFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17036)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[31] = (0x088BDE10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8284));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 293u, 0x0897EA24u>(ctx, &aot_mem) && ctx.pc == 0x088BDE10u) goto L_088BDE10;
    return;
L_088BDE10:
    ctx.gpr[31] = (0x088BDE18u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BDE18u) goto L_088BDE18;
    return;
L_088BDE18:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BDE28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8292)));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BDE6C;
      }
      goto L_088BDE4C;
    }
L_088BDE4C:
    ctx.gpr[31] = (0x088BDE54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 283u, 0x0897E960u>(ctx, &aot_mem) && ctx.pc == 0x088BDE54u) goto L_088BDE54;
    return;
L_088BDE54:
    ctx.gpr[31] = (0x088BDE5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 289u, 0x0897E9D4u>(ctx, &aot_mem) && ctx.pc == 0x088BDE5Cu) goto L_088BDE5C;
    return;
L_088BDE5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x088BDE6Cu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(10600), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BDE6Cu) goto L_088BDE6C;
    return;
L_088BDE6C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BDE7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17040)));
    ctx.gpr[8] = (0u | 16u);
    ctx.gpr[9] = (0u | 8192u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    ctx.gpr[8] = (76u << 16u);
    ctx.gpr[9] = (153u << 16u);
    ctx.gpr[11] = (8u << 16u);
    ctx.gpr[5] = (0u | 8192u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 2048u);
    ctx.gpr[10] = (0u | 3u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(19264));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-27008));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BDED0u);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-24288));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 260u, 0x0897E6C4u>(ctx, &aot_mem) && ctx.pc == 0x088BDED0u) goto L_088BDED0;
    return;
L_088BDED0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088BDEF4;
      }
      goto L_088BDED8;
    }
L_088BDED8:
    ctx.gpr[31] = (0x088BDEE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 253u, 0x0897E664u>(ctx, &aot_mem) && ctx.pc == 0x088BDEE0u) goto L_088BDEE0;
    return;
L_088BDEE0:
    ctx.gpr[31] = (0x088BDEE8u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BDEE8u) goto L_088BDEE8;
    return;
L_088BDEE8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BDEF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[31] = (0x088BDF04u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(13524), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BDF04u) goto L_088BDF04;
    return;
L_088BDF04:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BDF10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8292)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2188u << 16u);
      if (branch_taken) {
          goto L_088BDFAC;
      }
      goto L_088BDF2C;
    }
L_088BDF2C:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088BDF38u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9688));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x088BDF38u) goto L_088BDF38;
    return;
L_088BDF38:
    ctx.gpr[31] = (0x088BDF40u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 705u, 0x0884BCE4u>(ctx, &aot_mem) && ctx.pc == 0x088BDF40u) goto L_088BDF40;
    return;
L_088BDF40:
    ctx.gpr[31] = (0x088BDF48u);
    ctx.gpr[4] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 712u, 0x0884BD54u>(ctx, &aot_mem) && ctx.pc == 0x088BDF48u) goto L_088BDF48;
    return;
L_088BDF48:
    ctx.gpr[31] = (0x088BDF50u);
    ctx.gpr[4] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 713u, 0x0884BD6Cu>(ctx, &aot_mem) && ctx.pc == 0x088BDF50u) goto L_088BDF50;
    return;
L_088BDF50:
    ctx.gpr[31] = (0x088BDF58u);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 861u, 0x0881F4B4u>(ctx, &aot_mem) && ctx.pc == 0x088BDF58u) goto L_088BDF58;
    return;
L_088BDF58:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[5] = (2181u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4484));
    ctx.gpr[31] = (0x088BDF70u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4252));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x088BDF70u) goto L_088BDF70;
    return;
L_088BDF70:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[5] = (2181u << 16u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3248));
    ctx.gpr[31] = (0x088BDF88u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3520));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x088BDF88u) goto L_088BDF88;
    return;
L_088BDF88:
    ctx.gpr[4] = (2183u << 16u);
    ctx.gpr[5] = (2183u << 16u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18136));
    ctx.gpr[31] = (0x088BDFA0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18308));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x088BDFA0u) goto L_088BDFA0;
    return;
L_088BDFA0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088BDFACu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x088BDFACu) goto L_088BDFAC;
    return;
L_088BDFAC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BDFB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BDFCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 203u, 0x0897E270u>(ctx, &aot_mem) && ctx.pc == 0x088BDFCCu) goto L_088BDFCC;
    return;
L_088BDFCC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088BDFFC;
      }
      goto L_088BDFD4;
    }
L_088BDFD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BDFE8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(54));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 594u, 0x088C21E8u>(ctx, &aot_mem) && ctx.pc == 0x088BDFE8u) goto L_088BDFE8;
    return;
L_088BDFE8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BE014;
      }
      goto L_088BDFF4;
    }
L_088BDFF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE01C;
      }
      goto L_088BDFFC;
    }
L_088BDFFC:
    ctx.gpr[31] = (0x088BE004u);
    ctx.gpr[4] = (28672u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 50u, 0x088C02ACu>(ctx, &aot_mem) && ctx.pc == 0x088BE004u) goto L_088BE004;
    return;
L_088BE004:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE014:
    ctx.gpr[31] = (0x088BE01Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 32u, 0x088C8244u>(ctx, &aot_mem) && ctx.pc == 0x088BE01Cu) goto L_088BE01C;
    return;
L_088BE01C:
    ctx.gpr[31] = (0x088BE024u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BE024u) goto L_088BE024;
    return;
L_088BE024:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE034:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BE048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 203u, 0x0897E270u>(ctx, &aot_mem) && ctx.pc == 0x088BE048u) goto L_088BE048;
    return;
L_088BE048:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088BE078;
      }
      goto L_088BE050;
    }
L_088BE050:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BE064u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(54));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 594u, 0x088C21E8u>(ctx, &aot_mem) && ctx.pc == 0x088BE064u) goto L_088BE064;
    return;
L_088BE064:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BE090;
      }
      goto L_088BE070;
    }
L_088BE070:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE098;
      }
      goto L_088BE078;
    }
L_088BE078:
    ctx.gpr[31] = (0x088BE080u);
    ctx.gpr[4] = (28672u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 50u, 0x088C02ACu>(ctx, &aot_mem) && ctx.pc == 0x088BE080u) goto L_088BE080;
    return;
L_088BE080:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE090:
    ctx.gpr[31] = (0x088BE098u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 32u, 0x088C8244u>(ctx, &aot_mem) && ctx.pc == 0x088BE098u) goto L_088BE098;
    return;
L_088BE098:
    ctx.gpr[31] = (0x088BE0A0u);
    ctx.gpr[4] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BE0A0u) goto L_088BE0A0;
    return;
L_088BE0A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE0B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BE0D0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 53u, 0x088C02D8u>(ctx, &aot_mem) && ctx.pc == 0x088BE0D0u) goto L_088BE0D0;
    return;
L_088BE0D0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BE244;
      }
      goto L_088BE0D8;
    }
L_088BE0D8:
    ctx.gpr[31] = (0x088BE0E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 203u, 0x0897E270u>(ctx, &aot_mem) && ctx.pc == 0x088BE0E0u) goto L_088BE0E0;
    return;
L_088BE0E0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_088BE108;
      }
      goto L_088BE0E8;
    }
L_088BE0E8:
    ctx.gpr[31] = (0x088BE0F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 608u, 0x088C2304u>(ctx, &aot_mem) && ctx.pc == 0x088BE0F0u) goto L_088BE0F0;
    return;
L_088BE0F0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[17] = (2221u << 16u);
      if (branch_taken) {
          goto L_088BE12C;
      }
      goto L_088BE0F8;
    }
L_088BE0F8:
    ctx.gpr[31] = (0x088BE100u);
    ctx.gpr[4] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BE100u) goto L_088BE100;
    return;
L_088BE100:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE244;
      }
      goto L_088BE108;
    }
L_088BE108:
    ctx.gpr[31] = (0x088BE110u);
    ctx.gpr[4] = (28672u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 50u, 0x088C02ACu>(ctx, &aot_mem) && ctx.pc == 0x088BE110u) goto L_088BE110;
    return;
L_088BE110:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE12C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    if (static_cast<std::int32_t>(ctx.gpr[5]) > 0) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_088BE154;
    }
    goto L_088BE13C;
L_088BE13C:
    ctx.gpr[31] = (0x088BE144u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(54));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 240u, 0x0897E59Cu>(ctx, &aot_mem) && ctx.pc == 0x088BE144u) goto L_088BE144;
    return;
L_088BE144:
    ctx.gpr[31] = (0x088BE14Cu);
    ctx.gpr[4] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BE14Cu) goto L_088BE14C;
    return;
L_088BE14C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE244;
      }
      goto L_088BE154;
    }
L_088BE154:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10600)));
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(148)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088BE18C;
      }
      goto L_088BE17C;
    }
L_088BE17C:
    ctx.gpr[31] = (0x088BE184u);
    ctx.gpr[4] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BE184u) goto L_088BE184;
    return;
L_088BE184:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE244;
      }
      goto L_088BE18C;
    }
L_088BE18C:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(54));
    ctx.gpr[31] = (0x088BE198u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 594u, 0x088C21E8u>(ctx, &aot_mem) && ctx.pc == 0x088BE198u) goto L_088BE198;
    return;
L_088BE198:
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088BE1AC;
      }
      goto L_088BE1A4;
    }
L_088BE1A4:
    ctx.gpr[31] = (0x088BE1ACu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 32u, 0x088C8244u>(ctx, &aot_mem) && ctx.pc == 0x088BE1ACu) goto L_088BE1AC;
    return;
L_088BE1AC:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_088BE220;
      }
      goto L_088BE1B4;
    }
L_088BE1B4:
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    goto L_088BE1BC;
L_088BE1BC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10600)));
    ctx.gpr[9] = (ctx.gpr[7] << 5u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(156))))));
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(10604), static_cast<std::uint8_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_088BE1BC;
      }
      goto L_088BE1F0;
    }
L_088BE1F0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(54));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088BE200u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 244u, 0x0897E5E0u>(ctx, &aot_mem) && ctx.pc == 0x088BE200u) goto L_088BE200;
    return;
L_088BE200:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_088BE244;
      }
      goto L_088BE208;
    }
L_088BE208:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x088BE218u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BE218u) goto L_088BE218;
    return;
L_088BE218:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE244;
      }
      goto L_088BE220;
    }
L_088BE220:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088BE244;
      }
      goto L_088BE228;
    }
L_088BE228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[31] = (0x088BE234u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(54));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 240u, 0x0897E59Cu>(ctx, &aot_mem) && ctx.pc == 0x088BE234u) goto L_088BE234;
    return;
L_088BE234:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_088BE244;
      }
      goto L_088BE23C;
    }
L_088BE23C:
    ctx.gpr[31] = (0x088BE244u);
    ctx.gpr[4] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BE244u) goto L_088BE244;
    return;
L_088BE244:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE260:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BE27Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 203u, 0x0897E270u>(ctx, &aot_mem) && ctx.pc == 0x088BE27Cu) goto L_088BE27C;
    return;
L_088BE27C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_088BE2DC;
      }
      goto L_088BE284;
    }
L_088BE284:
    ctx.gpr[31] = (0x088BE28Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 608u, 0x088C2304u>(ctx, &aot_mem) && ctx.pc == 0x088BE28Cu) goto L_088BE28C;
    return;
L_088BE28C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[17] = (2221u << 16u);
      if (branch_taken) {
          goto L_088BE2BC;
      }
      goto L_088BE294;
    }
L_088BE294:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088BE2A8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(54));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 594u, 0x088C21E8u>(ctx, &aot_mem) && ctx.pc == 0x088BE2A8u) goto L_088BE2A8;
    return;
L_088BE2A8:
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088BE2FC;
      }
      goto L_088BE2B4;
    }
L_088BE2B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
      if (branch_taken) {
          goto L_088BE308;
      }
      goto L_088BE2BC;
    }
L_088BE2BC:
    ctx.gpr[31] = (0x088BE2C4u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BE2C4u) goto L_088BE2C4;
    return;
L_088BE2C4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE2DC:
    ctx.gpr[31] = (0x088BE2E4u);
    ctx.gpr[4] = (28672u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 50u, 0x088C02ACu>(ctx, &aot_mem) && ctx.pc == 0x088BE2E4u) goto L_088BE2E4;
    return;
L_088BE2E4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE2FC:
    ctx.gpr[31] = (0x088BE304u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 32u, 0x088C8244u>(ctx, &aot_mem) && ctx.pc == 0x088BE304u) goto L_088BE304;
    return;
L_088BE304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    goto L_088BE308;
L_088BE308:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10600)));
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BE344;
      }
      goto L_088BE334;
    }
L_088BE334:
    ctx.gpr[31] = (0x088BE33Cu);
    ctx.gpr[4] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BE33Cu) goto L_088BE33C;
    return;
L_088BE33C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE35C;
      }
      goto L_088BE344;
    }
L_088BE344:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088BE35C;
      }
      goto L_088BE34C;
    }
L_088BE34C:
    ctx.gpr[31] = (0x088BE354u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(54));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 240u, 0x0897E59Cu>(ctx, &aot_mem) && ctx.pc == 0x088BE354u) goto L_088BE354;
    return;
L_088BE354:
    ctx.gpr[31] = (0x088BE35Cu);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BE35Cu) goto L_088BE35C;
    return;
L_088BE35C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE374:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BE384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 253u, 0x0897E664u>(ctx, &aot_mem) && ctx.pc == 0x088BE384u) goto L_088BE384;
    return;
L_088BE384:
    ctx.gpr[31] = (0x088BE38Cu);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BE38Cu) goto L_088BE38C;
    return;
L_088BE38C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE398:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BE3A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 203u, 0x0897E270u>(ctx, &aot_mem) && ctx.pc == 0x088BE3A8u) goto L_088BE3A8;
    return;
L_088BE3A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088BE3C4;
      }
      goto L_088BE3B0;
    }
L_088BE3B0:
    ctx.gpr[31] = (0x088BE3B8u);
    ctx.gpr[4] = (28672u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 50u, 0x088C02ACu>(ctx, &aot_mem) && ctx.pc == 0x088BE3B8u) goto L_088BE3B8;
    return;
L_088BE3B8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE3C4:
    ctx.gpr[31] = (0x088BE3CCu);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BE3CCu) goto L_088BE3CC;
    return;
L_088BE3CC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE3D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BE3ECu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 203u, 0x0897E270u>(ctx, &aot_mem) && ctx.pc == 0x088BE3ECu) goto L_088BE3EC;
    return;
L_088BE3EC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088BE40C;
      }
      goto L_088BE3F4;
    }
L_088BE3F4:
    ctx.gpr[31] = (0x088BE3FCu);
    ctx.gpr[4] = (28672u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 50u, 0x088C02ACu>(ctx, &aot_mem) && ctx.pc == 0x088BE3FCu) goto L_088BE3FC;
    return;
L_088BE3FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE40C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BE41C;
      }
      goto L_088BE414;
    }
L_088BE414:
    ctx.gpr[31] = (0x088BE41Cu);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BE41Cu) goto L_088BE41C;
    return;
L_088BE41C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE42C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BE440u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 203u, 0x0897E270u>(ctx, &aot_mem) && ctx.pc == 0x088BE440u) goto L_088BE440;
    return;
L_088BE440:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088BE460;
      }
      goto L_088BE448;
    }
L_088BE448:
    ctx.gpr[31] = (0x088BE450u);
    ctx.gpr[4] = (28672u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 50u, 0x088C02ACu>(ctx, &aot_mem) && ctx.pc == 0x088BE450u) goto L_088BE450;
    return;
L_088BE450:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE460:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BE470;
      }
      goto L_088BE468;
    }
L_088BE468:
    ctx.gpr[31] = (0x088BE470u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BE470u) goto L_088BE470;
    return;
L_088BE470:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE480:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BE490u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 203u, 0x0897E270u>(ctx, &aot_mem) && ctx.pc == 0x088BE490u) goto L_088BE490;
    return;
L_088BE490:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088BE4AC;
      }
      goto L_088BE498;
    }
L_088BE498:
    ctx.gpr[31] = (0x088BE4A0u);
    ctx.gpr[4] = (28672u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 50u, 0x088C02ACu>(ctx, &aot_mem) && ctx.pc == 0x088BE4A0u) goto L_088BE4A0;
    return;
L_088BE4A0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE4AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (0u | 18u);
    ctx.gpr[31] = (0x088BE4BCu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BE4BCu) goto L_088BE4BC;
    return;
L_088BE4BC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE4C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BE4D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 253u, 0x0897E664u>(ctx, &aot_mem) && ctx.pc == 0x088BE4D8u) goto L_088BE4D8;
    return;
L_088BE4D8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE4E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BE504u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.pc = 0x08AB4374u;
    return;
L_088BE504:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[31] = (0x088BE518u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8284));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 320u, 0x0897ED10u>(ctx, &aot_mem) && ctx.pc == 0x088BE518u) goto L_088BE518;
    return;
L_088BE518:
    ctx.gpr[31] = (0x088BE520u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BE520u) goto L_088BE520;
    return;
L_088BE520:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE530:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BE544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 203u, 0x0897E270u>(ctx, &aot_mem) && ctx.pc == 0x088BE544u) goto L_088BE544;
    return;
L_088BE544:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[4] = (28672u << 16u);
      if (branch_taken) {
          goto L_088BE5CC;
      }
      goto L_088BE54C;
    }
L_088BE54C:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[31] = (0x088BE55Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.pc = 0x08AB43ECu;
    return;
L_088BE55C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[4] = (28672u << 16u);
      if (branch_taken) {
          goto L_088BE5B4;
      }
      goto L_088BE564;
    }
L_088BE564:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[7] = (8u << 16u);
    ctx.gpr[5] = (0u | 100u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (0u | 2048u);
    ctx.gpr[8] = (0u | 20u);
    ctx.gpr[9] = (0u | 5u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088BE58Cu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-24288));
    ctx.pc = 0x08AB43CCu;
    return;
L_088BE58C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
        goto L_088BE5E4;
    }
    goto L_088BE598;
L_088BE598:
    ctx.gpr[4] = (28672u << 16u);
    ctx.gpr[31] = (0x088BE5A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 50u, 0x088C02ACu>(ctx, &aot_mem) && ctx.pc == 0x088BE5A4u) goto L_088BE5A4;
    return;
L_088BE5A4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE5B4:
    ctx.gpr[31] = (0x088BE5BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 50u, 0x088C02ACu>(ctx, &aot_mem) && ctx.pc == 0x088BE5BCu) goto L_088BE5BC;
    return;
L_088BE5BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE5CC:
    ctx.gpr[31] = (0x088BE5D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 50u, 0x088C02ACu>(ctx, &aot_mem) && ctx.pc == 0x088BE5D4u) goto L_088BE5D4;
    return;
L_088BE5D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE5E4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (0u | 17u);
    ctx.gpr[31] = (0x088BE5FCu);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BE5FCu) goto L_088BE5FC;
    return;
L_088BE5FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE60C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BE624u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 203u, 0x0897E270u>(ctx, &aot_mem) && ctx.pc == 0x088BE624u) goto L_088BE624;
    return;
L_088BE624:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[4] = (28672u << 16u);
      if (branch_taken) {
          goto L_088BE670;
      }
      goto L_088BE62C;
    }
L_088BE62C:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[7] = (259u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(54));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(60));
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x088BE650u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(26176));
    ctx.pc = 0x08AB43B4u;
    return;
L_088BE650:
    ctx.gpr[4] = (32833u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1801));
    if (ctx.gpr[16] == ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
        goto L_088BE68C;
    }
    goto L_088BE664;
L_088BE664:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE6B8;
      }
      goto L_088BE66C;
    }
L_088BE66C:
    ctx.gpr[4] = (28672u << 16u);
    goto L_088BE670;
L_088BE670:
    ctx.gpr[31] = (0x088BE678u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 50u, 0x088C02ACu>(ctx, &aot_mem) && ctx.pc == 0x088BE678u) goto L_088BE678;
    return;
L_088BE678:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE68C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1020 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (28672u << 16u);
      if (branch_taken) {
          goto L_088BE724;
      }
      goto L_088BE6A4;
    }
L_088BE6A4:
    ctx.gpr[31] = (0x088BE6ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 50u, 0x088C02ACu>(ctx, &aot_mem) && ctx.pc == 0x088BE6ACu) goto L_088BE6AC;
    return;
L_088BE6AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
      if (branch_taken) {
          goto L_088BE724;
      }
      goto L_088BE6B8;
    }
L_088BE6B8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    ctx.gpr[4] = (28672u << 16u);
      if (branch_taken) {
          goto L_088BE6DC;
      }
      goto L_088BE6C0;
    }
L_088BE6C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088BE6F8;
      }
      goto L_088BE6D0;
    }
L_088BE6D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (153u << 16u);
      if (branch_taken) {
          goto L_088BE710;
      }
      goto L_088BE6D8;
    }
L_088BE6D8:
    ctx.gpr[4] = (28672u << 16u);
    goto L_088BE6DC;
L_088BE6DC:
    ctx.gpr[31] = (0x088BE6E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 50u, 0x088C02ACu>(ctx, &aot_mem) && ctx.pc == 0x088BE6E4u) goto L_088BE6E4;
    return;
L_088BE6E4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE6F8:
    ctx.gpr[31] = (0x088BE700u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08AB4374u;
    return;
L_088BE700:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (153u << 16u);
    goto L_088BE710;
L_088BE710:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27008));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x088BE724u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BE724u) goto L_088BE724;
    return;
L_088BE724:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE738:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BE74Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 203u, 0x0897E270u>(ctx, &aot_mem) && ctx.pc == 0x088BE74Cu) goto L_088BE74C;
    return;
L_088BE74C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[4] = (28672u << 16u);
      if (branch_taken) {
          goto L_088BE7FC;
      }
      goto L_088BE754;
    }
L_088BE754:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 150 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088BE7E8;
      }
      goto L_088BE76C;
    }
L_088BE76C:
    ctx.gpr[31] = (0x088BE774u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.pc = 0x08AB43ECu;
    return;
L_088BE774:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[4] = (28672u << 16u);
      if (branch_taken) {
          goto L_088BE7D0;
      }
      goto L_088BE77C;
    }
L_088BE77C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[9] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(54));
    ctx.gpr[7] = (0u | 100u);
    ctx.gpr[8] = (0u | 2048u);
    ctx.gpr[10] = (0u | 20u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x088BE7A8u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-24288));
    ctx.pc = 0x08AB4394u;
    return;
L_088BE7A8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
        goto L_088BE814;
    }
    goto L_088BE7B4;
L_088BE7B4:
    ctx.gpr[4] = (28672u << 16u);
    ctx.gpr[31] = (0x088BE7C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 50u, 0x088C02ACu>(ctx, &aot_mem) && ctx.pc == 0x088BE7C0u) goto L_088BE7C0;
    return;
L_088BE7C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE7D0:
    ctx.gpr[31] = (0x088BE7D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 50u, 0x088C02ACu>(ctx, &aot_mem) && ctx.pc == 0x088BE7D8u) goto L_088BE7D8;
    return;
L_088BE7D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE7E8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE7FC:
    ctx.gpr[31] = (0x088BE804u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 50u, 0x088C02ACu>(ctx, &aot_mem) && ctx.pc == 0x088BE804u) goto L_088BE804;
    return;
L_088BE804:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE814:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 19u);
    ctx.gpr[31] = (0x088BE828u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BE828u) goto L_088BE828;
    return;
L_088BE828:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE838:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BE848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 203u, 0x0897E270u>(ctx, &aot_mem) && ctx.pc == 0x088BE848u) goto L_088BE848;
    return;
L_088BE848:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[4] = (28672u << 16u);
      if (branch_taken) {
          goto L_088BE888;
      }
      goto L_088BE850;
    }
L_088BE850:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (259u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x088BE86Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26176));
    ctx.pc = 0x08AB43E4u;
    return;
L_088BE86C:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1801));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088BE8D0;
      }
      goto L_088BE880;
    }
L_088BE880:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BE89C;
      }
      goto L_088BE888;
    }
L_088BE888:
    ctx.gpr[31] = (0x088BE890u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 50u, 0x088C02ACu>(ctx, &aot_mem) && ctx.pc == 0x088BE890u) goto L_088BE890;
    return;
L_088BE890:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE89C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088BE8C8;
      }
      goto L_088BE8A4;
    }
L_088BE8A4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (28672u << 16u);
    ctx.gpr[31] = (0x088BE8B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 50u, 0x088C02ACu>(ctx, &aot_mem) && ctx.pc == 0x088BE8B4u) goto L_088BE8B4;
    return;
L_088BE8B4:
    ctx.gpr[31] = (0x088BE8BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 314u, 0x088C142Cu>(ctx, &aot_mem) && ctx.pc == 0x088BE8BCu) goto L_088BE8BC;
    return;
L_088BE8BC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE8C8:
    ctx.gpr[31] = (0x088BE8D0u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BE8D0u) goto L_088BE8D0;
    return;
L_088BE8D0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE8DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-2800));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 2772u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2788), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2792), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088BE900u);
    ctx.gpr[5] = (0u | 153u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BE900u) goto L_088BE900;
    return;
L_088BE900:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17244), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088BE918u);
    ctx.gpr[6] = (0u | 2772u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088BE918u) goto L_088BE918;
    return;
L_088BE918:
    ctx.gpr[31] = (0x088BE920u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 521u, 0x088428BCu>(ctx, &aot_mem) && ctx.pc == 0x088BE920u) goto L_088BE920;
    return;
L_088BE920:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17244)));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[10] = (ctx.gpr[2] + ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_088BE934;
L_088BE934:
    ctx.gpr[6] = (ctx.gpr[9] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (0u | 38u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[10] | 0u);
    goto L_088BE948;
L_088BE948:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[10] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_088BE948;
      }
      goto L_088BE96C;
    }
L_088BE96C:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(308));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[11]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(308));
      if (branch_taken) {
          goto L_088BE934;
      }
      goto L_088BE984;
    }
L_088BE984:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088BE990u);
    ctx.gpr[5] = (0u | 2772u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 733u, 0x088C2B84u>(ctx, &aot_mem) && ctx.pc == 0x088BE990u) goto L_088BE990;
    return;
L_088BE990:
    ctx.gpr[31] = (0x088BE998u);
    ctx.gpr[4] = (0u | 23u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BE998u) goto L_088BE998;
    return;
L_088BE998:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2788)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2792)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(2800));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BE9A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17248)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_088BE9EC;
      }
      goto L_088BE9C4;
    }
L_088BE9C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 2772u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088BE9D8u);
    ctx.gpr[5] = (0u | 153u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BE9D8u) goto L_088BE9D8;
    return;
L_088BE9D8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17248), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088BE9ECu);
    ctx.gpr[6] = (0u | 2772u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088BE9ECu) goto L_088BE9EC;
    return;
L_088BE9EC:
    ctx.gpr[31] = (0x088BE9F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17248)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 805u, 0x088C3014u>(ctx, &aot_mem) && ctx.pc == 0x088BE9F4u) goto L_088BE9F4;
    return;
L_088BE9F4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEA10;
      }
      goto L_088BEA00;
    }
L_088BEA00:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_088BEA10;
      }
      goto L_088BEA08;
    }
L_088BEA08:
    ctx.gpr[31] = (0x088BEA10u);
    ctx.gpr[4] = (0u | 22u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BEA10u) goto L_088BEA10;
    return;
L_088BEA10:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BEA20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-2800));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 2772u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2788), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2792), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088BEA44u);
    ctx.gpr[5] = (0u | 153u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BEA44u) goto L_088BEA44;
    return;
L_088BEA44:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17244), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088BEA5Cu);
    ctx.gpr[6] = (0u | 2772u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088BEA5Cu) goto L_088BEA5C;
    return;
L_088BEA5C:
    ctx.gpr[31] = (0x088BEA64u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 521u, 0x088428BCu>(ctx, &aot_mem) && ctx.pc == 0x088BEA64u) goto L_088BEA64;
    return;
L_088BEA64:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17244)));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[10] = (ctx.gpr[2] + ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_088BEA78;
L_088BEA78:
    ctx.gpr[6] = (ctx.gpr[9] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (0u | 38u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[10] | 0u);
    goto L_088BEA8C;
L_088BEA8C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[10] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_088BEA8C;
      }
      goto L_088BEAB0;
    }
L_088BEAB0:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(308));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[11]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(308));
      if (branch_taken) {
          goto L_088BEA78;
      }
      goto L_088BEAC8;
    }
L_088BEAC8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088BEAD4u);
    ctx.gpr[5] = (0u | 2772u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 733u, 0x088C2B84u>(ctx, &aot_mem) && ctx.pc == 0x088BEAD4u) goto L_088BEAD4;
    return;
L_088BEAD4:
    ctx.gpr[31] = (0x088BEADCu);
    ctx.gpr[4] = (0u | 27u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BEADCu) goto L_088BEADC;
    return;
L_088BEADC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2788)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2792)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(2800));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BEAEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17248)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_088BEB30;
      }
      goto L_088BEB08;
    }
L_088BEB08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 2772u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088BEB1Cu);
    ctx.gpr[5] = (0u | 153u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BEB1Cu) goto L_088BEB1C;
    return;
L_088BEB1C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17248), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088BEB30u);
    ctx.gpr[6] = (0u | 2772u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088BEB30u) goto L_088BEB30;
    return;
L_088BEB30:
    ctx.gpr[31] = (0x088BEB38u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17248)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 805u, 0x088C3014u>(ctx, &aot_mem) && ctx.pc == 0x088BEB38u) goto L_088BEB38;
    return;
L_088BEB38:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEB54;
      }
      goto L_088BEB44;
    }
L_088BEB44:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_088BEB54;
      }
      goto L_088BEB4C;
    }
L_088BEB4C:
    ctx.gpr[31] = (0x088BEB54u);
    ctx.gpr[4] = (0u | 26u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BEB54u) goto L_088BEB54;
    return;
L_088BEB54:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BEB64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-2800));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2788), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17248)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2792), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2796), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (2221u << 16u);
      if (branch_taken) {
          goto L_088BEC18;
      }
      goto L_088BEB84;
    }
L_088BEB84:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    goto L_088BEB94;
L_088BEB94:
    ctx.gpr[9] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 38u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[5] | 0u);
    goto L_088BEBA8;
L_088BEBA8:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[11] = (ctx.gpr[5] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_088BEBA8;
      }
      goto L_088BEBCC;
    }
L_088BEBCC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(308));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(308));
      if (branch_taken) {
          goto L_088BEB94;
      }
      goto L_088BEBE4;
    }
L_088BEBE4:
    ctx.gpr[31] = (0x088BEBECu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0071_entry, 71u, 243u, 0x089210E0u>(ctx, &aot_mem) && ctx.pc == 0x088BEBECu) goto L_088BEBEC;
    return;
L_088BEBEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17248)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[31] = (0x088BEC00u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10752));
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 538u, 0x0891E1E8u>(ctx, &aot_mem) && ctx.pc == 0x088BEC00u) goto L_088BEC00;
    return;
L_088BEC00:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088BEC14u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17248)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BEC14u) goto L_088BEC14;
    return;
L_088BEC14:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17248), 0u);
    goto L_088BEC18;
L_088BEC18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17244)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_088BEC38;
      }
      goto L_088BEC24;
    }
L_088BEC24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088BEC34u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BEC34u) goto L_088BEC34;
    return;
L_088BEC34:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(17244), 0u);
    goto L_088BEC38;
L_088BEC38:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[31] = (0x088BEC44u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(17292), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 253u, 0x0897E664u>(ctx, &aot_mem) && ctx.pc == 0x088BEC44u) goto L_088BEC44;
    return;
L_088BEC44:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x088BEC50u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x088BEC50u) goto L_088BEC50;
    return;
L_088BEC50:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x088BEC5Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x088BEC5Cu) goto L_088BEC5C;
    return;
L_088BEC5C:
    ctx.gpr[31] = (0x088BEC64u);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 861u, 0x0881F4B4u>(ctx, &aot_mem) && ctx.pc == 0x088BEC64u) goto L_088BEC64;
    return;
L_088BEC64:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[5] = (2181u << 16u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3248));
    ctx.gpr[31] = (0x088BEC7Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3520));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x088BEC7Cu) goto L_088BEC7C;
    return;
L_088BEC7C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088BEC88u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x088BEC88u) goto L_088BEC88;
    return;
L_088BEC88:
    ctx.gpr[31] = (0x088BEC90u);
    ctx.gpr[4] = (0u | 29u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BEC90u) goto L_088BEC90;
    return;
L_088BEC90:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2788)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2792)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2796)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(2800));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BECA4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BECAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BECC4u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 733u, 0x088C2B84u>(ctx, &aot_mem) && ctx.pc == 0x088BECC4u) goto L_088BECC4;
    return;
L_088BECC4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088BECDC;
      }
      goto L_088BECCC;
    }
L_088BECCC:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BECDC:
    ctx.gpr[31] = (0x088BECE4u);
    ctx.gpr[4] = (0u | 34u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BECE4u) goto L_088BECE4;
    return;
L_088BECE4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BECF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BED10u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 805u, 0x088C3014u>(ctx, &aot_mem) && ctx.pc == 0x088BED10u) goto L_088BED10;
    return;
L_088BED10:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BED30;
      }
      goto L_088BED1C;
    }
L_088BED1C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BED30:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088BED54;
      }
      goto L_088BED38;
    }
L_088BED38:
    ctx.gpr[31] = (0x088BED40u);
    ctx.gpr[4] = (0u | 33u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BED40u) goto L_088BED40;
    return;
L_088BED40:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BED54:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BED68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BED78u);
    ctx.gpr[4] = (0u | 35u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BED78u) goto L_088BED78;
    return;
L_088BED78:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BED84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BED94u);
    ctx.gpr[4] = (0u | 35u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BED94u) goto L_088BED94;
    return;
L_088BED94:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BEDA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BEDC0u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 705u, 0x0884BCE4u>(ctx, &aot_mem) && ctx.pc == 0x088BEDC0u) goto L_088BEDC0;
    return;
L_088BEDC0:
    ctx.gpr[31] = (0x088BEDC8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 712u, 0x0884BD54u>(ctx, &aot_mem) && ctx.pc == 0x088BEDC8u) goto L_088BEDC8;
    return;
L_088BEDC8:
    ctx.gpr[31] = (0x088BEDD0u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 713u, 0x0884BD6Cu>(ctx, &aot_mem) && ctx.pc == 0x088BEDD0u) goto L_088BEDD0;
    return;
L_088BEDD0:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x088BEDE0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3520));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x088BEDE0u) goto L_088BEDE0;
    return;
L_088BEDE0:
    ctx.gpr[31] = (0x088BEDE8u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x088BEDE8u) goto L_088BEDE8;
    return;
L_088BEDE8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[17] = (2221u << 16u);
      if (branch_taken) {
          goto L_088BEE3C;
      }
      goto L_088BEDF4;
    }
L_088BEDF4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(17252), ctx.gpr[18]);
    ctx.gpr[31] = (0x088BEE00u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 715u, 0x088C2A84u>(ctx, &aot_mem) && ctx.pc == 0x088BEE00u) goto L_088BEE00;
    return;
L_088BEE00:
    ctx.gpr[31] = (0x088BEE08u);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 861u, 0x0881F4B4u>(ctx, &aot_mem) && ctx.pc == 0x088BEE08u) goto L_088BEE08;
    return;
L_088BEE08:
    ctx.gpr[4] = (2182u << 16u);
    ctx.gpr[5] = (2182u << 16u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3332));
    ctx.gpr[31] = (0x088BEE20u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2780));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x088BEE20u) goto L_088BEE20;
    return;
L_088BEE20:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088BEE2Cu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x088BEE2Cu) goto L_088BEE2C;
    return;
L_088BEE2C:
    ctx.gpr[31] = (0x088BEE34u);
    ctx.gpr[4] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BEE34u) goto L_088BEE34;
    return;
L_088BEE34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEF04;
      }
      goto L_088BEE3C;
    }
L_088BEE3C:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_088BEE94;
      }
      goto L_088BEE4C;
    }
L_088BEE4C:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088BEE78;
      }
      goto L_088BEE58;
    }
L_088BEE58:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088BEE80;
      }
      goto L_088BEE60;
    }
L_088BEE60:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BEE88;
      }
      goto L_088BEE68;
    }
L_088BEE68:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_088BEE90;
      }
      goto L_088BEE70;
    }
L_088BEE70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 13u);
      if (branch_taken) {
          goto L_088BEE94;
      }
      goto L_088BEE78;
    }
L_088BEE78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 3u);
      if (branch_taken) {
          goto L_088BEE94;
      }
      goto L_088BEE80;
    }
L_088BEE80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 14u);
      if (branch_taken) {
          goto L_088BEE94;
      }
      goto L_088BEE88;
    }
L_088BEE88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 12u);
      if (branch_taken) {
          goto L_088BEE94;
      }
      goto L_088BEE90;
    }
L_088BEE90:
    ctx.gpr[16] = (0u | 4u);
    goto L_088BEE94;
L_088BEE94:
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x088BEEA0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x088BEEA0u) goto L_088BEEA0;
    return;
L_088BEEA0:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x088BEEACu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x088BEEACu) goto L_088BEEAC;
    return;
L_088BEEAC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(17252), ctx.gpr[18]);
    ctx.gpr[17] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(17256), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17260), 0u);
    ctx.gpr[31] = (0x088BEEC8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 715u, 0x088C2A84u>(ctx, &aot_mem) && ctx.pc == 0x088BEEC8u) goto L_088BEEC8;
    return;
L_088BEEC8:
    ctx.gpr[31] = (0x088BEED0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17256)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 720u, 0x088C2ACCu>(ctx, &aot_mem) && ctx.pc == 0x088BEED0u) goto L_088BEED0;
    return;
L_088BEED0:
    ctx.gpr[31] = (0x088BEED8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17260)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 725u, 0x088C2B14u>(ctx, &aot_mem) && ctx.pc == 0x088BEED8u) goto L_088BEED8;
    return;
L_088BEED8:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BEEFC;
      }
      goto L_088BEEEC;
    }
L_088BEEEC:
    ctx.gpr[31] = (0x088BEEF4u);
    ctx.gpr[4] = (0u | 50u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BEEF4u) goto L_088BEEF4;
    return;
L_088BEEF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BEF04;
      }
      goto L_088BEEFC;
    }
L_088BEEFC:
    ctx.gpr[31] = (0x088BEF04u);
    ctx.gpr[4] = (0u | 51u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BEF04u) goto L_088BEF04;
    return;
L_088BEF04:
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
L_088BEF1C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BEF24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BEF3Cu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(17256), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 720u, 0x088C2ACCu>(ctx, &aot_mem) && ctx.pc == 0x088BEF3Cu) goto L_088BEF3C;
    return;
L_088BEF3C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x088BEF48u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 733u, 0x088C2B84u>(ctx, &aot_mem) && ctx.pc == 0x088BEF48u) goto L_088BEF48;
    return;
L_088BEF48:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088BEF60;
      }
      goto L_088BEF50;
    }
L_088BEF50:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BEF60:
    ctx.gpr[31] = (0x088BEF68u);
    ctx.gpr[4] = (0u | 41u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BEF68u) goto L_088BEF68;
    return;
L_088BEF68:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BEF78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BEF94u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 805u, 0x088C3014u>(ctx, &aot_mem) && ctx.pc == 0x088BEF94u) goto L_088BEF94;
    return;
L_088BEF94:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BEFB4;
      }
      goto L_088BEFA0;
    }
L_088BEFA0:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BEFB4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088BEFF4;
      }
      goto L_088BEFBC;
    }
L_088BEFBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[31] = (0x088BEFCCu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(17256), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 720u, 0x088C2ACCu>(ctx, &aot_mem) && ctx.pc == 0x088BEFCCu) goto L_088BEFCC;
    return;
L_088BEFCC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x088BEFD8u);
    ctx.gpr[4] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x088BEFD8u) goto L_088BEFD8;
    return;
L_088BEFD8:
    ctx.gpr[31] = (0x088BEFE0u);
    ctx.gpr[4] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BEFE0u) goto L_088BEFE0;
    return;
L_088BEFE0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BEFF4:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF008:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BF018u);
    ctx.gpr[4] = (0u | 42u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF018u) goto L_088BF018;
    return;
L_088BF018:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF024:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BF034u);
    ctx.gpr[4] = (0u | 42u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF034u) goto L_088BF034;
    return;
L_088BF034:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF044:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BF054u);
    ctx.gpr[4] = (0u | 43u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF054u) goto L_088BF054;
    return;
L_088BF054:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF060:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF068:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BF080u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(17260), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 725u, 0x088C2B14u>(ctx, &aot_mem) && ctx.pc == 0x088BF080u) goto L_088BF080;
    return;
L_088BF080:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x088BF08Cu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 733u, 0x088C2B84u>(ctx, &aot_mem) && ctx.pc == 0x088BF08Cu) goto L_088BF08C;
    return;
L_088BF08C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088BF0A4;
      }
      goto L_088BF094;
    }
L_088BF094:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF0A4:
    ctx.gpr[31] = (0x088BF0ACu);
    ctx.gpr[4] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF0ACu) goto L_088BF0AC;
    return;
L_088BF0AC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF0BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BF0D8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 805u, 0x088C3014u>(ctx, &aot_mem) && ctx.pc == 0x088BF0D8u) goto L_088BF0D8;
    return;
L_088BF0D8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BF0F8;
      }
      goto L_088BF0E4;
    }
L_088BF0E4:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF0F8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088BF138;
      }
      goto L_088BF100;
    }
L_088BF100:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[31] = (0x088BF110u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(17260), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 725u, 0x088C2B14u>(ctx, &aot_mem) && ctx.pc == 0x088BF110u) goto L_088BF110;
    return;
L_088BF110:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x088BF11Cu);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x088BF11Cu) goto L_088BF11C;
    return;
L_088BF11C:
    ctx.gpr[31] = (0x088BF124u);
    ctx.gpr[4] = (0u | 47u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF124u) goto L_088BF124;
    return;
L_088BF124:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF138:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF14C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BF15Cu);
    ctx.gpr[4] = (0u | 49u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF15Cu) goto L_088BF15C;
    return;
L_088BF15C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF168:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BF178u);
    ctx.gpr[4] = (0u | 49u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF178u) goto L_088BF178;
    return;
L_088BF178:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF188:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (2182u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2780));
      if (branch_taken) {
          goto L_088BF1DC;
      }
      goto L_088BF1A8;
    }
L_088BF1A8:
    ctx.gpr[31] = (0x088BF1B0u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x088BF1B0u) goto L_088BF1B0;
    return;
L_088BF1B0:
    ctx.gpr[31] = (0x088BF1B8u);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 705u, 0x0884BCE4u>(ctx, &aot_mem) && ctx.pc == 0x088BF1B8u) goto L_088BF1B8;
    return;
L_088BF1B8:
    ctx.gpr[31] = (0x088BF1C0u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 712u, 0x0884BD54u>(ctx, &aot_mem) && ctx.pc == 0x088BF1C0u) goto L_088BF1C0;
    return;
L_088BF1C0:
    ctx.gpr[31] = (0x088BF1C8u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 713u, 0x0884BD6Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF1C8u) goto L_088BF1C8;
    return;
L_088BF1C8:
    ctx.gpr[31] = (0x088BF1D0u);
    ctx.gpr[4] = (0u | 50u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF1D0u) goto L_088BF1D0;
    return;
L_088BF1D0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF1DC:
    ctx.gpr[31] = (0x088BF1E4u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x088BF1E4u) goto L_088BF1E4;
    return;
L_088BF1E4:
    ctx.gpr[31] = (0x088BF1ECu);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 705u, 0x0884BCE4u>(ctx, &aot_mem) && ctx.pc == 0x088BF1ECu) goto L_088BF1EC;
    return;
L_088BF1EC:
    ctx.gpr[31] = (0x088BF1F4u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 712u, 0x0884BD54u>(ctx, &aot_mem) && ctx.pc == 0x088BF1F4u) goto L_088BF1F4;
    return;
L_088BF1F4:
    ctx.gpr[31] = (0x088BF1FCu);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 713u, 0x0884BD6Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF1FCu) goto L_088BF1FC;
    return;
L_088BF1FC:
    ctx.gpr[31] = (0x088BF204u);
    ctx.gpr[4] = (0u | 51u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF204u) goto L_088BF204;
    return;
L_088BF204:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF210:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-352));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BF244u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 77u, 0x089AD318u>(ctx, &aot_mem) && ctx.pc == 0x088BF244u) goto L_088BF244;
    return;
L_088BF244:
    ctx.gpr[4] = (ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_088BF4BC;
      }
      goto L_088BF250;
    }
L_088BF250:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 2016u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088BF264u);
    ctx.gpr[5] = (0u | 153u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BF264u) goto L_088BF264;
    return;
L_088BF264:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088BF278u);
    ctx.gpr[6] = (0u | 2016u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088BF278u) goto L_088BF278;
    return;
L_088BF278:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19864));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x088BF2BCu);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(19848));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 593u, 0x0884738Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF2BCu) goto L_088BF2BC;
    return;
L_088BF2BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x088BF2D0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 621u, 0x0880ABA0u>(ctx, &aot_mem) && ctx.pc == 0x088BF2D0u) goto L_088BF2D0;
    return;
L_088BF2D0:
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11424));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[20]);
    ctx.gpr[23] = (2220u << 16u);
    ctx.gpr[22] = (2220u << 16u);
    ctx.gpr[21] = (2220u << 16u);
    ctx.gpr[30] = (2220u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(264));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[17]);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-11408));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-11400));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-11392));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-11416));
    goto L_088BF310;
L_088BF310:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[31] = (0x088BF31Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088BF31Cu) goto L_088BF31C;
    return;
L_088BF31C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_088BF3E4;
      }
      goto L_088BF324;
    }
L_088BF324:
    ctx.gpr[31] = (0x088BF32Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x088BF32Cu) goto L_088BF32C;
    return;
L_088BF32C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088BF338u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088BF338u) goto L_088BF338;
    return;
L_088BF338:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_088BF310;
      }
      goto L_088BF340;
    }
L_088BF340:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_088BF344;
L_088BF344:
    ctx.gpr[31] = (0x088BF34Cu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088BF34Cu) goto L_088BF34C;
    return;
L_088BF34C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_088BF3DC;
      }
      goto L_088BF354;
    }
L_088BF354:
    ctx.gpr[31] = (0x088BF35Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x088BF35Cu) goto L_088BF35C;
    return;
L_088BF35C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088BF368u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088BF368u) goto L_088BF368;
    return;
L_088BF368:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088BF39C;
      }
      goto L_088BF370;
    }
L_088BF370:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088BF380u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088BF380u) goto L_088BF380;
    return;
L_088BF380:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088BF38Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x088BF38Cu) goto L_088BF38C;
    return;
L_088BF38C:
    ctx.gpr[31] = (0x088BF394u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 209u, 0x08A9CADCu>(ctx, &aot_mem) && ctx.pc == 0x088BF394u) goto L_088BF394;
    return;
L_088BF394:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_088BF39C;
L_088BF39C:
    ctx.gpr[31] = (0x088BF3A4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088BF3A4u) goto L_088BF3A4;
    return;
L_088BF3A4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088BF344;
      }
      goto L_088BF3AC;
    }
L_088BF3AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088BF3BCu);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088BF3BCu) goto L_088BF3BC;
    return;
L_088BF3BC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088BF3C8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x088BF3C8u) goto L_088BF3C8;
    return;
L_088BF3C8:
    ctx.gpr[31] = (0x088BF3D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 209u, 0x08A9CADCu>(ctx, &aot_mem) && ctx.pc == 0x088BF3D0u) goto L_088BF3D0;
    return;
L_088BF3D0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BF340;
      }
      goto L_088BF3DC;
    }
L_088BF3DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(84));
      if (branch_taken) {
          goto L_088BF310;
      }
      goto L_088BF3E4;
    }
L_088BF3E4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[31] = (0x088BF3F0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 624u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x088BF3F0u) goto L_088BF3F0;
    return;
L_088BF3F0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[16]);
    ctx.gpr[31] = (0x088BF3FCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 624u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x088BF3FCu) goto L_088BF3FC;
    return;
L_088BF3FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17256)));
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[19] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088BF44C;
      }
      goto L_088BF428;
    }
L_088BF428:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088BF440u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BF440u) goto L_088BF440;
    return;
L_088BF440:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_088BF4C0;
      }
      goto L_088BF448;
    }
L_088BF448:
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    goto L_088BF44C;
L_088BF44C:
    ctx.gpr[31] = (0x088BF454u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 77u, 0x089AD318u>(ctx, &aot_mem) && ctx.pc == 0x088BF454u) goto L_088BF454;
    return;
L_088BF454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17256)));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088BF49Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BF49Cu) goto L_088BF49C;
    return;
L_088BF49C:
    ctx.gpr[31] = (0x088BF4A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 77u, 0x089AD318u>(ctx, &aot_mem) && ctx.pc == 0x088BF4A4u) goto L_088BF4A4;
    return;
L_088BF4A4:
    ctx.gpr[4] = (ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_088BF4B8;
      }
      goto L_088BF4B0;
    }
L_088BF4B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u - ctx.gpr[19]);
      if (branch_taken) {
          goto L_088BF4B8;
      }
      goto L_088BF4B8;
    }
L_088BF4B8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    goto L_088BF4BC;
L_088BF4BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_088BF4C0;
L_088BF4C0:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(10716), ctx.gpr[5]);
    ctx.gpr[31] = (0x088BF4D8u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 733u, 0x088C2B84u>(ctx, &aot_mem) && ctx.pc == 0x088BF4D8u) goto L_088BF4D8;
    return;
L_088BF4D8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_088BF4E8;
      }
      goto L_088BF4E0;
    }
L_088BF4E0:
    ctx.gpr[31] = (0x088BF4E8u);
    ctx.gpr[4] = (0u | 53u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF4E8u) goto L_088BF4E8;
    return;
L_088BF4E8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF518:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BF528u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 805u, 0x088C3014u>(ctx, &aot_mem) && ctx.pc == 0x088BF528u) goto L_088BF528;
    return;
L_088BF528:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BF544;
      }
      goto L_088BF534;
    }
L_088BF534:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF544:
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_088BF55C;
    }
    goto L_088BF54C;
L_088BF54C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF55C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (0u | 52u);
    ctx.gpr[31] = (0x088BF570u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(10716), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF570u) goto L_088BF570;
    return;
L_088BF570:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF580:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BF590u);
    ctx.gpr[4] = (0u | 54u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF590u) goto L_088BF590;
    return;
L_088BF590:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF59C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BF5ACu);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 861u, 0x0881F4B4u>(ctx, &aot_mem) && ctx.pc == 0x088BF5ACu) goto L_088BF5AC;
    return;
L_088BF5AC:
    ctx.gpr[31] = (0x088BF5B4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 208u, 0x088213B0u>(ctx, &aot_mem) && ctx.pc == 0x088BF5B4u) goto L_088BF5B4;
    return;
L_088BF5B4:
    ctx.gpr[4] = (2182u << 16u);
    ctx.gpr[5] = (2182u << 16u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26440));
    ctx.gpr[31] = (0x088BF5CCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26212));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x088BF5CCu) goto L_088BF5CC;
    return;
L_088BF5CC:
    ctx.gpr[31] = (0x088BF5D4u);
    ctx.gpr[4] = (0u | 54u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF5D4u) goto L_088BF5D4;
    return;
L_088BF5D4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF5E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088BF62C;
      }
      goto L_088BF600;
    }
L_088BF600:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17276)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BF624;
      }
      goto L_088BF60C;
    }
L_088BF60C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10720)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_088BF624;
      }
      goto L_088BF618;
    }
L_088BF618:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17276), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x088BF624u);
    ctx.gpr[4] = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 730u, 0x088C7C40u>(ctx, &aot_mem) && ctx.pc == 0x088BF624u) goto L_088BF624;
    return;
L_088BF624:
    ctx.gpr[31] = (0x088BF62Cu);
    // nop
    goto L_088BF678;
L_088BF62C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF638:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BF650u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 733u, 0x088C2B84u>(ctx, &aot_mem) && ctx.pc == 0x088BF650u) goto L_088BF650;
    return;
L_088BF650:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_088BF66C;
      }
      goto L_088BF658;
    }
L_088BF658:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(17264), ctx.gpr[4]);
    ctx.gpr[31] = (0x088BF66Cu);
    ctx.gpr[4] = (0u | 59u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF66Cu) goto L_088BF66C;
    return;
L_088BF66C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF678:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17276)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_088BF6AC;
      }
      goto L_088BF690;
    }
L_088BF690:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10720)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_088BF6AC;
      }
      goto L_088BF6A0;
    }
L_088BF6A0:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17276), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x088BF6ACu);
    ctx.gpr[4] = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 730u, 0x088C7C40u>(ctx, &aot_mem) && ctx.pc == 0x088BF6ACu) goto L_088BF6AC;
    return;
L_088BF6AC:
    ctx.gpr[31] = (0x088BF6B4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 805u, 0x088C3014u>(ctx, &aot_mem) && ctx.pc == 0x088BF6B4u) goto L_088BF6B4;
    return;
L_088BF6B4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BF6D0;
      }
      goto L_088BF6C0;
    }
L_088BF6C0:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF6D0:
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_088BF6E8;
    }
    goto L_088BF6D8;
L_088BF6D8:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF6E8:
    ctx.gpr[5] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(17264), ctx.gpr[4]);
    ctx.gpr[31] = (0x088BF6F8u);
    ctx.gpr[4] = (0u | 58u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF6F8u) goto L_088BF6F8;
    return;
L_088BF6F8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF708:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17264)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 68 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(17276)));
      if (branch_taken) {
          goto L_088BF780;
      }
      goto L_088BF728;
    }
L_088BF728:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088BF744;
      }
      goto L_088BF730;
    }
L_088BF730:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10720)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088BF7AC;
      }
      goto L_088BF740;
    }
L_088BF740:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(17276), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088BF744;
L_088BF744:
    ctx.gpr[31] = (0x088BF74Cu);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 861u, 0x0881F4B4u>(ctx, &aot_mem) && ctx.pc == 0x088BF74Cu) goto L_088BF74C;
    return;
L_088BF74C:
    ctx.gpr[31] = (0x088BF754u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 208u, 0x088213B0u>(ctx, &aot_mem) && ctx.pc == 0x088BF754u) goto L_088BF754;
    return;
L_088BF754:
    ctx.gpr[4] = (2182u << 16u);
    ctx.gpr[5] = (2182u << 16u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26440));
    ctx.gpr[31] = (0x088BF76Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26212));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x088BF76Cu) goto L_088BF76C;
    return;
L_088BF76C:
    ctx.gpr[31] = (0x088BF774u);
    ctx.gpr[4] = (0u | 68u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF774u) goto L_088BF774;
    return;
L_088BF774:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF780:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088BF7A4;
      }
      goto L_088BF788;
    }
L_088BF788:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10720)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088BF7A4;
      }
      goto L_088BF798;
    }
L_088BF798:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(17276), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x088BF7A4u);
    ctx.gpr[4] = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 730u, 0x088C7C40u>(ctx, &aot_mem) && ctx.pc == 0x088BF7A4u) goto L_088BF7A4;
    return;
L_088BF7A4:
    ctx.gpr[31] = (0x088BF7ACu);
    ctx.gpr[4] = (0u | 61u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF7ACu) goto L_088BF7AC;
    return;
L_088BF7AC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF7B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17264)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 68 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF7EC;
      }
      goto L_088BF7D4;
    }
L_088BF7D4:
    ctx.gpr[31] = (0x088BF7DCu);
    ctx.gpr[4] = (0u | 68u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF7DCu) goto L_088BF7DC;
    return;
L_088BF7DC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF7EC:
    ctx.gpr[31] = (0x088BF7F4u);
    ctx.gpr[4] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF7F4u) goto L_088BF7F4;
    return;
L_088BF7F4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF804:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BF814u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 523u, 0x0883276Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF814u) goto L_088BF814;
    return;
L_088BF814:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BF838;
      }
      goto L_088BF820;
    }
L_088BF820:
    ctx.gpr[31] = (0x088BF828u);
    ctx.gpr[5] = (0u | 5592u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 733u, 0x088C2B84u>(ctx, &aot_mem) && ctx.pc == 0x088BF828u) goto L_088BF828;
    return;
L_088BF828:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_088BF838;
      }
      goto L_088BF830;
    }
L_088BF830:
    ctx.gpr[31] = (0x088BF838u);
    ctx.gpr[4] = (0u | 63u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF838u) goto L_088BF838;
    return;
L_088BF838:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF844:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(17276)));
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[17] = (2222u << 16u);
      if (branch_taken) {
          goto L_088BF88C;
      }
      goto L_088BF86C;
    }
L_088BF86C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10720)));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10708)));
        goto L_088BF890;
    }
    goto L_088BF878;
L_088BF878:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(17276), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x088BF888u);
    ctx.gpr[4] = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 730u, 0x088C7C40u>(ctx, &aot_mem) && ctx.pc == 0x088BF888u) goto L_088BF888;
    return;
L_088BF888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    goto L_088BF88C;
L_088BF88C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10708)));
    goto L_088BF890;
L_088BF890:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
      if (branch_taken) {
          goto L_088BF8B0;
      }
      goto L_088BF898;
    }
L_088BF898:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088BF8A4u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BF8A4u) goto L_088BF8A4;
    return;
L_088BF8A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10708), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    goto L_088BF8B0;
L_088BF8B0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 5592u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088BF8C0u);
    ctx.gpr[5] = (0u | 153u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BF8C0u) goto L_088BF8C0;
    return;
L_088BF8C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10708), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088BF8D8u);
    ctx.gpr[6] = (0u | 5592u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088BF8D8u) goto L_088BF8D8;
    return;
L_088BF8D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[31] = (0x088BF8E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10708)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 805u, 0x088C3014u>(ctx, &aot_mem) && ctx.pc == 0x088BF8E4u) goto L_088BF8E4;
    return;
L_088BF8E4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BF908;
      }
      goto L_088BF8F0;
    }
L_088BF8F0:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF908:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088BF928;
      }
      goto L_088BF910;
    }
L_088BF910:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF928:
    ctx.gpr[31] = (0x088BF930u);
    ctx.gpr[4] = (0u | 62u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF930u) goto L_088BF930;
    return;
L_088BF930:
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
L_088BF948:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17276)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_088BF97C;
      }
      goto L_088BF960;
    }
L_088BF960:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10720)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_088BF97C;
      }
      goto L_088BF970;
    }
L_088BF970:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17276), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x088BF97Cu);
    ctx.gpr[4] = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 730u, 0x088C7C40u>(ctx, &aot_mem) && ctx.pc == 0x088BF97Cu) goto L_088BF97C;
    return;
L_088BF97C:
    ctx.gpr[31] = (0x088BF984u);
    ctx.gpr[4] = (0u | 65u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF984u) goto L_088BF984;
    return;
L_088BF984:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF990:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BF9A0u);
    ctx.gpr[4] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF9A0u) goto L_088BF9A0;
    return;
L_088BF9A0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF9B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BF9C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 296u, 0x088C1354u>(ctx, &aot_mem) && ctx.pc == 0x088BF9C8u) goto L_088BF9C8;
    return;
L_088BF9C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BF9D4u);
    ctx.gpr[5] = (0u | 88u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 733u, 0x088C2B84u>(ctx, &aot_mem) && ctx.pc == 0x088BF9D4u) goto L_088BF9D4;
    return;
L_088BF9D4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_088BF9E4;
      }
      goto L_088BF9DC;
    }
L_088BF9DC:
    ctx.gpr[31] = (0x088BF9E4u);
    ctx.gpr[4] = (0u | 67u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BF9E4u) goto L_088BF9E4;
    return;
L_088BF9E4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BF9F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17276)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (2221u << 16u);
      if (branch_taken) {
          goto L_088BFA30;
      }
      goto L_088BFA10;
    }
L_088BFA10:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10720)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_088BFA30;
      }
      goto L_088BFA24;
    }
L_088BFA24:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17276), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x088BFA30u);
    ctx.gpr[4] = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 730u, 0x088C7C40u>(ctx, &aot_mem) && ctx.pc == 0x088BFA30u) goto L_088BFA30;
    return;
L_088BFA30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17272)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_088BFA64;
      }
      goto L_088BFA3C;
    }
L_088BFA3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 88u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088BFA50u);
    ctx.gpr[5] = (0u | 153u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BFA50u) goto L_088BFA50;
    return;
L_088BFA50:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17272), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088BFA64u);
    ctx.gpr[6] = (0u | 88u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088BFA64u) goto L_088BFA64;
    return;
L_088BFA64:
    ctx.gpr[31] = (0x088BFA6Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17272)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 805u, 0x088C3014u>(ctx, &aot_mem) && ctx.pc == 0x088BFA6Cu) goto L_088BFA6C;
    return;
L_088BFA6C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BFA8C;
      }
      goto L_088BFA78;
    }
L_088BFA78:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BFA8C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088BFAA8;
      }
      goto L_088BFA94;
    }
L_088BFA94:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BFAA8:
    ctx.gpr[31] = (0x088BFAB0u);
    ctx.gpr[4] = (0u | 66u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFAB0u) goto L_088BFAB0;
    return;
L_088BFAB0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BFAC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(17272)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088BFAEC;
      }
      goto L_088BFADC;
    }
L_088BFADC:
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(17272), 0u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(10712), ctx.gpr[5]);
    goto L_088BFAEC;
L_088BFAEC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17276)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_088BFB0C;
      }
      goto L_088BFAF8;
    }
L_088BFAF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10720)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_088BFB3C;
      }
      goto L_088BFB08;
    }
L_088BFB08:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17276), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_088BFB0C;
L_088BFB0C:
    ctx.gpr[31] = (0x088BFB14u);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 861u, 0x0881F4B4u>(ctx, &aot_mem) && ctx.pc == 0x088BFB14u) goto L_088BFB14;
    return;
L_088BFB14:
    ctx.gpr[31] = (0x088BFB1Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 208u, 0x088213B0u>(ctx, &aot_mem) && ctx.pc == 0x088BFB1Cu) goto L_088BFB1C;
    return;
L_088BFB1C:
    ctx.gpr[4] = (2182u << 16u);
    ctx.gpr[5] = (2182u << 16u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26440));
    ctx.gpr[31] = (0x088BFB34u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26212));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x088BFB34u) goto L_088BFB34;
    return;
L_088BFB34:
    ctx.gpr[31] = (0x088BFB3Cu);
    ctx.gpr[4] = (0u | 68u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFB3Cu) goto L_088BFB3C;
    return;
L_088BFB3C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BFB48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BFB58u);
    ctx.gpr[4] = (0u | 68u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFB58u) goto L_088BFB58;
    return;
L_088BFB58:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BFB68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BFB8C;
      }
      goto L_088BFB84;
    }
L_088BFB84:
    ctx.gpr[31] = (0x088BFB8Cu);
    // nop
    goto L_088BFBD8;
L_088BFB8C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BFB98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BFBB0u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 733u, 0x088C2B84u>(ctx, &aot_mem) && ctx.pc == 0x088BFBB0u) goto L_088BFBB0;
    return;
L_088BFBB0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_088BFBCC;
      }
      goto L_088BFBB8;
    }
L_088BFBB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(17268), ctx.gpr[4]);
    ctx.gpr[31] = (0x088BFBCCu);
    ctx.gpr[4] = (0u | 72u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFBCCu) goto L_088BFBCC;
    return;
L_088BFBCC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BFBD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BFBE8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 805u, 0x088C3014u>(ctx, &aot_mem) && ctx.pc == 0x088BFBE8u) goto L_088BFBE8;
    return;
L_088BFBE8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BFC04;
      }
      goto L_088BFBF4;
    }
L_088BFBF4:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BFC04:
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_088BFC1C;
    }
    goto L_088BFC0C;
L_088BFC0C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BFC1C:
    ctx.gpr[5] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(17268), ctx.gpr[4]);
    ctx.gpr[31] = (0x088BFC2Cu);
    ctx.gpr[4] = (0u | 71u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFC2Cu) goto L_088BFC2C;
    return;
L_088BFC2C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BFC3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17268)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 68 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFC6C;
      }
      goto L_088BFC58;
    }
L_088BFC58:
    ctx.gpr[31] = (0x088BFC60u);
    ctx.gpr[4] = (0u | 82u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFC60u) goto L_088BFC60;
    return;
L_088BFC60:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BFC6C:
    ctx.gpr[31] = (0x088BFC74u);
    ctx.gpr[4] = (0u | 74u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFC74u) goto L_088BFC74;
    return;
L_088BFC74:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BFC80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17268)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 68 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFCB4;
      }
      goto L_088BFC9C;
    }
L_088BFC9C:
    ctx.gpr[31] = (0x088BFCA4u);
    ctx.gpr[4] = (0u | 81u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFCA4u) goto L_088BFCA4;
    return;
L_088BFCA4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BFCB4:
    ctx.gpr[31] = (0x088BFCBCu);
    ctx.gpr[4] = (0u | 73u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFCBCu) goto L_088BFCBC;
    return;
L_088BFCBC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BFCCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BFCDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 523u, 0x0883276Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFCDCu) goto L_088BFCDC;
    return;
L_088BFCDC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BFD00;
      }
      goto L_088BFCE8;
    }
L_088BFCE8:
    ctx.gpr[31] = (0x088BFCF0u);
    ctx.gpr[5] = (0u | 5592u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 733u, 0x088C2B84u>(ctx, &aot_mem) && ctx.pc == 0x088BFCF0u) goto L_088BFCF0;
    return;
L_088BFCF0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_088BFD00;
      }
      goto L_088BFCF8;
    }
L_088BFCF8:
    ctx.gpr[31] = (0x088BFD00u);
    ctx.gpr[4] = (0u | 76u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFD00u) goto L_088BFD00;
    return;
L_088BFD00:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BFD0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[17] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
      if (branch_taken) {
          goto L_088BFD4C;
      }
      goto L_088BFD34;
    }
L_088BFD34:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088BFD40u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BFD40u) goto L_088BFD40;
    return;
L_088BFD40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10708), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    goto L_088BFD4C;
L_088BFD4C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 5592u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088BFD5Cu);
    ctx.gpr[5] = (0u | 153u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BFD5Cu) goto L_088BFD5C;
    return;
L_088BFD5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10708), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088BFD74u);
    ctx.gpr[6] = (0u | 5592u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088BFD74u) goto L_088BFD74;
    return;
L_088BFD74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[31] = (0x088BFD80u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10708)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 805u, 0x088C3014u>(ctx, &aot_mem) && ctx.pc == 0x088BFD80u) goto L_088BFD80;
    return;
L_088BFD80:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BFDA4;
      }
      goto L_088BFD8C;
    }
L_088BFD8C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BFDA4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088BFDC4;
      }
      goto L_088BFDAC;
    }
L_088BFDAC:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BFDC4:
    ctx.gpr[31] = (0x088BFDCCu);
    ctx.gpr[4] = (0u | 75u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFDCCu) goto L_088BFDCC;
    return;
L_088BFDCC:
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
L_088BFDE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BFDF4u);
    ctx.gpr[4] = (0u | 78u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFDF4u) goto L_088BFDF4;
    return;
L_088BFDF4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BFE00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BFE10u);
    ctx.gpr[4] = (0u | 77u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFE10u) goto L_088BFE10;
    return;
L_088BFE10:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BFE20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BFE38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 296u, 0x088C1354u>(ctx, &aot_mem) && ctx.pc == 0x088BFE38u) goto L_088BFE38;
    return;
L_088BFE38:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088BFE44u);
    ctx.gpr[5] = (0u | 88u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 733u, 0x088C2B84u>(ctx, &aot_mem) && ctx.pc == 0x088BFE44u) goto L_088BFE44;
    return;
L_088BFE44:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_088BFE54;
      }
      goto L_088BFE4C;
    }
L_088BFE4C:
    ctx.gpr[31] = (0x088BFE54u);
    ctx.gpr[4] = (0u | 80u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFE54u) goto L_088BFE54;
    return;
L_088BFE54:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BFE64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17272)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_088BFEA8;
      }
      goto L_088BFE80;
    }
L_088BFE80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 88u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088BFE94u);
    ctx.gpr[5] = (0u | 153u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BFE94u) goto L_088BFE94;
    return;
L_088BFE94:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17272), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088BFEA8u);
    ctx.gpr[6] = (0u | 88u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088BFEA8u) goto L_088BFEA8;
    return;
L_088BFEA8:
    ctx.gpr[31] = (0x088BFEB0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17272)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 805u, 0x088C3014u>(ctx, &aot_mem) && ctx.pc == 0x088BFEB0u) goto L_088BFEB0;
    return;
L_088BFEB0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BFED0;
      }
      goto L_088BFEBC;
    }
L_088BFEBC:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BFED0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088BFEEC;
      }
      goto L_088BFED8;
    }
L_088BFED8:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BFEEC:
    ctx.gpr[31] = (0x088BFEF4u);
    ctx.gpr[4] = (0u | 79u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFEF4u) goto L_088BFEF4;
    return;
L_088BFEF4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BFF08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17272)));
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(17272), 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(10712), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BFF30u);
    ctx.gpr[4] = (0u | 82u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFF30u) goto L_088BFF30;
    return;
L_088BFF30:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BFF3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BFF4Cu);
    ctx.gpr[4] = (0u | 81u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFF4Cu) goto L_088BFF4C;
    return;
L_088BFF4C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BFF5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088BFF70u);
    // nop
    ctx.pc = 0x08AB45BCu;
    return;
L_088BFF70:
    ctx.gpr[4] = (4096u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17300), ctx.gpr[2]);
    ctx.gpr[7] = (ctx.gpr[2] & ctx.gpr[7]);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17304));
    goto L_088BFF90;
L_088BFF90:
    ctx.gpr[5] = (ctx.gpr[7] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 15u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 10 ? 1u : 0u);
      if (branch_taken) {
          goto L_088BFFB4;
      }
      goto L_088BFFA0;
    }
L_088BFFA0:
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(87));
        goto L_088BFFB8;
    }
    goto L_088BFFA8;
L_088BFFA8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_088BFFBC;
      }
      goto L_088BFFB4;
    }
L_088BFFB4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(87));
    goto L_088BFFB8;
L_088BFFB8:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_088BFFBC;
L_088BFFBC:
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.gpr[7] = (ctx.gpr[7] >> 4u);
      if (branch_taken) {
          goto L_088BFF90;
      }
      goto L_088BFFD0;
    }
L_088BFFD0:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(17300));
    ctx.gpr[31] = (0x088BFFE0u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 733u, 0x088C2B84u>(ctx, &aot_mem) && ctx.pc == 0x088BFFE0u) goto L_088BFFE0;
    return;
L_088BFFE0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_088BFFF8;
      }
      goto L_088BFFE8;
    }
L_088BFFE8:
    ctx.gpr[31] = (0x088BFFF0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17300)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 600u, 0x088C225Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFFF0u) goto L_088BFFF0;
    return;
L_088BFFF0:
    ctx.gpr[31] = (0x088BFFF8u);
    ctx.gpr[4] = (0u | 84u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088BFFF8u) goto L_088BFFF8;
    return;
L_088BFFF8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.pc = 0x088C0000u; return;
}

void recomp_unit_0046(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0046_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_46(Runtime &runtime) {
    runtime.register_generated_unit(46u, 0x088BC000u, 16384u, &recomp_unit_0046, &recomp_unit_0046_entry);
    runtime.register_function(0x088BC000u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC01Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC030u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC04Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC05Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC06Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC07Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC08Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC0A4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC0BCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC0C4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC0E0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC0F0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC100u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC110u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC120u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC130u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC158u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC160u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC178u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC18Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC1ACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC1B4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC1D4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC1E4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC1F4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC20Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC238u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC250u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC25Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC264u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC26Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC274u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC27Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC290u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC2ACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC2B8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC2C0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC2D0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC2D8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC2E4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC2ECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC308u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC318u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC324u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC334u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC33Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC344u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC34Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC354u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC360u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC384u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC3A0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC3F0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC43Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC44Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC468u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC478u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC490u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC4A8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC4C8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC52Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC538u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC57Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC5DCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC5E4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC5F0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC60Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC61Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC62Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC670u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC690u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC6A0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC6B4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC6D0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC6E8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC7A0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC7B8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC860u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC878u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC880u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC898u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC8A8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC8B8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC8E8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC910u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC928u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC93Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC944u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC95Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC96Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC990u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC9B4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC9BCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC9CCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC9DCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BC9F4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCA38u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCA58u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCA68u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCA7Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCA98u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCAB0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCB68u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCB80u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCC28u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCC40u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCC48u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCC60u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCC70u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCC80u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCCB0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCCD8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCCF0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCD04u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCD0Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCD24u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCD34u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCD58u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCD7Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCD84u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCD94u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCDA4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCDBCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCDCCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCDD8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCDE4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCDECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCE00u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCE08u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCE10u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCE18u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCE20u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCE28u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCE3Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCEA0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCEC0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCED8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCF7Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCF98u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCFA4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCFECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCFF4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BCFFCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD000u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD004u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD010u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD0ACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD0C4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD0D8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD0F4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD104u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD198u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD1ACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD1BCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD204u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD218u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD240u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD258u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD270u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD2A4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD2ACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD2D8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD3A0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD3B4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD3D4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD3F0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD3F8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD3FCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD408u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD410u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD41Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD430u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD43Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD444u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD44Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD460u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD468u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD470u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD484u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD490u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD4A0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD4A8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD4B0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD4B4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD4BCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD4C8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD4D4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD4E0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD57Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD588u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD594u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD5A0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD5A8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD5B4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD5C4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD5D0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD5E4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD5ECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD5F8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD60Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD614u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD634u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD640u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD654u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD65Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD66Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD674u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD67Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD690u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD698u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD6A8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD6D4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD6DCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD700u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD718u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD72Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD738u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD740u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD748u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD750u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD75Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD77Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD788u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD790u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD798u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD7B4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD7D0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD7ECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD7F4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD82Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD834u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD83Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD844u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD850u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD858u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD874u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD87Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD884u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD890u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD898u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD89Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD8A4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD8ACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD8D0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD8D8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD8E0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD8ECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD8F8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD900u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD904u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD90Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD914u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD91Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD940u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD958u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD96Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD97Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD990u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD9A8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD9D0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD9E0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BD9F0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDA00u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDA10u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDA28u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDA50u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDA60u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDA68u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDA74u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDA8Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDAA0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDAB4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDAC4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDACCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDAD8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDAECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDAF4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDB10u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDB20u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDB28u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDB30u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDB38u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDB40u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDB4Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDB68u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDB74u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDB7Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDB80u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDB98u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDBACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDBB8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDBC0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDBC4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDBD8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDBF4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC00u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC08u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC0Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC24u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC38u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC44u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC4Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC50u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC64u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC80u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC8Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC94u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDC98u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDCB0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDCC4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDCD0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDCD8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDCDCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDD28u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDD38u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDD60u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDD70u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDD98u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDDA0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDDA8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDDB0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDDBCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDDC0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDDC8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDDDCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDDE8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDDF0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDDF8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDDFCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDE10u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDE18u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDE28u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDE4Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDE54u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDE5Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDE6Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDE7Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDED0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDED8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDEE0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDEE8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDEF4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDF04u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDF10u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDF2Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDF38u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDF40u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDF48u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDF50u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDF58u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDF70u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDF88u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDFA0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDFACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDFB8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDFCCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDFD4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDFE8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDFF4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BDFFCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE004u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE014u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE01Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE024u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE034u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE048u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE050u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE064u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE070u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE078u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE080u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE090u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE098u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE0A0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE0B0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE0D0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE0D8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE0E0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE0E8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE0F0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE0F8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE100u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE108u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE110u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE12Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE13Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE144u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE14Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE154u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE17Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE184u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE18Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE198u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE1A4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE1ACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE1B4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE1BCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE1F0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE200u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE208u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE218u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE220u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE228u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE234u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE23Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE244u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE260u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE27Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE284u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE28Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE294u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE2A8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE2B4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE2BCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE2C4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE2DCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE2E4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE2FCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE304u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE308u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE334u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE33Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE344u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE34Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE354u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE35Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE374u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE384u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE38Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE398u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE3A8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE3B0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE3B8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE3C4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE3CCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE3D8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE3ECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE3F4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE3FCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE40Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE414u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE41Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE42Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE440u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE448u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE450u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE460u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE468u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE470u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE480u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE490u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE498u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE4A0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE4ACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE4BCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE4C8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE4D8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE4E4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE504u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE518u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE520u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE530u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE544u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE54Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE55Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE564u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE58Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE598u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE5A4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE5B4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE5BCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE5CCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE5D4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE5E4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE5FCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE60Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE624u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE62Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE650u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE664u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE66Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE670u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE678u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE68Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE6A4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE6ACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE6B8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE6C0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE6D0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE6D8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE6DCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE6E4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE6F8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE700u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE710u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE724u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE738u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE74Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE754u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE76Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE774u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE77Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE7A8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE7B4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE7C0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE7D0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE7D8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE7E8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE7FCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE804u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE814u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE828u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE838u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE848u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE850u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE86Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE880u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE888u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE890u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE89Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE8A4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE8B4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE8BCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE8C8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE8D0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE8DCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE900u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE918u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE920u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE934u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE948u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE96Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE984u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE990u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE998u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE9A8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE9C4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE9D8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE9ECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BE9F4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEA00u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEA08u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEA10u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEA20u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEA44u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEA5Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEA64u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEA78u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEA8Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEAB0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEAC8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEAD4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEADCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEAECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEB08u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEB1Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEB30u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEB38u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEB44u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEB4Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEB54u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEB64u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEB84u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEB94u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEBA8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEBCCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEBE4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEBECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEC00u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEC14u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEC18u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEC24u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEC34u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEC38u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEC44u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEC50u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEC5Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEC64u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEC7Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEC88u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEC90u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BECA4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BECACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BECC4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BECCCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BECDCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BECE4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BECF4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BED10u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BED1Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BED30u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BED38u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BED40u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BED54u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BED68u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BED78u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BED84u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BED94u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEDA4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEDC0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEDC8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEDD0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEDE0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEDE8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEDF4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEE00u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEE08u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEE20u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEE2Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEE34u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEE3Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEE4Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEE58u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEE60u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEE68u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEE70u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEE78u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEE80u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEE88u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEE90u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEE94u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEEA0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEEACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEEC8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEED0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEED8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEEECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEEF4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEEFCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEF04u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEF1Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEF24u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEF3Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEF48u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEF50u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEF60u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEF68u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEF78u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEF94u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEFA0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEFB4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEFBCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEFCCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEFD8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEFE0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BEFF4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF008u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF018u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF024u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF034u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF044u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF054u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF060u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF068u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF080u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF08Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF094u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF0A4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF0ACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF0BCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF0D8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF0E4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF0F8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF100u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF110u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF11Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF124u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF138u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF14Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF15Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF168u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF178u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF188u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF1A8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF1B0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF1B8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF1C0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF1C8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF1D0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF1DCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF1E4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF1ECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF1F4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF1FCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF204u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF210u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF244u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF250u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF264u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF278u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF2BCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF2D0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF310u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF31Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF324u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF32Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF338u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF340u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF344u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF34Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF354u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF35Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF368u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF370u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF380u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF38Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF394u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF39Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF3A4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF3ACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF3BCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF3C8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF3D0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF3DCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF3E4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF3F0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF3FCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF428u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF440u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF448u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF44Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF454u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF49Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF4A4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF4B0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF4B8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF4BCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF4C0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF4D8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF4E0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF4E8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF518u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF528u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF534u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF544u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF54Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF55Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF570u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF580u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF590u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF59Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF5ACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF5B4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF5CCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF5D4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF5E4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF600u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF60Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF618u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF624u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF62Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF638u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF650u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF658u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF66Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF678u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF690u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF6A0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF6ACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF6B4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF6C0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF6D0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF6D8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF6E8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF6F8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF708u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF728u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF730u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF740u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF744u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF74Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF754u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF76Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF774u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF780u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF788u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF798u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF7A4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF7ACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF7B8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF7D4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF7DCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF7ECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF7F4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF804u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF814u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF820u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF828u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF830u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF838u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF844u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF86Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF878u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF888u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF88Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF890u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF898u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF8A4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF8B0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF8C0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF8D8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF8E4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF8F0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF908u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF910u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF928u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF930u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF948u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF960u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF970u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF97Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF984u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF990u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF9A0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF9B0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF9C8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF9D4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF9DCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF9E4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BF9F4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFA10u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFA24u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFA30u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFA3Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFA50u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFA64u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFA6Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFA78u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFA8Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFA94u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFAA8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFAB0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFAC4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFADCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFAECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFAF8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFB08u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFB0Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFB14u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFB1Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFB34u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFB3Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFB48u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFB58u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFB68u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFB84u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFB8Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFB98u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFBB0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFBB8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFBCCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFBD8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFBE8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFBF4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFC04u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFC0Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFC1Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFC2Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFC3Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFC58u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFC60u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFC6Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFC74u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFC80u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFC9Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFCA4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFCB4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFCBCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFCCCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFCDCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFCE8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFCF0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFCF8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFD00u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFD0Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFD34u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFD40u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFD4Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFD5Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFD74u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFD80u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFD8Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFDA4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFDACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFDC4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFDCCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFDE4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFDF4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFE00u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFE10u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFE20u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFE38u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFE44u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFE4Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFE54u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFE64u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFE80u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFE94u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFEA8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFEB0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFEBCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFED0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFED8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFEECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFEF4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFF08u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFF30u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFF3Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFF4Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFF5Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFF70u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFF90u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFFA0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFFA8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFFB4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFFB8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFFBCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFFD0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFFE0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFFE8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFFF0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088BFFF8u, &recomp_unit_0046, "recomp_unit_0046");
}
} // namespace psprecomp

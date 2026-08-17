#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0071[4095] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 6, 7,
    0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 10, 11, 0, 12, 0, 0, 0, 13, 0, 14, 0, 15, 16, 17, 0, 0, 18, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 22, 0, 0, 23, 0, 0, 24, 0, 25, 0,
    26, 0, 0, 0, 27, 0, 28, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 40, 0, 0,
    41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 45, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 48, 49, 50, 0, 0, 0,
    0, 51, 0, 0, 52, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 59, 60, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 63, 64, 0, 65, 0, 0,
    0, 66, 0, 67, 0, 68, 69, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73,
    0, 0, 0, 0, 0, 74, 75, 0, 0, 76, 0, 0, 77, 0, 78, 0, 79, 0, 0, 0, 80, 0, 81, 0, 82, 0, 0, 0, 83, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0,
    0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0,
    0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 93, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 98,
    0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 101, 102, 103, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 112, 113,
    0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 116, 117, 0, 118, 0, 0, 0, 119, 0, 120, 0, 121, 122, 123, 0, 0, 124, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 128, 0, 0, 129, 0, 0, 130, 0, 131, 0,
    132, 0, 0, 0, 133, 0, 134, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 146, 0, 0,
    147, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 151, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 154, 155, 156, 0, 0, 0,
    0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 165, 166, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 169, 170, 0, 171, 0, 0,
    0, 172, 0, 173, 0, 174, 175, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179,
    0, 0, 0, 0, 0, 180, 181, 0, 0, 182, 0, 0, 183, 0, 184, 0, 185, 0, 0, 0, 186, 0, 187, 0, 188, 0, 0, 0, 189, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0,
    0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0,
    0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 199, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 204,
    0, 0, 205, 0, 206, 0, 0, 0, 0, 0, 207, 208, 209, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 218, 219,
    0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 222, 223, 0, 224, 0, 0, 0, 225, 0, 226, 0, 227, 228, 229, 0, 0, 230, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 234, 0, 0, 235, 0, 0, 236, 0, 237, 0,
    238, 0, 0, 0, 239, 0, 240, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 245, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 264, 0,
    0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 268, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 273, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 0,
    0, 0, 0, 276, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0,
    0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 291, 0,
    0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 301, 0, 0, 0, 302, 0, 0, 0, 303,
    0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0,
    311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0,
    0, 318, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0,
    0, 326, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 332, 0, 333, 334, 0, 335, 0, 336, 0, 0, 337, 338, 0, 339, 0,
    0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0,
    0, 0, 0, 0, 0, 344, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 349, 0, 350, 0, 351, 0, 352, 0,
    0, 353, 0, 0, 354, 355, 0, 0, 0, 0, 356, 0, 357, 0, 0, 0, 358, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 364, 0, 365, 0, 0, 0,
    366, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 370, 0, 0, 371, 0, 372, 0, 0, 373, 0, 0, 374, 0, 375, 0,
    0, 376, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 380, 381, 0, 0, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 388,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 391, 0, 0, 0, 392, 393, 0, 394, 0, 0,
    0, 0, 395, 0, 396, 0, 397, 398, 399, 0, 0, 400, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0,
    0, 0, 0, 0, 403, 404, 0, 0, 0, 0, 405, 0, 0, 0, 406, 0, 407, 0, 408, 0, 0, 0, 409, 0, 410, 0, 411, 0, 0, 0, 412, 0,
    413, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 417,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 419, 0, 0, 0, 0, 0, 420, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 423, 424, 0, 425, 0, 426, 0, 0, 427, 428, 0, 429, 0, 0,
    0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0,
    0, 433, 0, 0, 0, 0, 0, 0, 0, 434, 435, 436, 0, 0, 0, 437, 0, 0, 438, 0, 0, 0, 0, 0, 439, 0, 0, 440, 0, 441, 0, 442,
    0, 443, 0, 0, 0, 0, 444, 0, 0, 445, 0, 0, 0, 0, 446, 0, 447, 0, 0, 0, 448, 0, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 453, 0, 0, 0, 0, 0,
    0, 0, 454, 455, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 458, 0, 0, 0, 459, 0, 460, 0, 0, 461, 0, 462, 0,
    0, 0, 0, 463, 0, 0, 464, 0, 465, 0, 0, 466, 0, 467, 0, 0, 0, 468, 0, 0, 0, 0, 469, 0, 0, 0, 0, 470, 0, 0, 0, 471,
    0, 0, 0, 472, 0, 0, 473, 474, 475, 0, 0, 0, 476, 0, 0, 0, 0, 477, 0, 0, 0, 478, 0, 0, 0, 479, 0, 0, 480, 0, 0, 0,
    481, 482, 483, 0, 0, 0, 0, 0, 484, 0, 0, 0, 485, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 491, 0, 0, 0, 0, 492, 0, 0, 0, 0, 493, 0, 0, 0, 494, 495, 0, 496, 0, 0, 0, 0, 497, 0, 0, 0, 0, 498, 0,
    0, 0, 499, 0, 0, 0, 500, 0, 0, 501, 502, 503, 0, 0, 0, 504, 0, 0, 0, 0, 505, 0, 0, 0, 506, 0, 0, 0, 507, 0, 0, 508,
    0, 0, 0, 509, 0, 0, 0, 510, 0, 511, 512, 513, 0, 0, 514, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 516, 0, 0, 0, 0, 0, 0, 0, 517, 518, 0, 0, 0, 0, 519, 520, 0, 0, 521, 0, 522, 0, 523, 0, 0, 0, 0, 0, 524, 0, 0,
    0, 0, 525, 0, 0, 0, 526, 0, 0, 0, 527, 0, 0, 528, 529, 530, 0, 0, 0, 531, 0, 0, 0, 0, 532, 0, 0, 0, 533, 0, 0, 0,
    534, 0, 0, 535, 0, 0, 0, 536, 0, 537, 538, 0, 0, 0, 539, 0, 540, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 542, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 547, 0, 0, 548, 0, 0,
    0, 0, 549, 0, 550, 551, 0, 552, 0, 553, 0, 0, 554, 555, 0, 556, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 561, 0, 562, 0, 0, 0, 0, 0, 563, 0,
    0, 564, 0, 0, 0, 0, 565, 0, 0, 566, 0, 567, 0, 568, 0, 569, 0, 0, 570, 0, 0, 571, 572, 0, 0, 0, 0, 573, 0, 574, 0, 0,
    0, 575, 0, 576, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579,
    0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 581, 0, 582, 0, 0, 0, 583, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 585, 0, 0, 0,
    586, 0, 587, 0, 0, 588, 0, 589, 0, 0, 590, 0, 0, 591, 0, 592, 0, 0, 593, 0, 594, 0, 0, 0, 595, 0, 0, 0, 0, 0, 596, 597,
    598, 0, 0, 0, 0, 0, 599, 0, 0, 0, 600, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 603, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606,
    0, 0, 0, 0, 607, 0, 0, 608, 0, 0, 0, 609, 610, 0, 611, 0, 0, 0, 0, 612, 0, 613, 0, 614, 615, 616, 0, 0, 617, 0, 0, 618,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 620, 621, 0, 0, 0, 0, 622, 0, 0, 0, 623,
    0, 624, 0, 625, 0, 0, 0, 626, 0, 627, 0, 628, 0, 0, 0, 629, 0, 630, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 632, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 637, 0, 0, 638, 0, 0, 0, 0, 0,
    639, 0, 640, 641, 0, 642, 0, 643, 0, 0, 644, 645, 0, 646, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 651, 652, 653, 0,
    0, 0, 0, 0, 654, 0, 0, 655, 0, 0, 0, 0, 0, 656, 0, 0, 657, 0, 658, 0, 659, 0, 660, 0, 0, 0, 0, 661, 0, 662, 0, 0,
    0, 663, 0, 664, 0, 0, 0, 665, 0, 666, 0, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 668,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 671, 672, 0, 0, 673, 0, 0, 0,
    674, 0, 0, 0, 0, 0, 675, 0, 0, 0, 0, 676, 0, 0, 0, 677, 0, 678, 0, 0, 679, 0, 680, 0, 0, 0, 0, 681, 0, 0, 682, 0,
    683, 0, 0, 684, 0, 685, 0, 0, 0, 686, 0, 0, 0, 0, 687, 688, 689, 0, 0, 0, 0, 0, 690, 0, 0, 0, 0, 691, 0, 0, 0, 0,
    692, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 694, 0, 0, 0,
    695, 0, 0, 0, 0, 0, 0, 0, 0, 696, 697, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 698, 0, 0, 0, 0, 699, 0, 0, 0,
    0, 0, 700, 0, 0, 0, 701, 0, 702, 0, 703, 0, 0, 0, 0, 704, 0, 705, 0, 706, 0, 0, 0, 0, 707, 0, 708, 0, 709, 710, 711, 0,
    0, 0, 712, 0, 0, 713, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 0, 0, 715,
    716, 0, 0, 0, 0, 0, 717, 718, 0, 0, 0, 719, 0, 720, 0, 721, 0, 0, 0, 722, 0, 0, 0, 723, 0, 724, 0, 725, 0, 726, 0, 0,
    0, 0, 727, 0, 728, 0, 0, 0, 0, 0, 0, 0, 729, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 730, 0, 0, 0, 731,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 732, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 733, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0, 735, 0, 0, 736, 0, 0, 0, 0, 737, 0, 738, 739, 0, 740, 0, 741,
    0, 0, 742, 743, 0, 744, 0, 0, 0, 0, 0, 745, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 746, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    747, 0, 0, 0, 748, 0, 0, 0, 0, 0, 0, 0, 749, 0, 750, 0, 0, 0, 0, 0, 751, 0, 0, 752, 0, 0, 0, 0, 753, 0, 0, 754,
    0, 755, 0, 756, 0, 757, 0, 0, 758, 0, 0, 759, 760, 0, 0, 0, 0, 761, 0, 762, 0, 0, 0, 763, 0, 764, 0, 0, 0, 0, 765, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 0, 0, 0, 767, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0,
    0, 769, 0, 770, 0, 0, 0, 771, 0, 0, 0, 0, 0, 772, 0, 0, 0, 0, 773, 0, 0, 0, 774, 0, 775, 0, 0, 776, 0, 777, 0, 0,
    778, 0, 0, 779, 0, 780, 0, 0, 781, 0, 782, 0, 0, 0, 783, 0, 0, 0, 0, 0, 784, 785, 786, 0, 0, 0, 0, 0, 787, 0, 0, 0,
    788, 0, 0, 0, 0, 789, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 790, 0, 0, 0, 0, 0, 0, 0, 0, 0, 791, 0, 0, 0, 792, 0,
    0, 0, 0, 0, 0, 0, 793, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 794, 0, 0, 0, 0, 795, 0, 0, 796, 0, 0,
    0, 797, 798, 0, 799, 0, 0, 0, 0, 800, 0, 801, 0, 802, 803, 804, 0, 0, 805, 0, 0, 806, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 807, 0, 0, 0, 0, 0, 0, 0, 808, 809, 0, 0, 0, 0, 810, 0, 0, 0, 811, 0, 812, 0, 813, 0, 0, 0, 814, 0, 815,
    0, 816, 0, 0, 0, 817, 0, 818, 0, 0, 0, 0, 0, 0, 819, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 820, 0, 0, 0, 821, 0, 0,
    0, 0, 0, 0, 0, 0, 822, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 823, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 824, 0, 0, 0, 0, 0, 825, 0, 0, 826, 0, 0, 0, 0, 827, 0, 828, 829, 0, 830, 0, 831, 0, 0, 832, 833, 0,
    834, 0, 0, 0, 835, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 836, 0, 0, 0, 0, 0, 0, 0, 0, 0, 837, 0, 0, 0, 838, 0, 0,
    0, 0, 0, 0, 0, 839, 0, 0, 0, 0, 0, 840, 0, 0, 841, 0, 0, 0, 0, 842, 0, 0, 843, 0, 844, 0, 845, 0, 846, 0, 0, 847,
    0, 848, 849, 0, 0, 0, 850, 0, 851, 0, 0, 0, 852, 0, 853, 0, 0, 0, 854, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 855,
};
void recomp_unit_0071_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08920000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0071[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08920000;
    case 2u: goto L_08920018;
    case 3u: goto L_08920040;
    case 4u: goto L_08920050;
    case 5u: goto L_08920070;
    case 6u: goto L_08920078;
    case 7u: goto L_0892007C;
    case 8u: goto L_08920088;
    case 9u: goto L_08920094;
    case 10u: goto L_089200A8;
    case 11u: goto L_089200AC;
    case 12u: goto L_089200B4;
    case 13u: goto L_089200C4;
    case 14u: goto L_089200CC;
    case 15u: goto L_089200D4;
    case 16u: goto L_089200D8;
    case 17u: goto L_089200DC;
    case 18u: goto L_089200E8;
    case 19u: goto L_0892011C;
    case 20u: goto L_0892013C;
    case 21u: goto L_08920154;
    case 22u: goto L_08920158;
    case 23u: goto L_08920164;
    case 24u: goto L_08920170;
    case 25u: goto L_08920178;
    case 26u: goto L_08920180;
    case 27u: goto L_08920190;
    case 28u: goto L_08920198;
    case 29u: goto L_089201A0;
    case 30u: goto L_089201B0;
    case 31u: goto L_089201E0;
    case 32u: goto L_08920238;
    case 33u: goto L_08920254;
    case 34u: goto L_08920280;
    case 35u: goto L_08920290;
    case 36u: goto L_089202B4;
    case 37u: goto L_089202C4;
    case 38u: goto L_089202E4;
    case 39u: goto L_089202EC;
    case 40u: goto L_089202F4;
    case 41u: goto L_08920300;
    case 42u: goto L_0892030C;
    case 43u: goto L_08920328;
    case 44u: goto L_08920334;
    case 45u: goto L_0892033C;
    case 46u: goto L_08920348;
    case 47u: goto L_08920350;
    case 48u: goto L_08920368;
    case 49u: goto L_0892036C;
    case 50u: goto L_08920370;
    case 51u: goto L_08920384;
    case 52u: goto L_08920390;
    case 53u: goto L_0892039C;
    case 54u: goto L_089203AC;
    case 55u: goto L_089203DC;
    case 56u: goto L_08920404;
    case 57u: goto L_08920414;
    case 58u: goto L_08920434;
    case 59u: goto L_08920438;
    case 60u: goto L_0892043C;
    case 61u: goto L_08920448;
    case 62u: goto L_08920454;
    case 63u: goto L_08920468;
    case 64u: goto L_0892046C;
    case 65u: goto L_08920474;
    case 66u: goto L_08920484;
    case 67u: goto L_0892048C;
    case 68u: goto L_08920494;
    case 69u: goto L_08920498;
    case 70u: goto L_0892049C;
    case 71u: goto L_089204A8;
    case 72u: goto L_089204DC;
    case 73u: goto L_089204FC;
    case 74u: goto L_08920514;
    case 75u: goto L_08920518;
    case 76u: goto L_08920524;
    case 77u: goto L_08920530;
    case 78u: goto L_08920538;
    case 79u: goto L_08920540;
    case 80u: goto L_08920550;
    case 81u: goto L_08920558;
    case 82u: goto L_08920560;
    case 83u: goto L_08920570;
    case 84u: goto L_089205A0;
    case 85u: goto L_089205F8;
    case 86u: goto L_08920614;
    case 87u: goto L_08920640;
    case 88u: goto L_08920650;
    case 89u: goto L_08920674;
    case 90u: goto L_08920684;
    case 91u: goto L_089206A4;
    case 92u: goto L_089206AC;
    case 93u: goto L_089206B4;
    case 94u: goto L_089206C0;
    case 95u: goto L_089206CC;
    case 96u: goto L_089206E8;
    case 97u: goto L_089206F4;
    case 98u: goto L_089206FC;
    case 99u: goto L_08920708;
    case 100u: goto L_08920710;
    case 101u: goto L_08920728;
    case 102u: goto L_0892072C;
    case 103u: goto L_08920730;
    case 104u: goto L_08920744;
    case 105u: goto L_08920750;
    case 106u: goto L_0892075C;
    case 107u: goto L_0892076C;
    case 108u: goto L_0892079C;
    case 109u: goto L_089207C4;
    case 110u: goto L_089207D4;
    case 111u: goto L_089207F4;
    case 112u: goto L_089207F8;
    case 113u: goto L_089207FC;
    case 114u: goto L_08920808;
    case 115u: goto L_08920814;
    case 116u: goto L_08920828;
    case 117u: goto L_0892082C;
    case 118u: goto L_08920834;
    case 119u: goto L_08920844;
    case 120u: goto L_0892084C;
    case 121u: goto L_08920854;
    case 122u: goto L_08920858;
    case 123u: goto L_0892085C;
    case 124u: goto L_08920868;
    case 125u: goto L_0892089C;
    case 126u: goto L_089208BC;
    case 127u: goto L_089208D4;
    case 128u: goto L_089208D8;
    case 129u: goto L_089208E4;
    case 130u: goto L_089208F0;
    case 131u: goto L_089208F8;
    case 132u: goto L_08920900;
    case 133u: goto L_08920910;
    case 134u: goto L_08920918;
    case 135u: goto L_08920920;
    case 136u: goto L_08920930;
    case 137u: goto L_08920960;
    case 138u: goto L_089209B8;
    case 139u: goto L_089209D4;
    case 140u: goto L_08920A00;
    case 141u: goto L_08920A10;
    case 142u: goto L_08920A34;
    case 143u: goto L_08920A44;
    case 144u: goto L_08920A64;
    case 145u: goto L_08920A6C;
    case 146u: goto L_08920A74;
    case 147u: goto L_08920A80;
    case 148u: goto L_08920A8C;
    case 149u: goto L_08920AA8;
    case 150u: goto L_08920AB4;
    case 151u: goto L_08920ABC;
    case 152u: goto L_08920AC8;
    case 153u: goto L_08920AD0;
    case 154u: goto L_08920AE8;
    case 155u: goto L_08920AEC;
    case 156u: goto L_08920AF0;
    case 157u: goto L_08920B04;
    case 158u: goto L_08920B10;
    case 159u: goto L_08920B1C;
    case 160u: goto L_08920B2C;
    case 161u: goto L_08920B5C;
    case 162u: goto L_08920B84;
    case 163u: goto L_08920B94;
    case 164u: goto L_08920BB4;
    case 165u: goto L_08920BB8;
    case 166u: goto L_08920BBC;
    case 167u: goto L_08920BC8;
    case 168u: goto L_08920BD4;
    case 169u: goto L_08920BE8;
    case 170u: goto L_08920BEC;
    case 171u: goto L_08920BF4;
    case 172u: goto L_08920C04;
    case 173u: goto L_08920C0C;
    case 174u: goto L_08920C14;
    case 175u: goto L_08920C18;
    case 176u: goto L_08920C1C;
    case 177u: goto L_08920C28;
    case 178u: goto L_08920C5C;
    case 179u: goto L_08920C7C;
    case 180u: goto L_08920C94;
    case 181u: goto L_08920C98;
    case 182u: goto L_08920CA4;
    case 183u: goto L_08920CB0;
    case 184u: goto L_08920CB8;
    case 185u: goto L_08920CC0;
    case 186u: goto L_08920CD0;
    case 187u: goto L_08920CD8;
    case 188u: goto L_08920CE0;
    case 189u: goto L_08920CF0;
    case 190u: goto L_08920D20;
    case 191u: goto L_08920D78;
    case 192u: goto L_08920D94;
    case 193u: goto L_08920DC0;
    case 194u: goto L_08920DD0;
    case 195u: goto L_08920DF4;
    case 196u: goto L_08920E04;
    case 197u: goto L_08920E24;
    case 198u: goto L_08920E2C;
    case 199u: goto L_08920E34;
    case 200u: goto L_08920E40;
    case 201u: goto L_08920E4C;
    case 202u: goto L_08920E68;
    case 203u: goto L_08920E74;
    case 204u: goto L_08920E7C;
    case 205u: goto L_08920E88;
    case 206u: goto L_08920E90;
    case 207u: goto L_08920EA8;
    case 208u: goto L_08920EAC;
    case 209u: goto L_08920EB0;
    case 210u: goto L_08920EC4;
    case 211u: goto L_08920ED0;
    case 212u: goto L_08920EDC;
    case 213u: goto L_08920EEC;
    case 214u: goto L_08920F1C;
    case 215u: goto L_08920F44;
    case 216u: goto L_08920F54;
    case 217u: goto L_08920F74;
    case 218u: goto L_08920F78;
    case 219u: goto L_08920F7C;
    case 220u: goto L_08920F88;
    case 221u: goto L_08920F94;
    case 222u: goto L_08920FA8;
    case 223u: goto L_08920FAC;
    case 224u: goto L_08920FB4;
    case 225u: goto L_08920FC4;
    case 226u: goto L_08920FCC;
    case 227u: goto L_08920FD4;
    case 228u: goto L_08920FD8;
    case 229u: goto L_08920FDC;
    case 230u: goto L_08920FE8;
    case 231u: goto L_0892101C;
    case 232u: goto L_0892103C;
    case 233u: goto L_08921054;
    case 234u: goto L_08921058;
    case 235u: goto L_08921064;
    case 236u: goto L_08921070;
    case 237u: goto L_08921078;
    case 238u: goto L_08921080;
    case 239u: goto L_08921090;
    case 240u: goto L_08921098;
    case 241u: goto L_089210A0;
    case 242u: goto L_089210B0;
    case 243u: goto L_089210E0;
    case 244u: goto L_08921124;
    case 245u: goto L_0892112C;
    case 246u: goto L_0892113C;
    case 247u: goto L_0892114C;
    case 248u: goto L_08921170;
    case 249u: goto L_0892117C;
    case 250u: goto L_089211CC;
    case 251u: goto L_089211F8;
    case 252u: goto L_08921224;
    case 253u: goto L_08921238;
    case 254u: goto L_08921248;
    case 255u: goto L_0892126C;
    case 256u: goto L_08921278;
    case 257u: goto L_089212C8;
    case 258u: goto L_089212F4;
    case 259u: goto L_08921320;
    case 260u: goto L_08921338;
    case 261u: goto L_08921348;
    case 262u: goto L_08921358;
    case 263u: goto L_08921368;
    case 264u: goto L_08921378;
    case 265u: goto L_08921388;
    case 266u: goto L_08921398;
    case 267u: goto L_089213A8;
    case 268u: goto L_089213B8;
    case 269u: goto L_089213C0;
    case 270u: goto L_089213F0;
    case 271u: goto L_08921430;
    case 272u: goto L_08921440;
    case 273u: goto L_08921448;
    case 274u: goto L_08921458;
    case 275u: goto L_08921468;
    case 276u: goto L_0892148C;
    case 277u: goto L_08921498;
    case 278u: goto L_089214E8;
    case 279u: goto L_08921514;
    case 280u: goto L_08921540;
    case 281u: goto L_08921550;
    case 282u: goto L_08921558;
    case 283u: goto L_08921568;
    case 284u: goto L_0892158C;
    case 285u: goto L_08921598;
    case 286u: goto L_089215E8;
    case 287u: goto L_08921614;
    case 288u: goto L_08921640;
    case 289u: goto L_08921658;
    case 290u: goto L_08921668;
    case 291u: goto L_08921678;
    case 292u: goto L_08921688;
    case 293u: goto L_08921698;
    case 294u: goto L_089216A8;
    case 295u: goto L_089216B8;
    case 296u: goto L_089216C8;
    case 297u: goto L_089216D8;
    case 298u: goto L_089216E0;
    case 299u: goto L_08921710;
    case 300u: goto L_08921754;
    case 301u: goto L_0892175C;
    case 302u: goto L_0892176C;
    case 303u: goto L_0892177C;
    case 304u: goto L_089217A0;
    case 305u: goto L_089217AC;
    case 306u: goto L_089217FC;
    case 307u: goto L_08921828;
    case 308u: goto L_08921854;
    case 309u: goto L_08921864;
    case 310u: goto L_08921878;
    case 311u: goto L_08921880;
    case 312u: goto L_08921890;
    case 313u: goto L_089218B4;
    case 314u: goto L_089218C0;
    case 315u: goto L_08921910;
    case 316u: goto L_0892193C;
    case 317u: goto L_08921968;
    case 318u: goto L_08921984;
    case 319u: goto L_08921994;
    case 320u: goto L_089219A4;
    case 321u: goto L_089219B4;
    case 322u: goto L_089219C4;
    case 323u: goto L_089219D4;
    case 324u: goto L_089219E4;
    case 325u: goto L_089219F4;
    case 326u: goto L_08921A04;
    case 327u: goto L_08921A0C;
    case 328u: goto L_08921A3C;
    case 329u: goto L_08921A8C;
    case 330u: goto L_08921AA4;
    case 331u: goto L_08921AB0;
    case 332u: goto L_08921AC4;
    case 333u: goto L_08921ACC;
    case 334u: goto L_08921AD0;
    case 335u: goto L_08921AD8;
    case 336u: goto L_08921AE0;
    case 337u: goto L_08921AEC;
    case 338u: goto L_08921AF0;
    case 339u: goto L_08921AF8;
    case 340u: goto L_08921B10;
    case 341u: goto L_08921B3C;
    case 342u: goto L_08921B64;
    case 343u: goto L_08921B74;
    case 344u: goto L_08921B94;
    case 345u: goto L_08921B9C;
    case 346u: goto L_08921BB4;
    case 347u: goto L_08921BC0;
    case 348u: goto L_08921BD4;
    case 349u: goto L_08921BE0;
    case 350u: goto L_08921BE8;
    case 351u: goto L_08921BF0;
    case 352u: goto L_08921BF8;
    case 353u: goto L_08921C04;
    case 354u: goto L_08921C10;
    case 355u: goto L_08921C14;
    case 356u: goto L_08921C28;
    case 357u: goto L_08921C30;
    case 358u: goto L_08921C40;
    case 359u: goto L_08921C48;
    case 360u: goto L_08921C5C;
    case 361u: goto L_08921C90;
    case 362u: goto L_08921CB8;
    case 363u: goto L_08921CC8;
    case 364u: goto L_08921CE8;
    case 365u: goto L_08921CF0;
    case 366u: goto L_08921D00;
    case 367u: goto L_08921D18;
    case 368u: goto L_08921D2C;
    case 369u: goto L_08921D3C;
    case 370u: goto L_08921D44;
    case 371u: goto L_08921D50;
    case 372u: goto L_08921D58;
    case 373u: goto L_08921D64;
    case 374u: goto L_08921D70;
    case 375u: goto L_08921D78;
    case 376u: goto L_08921D84;
    case 377u: goto L_08921D8C;
    case 378u: goto L_08921D9C;
    case 379u: goto L_08921DB4;
    case 380u: goto L_08921DB8;
    case 381u: goto L_08921DBC;
    case 382u: goto L_08921DD4;
    case 383u: goto L_08921DE4;
    case 384u: goto L_08921DF8;
    case 385u: goto L_08921E24;
    case 386u: goto L_08921E4C;
    case 387u: goto L_08921E5C;
    case 388u: goto L_08921E7C;
    case 389u: goto L_08921EB8;
    case 390u: goto L_08921ECC;
    case 391u: goto L_08921ED8;
    case 392u: goto L_08921EE8;
    case 393u: goto L_08921EEC;
    case 394u: goto L_08921EF4;
    case 395u: goto L_08921F08;
    case 396u: goto L_08921F10;
    case 397u: goto L_08921F18;
    case 398u: goto L_08921F1C;
    case 399u: goto L_08921F20;
    case 400u: goto L_08921F2C;
    case 401u: goto L_08921F38;
    case 402u: goto L_08921F70;
    case 403u: goto L_08921F90;
    case 404u: goto L_08921F94;
    case 405u: goto L_08921FA8;
    case 406u: goto L_08921FB8;
    case 407u: goto L_08921FC0;
    case 408u: goto L_08921FC8;
    case 409u: goto L_08921FD8;
    case 410u: goto L_08921FE0;
    case 411u: goto L_08921FE8;
    case 412u: goto L_08921FF8;
    case 413u: goto L_08922000;
    case 414u: goto L_0892201C;
    case 415u: goto L_08922048;
    case 416u: goto L_08922058;
    case 417u: goto L_0892207C;
    case 418u: goto L_089220AC;
    case 419u: goto L_08922104;
    case 420u: goto L_0892211C;
    case 421u: goto L_08922128;
    case 422u: goto L_08922140;
    case 423u: goto L_08922148;
    case 424u: goto L_0892214C;
    case 425u: goto L_08922154;
    case 426u: goto L_0892215C;
    case 427u: goto L_08922168;
    case 428u: goto L_0892216C;
    case 429u: goto L_08922174;
    case 430u: goto L_0892218C;
    case 431u: goto L_089221C0;
    case 432u: goto L_089221F4;
    case 433u: goto L_08922204;
    case 434u: goto L_08922224;
    case 435u: goto L_08922228;
    case 436u: goto L_0892222C;
    case 437u: goto L_0892223C;
    case 438u: goto L_08922248;
    case 439u: goto L_08922260;
    case 440u: goto L_0892226C;
    case 441u: goto L_08922274;
    case 442u: goto L_0892227C;
    case 443u: goto L_08922284;
    case 444u: goto L_08922298;
    case 445u: goto L_089222A4;
    case 446u: goto L_089222B8;
    case 447u: goto L_089222C0;
    case 448u: goto L_089222D0;
    case 449u: goto L_089222DC;
    case 450u: goto L_089222F0;
    case 451u: goto L_08922328;
    case 452u: goto L_08922358;
    case 453u: goto L_08922368;
    case 454u: goto L_08922388;
    case 455u: goto L_0892238C;
    case 456u: goto L_089223A0;
    case 457u: goto L_089223B8;
    case 458u: goto L_089223CC;
    case 459u: goto L_089223DC;
    case 460u: goto L_089223E4;
    case 461u: goto L_089223F0;
    case 462u: goto L_089223F8;
    case 463u: goto L_0892240C;
    case 464u: goto L_08922418;
    case 465u: goto L_08922420;
    case 466u: goto L_0892242C;
    case 467u: goto L_08922434;
    case 468u: goto L_08922444;
    case 469u: goto L_08922458;
    case 470u: goto L_0892246C;
    case 471u: goto L_0892247C;
    case 472u: goto L_0892248C;
    case 473u: goto L_08922498;
    case 474u: goto L_0892249C;
    case 475u: goto L_089224A0;
    case 476u: goto L_089224B0;
    case 477u: goto L_089224C4;
    case 478u: goto L_089224D4;
    case 479u: goto L_089224E4;
    case 480u: goto L_089224F0;
    case 481u: goto L_08922500;
    case 482u: goto L_08922504;
    case 483u: goto L_08922508;
    case 484u: goto L_08922520;
    case 485u: goto L_08922530;
    case 486u: goto L_08922544;
    case 487u: goto L_08922574;
    case 488u: goto L_089225AC;
    case 489u: goto L_089225B8;
    case 490u: goto L_089225D8;
    case 491u: goto L_0892260C;
    case 492u: goto L_08922620;
    case 493u: goto L_08922634;
    case 494u: goto L_08922644;
    case 495u: goto L_08922648;
    case 496u: goto L_08922650;
    case 497u: goto L_08922664;
    case 498u: goto L_08922678;
    case 499u: goto L_08922688;
    case 500u: goto L_08922698;
    case 501u: goto L_089226A4;
    case 502u: goto L_089226A8;
    case 503u: goto L_089226AC;
    case 504u: goto L_089226BC;
    case 505u: goto L_089226D0;
    case 506u: goto L_089226E0;
    case 507u: goto L_089226F0;
    case 508u: goto L_089226FC;
    case 509u: goto L_0892270C;
    case 510u: goto L_0892271C;
    case 511u: goto L_08922724;
    case 512u: goto L_08922728;
    case 513u: goto L_0892272C;
    case 514u: goto L_08922738;
    case 515u: goto L_08922744;
    case 516u: goto L_08922784;
    case 517u: goto L_089227A4;
    case 518u: goto L_089227A8;
    case 519u: goto L_089227BC;
    case 520u: goto L_089227C0;
    case 521u: goto L_089227CC;
    case 522u: goto L_089227D4;
    case 523u: goto L_089227DC;
    case 524u: goto L_089227F4;
    case 525u: goto L_08922808;
    case 526u: goto L_08922818;
    case 527u: goto L_08922828;
    case 528u: goto L_08922834;
    case 529u: goto L_08922838;
    case 530u: goto L_0892283C;
    case 531u: goto L_0892284C;
    case 532u: goto L_08922860;
    case 533u: goto L_08922870;
    case 534u: goto L_08922880;
    case 535u: goto L_0892288C;
    case 536u: goto L_0892289C;
    case 537u: goto L_089228A4;
    case 538u: goto L_089228A8;
    case 539u: goto L_089228B8;
    case 540u: goto L_089228C0;
    case 541u: goto L_089228E0;
    case 542u: goto L_08922914;
    case 543u: goto L_08922924;
    case 544u: goto L_08922948;
    case 545u: goto L_08922980;
    case 546u: goto L_089229D0;
    case 547u: goto L_089229E8;
    case 548u: goto L_089229F4;
    case 549u: goto L_08922A08;
    case 550u: goto L_08922A10;
    case 551u: goto L_08922A14;
    case 552u: goto L_08922A1C;
    case 553u: goto L_08922A24;
    case 554u: goto L_08922A30;
    case 555u: goto L_08922A34;
    case 556u: goto L_08922A3C;
    case 557u: goto L_08922A54;
    case 558u: goto L_08922A80;
    case 559u: goto L_08922AA8;
    case 560u: goto L_08922AB8;
    case 561u: goto L_08922AD8;
    case 562u: goto L_08922AE0;
    case 563u: goto L_08922AF8;
    case 564u: goto L_08922B04;
    case 565u: goto L_08922B18;
    case 566u: goto L_08922B24;
    case 567u: goto L_08922B2C;
    case 568u: goto L_08922B34;
    case 569u: goto L_08922B3C;
    case 570u: goto L_08922B48;
    case 571u: goto L_08922B54;
    case 572u: goto L_08922B58;
    case 573u: goto L_08922B6C;
    case 574u: goto L_08922B74;
    case 575u: goto L_08922B84;
    case 576u: goto L_08922B8C;
    case 577u: goto L_08922BA0;
    case 578u: goto L_08922BD4;
    case 579u: goto L_08922BFC;
    case 580u: goto L_08922C0C;
    case 581u: goto L_08922C2C;
    case 582u: goto L_08922C34;
    case 583u: goto L_08922C44;
    case 584u: goto L_08922C5C;
    case 585u: goto L_08922C70;
    case 586u: goto L_08922C80;
    case 587u: goto L_08922C88;
    case 588u: goto L_08922C94;
    case 589u: goto L_08922C9C;
    case 590u: goto L_08922CA8;
    case 591u: goto L_08922CB4;
    case 592u: goto L_08922CBC;
    case 593u: goto L_08922CC8;
    case 594u: goto L_08922CD0;
    case 595u: goto L_08922CE0;
    case 596u: goto L_08922CF8;
    case 597u: goto L_08922CFC;
    case 598u: goto L_08922D00;
    case 599u: goto L_08922D18;
    case 600u: goto L_08922D28;
    case 601u: goto L_08922D3C;
    case 602u: goto L_08922D68;
    case 603u: goto L_08922D90;
    case 604u: goto L_08922DA0;
    case 605u: goto L_08922DC0;
    case 606u: goto L_08922DFC;
    case 607u: goto L_08922E10;
    case 608u: goto L_08922E1C;
    case 609u: goto L_08922E2C;
    case 610u: goto L_08922E30;
    case 611u: goto L_08922E38;
    case 612u: goto L_08922E4C;
    case 613u: goto L_08922E54;
    case 614u: goto L_08922E5C;
    case 615u: goto L_08922E60;
    case 616u: goto L_08922E64;
    case 617u: goto L_08922E70;
    case 618u: goto L_08922E7C;
    case 619u: goto L_08922EB4;
    case 620u: goto L_08922ED4;
    case 621u: goto L_08922ED8;
    case 622u: goto L_08922EEC;
    case 623u: goto L_08922EFC;
    case 624u: goto L_08922F04;
    case 625u: goto L_08922F0C;
    case 626u: goto L_08922F1C;
    case 627u: goto L_08922F24;
    case 628u: goto L_08922F2C;
    case 629u: goto L_08922F3C;
    case 630u: goto L_08922F44;
    case 631u: goto L_08922F60;
    case 632u: goto L_08922F8C;
    case 633u: goto L_08922F9C;
    case 634u: goto L_08922FC0;
    case 635u: goto L_08922FF0;
    case 636u: goto L_08923040;
    case 637u: goto L_0892305C;
    case 638u: goto L_08923068;
    case 639u: goto L_08923080;
    case 640u: goto L_08923088;
    case 641u: goto L_0892308C;
    case 642u: goto L_08923094;
    case 643u: goto L_0892309C;
    case 644u: goto L_089230A8;
    case 645u: goto L_089230AC;
    case 646u: goto L_089230B4;
    case 647u: goto L_089230CC;
    case 648u: goto L_08923108;
    case 649u: goto L_0892313C;
    case 650u: goto L_0892314C;
    case 651u: goto L_08923170;
    case 652u: goto L_08923174;
    case 653u: goto L_08923178;
    case 654u: goto L_08923190;
    case 655u: goto L_0892319C;
    case 656u: goto L_089231B4;
    case 657u: goto L_089231C0;
    case 658u: goto L_089231C8;
    case 659u: goto L_089231D0;
    case 660u: goto L_089231D8;
    case 661u: goto L_089231EC;
    case 662u: goto L_089231F4;
    case 663u: goto L_08923204;
    case 664u: goto L_0892320C;
    case 665u: goto L_0892321C;
    case 666u: goto L_08923224;
    case 667u: goto L_0892323C;
    case 668u: goto L_0892327C;
    case 669u: goto L_089232AC;
    case 670u: goto L_089232BC;
    case 671u: goto L_089232E0;
    case 672u: goto L_089232E4;
    case 673u: goto L_089232F0;
    case 674u: goto L_08923300;
    case 675u: goto L_08923318;
    case 676u: goto L_0892332C;
    case 677u: goto L_0892333C;
    case 678u: goto L_08923344;
    case 679u: goto L_08923350;
    case 680u: goto L_08923358;
    case 681u: goto L_0892336C;
    case 682u: goto L_08923378;
    case 683u: goto L_08923380;
    case 684u: goto L_0892338C;
    case 685u: goto L_08923394;
    case 686u: goto L_089233A4;
    case 687u: goto L_089233B8;
    case 688u: goto L_089233BC;
    case 689u: goto L_089233C0;
    case 690u: goto L_089233D8;
    case 691u: goto L_089233EC;
    case 692u: goto L_08923400;
    case 693u: goto L_0892343C;
    case 694u: goto L_08923470;
    case 695u: goto L_08923480;
    case 696u: goto L_089234A4;
    case 697u: goto L_089234A8;
    case 698u: goto L_089234DC;
    case 699u: goto L_089234F0;
    case 700u: goto L_08923508;
    case 701u: goto L_08923518;
    case 702u: goto L_08923520;
    case 703u: goto L_08923528;
    case 704u: goto L_0892353C;
    case 705u: goto L_08923544;
    case 706u: goto L_0892354C;
    case 707u: goto L_08923560;
    case 708u: goto L_08923568;
    case 709u: goto L_08923570;
    case 710u: goto L_08923574;
    case 711u: goto L_08923578;
    case 712u: goto L_08923588;
    case 713u: goto L_08923594;
    case 714u: goto L_089235DC;
    case 715u: goto L_089235FC;
    case 716u: goto L_08923600;
    case 717u: goto L_08923618;
    case 718u: goto L_0892361C;
    case 719u: goto L_0892362C;
    case 720u: goto L_08923634;
    case 721u: goto L_0892363C;
    case 722u: goto L_0892364C;
    case 723u: goto L_0892365C;
    case 724u: goto L_08923664;
    case 725u: goto L_0892366C;
    case 726u: goto L_08923674;
    case 727u: goto L_08923688;
    case 728u: goto L_08923690;
    case 729u: goto L_089236B0;
    case 730u: goto L_089236EC;
    case 731u: goto L_089236FC;
    case 732u: goto L_08923728;
    case 733u: goto L_08923758;
    case 734u: goto L_089237A8;
    case 735u: goto L_089237C0;
    case 736u: goto L_089237CC;
    case 737u: goto L_089237E0;
    case 738u: goto L_089237E8;
    case 739u: goto L_089237EC;
    case 740u: goto L_089237F4;
    case 741u: goto L_089237FC;
    case 742u: goto L_08923808;
    case 743u: goto L_0892380C;
    case 744u: goto L_08923814;
    case 745u: goto L_0892382C;
    case 746u: goto L_08923858;
    case 747u: goto L_08923880;
    case 748u: goto L_08923890;
    case 749u: goto L_089238B0;
    case 750u: goto L_089238B8;
    case 751u: goto L_089238D0;
    case 752u: goto L_089238DC;
    case 753u: goto L_089238F0;
    case 754u: goto L_089238FC;
    case 755u: goto L_08923904;
    case 756u: goto L_0892390C;
    case 757u: goto L_08923914;
    case 758u: goto L_08923920;
    case 759u: goto L_0892392C;
    case 760u: goto L_08923930;
    case 761u: goto L_08923944;
    case 762u: goto L_0892394C;
    case 763u: goto L_0892395C;
    case 764u: goto L_08923964;
    case 765u: goto L_08923978;
    case 766u: goto L_089239AC;
    case 767u: goto L_089239D4;
    case 768u: goto L_089239E4;
    case 769u: goto L_08923A04;
    case 770u: goto L_08923A0C;
    case 771u: goto L_08923A1C;
    case 772u: goto L_08923A34;
    case 773u: goto L_08923A48;
    case 774u: goto L_08923A58;
    case 775u: goto L_08923A60;
    case 776u: goto L_08923A6C;
    case 777u: goto L_08923A74;
    case 778u: goto L_08923A80;
    case 779u: goto L_08923A8C;
    case 780u: goto L_08923A94;
    case 781u: goto L_08923AA0;
    case 782u: goto L_08923AA8;
    case 783u: goto L_08923AB8;
    case 784u: goto L_08923AD0;
    case 785u: goto L_08923AD4;
    case 786u: goto L_08923AD8;
    case 787u: goto L_08923AF0;
    case 788u: goto L_08923B00;
    case 789u: goto L_08923B14;
    case 790u: goto L_08923B40;
    case 791u: goto L_08923B68;
    case 792u: goto L_08923B78;
    case 793u: goto L_08923B98;
    case 794u: goto L_08923BD4;
    case 795u: goto L_08923BE8;
    case 796u: goto L_08923BF4;
    case 797u: goto L_08923C04;
    case 798u: goto L_08923C08;
    case 799u: goto L_08923C10;
    case 800u: goto L_08923C24;
    case 801u: goto L_08923C2C;
    case 802u: goto L_08923C34;
    case 803u: goto L_08923C38;
    case 804u: goto L_08923C3C;
    case 805u: goto L_08923C48;
    case 806u: goto L_08923C54;
    case 807u: goto L_08923C8C;
    case 808u: goto L_08923CAC;
    case 809u: goto L_08923CB0;
    case 810u: goto L_08923CC4;
    case 811u: goto L_08923CD4;
    case 812u: goto L_08923CDC;
    case 813u: goto L_08923CE4;
    case 814u: goto L_08923CF4;
    case 815u: goto L_08923CFC;
    case 816u: goto L_08923D04;
    case 817u: goto L_08923D14;
    case 818u: goto L_08923D1C;
    case 819u: goto L_08923D38;
    case 820u: goto L_08923D64;
    case 821u: goto L_08923D74;
    case 822u: goto L_08923D98;
    case 823u: goto L_08923DC8;
    case 824u: goto L_08923E14;
    case 825u: goto L_08923E2C;
    case 826u: goto L_08923E38;
    case 827u: goto L_08923E4C;
    case 828u: goto L_08923E54;
    case 829u: goto L_08923E58;
    case 830u: goto L_08923E60;
    case 831u: goto L_08923E68;
    case 832u: goto L_08923E74;
    case 833u: goto L_08923E78;
    case 834u: goto L_08923E80;
    case 835u: goto L_08923E90;
    case 836u: goto L_08923EBC;
    case 837u: goto L_08923EE4;
    case 838u: goto L_08923EF4;
    case 839u: goto L_08923F14;
    case 840u: goto L_08923F2C;
    case 841u: goto L_08923F38;
    case 842u: goto L_08923F4C;
    case 843u: goto L_08923F58;
    case 844u: goto L_08923F60;
    case 845u: goto L_08923F68;
    case 846u: goto L_08923F70;
    case 847u: goto L_08923F7C;
    case 848u: goto L_08923F84;
    case 849u: goto L_08923F88;
    case 850u: goto L_08923F98;
    case 851u: goto L_08923FA0;
    case 852u: goto L_08923FB0;
    case 853u: goto L_08923FB8;
    case 854u: goto L_08923FC8;
    case 855u: goto L_08923FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08920000:
    ctx.gpr[17] = (ctx.gpr[22] << 2u);
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(26));
    ctx.gpr[20] = (ctx.gpr[21] + static_cast<std::uint32_t>(500));
    ctx.gpr[17] = (ctx.gpr[29] + ctx.gpr[17]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(58));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(512));
    goto L_08920018;
L_08920018:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(352)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(489)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(348), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(488), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08920040u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08920040u) goto L_08920040;
    return;
L_08920040:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08920050u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08920050u) goto L_08920050;
    return;
L_08920050:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08920018;
      }
      goto L_08920070;
    }
L_08920070:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (0u | 5u);
      if (branch_taken) {
          goto L_08920078;
      }
      goto L_08920078;
    }
L_08920078:
    ctx.gpr[17] = (0u | 0u);
    goto L_0892007C;
L_0892007C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08920158;
      }
      goto L_08920088;
    }
L_08920088:
    ctx.gpr[18] = (ctx.gpr[29] | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(26));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(500));
    goto L_08920094;
L_08920094:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(348)));
      if (branch_taken) {
          goto L_089200E8;
      }
      goto L_089200A8;
    }
L_089200A8:
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_089200AC;
L_089200AC:
    if (ctx.gpr[17] == ctx.gpr[4]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_089200DC;
    }
    goto L_089200B4;
L_089200B4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(348)));
    ctx.gpr[8] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_089200C4;
    }
    goto L_089200C4;
L_089200C4:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
      if (branch_taken) {
          goto L_089200D8;
      }
      goto L_089200CC;
    }
L_089200CC:
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_089200DC;
    }
    goto L_089200D4;
L_089200D4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089200D8;
L_089200D8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089200DC;
L_089200DC:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089200AC;
      }
      goto L_089200E8;
    }
L_089200E8:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(488)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2748), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[21]);
    ctx.gpr[6] = (ctx.gpr[16] << 5u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2888), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2426));
    ctx.gpr[31] = (0x0892011Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0892011Cu) goto L_0892011C;
    return;
L_0892011C:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2900));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0892013Cu);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0892013Cu) goto L_0892013C;
    return;
L_0892013C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08920094;
      }
      goto L_08920154;
    }
L_08920154:
    ctx.gpr[5] = (0u | 0u);
    goto L_08920158;
L_08920158:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089201B0;
      }
      goto L_08920164;
    }
L_08920164:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    goto L_08920170;
L_08920170:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_08920180;
      }
      goto L_08920178;
    }
L_08920178:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2416), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089201A0;
      }
      goto L_08920180;
    }
L_08920180:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(2748)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(2744)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[11];
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2415)));
      if (branch_taken) {
          goto L_08920198;
      }
      goto L_08920190;
    }
L_08920190:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2416), static_cast<std::uint8_t>(ctx.gpr[8]));
      if (branch_taken) {
          goto L_089201A0;
      }
      goto L_08920198;
    }
L_08920198:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2416), static_cast<std::uint8_t>(ctx.gpr[8]));
    goto L_089201A0;
L_089201A0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08920170;
      }
      goto L_089201B0;
    }
L_089201B0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(660)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(664)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(668)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089201E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-688));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(632), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(664), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(628), ctx.gpr[7]);
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(620), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(624), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(668), ctx.gpr[30]);
    ctx.gpr[30] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(636), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(672), ctx.gpr[31]);
    ctx.gpr[31] = (0x08920238u);
    ctx.gpr[6] = (0u | 604u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08920238u) goto L_08920238;
    return;
L_08920238:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    ctx.gpr[21] = (ctx.gpr[29] | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(26));
    ctx.gpr[19] = (ctx.gpr[23] + static_cast<std::uint32_t>(3030));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(500));
    ctx.gpr[17] = (ctx.gpr[23] + static_cast<std::uint32_t>(3504));
    goto L_08920254;
L_08920254:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[23]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3020)));
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[16]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3352)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3492)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(348), ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(488), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08920280u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08920280u) goto L_08920280;
    return;
L_08920280:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08920290u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08920290u) goto L_08920290;
    return;
L_08920290:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08920254;
      }
      goto L_089202B4;
    }
L_089202B4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(186));
    ctx.gpr[31] = (0x089202C4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x089202C4u) goto L_089202C4;
    return;
L_089202C4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(493), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(76));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089202E4u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089202E4u) goto L_089202E4;
    return;
L_089202E4:
    ctx.gpr[31] = (0x089202ECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 625u, 0x08843014u>(ctx, &aot_mem) && ctx.pc == 0x089202ECu) goto L_089202EC;
    return;
L_089202EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08920300;
      }
      goto L_089202F4;
    }
L_089202F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0892030C;
      }
      goto L_08920300;
    }
L_08920300:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[4]);
    goto L_0892030C;
L_0892030C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(26));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(500));
    ctx.gpr[17] = (ctx.gpr[29] | 0u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(186));
    goto L_08920328;
L_08920328:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08920334u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08920334u) goto L_08920334;
    return;
L_08920334:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_0892036C;
      }
      goto L_0892033C;
    }
L_0892033C:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08920348u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 543u, 0x08A9DEE8u>(ctx, &aot_mem) && ctx.pc == 0x08920348u) goto L_08920348;
    return;
L_08920348:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08920370;
    }
    goto L_08920350;
L_08920350:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(348)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
        goto L_08920368;
    }
    goto L_08920368;
L_08920368:
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    goto L_0892036C;
L_0892036C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08920370;
L_08920370:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08920328;
      }
      goto L_08920384;
    }
L_08920384:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[4];
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0892043C;
      }
      goto L_08920390;
    }
L_08920390:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[4];
    ctx.gpr[30] = (0u | 5u);
      if (branch_taken) {
          goto L_08920438;
      }
      goto L_0892039C;
    }
L_0892039C:
    ctx.gpr[16] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (0u | 5u);
      if (branch_taken) {
          goto L_08920438;
      }
      goto L_089203AC;
    }
L_089203AC:
    ctx.gpr[4] = (ctx.gpr[22] << 5u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[22]);
    ctx.gpr[19] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[21] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[22] << 2u);
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(26));
    ctx.gpr[20] = (ctx.gpr[21] + static_cast<std::uint32_t>(500));
    ctx.gpr[17] = (ctx.gpr[29] + ctx.gpr[17]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(58));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(512));
    goto L_089203DC;
L_089203DC:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(352)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(489)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(348), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(488), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08920404u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08920404u) goto L_08920404;
    return;
L_08920404:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08920414u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08920414u) goto L_08920414;
    return;
L_08920414:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089203DC;
      }
      goto L_08920434;
    }
L_08920434:
    ctx.gpr[30] = (0u | 5u);
    goto L_08920438;
L_08920438:
    ctx.gpr[17] = (0u | 0u);
    goto L_0892043C;
L_0892043C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08920518;
      }
      goto L_08920448;
    }
L_08920448:
    ctx.gpr[18] = (ctx.gpr[29] | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(26));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(500));
    goto L_08920454;
L_08920454:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(348)));
      if (branch_taken) {
          goto L_089204A8;
      }
      goto L_08920468;
    }
L_08920468:
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    goto L_0892046C;
L_0892046C:
    if (ctx.gpr[17] == ctx.gpr[4]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_0892049C;
    }
    goto L_08920474;
L_08920474:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(348)));
    ctx.gpr[8] = (ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08920484;
    }
    goto L_08920484;
L_08920484:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08920498;
      }
      goto L_0892048C;
    }
L_0892048C:
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_0892049C;
    }
    goto L_08920494;
L_08920494:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08920498;
L_08920498:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_0892049C;
L_0892049C:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0892046C;
      }
      goto L_089204A8;
    }
L_089204A8:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(620)));
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(488)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3352), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[16] << 5u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3492), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3030));
    ctx.gpr[31] = (0x089204DCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x089204DCu) goto L_089204DC;
    return;
L_089204DC:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3504));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089204FCu);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089204FCu) goto L_089204FC;
    return;
L_089204FC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08920454;
      }
      goto L_08920514;
    }
L_08920514:
    ctx.gpr[4] = (0u | 0u);
    goto L_08920518;
L_08920518:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08920570;
      }
      goto L_08920524;
    }
L_08920524:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(620)));
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    goto L_08920530;
L_08920530:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_08920540;
      }
      goto L_08920538;
    }
L_08920538:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3020), static_cast<std::uint8_t>(ctx.gpr[9]));
      if (branch_taken) {
          goto L_08920560;
      }
      goto L_08920540;
    }
L_08920540:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(3352)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(3348)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[11];
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3019)));
      if (branch_taken) {
          goto L_08920558;
      }
      goto L_08920550;
    }
L_08920550:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3020), static_cast<std::uint8_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_08920560;
      }
      goto L_08920558;
    }
L_08920558:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3020), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_08920560;
L_08920560:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08920530;
      }
      goto L_08920570;
    }
L_08920570:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(660)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(664)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(668)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(672)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089205A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-688));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(632), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(664), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(628), ctx.gpr[7]);
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(620), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(624), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(668), ctx.gpr[30]);
    ctx.gpr[30] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(636), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(672), ctx.gpr[31]);
    ctx.gpr[31] = (0x089205F8u);
    ctx.gpr[6] = (0u | 604u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x089205F8u) goto L_089205F8;
    return;
L_089205F8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    ctx.gpr[21] = (ctx.gpr[29] | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(26));
    ctx.gpr[19] = (ctx.gpr[23] + static_cast<std::uint32_t>(3634));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(500));
    ctx.gpr[17] = (ctx.gpr[23] + static_cast<std::uint32_t>(4108));
    goto L_08920614;
L_08920614:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[23]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3624)));
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[16]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3956)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4096)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(348), ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(488), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08920640u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08920640u) goto L_08920640;
    return;
L_08920640:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08920650u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08920650u) goto L_08920650;
    return;
L_08920650:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08920614;
      }
      goto L_08920674;
    }
L_08920674:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(186));
    ctx.gpr[31] = (0x08920684u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08920684u) goto L_08920684;
    return;
L_08920684:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(493), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(76));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089206A4u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089206A4u) goto L_089206A4;
    return;
L_089206A4:
    ctx.gpr[31] = (0x089206ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 625u, 0x08843014u>(ctx, &aot_mem) && ctx.pc == 0x089206ACu) goto L_089206AC;
    return;
L_089206AC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089206C0;
      }
      goto L_089206B4;
    }
L_089206B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089206CC;
      }
      goto L_089206C0;
    }
L_089206C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(50)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[4]);
    goto L_089206CC;
L_089206CC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(26));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(500));
    ctx.gpr[17] = (ctx.gpr[29] | 0u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(186));
    goto L_089206E8;
L_089206E8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089206F4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x089206F4u) goto L_089206F4;
    return;
L_089206F4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_0892072C;
      }
      goto L_089206FC;
    }
L_089206FC:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08920708u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 543u, 0x08A9DEE8u>(ctx, &aot_mem) && ctx.pc == 0x08920708u) goto L_08920708;
    return;
L_08920708:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08920730;
    }
    goto L_08920710;
L_08920710:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(348)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
        goto L_08920728;
    }
    goto L_08920728;
L_08920728:
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    goto L_0892072C;
L_0892072C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08920730;
L_08920730:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089206E8;
      }
      goto L_08920744;
    }
L_08920744:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[4];
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089207FC;
      }
      goto L_08920750;
    }
L_08920750:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[4];
    ctx.gpr[30] = (0u | 5u);
      if (branch_taken) {
          goto L_089207F8;
      }
      goto L_0892075C;
    }
L_0892075C:
    ctx.gpr[16] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (0u | 5u);
      if (branch_taken) {
          goto L_089207F8;
      }
      goto L_0892076C;
    }
L_0892076C:
    ctx.gpr[4] = (ctx.gpr[22] << 5u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[22]);
    ctx.gpr[19] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[21] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[22] << 2u);
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(26));
    ctx.gpr[20] = (ctx.gpr[21] + static_cast<std::uint32_t>(500));
    ctx.gpr[17] = (ctx.gpr[29] + ctx.gpr[17]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(58));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(512));
    goto L_0892079C;
L_0892079C:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(352)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(489)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(348), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(488), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089207C4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x089207C4u) goto L_089207C4;
    return;
L_089207C4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089207D4u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089207D4u) goto L_089207D4;
    return;
L_089207D4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_0892079C;
      }
      goto L_089207F4;
    }
L_089207F4:
    ctx.gpr[30] = (0u | 5u);
    goto L_089207F8;
L_089207F8:
    ctx.gpr[17] = (0u | 0u);
    goto L_089207FC;
L_089207FC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089208D8;
      }
      goto L_08920808;
    }
L_08920808:
    ctx.gpr[18] = (ctx.gpr[29] | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(26));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(500));
    goto L_08920814;
L_08920814:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(348)));
      if (branch_taken) {
          goto L_08920868;
      }
      goto L_08920828;
    }
L_08920828:
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    goto L_0892082C;
L_0892082C:
    if (ctx.gpr[17] == ctx.gpr[4]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_0892085C;
    }
    goto L_08920834;
L_08920834:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(348)));
    ctx.gpr[8] = (ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08920844;
    }
    goto L_08920844;
L_08920844:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08920858;
      }
      goto L_0892084C;
    }
L_0892084C:
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_0892085C;
    }
    goto L_08920854;
L_08920854:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08920858;
L_08920858:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_0892085C;
L_0892085C:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0892082C;
      }
      goto L_08920868;
    }
L_08920868:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(620)));
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(488)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3956), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[16] << 5u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4096), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3634));
    ctx.gpr[31] = (0x0892089Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0892089Cu) goto L_0892089C;
    return;
L_0892089C:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4108));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089208BCu);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089208BCu) goto L_089208BC;
    return;
L_089208BC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08920814;
      }
      goto L_089208D4;
    }
L_089208D4:
    ctx.gpr[4] = (0u | 0u);
    goto L_089208D8;
L_089208D8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08920930;
      }
      goto L_089208E4;
    }
L_089208E4:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(620)));
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    goto L_089208F0;
L_089208F0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_08920900;
      }
      goto L_089208F8;
    }
L_089208F8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3624), static_cast<std::uint8_t>(ctx.gpr[9]));
      if (branch_taken) {
          goto L_08920920;
      }
      goto L_08920900;
    }
L_08920900:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(3956)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(3952)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[11];
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3623)));
      if (branch_taken) {
          goto L_08920918;
      }
      goto L_08920910;
    }
L_08920910:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3624), static_cast<std::uint8_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_08920920;
      }
      goto L_08920918;
    }
L_08920918:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3624), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_08920920;
L_08920920:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089208F0;
      }
      goto L_08920930;
    }
L_08920930:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(660)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(664)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(668)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(672)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08920960:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-688));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(632), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(664), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(628), ctx.gpr[7]);
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(620), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(624), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(668), ctx.gpr[30]);
    ctx.gpr[30] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(636), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(672), ctx.gpr[31]);
    ctx.gpr[31] = (0x089209B8u);
    ctx.gpr[6] = (0u | 604u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x089209B8u) goto L_089209B8;
    return;
L_089209B8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    ctx.gpr[21] = (ctx.gpr[29] | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(26));
    ctx.gpr[19] = (ctx.gpr[23] + static_cast<std::uint32_t>(4238));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(500));
    ctx.gpr[17] = (ctx.gpr[23] + static_cast<std::uint32_t>(4712));
    goto L_089209D4;
L_089209D4:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[23]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4228)));
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[16]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4560)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4700)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(348), ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(488), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08920A00u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08920A00u) goto L_08920A00;
    return;
L_08920A00:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08920A10u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08920A10u) goto L_08920A10;
    return;
L_08920A10:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089209D4;
      }
      goto L_08920A34;
    }
L_08920A34:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(186));
    ctx.gpr[31] = (0x08920A44u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08920A44u) goto L_08920A44;
    return;
L_08920A44:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(493), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(76));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08920A64u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08920A64u) goto L_08920A64;
    return;
L_08920A64:
    ctx.gpr[31] = (0x08920A6Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 625u, 0x08843014u>(ctx, &aot_mem) && ctx.pc == 0x08920A6Cu) goto L_08920A6C;
    return;
L_08920A6C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08920A80;
      }
      goto L_08920A74;
    }
L_08920A74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08920A8C;
      }
      goto L_08920A80;
    }
L_08920A80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[4]);
    goto L_08920A8C;
L_08920A8C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(26));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(500));
    ctx.gpr[17] = (ctx.gpr[29] | 0u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(186));
    goto L_08920AA8;
L_08920AA8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08920AB4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08920AB4u) goto L_08920AB4;
    return;
L_08920AB4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08920AEC;
      }
      goto L_08920ABC;
    }
L_08920ABC:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08920AC8u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 543u, 0x08A9DEE8u>(ctx, &aot_mem) && ctx.pc == 0x08920AC8u) goto L_08920AC8;
    return;
L_08920AC8:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08920AF0;
    }
    goto L_08920AD0;
L_08920AD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(348)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
        goto L_08920AE8;
    }
    goto L_08920AE8;
L_08920AE8:
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    goto L_08920AEC;
L_08920AEC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08920AF0;
L_08920AF0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08920AA8;
      }
      goto L_08920B04;
    }
L_08920B04:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[4];
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08920BBC;
      }
      goto L_08920B10;
    }
L_08920B10:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[4];
    ctx.gpr[30] = (0u | 5u);
      if (branch_taken) {
          goto L_08920BB8;
      }
      goto L_08920B1C;
    }
L_08920B1C:
    ctx.gpr[16] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (0u | 5u);
      if (branch_taken) {
          goto L_08920BB8;
      }
      goto L_08920B2C;
    }
L_08920B2C:
    ctx.gpr[4] = (ctx.gpr[22] << 5u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[22]);
    ctx.gpr[19] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[21] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[22] << 2u);
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(26));
    ctx.gpr[20] = (ctx.gpr[21] + static_cast<std::uint32_t>(500));
    ctx.gpr[17] = (ctx.gpr[29] + ctx.gpr[17]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(58));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(512));
    goto L_08920B5C;
L_08920B5C:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(352)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(489)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(348), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(488), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08920B84u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08920B84u) goto L_08920B84;
    return;
L_08920B84:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08920B94u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08920B94u) goto L_08920B94;
    return;
L_08920B94:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08920B5C;
      }
      goto L_08920BB4;
    }
L_08920BB4:
    ctx.gpr[30] = (0u | 5u);
    goto L_08920BB8;
L_08920BB8:
    ctx.gpr[17] = (0u | 0u);
    goto L_08920BBC;
L_08920BBC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08920C98;
      }
      goto L_08920BC8;
    }
L_08920BC8:
    ctx.gpr[18] = (ctx.gpr[29] | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(26));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(500));
    goto L_08920BD4;
L_08920BD4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(348)));
      if (branch_taken) {
          goto L_08920C28;
      }
      goto L_08920BE8;
    }
L_08920BE8:
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    goto L_08920BEC;
L_08920BEC:
    if (ctx.gpr[17] == ctx.gpr[4]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08920C1C;
    }
    goto L_08920BF4;
L_08920BF4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(348)));
    ctx.gpr[8] = (ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08920C04;
    }
    goto L_08920C04;
L_08920C04:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08920C18;
      }
      goto L_08920C0C;
    }
L_08920C0C:
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08920C1C;
    }
    goto L_08920C14;
L_08920C14:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08920C18;
L_08920C18:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08920C1C;
L_08920C1C:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08920BEC;
      }
      goto L_08920C28;
    }
L_08920C28:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(620)));
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(488)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4560), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[16] << 5u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4700), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4238));
    ctx.gpr[31] = (0x08920C5Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08920C5Cu) goto L_08920C5C;
    return;
L_08920C5C:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4712));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08920C7Cu);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08920C7Cu) goto L_08920C7C;
    return;
L_08920C7C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08920BD4;
      }
      goto L_08920C94;
    }
L_08920C94:
    ctx.gpr[4] = (0u | 0u);
    goto L_08920C98;
L_08920C98:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08920CF0;
      }
      goto L_08920CA4;
    }
L_08920CA4:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(620)));
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    goto L_08920CB0;
L_08920CB0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_08920CC0;
      }
      goto L_08920CB8;
    }
L_08920CB8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4228), static_cast<std::uint8_t>(ctx.gpr[9]));
      if (branch_taken) {
          goto L_08920CE0;
      }
      goto L_08920CC0;
    }
L_08920CC0:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4560)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4556)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[11];
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4227)));
      if (branch_taken) {
          goto L_08920CD8;
      }
      goto L_08920CD0;
    }
L_08920CD0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4228), static_cast<std::uint8_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_08920CE0;
      }
      goto L_08920CD8;
    }
L_08920CD8:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4228), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_08920CE0;
L_08920CE0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08920CB0;
      }
      goto L_08920CF0;
    }
L_08920CF0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(660)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(664)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(668)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(672)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08920D20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-688));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(632), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(664), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(628), ctx.gpr[7]);
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(620), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(624), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(668), ctx.gpr[30]);
    ctx.gpr[30] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(636), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(672), ctx.gpr[31]);
    ctx.gpr[31] = (0x08920D78u);
    ctx.gpr[6] = (0u | 604u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08920D78u) goto L_08920D78;
    return;
L_08920D78:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    ctx.gpr[21] = (ctx.gpr[29] | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(26));
    ctx.gpr[19] = (ctx.gpr[23] + static_cast<std::uint32_t>(4842));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(500));
    ctx.gpr[17] = (ctx.gpr[23] + static_cast<std::uint32_t>(5316));
    goto L_08920D94;
L_08920D94:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[23]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4832)));
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[16]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(5164)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5304)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(348), ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(488), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08920DC0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08920DC0u) goto L_08920DC0;
    return;
L_08920DC0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08920DD0u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08920DD0u) goto L_08920DD0;
    return;
L_08920DD0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08920D94;
      }
      goto L_08920DF4;
    }
L_08920DF4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(186));
    ctx.gpr[31] = (0x08920E04u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08920E04u) goto L_08920E04;
    return;
L_08920E04:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(493), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(76));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08920E24u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08920E24u) goto L_08920E24;
    return;
L_08920E24:
    ctx.gpr[31] = (0x08920E2Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 625u, 0x08843014u>(ctx, &aot_mem) && ctx.pc == 0x08920E2Cu) goto L_08920E2C;
    return;
L_08920E2C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08920E40;
      }
      goto L_08920E34;
    }
L_08920E34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08920E4C;
      }
      goto L_08920E40;
    }
L_08920E40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(54)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[4]);
    goto L_08920E4C;
L_08920E4C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(26));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(500));
    ctx.gpr[17] = (ctx.gpr[29] | 0u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(186));
    goto L_08920E68;
L_08920E68:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08920E74u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08920E74u) goto L_08920E74;
    return;
L_08920E74:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08920EAC;
      }
      goto L_08920E7C;
    }
L_08920E7C:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08920E88u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 543u, 0x08A9DEE8u>(ctx, &aot_mem) && ctx.pc == 0x08920E88u) goto L_08920E88;
    return;
L_08920E88:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08920EB0;
    }
    goto L_08920E90;
L_08920E90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(348)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
        goto L_08920EA8;
    }
    goto L_08920EA8;
L_08920EA8:
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    goto L_08920EAC;
L_08920EAC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08920EB0;
L_08920EB0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08920E68;
      }
      goto L_08920EC4;
    }
L_08920EC4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[4];
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08920F7C;
      }
      goto L_08920ED0;
    }
L_08920ED0:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[4];
    ctx.gpr[30] = (0u | 5u);
      if (branch_taken) {
          goto L_08920F78;
      }
      goto L_08920EDC;
    }
L_08920EDC:
    ctx.gpr[16] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (0u | 5u);
      if (branch_taken) {
          goto L_08920F78;
      }
      goto L_08920EEC;
    }
L_08920EEC:
    ctx.gpr[4] = (ctx.gpr[22] << 5u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[22]);
    ctx.gpr[19] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[21] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[22] << 2u);
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(26));
    ctx.gpr[20] = (ctx.gpr[21] + static_cast<std::uint32_t>(500));
    ctx.gpr[17] = (ctx.gpr[29] + ctx.gpr[17]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(58));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(512));
    goto L_08920F1C;
L_08920F1C:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(352)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(489)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(348), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(488), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08920F44u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08920F44u) goto L_08920F44;
    return;
L_08920F44:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08920F54u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08920F54u) goto L_08920F54;
    return;
L_08920F54:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08920F1C;
      }
      goto L_08920F74;
    }
L_08920F74:
    ctx.gpr[30] = (0u | 5u);
    goto L_08920F78;
L_08920F78:
    ctx.gpr[17] = (0u | 0u);
    goto L_08920F7C;
L_08920F7C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08921058;
      }
      goto L_08920F88;
    }
L_08920F88:
    ctx.gpr[18] = (ctx.gpr[29] | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(26));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(500));
    goto L_08920F94;
L_08920F94:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(348)));
      if (branch_taken) {
          goto L_08920FE8;
      }
      goto L_08920FA8;
    }
L_08920FA8:
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    goto L_08920FAC;
L_08920FAC:
    if (ctx.gpr[17] == ctx.gpr[4]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08920FDC;
    }
    goto L_08920FB4;
L_08920FB4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(348)));
    ctx.gpr[8] = (ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08920FC4;
    }
    goto L_08920FC4;
L_08920FC4:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08920FD8;
      }
      goto L_08920FCC;
    }
L_08920FCC:
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08920FDC;
    }
    goto L_08920FD4;
L_08920FD4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08920FD8;
L_08920FD8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08920FDC;
L_08920FDC:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08920FAC;
      }
      goto L_08920FE8;
    }
L_08920FE8:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(620)));
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(488)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5164), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[16] << 5u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5304), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4842));
    ctx.gpr[31] = (0x0892101Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0892101Cu) goto L_0892101C;
    return;
L_0892101C:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5316));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0892103Cu);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0892103Cu) goto L_0892103C;
    return;
L_0892103C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08920F94;
      }
      goto L_08921054;
    }
L_08921054:
    ctx.gpr[4] = (0u | 0u);
    goto L_08921058;
L_08921058:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089210B0;
      }
      goto L_08921064;
    }
L_08921064:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(620)));
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    goto L_08921070;
L_08921070:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_08921080;
      }
      goto L_08921078;
    }
L_08921078:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4832), static_cast<std::uint8_t>(ctx.gpr[9]));
      if (branch_taken) {
          goto L_089210A0;
      }
      goto L_08921080;
    }
L_08921080:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(5164)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(5160)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[11];
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4831)));
      if (branch_taken) {
          goto L_08921098;
      }
      goto L_08921090;
    }
L_08921090:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4832), static_cast<std::uint8_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_089210A0;
      }
      goto L_08921098;
    }
L_08921098:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4832), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_089210A0;
L_089210A0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08921070;
      }
      goto L_089210B0;
    }
L_089210B0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(660)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(664)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(668)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(672)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089210E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-8304));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8252), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8248), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8256), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8260), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8264), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8268), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8272), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8276), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8280), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8284), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8288), ctx.gpr[31]);
    ctx.gpr[31] = (0x08921124u);
    ctx.gpr[6] = (0u | 2772u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08921124u) goto L_08921124;
    return;
L_08921124:
    ctx.gpr[31] = (0x0892112Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 530u, 0x0891E154u>(ctx, &aot_mem) && ctx.pc == 0x0892112Cu) goto L_0892112C;
    return;
L_0892112C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2788));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0892113Cu);
    ctx.gpr[6] = (0u | 5436u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0892113Cu) goto L_0892113C;
    return;
L_0892113C:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8244), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8232), ctx.gpr[29]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8236), ctx.gpr[29]);
    goto L_0892114C;
L_0892114C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8236)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8232)));
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[30] = (ctx.gpr[16] + static_cast<std::uint32_t>(2798));
    ctx.gpr[23] = (ctx.gpr[17] + static_cast<std::uint32_t>(21));
    ctx.gpr[22] = (ctx.gpr[19] + static_cast<std::uint32_t>(3272));
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(264));
    goto L_08921170;
L_08921170:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0892117Cu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0892117Cu) goto L_0892117C;
    return;
L_0892117C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8232)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8236)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2788), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(204)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3120), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(216)));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(3160), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(236)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3180), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(256)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3220), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3260), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089211CCu);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089211CCu) goto L_089211CC;
    return;
L_089211CC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(32));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(32));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08921170;
      }
      goto L_089211F8;
    }
L_089211F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8244)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8236)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8232)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(604));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8244), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(308));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8236), ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8232), ctx.gpr[6]);
      if (branch_taken) {
          goto L_0892114C;
      }
      goto L_08921224;
    }
L_08921224:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8248)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08921238u);
    ctx.gpr[6] = (0u | 308u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08921238u) goto L_08921238;
    return;
L_08921238:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8240), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8224), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8228), ctx.gpr[29]);
    goto L_08921248;
L_08921248:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8228)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8224)));
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[30] = (ctx.gpr[16] + static_cast<std::uint32_t>(2958));
    ctx.gpr[23] = (ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.gpr[22] = (ctx.gpr[19] + static_cast<std::uint32_t>(3332));
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(248));
    goto L_0892126C;
L_0892126C:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08921278u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08921278u) goto L_08921278;
    return;
L_08921278:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8224)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8228)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(168)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2793), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(188)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3140), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(200)));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(3170), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(220)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3200), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(240)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3240), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3265), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089212C8u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089212C8u) goto L_089212C8;
    return;
L_089212C8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(32));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(32));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_0892126C;
      }
      goto L_089212F4;
    }
L_089212F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8228)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8224)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(604));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8240), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(308));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8228), ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8224), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08921248;
      }
      goto L_08921320;
    }
L_08921320:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(2788));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08921338u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08921A3C;
L_08921338:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08921348u);
    ctx.gpr[6] = (0u | 0u);
    goto L_089220AC;
L_08921348:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08921358u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08922980;
L_08921358:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08921368u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08922FF0;
L_08921368:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08921378u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08923758;
L_08921378:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08921388u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08923DC8;
L_08921388:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08921398u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 58u, 0x089243F8u>(ctx, &aot_mem) && ctx.pc == 0x08921398u) goto L_08921398;
    return;
L_08921398:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089213A8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 148u, 0x08924A68u>(ctx, &aot_mem) && ctx.pc == 0x089213A8u) goto L_089213A8;
    return;
L_089213A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089213B8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 238u, 0x089250D8u>(ctx, &aot_mem) && ctx.pc == 0x089213B8u) goto L_089213B8;
    return;
L_089213B8:
    ctx.gpr[31] = (0x089213C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 532u, 0x0891E170u>(ctx, &aot_mem) && ctx.pc == 0x089213C0u) goto L_089213C0;
    return;
L_089213C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8252)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8256)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8260)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8264)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8268)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8272)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8276)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8280)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8284)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8288)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(8304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089213F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-11072));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(11020), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(11024), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(11028), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(11032), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(11036), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(11040), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(11044), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(11048), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(11052), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(11056), ctx.gpr[31]);
    ctx.gpr[31] = (0x08921430u);
    ctx.gpr[6] = (0u | 2772u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08921430u) goto L_08921430;
    return;
L_08921430:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2788));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08921440u);
    ctx.gpr[6] = (0u | 2772u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08921440u) goto L_08921440;
    return;
L_08921440:
    ctx.gpr[31] = (0x08921448u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 530u, 0x0891E154u>(ctx, &aot_mem) && ctx.pc == 0x08921448u) goto L_08921448;
    return;
L_08921448:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(5560));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08921458u);
    ctx.gpr[6] = (0u | 5436u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08921458u) goto L_08921458;
    return;
L_08921458:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(11016), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(11004), ctx.gpr[29]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(11008), ctx.gpr[29]);
    goto L_08921468;
L_08921468:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(11008)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(11004)));
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[30] = (ctx.gpr[16] + static_cast<std::uint32_t>(5570));
    ctx.gpr[23] = (ctx.gpr[17] + static_cast<std::uint32_t>(21));
    ctx.gpr[22] = (ctx.gpr[19] + static_cast<std::uint32_t>(6044));
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(264));
    goto L_0892148C;
L_0892148C:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08921498u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08921498u) goto L_08921498;
    return;
L_08921498:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(11004)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(11008)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5560), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(204)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(5892), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(216)));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(5932), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(236)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(5952), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(256)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(5992), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(6032), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089214E8u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089214E8u) goto L_089214E8;
    return;
L_089214E8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(32));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(32));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_0892148C;
      }
      goto L_08921514;
    }
L_08921514:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(11016)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(11008)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(11004)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(604));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(11016), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(308));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(11008), ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(11004), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08921468;
      }
      goto L_08921540;
    }
L_08921540:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08921550u);
    ctx.gpr[6] = (0u | 308u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08921550u) goto L_08921550;
    return;
L_08921550:
    ctx.gpr[31] = (0x08921558u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2788));
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 542u, 0x0891E22Cu>(ctx, &aot_mem) && ctx.pc == 0x08921558u) goto L_08921558;
    return;
L_08921558:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(11012), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(10996), ctx.gpr[29]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(11000), ctx.gpr[29]);
    goto L_08921568;
L_08921568:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(11000)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(10996)));
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[30] = (ctx.gpr[16] + static_cast<std::uint32_t>(5730));
    ctx.gpr[23] = (ctx.gpr[17] + static_cast<std::uint32_t>(2793));
    ctx.gpr[22] = (ctx.gpr[19] + static_cast<std::uint32_t>(6104));
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(3036));
    goto L_0892158C;
L_0892158C:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08921598u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08921598u) goto L_08921598;
    return;
L_08921598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(10996)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(11000)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2788)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2956)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5565), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(2976)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(5912), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2988)));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(5942), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3008)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(5972), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3028)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(6012), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(6037), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089215E8u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089215E8u) goto L_089215E8;
    return;
L_089215E8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(32));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(32));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_0892158C;
      }
      goto L_08921614;
    }
L_08921614:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(11012)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(11000)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(10996)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(604));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(11012), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(308));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(11000), ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(10996), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08921568;
      }
      goto L_08921640;
    }
L_08921640:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(5560));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08921658u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08921A3C;
L_08921658:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08921668u);
    ctx.gpr[6] = (0u | 0u);
    goto L_089220AC;
L_08921668:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08921678u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08922980;
L_08921678:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08921688u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08922FF0;
L_08921688:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08921698u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08923758;
L_08921698:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089216A8u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08923DC8;
L_089216A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089216B8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 58u, 0x089243F8u>(ctx, &aot_mem) && ctx.pc == 0x089216B8u) goto L_089216B8;
    return;
L_089216B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089216C8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 148u, 0x08924A68u>(ctx, &aot_mem) && ctx.pc == 0x089216C8u) goto L_089216C8;
    return;
L_089216C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089216D8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 238u, 0x089250D8u>(ctx, &aot_mem) && ctx.pc == 0x089216D8u) goto L_089216D8;
    return;
L_089216D8:
    ctx.gpr[31] = (0x089216E0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 532u, 0x0891E170u>(ctx, &aot_mem) && ctx.pc == 0x089216E0u) goto L_089216E0;
    return;
L_089216E0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(11020)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(11024)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(11028)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(11032)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(11036)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(11040)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(11044)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(11048)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(11052)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(11056)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(11072));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08921710:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-11072));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(11024), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(11020), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(11028), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(11032), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(11036), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(11040), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(11044), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(11048), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(11052), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(11056), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(11060), ctx.gpr[31]);
    ctx.gpr[31] = (0x08921754u);
    ctx.gpr[6] = (0u | 2772u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08921754u) goto L_08921754;
    return;
L_08921754:
    ctx.gpr[31] = (0x0892175Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 530u, 0x0891E154u>(ctx, &aot_mem) && ctx.pc == 0x0892175Cu) goto L_0892175C;
    return;
L_0892175C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2788));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0892176Cu);
    ctx.gpr[6] = (0u | 5436u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0892176Cu) goto L_0892176C;
    return;
L_0892176C:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(11016), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(11004), ctx.gpr[29]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(11008), ctx.gpr[29]);
    goto L_0892177C;
L_0892177C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(11008)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(11004)));
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[30] = (ctx.gpr[16] + static_cast<std::uint32_t>(2798));
    ctx.gpr[23] = (ctx.gpr[17] + static_cast<std::uint32_t>(21));
    ctx.gpr[22] = (ctx.gpr[19] + static_cast<std::uint32_t>(3272));
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(264));
    goto L_089217A0;
L_089217A0:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x089217ACu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x089217ACu) goto L_089217AC;
    return;
L_089217AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(11004)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(11008)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2788), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(204)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3120), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(216)));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(3160), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(236)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3180), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(256)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3220), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3260), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089217FCu);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089217FCu) goto L_089217FC;
    return;
L_089217FC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(32));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(32));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089217A0;
      }
      goto L_08921828;
    }
L_08921828:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(11016)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(11008)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(11004)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(604));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(11016), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(308));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(11008), ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(11004), ctx.gpr[6]);
      if (branch_taken) {
          goto L_0892177C;
      }
      goto L_08921854;
    }
L_08921854:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08921864u);
    ctx.gpr[6] = (0u | 308u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08921864u) goto L_08921864;
    return;
L_08921864:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(8224));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08921878u);
    ctx.gpr[6] = (0u | 2772u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08921878u) goto L_08921878;
    return;
L_08921878:
    ctx.gpr[31] = (0x08921880u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 542u, 0x0891E22Cu>(ctx, &aot_mem) && ctx.pc == 0x08921880u) goto L_08921880;
    return;
L_08921880:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(11012), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(10996), ctx.gpr[29]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(11000), ctx.gpr[29]);
    goto L_08921890;
L_08921890:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(11000)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(10996)));
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[30] = (ctx.gpr[16] + static_cast<std::uint32_t>(2958));
    ctx.gpr[23] = (ctx.gpr[17] + static_cast<std::uint32_t>(8229));
    ctx.gpr[22] = (ctx.gpr[19] + static_cast<std::uint32_t>(3332));
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(8472));
    goto L_089218B4;
L_089218B4:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x089218C0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x089218C0u) goto L_089218C0;
    return;
L_089218C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(10996)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(11000)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8224)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8392)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2793), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8412)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3140), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8424)));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(3170), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8444)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3200), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8464)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3240), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3265), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08921910u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08921910u) goto L_08921910;
    return;
L_08921910:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(32));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(32));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089218B4;
      }
      goto L_0892193C;
    }
L_0892193C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(11012)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(11000)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(10996)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(604));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(11012), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(308));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(11000), ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(10996), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08921890;
      }
      goto L_08921968;
    }
L_08921968:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(11020)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(2788));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08921984u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08921A3C;
L_08921984:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08921994u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_089220AC;
L_08921994:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089219A4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08922980;
L_089219A4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089219B4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08922FF0;
L_089219B4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089219C4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08923758;
L_089219C4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089219D4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08923DC8;
L_089219D4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089219E4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 58u, 0x089243F8u>(ctx, &aot_mem) && ctx.pc == 0x089219E4u) goto L_089219E4;
    return;
L_089219E4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089219F4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 148u, 0x08924A68u>(ctx, &aot_mem) && ctx.pc == 0x089219F4u) goto L_089219F4;
    return;
L_089219F4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08921A04u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 238u, 0x089250D8u>(ctx, &aot_mem) && ctx.pc == 0x08921A04u) goto L_08921A04;
    return;
L_08921A04:
    ctx.gpr[31] = (0x08921A0Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 532u, 0x0891E170u>(ctx, &aot_mem) && ctx.pc == 0x08921A0Cu) goto L_08921A0C;
    return;
L_08921A0C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(11024)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(11028)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(11032)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(11036)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(11040)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(11044)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(11048)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(11052)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(11056)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(11060)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(11072));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08921A3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[23]);
    ctx.gpr[23] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[23]);
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08921BC0;
      }
      goto L_08921A8C;
    }
L_08921A8C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(60));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(484));
    ctx.gpr[23] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_08921AA4;
L_08921AA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08921AB0u);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 625u, 0x08843014u>(ctx, &aot_mem) && ctx.pc == 0x08921AB0u) goto L_08921AB0;
    return;
L_08921AB0:
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[30]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(472)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08921AD0;
      }
      goto L_08921AC4;
    }
L_08921AC4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08921AD0;
      }
      goto L_08921ACC;
    }
L_08921ACC:
    ctx.gpr[18] = (ctx.gpr[23] | 0u);
    goto L_08921AD0;
L_08921AD0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08921AF0;
      }
      goto L_08921AD8;
    }
L_08921AD8:
    ctx.gpr[31] = (0x08921AE0u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x08921AE0u) goto L_08921AE0;
    return;
L_08921AE0:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08921AF0;
      }
      goto L_08921AEC;
    }
L_08921AEC:
    ctx.gpr[18] = (ctx.gpr[23] | 0u);
    goto L_08921AF0;
L_08921AF0:
    if (ctx.gpr[18] == ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_08921B9C;
    }
    goto L_08921AF8;
L_08921AF8:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] << 5u);
      if (branch_taken) {
          goto L_08921B94;
      }
      goto L_08921B10;
    }
L_08921B10:
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[19] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[16] = (ctx.gpr[18] << 2u);
    ctx.gpr[17] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(10));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(484));
    ctx.gpr[16] = (ctx.gpr[30] + ctx.gpr[16]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(42));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(496));
    goto L_08921B3C;
L_08921B3C:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[30]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(473)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(332), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(472), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08921B64u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08921B64u) goto L_08921B64;
    return;
L_08921B64:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08921B74u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08921B74u) goto L_08921B74;
    return;
L_08921B74:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08921B3C;
      }
      goto L_08921B94;
    }
L_08921B94:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_08921B9C;
L_08921B9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08921AA4;
      }
      goto L_08921BB4;
    }
L_08921BB4:
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08921C28;
      }
      goto L_08921BC0;
    }
L_08921BC0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[18] = (ctx.gpr[30] + static_cast<std::uint32_t>(10));
    ctx.gpr[17] = (ctx.gpr[30] + static_cast<std::uint32_t>(484));
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08921BD4;
L_08921BD4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08921BE0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08921BE0u) goto L_08921BE0;
    return;
L_08921BE0:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08921C14;
    }
    goto L_08921BE8;
L_08921BE8:
    ctx.gpr[31] = (0x08921BF0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 625u, 0x08843014u>(ctx, &aot_mem) && ctx.pc == 0x08921BF0u) goto L_08921BF0;
    return;
L_08921BF0:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[30]);
      if (branch_taken) {
          goto L_08921C10;
      }
      goto L_08921BF8;
    }
L_08921BF8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(472)));
    if (ctx.gpr[4] != ctx.gpr[19]) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08921C14;
    }
    goto L_08921C04;
L_08921C04:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[23]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08921C28;
      }
      goto L_08921C10;
    }
L_08921C10:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08921C14;
L_08921C14:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[23]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08921BD4;
      }
      goto L_08921C28;
    }
L_08921C28:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[21];
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08921C40;
      }
      goto L_08921C30;
    }
L_08921C30:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
        goto L_08922000;
    }
    goto L_08921C40;
L_08921C40:
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[21];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08921CF0;
      }
      goto L_08921C48;
    }
L_08921C48:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08921CE8;
      }
      goto L_08921C5C;
    }
L_08921C5C:
    ctx.gpr[16] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[19] = (ctx.gpr[30] + ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(10));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(484));
    ctx.gpr[22] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[30] + ctx.gpr[16]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(42));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(496));
    goto L_08921C90;
L_08921C90:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[30]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(473)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(332), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(472), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08921CB8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08921CB8u) goto L_08921CB8;
    return;
L_08921CB8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08921CC8u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08921CC8u) goto L_08921CC8;
    return;
L_08921CC8:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08921C90;
      }
      goto L_08921CE8;
    }
L_08921CE8:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (0u | 0u);
    goto L_08921CF0;
L_08921CF0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[23]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08921EB8;
      }
      goto L_08921D00;
    }
L_08921D00:
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(10));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(484));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_08921D18;
L_08921D18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08921DD4;
      }
      goto L_08921D2C;
    }
L_08921D2C:
    ctx.gpr[21] = (ctx.gpr[22] + ctx.gpr[30]);
    ctx.gpr[20] = (ctx.gpr[30] + static_cast<std::uint32_t>(10));
    ctx.gpr[19] = (ctx.gpr[30] + static_cast<std::uint32_t>(484));
    ctx.gpr[18] = (ctx.gpr[30] | 0u);
    goto L_08921D3C;
L_08921D3C:
    if (ctx.gpr[22] == ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08921DBC;
    }
    goto L_08921D44;
L_08921D44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x08921D50u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08921D50u) goto L_08921D50;
    return;
L_08921D50:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (ctx.gpr[17] + ctx.gpr[30]);
      if (branch_taken) {
          goto L_08921DB8;
      }
      goto L_08921D58;
    }
L_08921D58:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
        goto L_08921D78;
    }
    goto L_08921D64;
L_08921D64:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(472)));
    if (ctx.gpr[5] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08921DBC;
    }
    goto L_08921D70;
L_08921D70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08921DB8;
      }
      goto L_08921D78;
    }
L_08921D78:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08921D84u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 543u, 0x08A9DEE8u>(ctx, &aot_mem) && ctx.pc == 0x08921D84u) goto L_08921D84;
    return;
L_08921D84:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08921DBC;
    }
    goto L_08921D8C;
L_08921D8C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(472)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08921DBC;
    }
    goto L_08921D9C;
L_08921D9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(332)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08921DBC;
    }
    goto L_08921DB4;
L_08921DB4:
    ctx.gpr[23] = (ctx.gpr[17] | 0u);
    goto L_08921DB8;
L_08921DB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08921DBC;
L_08921DBC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08921D3C;
      }
      goto L_08921DD4;
    }
L_08921DD4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[22]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[4];
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08921E7C;
      }
      goto L_08921DE4;
    }
L_08921DE4:
    ctx.gpr[21] = (ctx.gpr[23] | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[23] << 5u);
      if (branch_taken) {
          goto L_08921E7C;
      }
      goto L_08921DF8;
    }
L_08921DF8:
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[23]);
    ctx.gpr[19] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[17] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[23] << 2u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(10));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(484));
    ctx.gpr[16] = (ctx.gpr[30] + ctx.gpr[16]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(42));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(496));
    goto L_08921E24;
L_08921E24:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[30]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(473)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(332), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(472), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08921E4Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08921E4Cu) goto L_08921E4C;
    return;
L_08921E4C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08921E5Cu);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08921E5Cu) goto L_08921E5C;
    return;
L_08921E5C:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08921E24;
      }
      goto L_08921E7C;
    }
L_08921E7C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08921D18;
      }
      goto L_08921EB8;
    }
L_08921EB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[30] | 0u);
      if (branch_taken) {
          goto L_08921FA8;
      }
      goto L_08921ECC;
    }
L_08921ECC:
    ctx.gpr[19] = (ctx.gpr[30] + static_cast<std::uint32_t>(10));
    ctx.gpr[20] = (ctx.gpr[30] + static_cast<std::uint32_t>(484));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08921ED8;
L_08921ED8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08921F2C;
      }
      goto L_08921EE8;
    }
L_08921EE8:
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    goto L_08921EEC;
L_08921EEC:
    if (ctx.gpr[17] == ctx.gpr[4]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08921F20;
    }
    goto L_08921EF4;
L_08921EF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(332)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(332)));
    ctx.gpr[8] = (ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08921F08;
    }
    goto L_08921F08;
L_08921F08:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08921F1C;
      }
      goto L_08921F10;
    }
L_08921F10:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08921F20;
    }
    goto L_08921F18;
L_08921F18:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08921F1C;
L_08921F1C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08921F20;
L_08921F20:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08921EEC;
      }
      goto L_08921F2C;
    }
L_08921F2C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08921F94;
    }
    goto L_08921F38;
L_08921F38:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(332)));
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(168), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[30]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(472)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[22]);
    ctx.gpr[6] = (ctx.gpr[16] << 5u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(240), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5));
    ctx.gpr[31] = (0x08921F70u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08921F70u) goto L_08921F70;
    return;
L_08921F70:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(248));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08921F90u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08921F90u) goto L_08921F90;
    return;
L_08921F90:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08921F94;
L_08921F94:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08921ED8;
      }
      goto L_08921FA8;
    }
L_08921FA8:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    goto L_08921FB8;
L_08921FB8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_08921FC8;
      }
      goto L_08921FC0;
    }
L_08921FC0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08921FE8;
      }
      goto L_08921FC8;
    }
L_08921FC8:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(168)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[11];
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-1)));
      if (branch_taken) {
          goto L_08921FE0;
      }
      goto L_08921FD8;
    }
L_08921FD8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
      if (branch_taken) {
          goto L_08921FE8;
      }
      goto L_08921FE0;
    }
L_08921FE0:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    goto L_08921FE8;
L_08921FE8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08921FB8;
      }
      goto L_08921FF8;
    }
L_08921FF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892207C;
      }
      goto L_08922000;
    }
L_08922000:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[30] | 0u);
    ctx.gpr[18] = (ctx.gpr[23] | 0u);
    ctx.gpr[19] = (ctx.gpr[23] + static_cast<std::uint32_t>(5));
    ctx.gpr[20] = (ctx.gpr[30] + static_cast<std::uint32_t>(10));
    ctx.gpr[21] = (ctx.gpr[23] + static_cast<std::uint32_t>(248));
    ctx.gpr[22] = (ctx.gpr[30] + static_cast<std::uint32_t>(484));
    goto L_0892201C;
L_0892201C:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[30]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[23]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(332)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(168), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(472)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08922048u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(240), static_cast<std::uint8_t>(ctx.gpr[7]));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08922048u) goto L_08922048;
    return;
L_08922048:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08922058u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08922058u) goto L_08922058;
    return;
L_08922058:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_0892201C;
      }
      goto L_0892207C;
    }
L_0892207C:
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
L_089220AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[30]);
    ctx.gpr[30] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08922248;
      }
      goto L_08922104;
    }
L_08922104:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[4] + static_cast<std::uint32_t>(60));
    ctx.gpr[23] = (0u | 5u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1088));
    goto L_0892211C;
L_0892211C:
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08922128u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 625u, 0x08843014u>(ctx, &aot_mem) && ctx.pc == 0x08922128u) goto L_08922128;
    return;
L_08922128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1076)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0892214C;
      }
      goto L_08922140;
    }
L_08922140:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892214C;
      }
      goto L_08922148;
    }
L_08922148:
    ctx.gpr[18] = (ctx.gpr[23] | 0u);
    goto L_0892214C;
L_0892214C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892216C;
      }
      goto L_08922154;
    }
L_08922154:
    ctx.gpr[31] = (0x0892215Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x0892215Cu) goto L_0892215C;
    return;
L_0892215C:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0892216C;
      }
      goto L_08922168;
    }
L_08922168:
    ctx.gpr[18] = (ctx.gpr[23] | 0u);
    goto L_0892216C;
L_0892216C:
    if (ctx.gpr[18] == ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_0892222C;
    }
    goto L_08922174;
L_08922174:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
        goto L_08922228;
    }
    goto L_0892218C;
L_0892218C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[18] << 5u);
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[16] = (ctx.gpr[18] << 2u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(614));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(1088));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(646));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1100));
    goto L_089221C0;
L_089221C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1000)));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(605)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1040)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(604), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(996), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1077)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1036), ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1076), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089221F4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x089221F4u) goto L_089221F4;
    return;
L_089221F4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08922204u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08922204u) goto L_08922204;
    return;
L_08922204:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089221C0;
      }
      goto L_08922224;
    }
L_08922224:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    goto L_08922228;
L_08922228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_0892222C;
L_0892222C:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_0892211C;
      }
      goto L_0892223C;
    }
L_0892223C:
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_089222B8;
      }
      goto L_08922248;
    }
L_08922248:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(614));
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(1088));
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08922260;
L_08922260:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0892226Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0892226Cu) goto L_0892226C;
    return;
L_0892226C:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_089222A4;
    }
    goto L_08922274;
L_08922274:
    ctx.gpr[31] = (0x0892227Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 625u, 0x08843014u>(ctx, &aot_mem) && ctx.pc == 0x0892227Cu) goto L_0892227C;
    return;
L_0892227C:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_089222A4;
    }
    goto L_08922284;
L_08922284:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1076)));
    if (ctx.gpr[4] != ctx.gpr[19]) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_089222A4;
    }
    goto L_08922298;
L_08922298:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089222B8;
      }
      goto L_089222A4;
    }
L_089222A4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08922260;
      }
      goto L_089222B8;
    }
L_089222B8:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[21];
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_089222D0;
      }
      goto L_089222C0;
    }
L_089222C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_089228C0;
    }
    goto L_089222D0;
L_089222D0:
    ctx.gpr[4] = (20352u << 16u);
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[21];
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0892238C;
      }
      goto L_089222DC;
    }
L_089222DC:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08922388;
      }
      goto L_089222F0;
    }
L_089222F0:
    ctx.gpr[16] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[19] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(614));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(1088));
    ctx.gpr[22] = (ctx.gpr[30] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[23] + ctx.gpr[16]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(646));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1100));
    goto L_08922328;
L_08922328:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[23]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(605)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1000)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(604), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1040)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(996), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1077)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1036), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1076), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08922358u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08922358u) goto L_08922358;
    return;
L_08922358:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08922368u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08922368u) goto L_08922368;
    return;
L_08922368:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08922328;
      }
      goto L_08922388;
    }
L_08922388:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-1));
    goto L_0892238C;
L_0892238C:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0892260C;
      }
      goto L_089223A0;
    }
L_089223A0:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(614));
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(1088));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    goto L_089223B8;
L_089223B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08922520;
      }
      goto L_089223CC;
    }
L_089223CC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (ctx.gpr[22] + ctx.gpr[18]);
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(614));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(1088));
    goto L_089223DC;
L_089223DC:
    if (ctx.gpr[22] == ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08922508;
    }
    goto L_089223E4;
L_089223E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x089223F0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x089223F0u) goto L_089223F0;
    return;
L_089223F0:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08922508;
    }
    goto L_089223F8;
L_089223F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (ctx.gpr[17] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1076)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
        goto L_08922420;
    }
    goto L_0892240C;
L_0892240C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(1076)));
    if (ctx.gpr[5] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08922508;
    }
    goto L_08922418;
L_08922418:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08922504;
      }
      goto L_08922420;
    }
L_08922420:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0892242Cu);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 543u, 0x08A9DEE8u>(ctx, &aot_mem) && ctx.pc == 0x0892242Cu) goto L_0892242C;
    return;
L_0892242C:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08922508;
    }
    goto L_08922434;
L_08922434:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(1076)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1076)));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08922508;
    }
    goto L_08922444;
L_08922444:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(996)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
        goto L_08922458;
    }
    goto L_08922458;
L_08922458:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1036)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[22];
        goto L_0892246C;
    }
    goto L_0892246C;
L_0892246C:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_0892249C;
    }
    goto L_0892247C;
L_0892247C:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_0892249C;
    }
    goto L_0892248C;
L_0892248C:
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(996)));
      if (branch_taken) {
          goto L_089224A0;
      }
      goto L_08922498;
    }
L_08922498:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_0892249C;
L_0892249C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(996)));
    goto L_089224A0;
L_089224A0:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[22];
        goto L_089224B0;
    }
    goto L_089224B0;
L_089224B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1036)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[22];
        goto L_089224C4;
    }
    goto L_089224C4;
L_089224C4:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_089224F0;
    }
    goto L_089224D4;
L_089224D4:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_089224F0;
    }
    goto L_089224E4;
L_089224E4:
    ctx.fpr[13] = ctx.fpr[14] / ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089224F0;
      }
      goto L_089224F0;
    }
L_089224F0:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08922508;
    }
    goto L_08922500;
L_08922500:
    ctx.gpr[23] = (ctx.gpr[17] | 0u);
    goto L_08922504;
L_08922504:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08922508;
L_08922508:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089223DC;
      }
      goto L_08922520;
    }
L_08922520:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[22]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[4];
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_089225D8;
      }
      goto L_08922530;
    }
L_08922530:
    ctx.gpr[21] = (ctx.gpr[23] | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[23]);
      if (branch_taken) {
          goto L_089225D8;
      }
      goto L_08922544;
    }
L_08922544:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[23] << 5u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[23] << 2u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(1088));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(614));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1100));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(646));
    goto L_08922574;
L_08922574:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1000)));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(605)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1040)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(604), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(996), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1077)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1036), ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1076), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089225ACu);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089225ACu) goto L_089225AC;
    return;
L_089225AC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089225B8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x089225B8u) goto L_089225B8;
    return;
L_089225B8:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08922574;
      }
      goto L_089225D8;
    }
L_089225D8:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
      if (branch_taken) {
          goto L_089223B8;
      }
      goto L_0892260C;
    }
L_0892260C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_089227C0;
    }
    goto L_08922620;
L_08922620:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (ctx.gpr[21] | 0u);
    ctx.gpr[19] = (ctx.gpr[21] + static_cast<std::uint32_t>(614));
    ctx.gpr[20] = (ctx.gpr[21] + static_cast<std::uint32_t>(1088));
    goto L_08922634;
L_08922634:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08922738;
      }
      goto L_08922644;
    }
L_08922644:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_08922648;
L_08922648:
    if (ctx.gpr[17] == ctx.gpr[4]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_0892272C;
    }
    goto L_08922650;
L_08922650:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(996)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (static_cast<std::int32_t>(ctx.gpr[6]) < 0) {
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
        goto L_08922664;
    }
    goto L_08922664;
L_08922664:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1036)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    if (static_cast<std::int32_t>(ctx.gpr[6]) < 0) {
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[22];
        goto L_08922678;
    }
    goto L_08922678;
L_08922678:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_089226A8;
    }
    goto L_08922688;
L_08922688:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_089226A8;
    }
    goto L_08922698;
L_08922698:
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(996)));
      if (branch_taken) {
          goto L_089226AC;
      }
      goto L_089226A4;
    }
L_089226A4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_089226A8;
L_089226A8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(996)));
    goto L_089226AC;
L_089226AC:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    if (static_cast<std::int32_t>(ctx.gpr[6]) < 0) {
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[22];
        goto L_089226BC;
    }
    goto L_089226BC;
L_089226BC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1036)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    if (static_cast<std::int32_t>(ctx.gpr[6]) < 0) {
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[22];
        goto L_089226D0;
    }
    goto L_089226D0;
L_089226D0:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_089226FC;
    }
    goto L_089226E0;
L_089226E0:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_089226FC;
    }
    goto L_089226F0;
L_089226F0:
    ctx.fpr[13] = ctx.fpr[14] / ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089226FC;
      }
      goto L_089226FC;
    }
L_089226FC:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_0892270C;
    }
    goto L_0892270C;
L_0892270C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08922728;
      }
      goto L_0892271C;
    }
L_0892271C:
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_0892272C;
    }
    goto L_08922724;
L_08922724:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08922728;
L_08922728:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_0892272C;
L_0892272C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08922648;
      }
      goto L_08922738;
    }
L_08922738:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_089227A8;
    }
    goto L_08922744;
L_08922744:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(996)));
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(508), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1036)));
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(528), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1076)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[23]);
    ctx.gpr[6] = (ctx.gpr[16] << 5u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(548), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(313));
    ctx.gpr[31] = (0x08922784u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08922784u) goto L_08922784;
    return;
L_08922784:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(556));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089227A4u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089227A4u) goto L_089227A4;
    return;
L_089227A4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089227A8;
L_089227A8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08922634;
      }
      goto L_089227BC;
    }
L_089227BC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_089227C0;
L_089227C0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    goto L_089227CC;
L_089227CC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_089227DC;
      }
      goto L_089227D4;
    }
L_089227D4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(308), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_089228A8;
      }
      goto L_089227DC;
    }
L_089227DC:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(508)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(307)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (static_cast<std::int32_t>(ctx.gpr[10]) < 0) {
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
        goto L_089227F4;
    }
    goto L_089227F4;
L_089227F4:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(528)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    if (static_cast<std::int32_t>(ctx.gpr[10]) < 0) {
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[22];
        goto L_08922808;
    }
    goto L_08922808;
L_08922808:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_08922838;
    }
    goto L_08922818;
L_08922818:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_08922838;
    }
    goto L_08922828;
L_08922828:
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(504)));
      if (branch_taken) {
          goto L_0892283C;
      }
      goto L_08922834;
    }
L_08922834:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08922838;
L_08922838:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(504)));
    goto L_0892283C;
L_0892283C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    if (static_cast<std::int32_t>(ctx.gpr[10]) < 0) {
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[22];
        goto L_0892284C;
    }
    goto L_0892284C;
L_0892284C:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(524)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    if (static_cast<std::int32_t>(ctx.gpr[10]) < 0) {
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[22];
        goto L_08922860;
    }
    goto L_08922860;
L_08922860:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_0892288C;
    }
    goto L_08922870;
L_08922870:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_0892288C;
    }
    goto L_08922880;
L_08922880:
    ctx.fpr[13] = ctx.fpr[14] / ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892288C;
      }
      goto L_0892288C;
    }
L_0892288C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_089228A4;
    }
    goto L_0892289C;
L_0892289C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(308), static_cast<std::uint8_t>(ctx.gpr[8]));
      if (branch_taken) {
          goto L_089228A8;
      }
      goto L_089228A4;
    }
L_089228A4:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(308), static_cast<std::uint8_t>(ctx.gpr[8]));
    goto L_089228A8;
L_089228A8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089227CC;
      }
      goto L_089228B8;
    }
L_089228B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08922948;
      }
      goto L_089228C0;
    }
L_089228C0:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[30] | 0u);
    ctx.gpr[18] = (ctx.gpr[23] | 0u);
    ctx.gpr[19] = (ctx.gpr[23] + static_cast<std::uint32_t>(313));
    ctx.gpr[20] = (ctx.gpr[30] + static_cast<std::uint32_t>(614));
    ctx.gpr[21] = (ctx.gpr[23] + static_cast<std::uint32_t>(556));
    ctx.gpr[22] = (ctx.gpr[30] + static_cast<std::uint32_t>(1088));
    goto L_089228E0;
L_089228E0:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[30]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(604)));
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[23]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(308), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(996)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(508), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1036)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(528), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1076)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08922914u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(548), static_cast<std::uint8_t>(ctx.gpr[7]));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08922914u) goto L_08922914;
    return;
L_08922914:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08922924u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08922924u) goto L_08922924;
    return;
L_08922924:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089228E0;
      }
      goto L_08922948;
    }
L_08922948:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
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
L_08922980:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[23]);
    ctx.gpr[23] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[23]);
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08922B04;
      }
      goto L_089229D0;
    }
L_089229D0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(60));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1692));
    ctx.gpr[23] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_089229E8;
L_089229E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x089229F4u);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 625u, 0x08843014u>(ctx, &aot_mem) && ctx.pc == 0x089229F4u) goto L_089229F4;
    return;
L_089229F4:
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[30]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1680)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08922A14;
      }
      goto L_08922A08;
    }
L_08922A08:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08922A14;
      }
      goto L_08922A10;
    }
L_08922A10:
    ctx.gpr[18] = (ctx.gpr[23] | 0u);
    goto L_08922A14;
L_08922A14:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08922A34;
      }
      goto L_08922A1C;
    }
L_08922A1C:
    ctx.gpr[31] = (0x08922A24u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x08922A24u) goto L_08922A24;
    return;
L_08922A24:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08922A34;
      }
      goto L_08922A30;
    }
L_08922A30:
    ctx.gpr[18] = (ctx.gpr[23] | 0u);
    goto L_08922A34;
L_08922A34:
    if (ctx.gpr[18] == ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_08922AE0;
    }
    goto L_08922A3C;
L_08922A3C:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] << 5u);
      if (branch_taken) {
          goto L_08922AD8;
      }
      goto L_08922A54;
    }
L_08922A54:
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[19] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[16] = (ctx.gpr[18] << 2u);
    ctx.gpr[17] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(1218));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(1692));
    ctx.gpr[16] = (ctx.gpr[30] + ctx.gpr[16]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1250));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1704));
    goto L_08922A80;
L_08922A80:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[30]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1209)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1544)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1208), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1681)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1540), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1680), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08922AA8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08922AA8u) goto L_08922AA8;
    return;
L_08922AA8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08922AB8u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08922AB8u) goto L_08922AB8;
    return;
L_08922AB8:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08922A80;
      }
      goto L_08922AD8;
    }
L_08922AD8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_08922AE0;
L_08922AE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089229E8;
      }
      goto L_08922AF8;
    }
L_08922AF8:
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08922B6C;
      }
      goto L_08922B04;
    }
L_08922B04:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[18] = (ctx.gpr[30] + static_cast<std::uint32_t>(1218));
    ctx.gpr[17] = (ctx.gpr[30] + static_cast<std::uint32_t>(1692));
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08922B18;
L_08922B18:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08922B24u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08922B24u) goto L_08922B24;
    return;
L_08922B24:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08922B58;
    }
    goto L_08922B2C;
L_08922B2C:
    ctx.gpr[31] = (0x08922B34u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 625u, 0x08843014u>(ctx, &aot_mem) && ctx.pc == 0x08922B34u) goto L_08922B34;
    return;
L_08922B34:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[30]);
      if (branch_taken) {
          goto L_08922B54;
      }
      goto L_08922B3C;
    }
L_08922B3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1680)));
    if (ctx.gpr[4] != ctx.gpr[19]) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08922B58;
    }
    goto L_08922B48;
L_08922B48:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[23]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08922B6C;
      }
      goto L_08922B54;
    }
L_08922B54:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08922B58;
L_08922B58:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[23]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08922B18;
      }
      goto L_08922B6C;
    }
L_08922B6C:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[21];
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08922B84;
      }
      goto L_08922B74;
    }
L_08922B74:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
        goto L_08922F44;
    }
    goto L_08922B84;
L_08922B84:
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[21];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08922C34;
      }
      goto L_08922B8C;
    }
L_08922B8C:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08922C2C;
      }
      goto L_08922BA0;
    }
L_08922BA0:
    ctx.gpr[16] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[19] = (ctx.gpr[30] + ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(1218));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(1692));
    ctx.gpr[22] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[30] + ctx.gpr[16]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1250));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1704));
    goto L_08922BD4;
L_08922BD4:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[30]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1209)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1544)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1208), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1681)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1540), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1680), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08922BFCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08922BFCu) goto L_08922BFC;
    return;
L_08922BFC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08922C0Cu);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08922C0Cu) goto L_08922C0C;
    return;
L_08922C0C:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08922BD4;
      }
      goto L_08922C2C;
    }
L_08922C2C:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (0u | 0u);
    goto L_08922C34;
L_08922C34:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[23]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08922DFC;
      }
      goto L_08922C44;
    }
L_08922C44:
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(1218));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(1692));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_08922C5C;
L_08922C5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08922D18;
      }
      goto L_08922C70;
    }
L_08922C70:
    ctx.gpr[21] = (ctx.gpr[22] + ctx.gpr[30]);
    ctx.gpr[20] = (ctx.gpr[30] + static_cast<std::uint32_t>(1218));
    ctx.gpr[19] = (ctx.gpr[30] + static_cast<std::uint32_t>(1692));
    ctx.gpr[18] = (ctx.gpr[30] | 0u);
    goto L_08922C80;
L_08922C80:
    if (ctx.gpr[22] == ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08922D00;
    }
    goto L_08922C88;
L_08922C88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x08922C94u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08922C94u) goto L_08922C94;
    return;
L_08922C94:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (ctx.gpr[17] + ctx.gpr[30]);
      if (branch_taken) {
          goto L_08922CFC;
      }
      goto L_08922C9C;
    }
L_08922C9C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1680)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
        goto L_08922CBC;
    }
    goto L_08922CA8;
L_08922CA8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(1680)));
    if (ctx.gpr[5] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08922D00;
    }
    goto L_08922CB4;
L_08922CB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08922CFC;
      }
      goto L_08922CBC;
    }
L_08922CBC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08922CC8u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 543u, 0x08A9DEE8u>(ctx, &aot_mem) && ctx.pc == 0x08922CC8u) goto L_08922CC8;
    return;
L_08922CC8:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08922D00;
    }
    goto L_08922CD0;
L_08922CD0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(1680)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1680)));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08922D00;
    }
    goto L_08922CE0;
L_08922CE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1540)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1540)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08922D00;
    }
    goto L_08922CF8;
L_08922CF8:
    ctx.gpr[23] = (ctx.gpr[17] | 0u);
    goto L_08922CFC;
L_08922CFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08922D00;
L_08922D00:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08922C80;
      }
      goto L_08922D18;
    }
L_08922D18:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[22]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[4];
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08922DC0;
      }
      goto L_08922D28;
    }
L_08922D28:
    ctx.gpr[21] = (ctx.gpr[23] | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[23] << 5u);
      if (branch_taken) {
          goto L_08922DC0;
      }
      goto L_08922D3C;
    }
L_08922D3C:
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[23]);
    ctx.gpr[19] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[17] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[23] << 2u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(1218));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(1692));
    ctx.gpr[16] = (ctx.gpr[30] + ctx.gpr[16]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1250));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1704));
    goto L_08922D68;
L_08922D68:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[30]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1209)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1544)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1208), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1681)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1540), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1680), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08922D90u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08922D90u) goto L_08922D90;
    return;
L_08922D90:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08922DA0u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08922DA0u) goto L_08922DA0;
    return;
L_08922DA0:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08922D68;
      }
      goto L_08922DC0;
    }
L_08922DC0:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08922C5C;
      }
      goto L_08922DFC;
    }
L_08922DFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[30] | 0u);
      if (branch_taken) {
          goto L_08922EEC;
      }
      goto L_08922E10;
    }
L_08922E10:
    ctx.gpr[19] = (ctx.gpr[30] + static_cast<std::uint32_t>(1218));
    ctx.gpr[20] = (ctx.gpr[30] + static_cast<std::uint32_t>(1692));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08922E1C;
L_08922E1C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08922E70;
      }
      goto L_08922E2C;
    }
L_08922E2C:
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    goto L_08922E30;
L_08922E30:
    if (ctx.gpr[17] == ctx.gpr[4]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08922E64;
    }
    goto L_08922E38;
L_08922E38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1540)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1540)));
    ctx.gpr[8] = (ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08922E4C;
    }
    goto L_08922E4C;
L_08922E4C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08922E60;
      }
      goto L_08922E54;
    }
L_08922E54:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08922E64;
    }
    goto L_08922E5C;
L_08922E5C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08922E60;
L_08922E60:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08922E64;
L_08922E64:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08922E30;
      }
      goto L_08922E70;
    }
L_08922E70:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08922ED8;
    }
    goto L_08922E7C;
L_08922E7C:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1540)));
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(784), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[30]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1680)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[22]);
    ctx.gpr[6] = (ctx.gpr[16] << 5u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(856), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(621));
    ctx.gpr[31] = (0x08922EB4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08922EB4u) goto L_08922EB4;
    return;
L_08922EB4:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(864));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08922ED4u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08922ED4u) goto L_08922ED4;
    return;
L_08922ED4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08922ED8;
L_08922ED8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08922E1C;
      }
      goto L_08922EEC;
    }
L_08922EEC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    goto L_08922EFC;
L_08922EFC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_08922F0C;
      }
      goto L_08922F04;
    }
L_08922F04:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(616), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08922F2C;
      }
      goto L_08922F0C;
    }
L_08922F0C:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(784)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(780)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[11];
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(615)));
      if (branch_taken) {
          goto L_08922F24;
      }
      goto L_08922F1C;
    }
L_08922F1C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(616), static_cast<std::uint8_t>(ctx.gpr[8]));
      if (branch_taken) {
          goto L_08922F2C;
      }
      goto L_08922F24;
    }
L_08922F24:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(616), static_cast<std::uint8_t>(ctx.gpr[8]));
    goto L_08922F2C;
L_08922F2C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08922EFC;
      }
      goto L_08922F3C;
    }
L_08922F3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08922FC0;
      }
      goto L_08922F44;
    }
L_08922F44:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[30] | 0u);
    ctx.gpr[18] = (ctx.gpr[23] | 0u);
    ctx.gpr[19] = (ctx.gpr[23] + static_cast<std::uint32_t>(621));
    ctx.gpr[20] = (ctx.gpr[30] + static_cast<std::uint32_t>(1218));
    ctx.gpr[21] = (ctx.gpr[23] + static_cast<std::uint32_t>(864));
    ctx.gpr[22] = (ctx.gpr[30] + static_cast<std::uint32_t>(1692));
    goto L_08922F60;
L_08922F60:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[30]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1208)));
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[23]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(616), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1540)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(784), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1680)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08922F8Cu);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(856), static_cast<std::uint8_t>(ctx.gpr[7]));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08922F8Cu) goto L_08922F8C;
    return;
L_08922F8C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08922F9Cu);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08922F9Cu) goto L_08922F9C;
    return;
L_08922F9C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08922F60;
      }
      goto L_08922FC0;
    }
L_08922FC0:
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
L_08922FF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[8]);
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0892319C;
      }
      goto L_08923040;
    }
L_08923040:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(60));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(2296));
    ctx.gpr[30] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_0892305C;
L_0892305C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08923068u);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 625u, 0x08843014u>(ctx, &aot_mem) && ctx.pc == 0x08923068u) goto L_08923068;
    return;
L_08923068:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2284)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0892308C;
      }
      goto L_08923080;
    }
L_08923080:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892308C;
      }
      goto L_08923088;
    }
L_08923088:
    ctx.gpr[19] = (ctx.gpr[30] | 0u);
    goto L_0892308C;
L_0892308C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089230AC;
      }
      goto L_08923094;
    }
L_08923094:
    ctx.gpr[31] = (0x0892309Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x0892309Cu) goto L_0892309C;
    return;
L_0892309C:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089230AC;
      }
      goto L_089230A8;
    }
L_089230A8:
    ctx.gpr[19] = (ctx.gpr[30] | 0u);
    goto L_089230AC;
L_089230AC:
    if (ctx.gpr[19] == ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
        goto L_08923178;
    }
    goto L_089230B4;
L_089230B4:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (ctx.gpr[19] | 0u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[23]);
        goto L_08923174;
    }
    goto L_089230CC;
L_089230CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[19] << 5u);
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[17] = (ctx.gpr[19] << 2u);
    ctx.gpr[16] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(1822));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(2296));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1854));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2308));
    goto L_08923108;
L_08923108:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2148)));
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1813)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2186)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1812), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2144), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2285)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2184), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2284), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0892313Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0892313Cu) goto L_0892313C;
    return;
L_0892313C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0892314Cu);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0892314Cu) goto L_0892314C;
    return;
L_0892314C:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08923108;
      }
      goto L_08923170;
    }
L_08923170:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[23]);
    goto L_08923174;
L_08923174:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08923178;
L_08923178:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0892305C;
      }
      goto L_08923190;
    }
L_08923190:
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08923204;
      }
      goto L_0892319C;
    }
L_0892319C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(1822));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2296));
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089231B4;
L_089231B4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089231C0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x089231C0u) goto L_089231C0;
    return;
L_089231C0:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_089231F4;
    }
    goto L_089231C8;
L_089231C8:
    ctx.gpr[31] = (0x089231D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 625u, 0x08843014u>(ctx, &aot_mem) && ctx.pc == 0x089231D0u) goto L_089231D0;
    return;
L_089231D0:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_089231F4;
    }
    goto L_089231D8;
L_089231D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2284)));
    if (ctx.gpr[4] != ctx.gpr[19]) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_089231F4;
    }
    goto L_089231EC;
L_089231EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08923204;
      }
      goto L_089231F4;
    }
L_089231F4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089231B4;
      }
      goto L_08923204;
    }
L_08923204:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_0892321C;
      }
      goto L_0892320C;
    }
L_0892320C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_08923690;
    }
    goto L_0892321C;
L_0892321C:
    if (ctx.gpr[21] == ctx.gpr[22]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_089232F0;
    }
    goto L_08923224;
L_08923224:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_089232E4;
    }
    goto L_0892323C;
L_0892323C:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[21] << 5u);
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[21]);
    ctx.gpr[20] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[23] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[17] = (ctx.gpr[21] << 2u);
    ctx.gpr[16] = (ctx.gpr[21] + ctx.gpr[21]);
    ctx.gpr[18] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(1822));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(2296));
    ctx.gpr[17] = (ctx.gpr[30] + ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[30] + ctx.gpr[16]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1854));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2308));
    goto L_0892327C;
L_0892327C:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[30]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1813)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1812), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2186)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2144), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2285)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2184), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2284), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089232ACu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x089232ACu) goto L_089232AC;
    return;
L_089232AC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089232BCu);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089232BCu) goto L_089232BC;
    return;
L_089232BC:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_0892327C;
      }
      goto L_089232E0;
    }
L_089232E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_089232E4;
L_089232E4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_089232F0;
L_089232F0:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089234DC;
      }
      goto L_08923300;
    }
L_08923300:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1822));
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(2296));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    goto L_08923318;
L_08923318:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089233D8;
      }
      goto L_0892332C;
    }
L_0892332C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (ctx.gpr[22] + ctx.gpr[18]);
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(1822));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(2296));
    goto L_0892333C;
L_0892333C:
    if (ctx.gpr[22] == ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_089233C0;
    }
    goto L_08923344;
L_08923344:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08923350u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08923350u) goto L_08923350;
    return;
L_08923350:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_089233C0;
    }
    goto L_08923358;
L_08923358:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (ctx.gpr[17] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2284)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08923380;
    }
    goto L_0892336C;
L_0892336C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(2284)));
    if (ctx.gpr[5] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_089233C0;
    }
    goto L_08923378;
L_08923378:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089233BC;
      }
      goto L_08923380;
    }
L_08923380:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0892338Cu);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 543u, 0x08A9DEE8u>(ctx, &aot_mem) && ctx.pc == 0x0892338Cu) goto L_0892338C;
    return;
L_0892338C:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_089233C0;
    }
    goto L_08923394;
L_08923394:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(2284)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2284)));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_089233C0;
    }
    goto L_089233A4;
L_089233A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(2144)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2144)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_089233C0;
    }
    goto L_089233B8;
L_089233B8:
    ctx.gpr[30] = (ctx.gpr[17] | 0u);
    goto L_089233BC;
L_089233BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_089233C0;
L_089233C0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0892333C;
      }
      goto L_089233D8;
    }
L_089233D8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[22]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[30] == ctx.gpr[4];
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089234A8;
      }
      goto L_089233EC;
    }
L_089233EC:
    ctx.gpr[22] = (ctx.gpr[30] | 0u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
        goto L_089234A8;
    }
    goto L_08923400;
L_08923400:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[30] << 5u);
    ctx.gpr[6] = (ctx.gpr[30] + ctx.gpr[30]);
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[30] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[30] << 2u);
    ctx.gpr[16] = (ctx.gpr[30] + ctx.gpr[30]);
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(1822));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(2296));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1854));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2308));
    goto L_0892343C;
L_0892343C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2148)));
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1813)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2186)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1812), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2144), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2285)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2184), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2284), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08923470u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08923470u) goto L_08923470;
    return;
L_08923470:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08923480u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08923480u) goto L_08923480;
    return;
L_08923480:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_0892343C;
      }
      goto L_089234A4;
    }
L_089234A4:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089234A8;
L_089234A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08923318;
      }
      goto L_089234DC;
    }
L_089234DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
        goto L_0892361C;
    }
    goto L_089234F0;
L_089234F0:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (ctx.gpr[22] | 0u);
    ctx.gpr[19] = (ctx.gpr[22] | 0u);
    ctx.gpr[20] = (ctx.gpr[22] + static_cast<std::uint32_t>(1822));
    ctx.gpr[21] = (ctx.gpr[22] + static_cast<std::uint32_t>(2296));
    goto L_08923508;
L_08923508:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08923588;
      }
      goto L_08923518;
    }
L_08923518:
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    goto L_08923520;
L_08923520:
    if (ctx.gpr[17] == ctx.gpr[4]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08923578;
    }
    goto L_08923528;
L_08923528:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2144)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(2144)));
    ctx.gpr[9] = (ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923544;
      }
      goto L_0892353C;
    }
L_0892353C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08923574;
      }
      goto L_08923544;
    }
L_08923544:
    if (ctx.gpr[5] != ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08923578;
    }
    goto L_0892354C;
L_0892354C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(2184)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2184)));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08923560;
    }
    goto L_08923560;
L_08923560:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08923574;
      }
      goto L_08923568;
    }
L_08923568:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08923578;
    }
    goto L_08923570;
L_08923570:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08923574;
L_08923574:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08923578;
L_08923578:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08923520;
      }
      goto L_08923588;
    }
L_08923588:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08923600;
    }
    goto L_08923594;
L_08923594:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2144)));
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[30] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1092), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2184)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[30] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(1112), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2284)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[30]);
    ctx.gpr[6] = (ctx.gpr[16] << 5u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1164), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(929));
    ctx.gpr[31] = (0x089235DCu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x089235DCu) goto L_089235DC;
    return;
L_089235DC:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1172));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089235FCu);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089235FCu) goto L_089235FC;
    return;
L_089235FC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08923600;
L_08923600:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08923508;
      }
      goto L_08923618;
    }
L_08923618:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_0892361C;
L_0892361C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[10] | 0u);
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
    goto L_0892362C;
L_0892362C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[10]);
      if (branch_taken) {
          goto L_0892363C;
      }
      goto L_08923634;
    }
L_08923634:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(924), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08923674;
      }
      goto L_0892363C;
    }
L_0892363C:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(1092)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(1088)));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[2];
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(923)));
      if (branch_taken) {
          goto L_0892366C;
      }
      goto L_0892364C;
    }
L_0892364C:
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(1112)));
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(1110)));
    if (ctx.gpr[11] != ctx.gpr[2]) {
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
        goto L_08923664;
    }
    goto L_0892365C;
L_0892365C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(924), static_cast<std::uint8_t>(ctx.gpr[9]));
      if (branch_taken) {
          goto L_08923674;
      }
      goto L_08923664;
    }
L_08923664:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(924), static_cast<std::uint8_t>(ctx.gpr[9]));
      if (branch_taken) {
          goto L_08923674;
      }
      goto L_0892366C;
    }
L_0892366C:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(924), static_cast<std::uint8_t>(ctx.gpr[9]));
    goto L_08923674;
L_08923674:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0892362C;
      }
      goto L_08923688;
    }
L_08923688:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08923728;
      }
      goto L_08923690;
    }
L_08923690:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[30] | 0u);
    ctx.gpr[21] = (ctx.gpr[23] | 0u);
    ctx.gpr[20] = (ctx.gpr[23] + static_cast<std::uint32_t>(929));
    ctx.gpr[19] = (ctx.gpr[30] + static_cast<std::uint32_t>(1822));
    ctx.gpr[18] = (ctx.gpr[23] + static_cast<std::uint32_t>(1172));
    ctx.gpr[17] = (ctx.gpr[30] + static_cast<std::uint32_t>(2296));
    goto L_089236B0;
L_089236B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1812)));
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(924), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(2144)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1092), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(2184)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(1112), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2284)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089236ECu);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1164), static_cast<std::uint8_t>(ctx.gpr[6]));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x089236ECu) goto L_089236EC;
    return;
L_089236EC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089236FCu);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089236FCu) goto L_089236FC;
    return;
L_089236FC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(2));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(2));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089236B0;
      }
      goto L_08923728;
    }
L_08923728:
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
L_08923758:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[23]);
    ctx.gpr[23] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[23]);
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089238DC;
      }
      goto L_089237A8;
    }
L_089237A8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(60));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(2900));
    ctx.gpr[23] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_089237C0;
L_089237C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x089237CCu);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 625u, 0x08843014u>(ctx, &aot_mem) && ctx.pc == 0x089237CCu) goto L_089237CC;
    return;
L_089237CC:
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[30]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2888)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089237EC;
      }
      goto L_089237E0;
    }
L_089237E0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089237EC;
      }
      goto L_089237E8;
    }
L_089237E8:
    ctx.gpr[18] = (ctx.gpr[23] | 0u);
    goto L_089237EC;
L_089237EC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892380C;
      }
      goto L_089237F4;
    }
L_089237F4:
    ctx.gpr[31] = (0x089237FCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x089237FCu) goto L_089237FC;
    return;
L_089237FC:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0892380C;
      }
      goto L_08923808;
    }
L_08923808:
    ctx.gpr[18] = (ctx.gpr[23] | 0u);
    goto L_0892380C;
L_0892380C:
    if (ctx.gpr[18] == ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_089238B8;
    }
    goto L_08923814;
L_08923814:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] << 5u);
      if (branch_taken) {
          goto L_089238B0;
      }
      goto L_0892382C;
    }
L_0892382C:
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[19] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[16] = (ctx.gpr[18] << 2u);
    ctx.gpr[17] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(2426));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(2900));
    ctx.gpr[16] = (ctx.gpr[30] + ctx.gpr[16]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(2458));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2912));
    goto L_08923858;
L_08923858:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[30]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2417)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2752)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2416), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2889)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2748), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2888), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08923880u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08923880u) goto L_08923880;
    return;
L_08923880:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08923890u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08923890u) goto L_08923890;
    return;
L_08923890:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08923858;
      }
      goto L_089238B0;
    }
L_089238B0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_089238B8;
L_089238B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089237C0;
      }
      goto L_089238D0;
    }
L_089238D0:
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08923944;
      }
      goto L_089238DC;
    }
L_089238DC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[18] = (ctx.gpr[30] + static_cast<std::uint32_t>(2426));
    ctx.gpr[17] = (ctx.gpr[30] + static_cast<std::uint32_t>(2900));
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089238F0;
L_089238F0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089238FCu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x089238FCu) goto L_089238FC;
    return;
L_089238FC:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08923930;
    }
    goto L_08923904;
L_08923904:
    ctx.gpr[31] = (0x0892390Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 625u, 0x08843014u>(ctx, &aot_mem) && ctx.pc == 0x0892390Cu) goto L_0892390C;
    return;
L_0892390C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[30]);
      if (branch_taken) {
          goto L_0892392C;
      }
      goto L_08923914;
    }
L_08923914:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2888)));
    if (ctx.gpr[4] != ctx.gpr[19]) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08923930;
    }
    goto L_08923920;
L_08923920:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[23]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08923944;
      }
      goto L_0892392C;
    }
L_0892392C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08923930;
L_08923930:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[23]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089238F0;
      }
      goto L_08923944;
    }
L_08923944:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[21];
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_0892395C;
      }
      goto L_0892394C;
    }
L_0892394C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
        goto L_08923D1C;
    }
    goto L_0892395C;
L_0892395C:
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[21];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08923A0C;
      }
      goto L_08923964;
    }
L_08923964:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08923A04;
      }
      goto L_08923978;
    }
L_08923978:
    ctx.gpr[16] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[19] = (ctx.gpr[30] + ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(2426));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(2900));
    ctx.gpr[22] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[30] + ctx.gpr[16]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(2458));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2912));
    goto L_089239AC;
L_089239AC:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[30]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2417)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2752)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2416), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2889)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2748), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2888), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089239D4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x089239D4u) goto L_089239D4;
    return;
L_089239D4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089239E4u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089239E4u) goto L_089239E4;
    return;
L_089239E4:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089239AC;
      }
      goto L_08923A04;
    }
L_08923A04:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (0u | 0u);
    goto L_08923A0C;
L_08923A0C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[23]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08923BD4;
      }
      goto L_08923A1C;
    }
L_08923A1C:
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(2426));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(2900));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_08923A34;
L_08923A34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08923AF0;
      }
      goto L_08923A48;
    }
L_08923A48:
    ctx.gpr[21] = (ctx.gpr[22] + ctx.gpr[30]);
    ctx.gpr[20] = (ctx.gpr[30] + static_cast<std::uint32_t>(2426));
    ctx.gpr[19] = (ctx.gpr[30] + static_cast<std::uint32_t>(2900));
    ctx.gpr[18] = (ctx.gpr[30] | 0u);
    goto L_08923A58;
L_08923A58:
    if (ctx.gpr[22] == ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08923AD8;
    }
    goto L_08923A60;
L_08923A60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x08923A6Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08923A6Cu) goto L_08923A6C;
    return;
L_08923A6C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (ctx.gpr[17] + ctx.gpr[30]);
      if (branch_taken) {
          goto L_08923AD4;
      }
      goto L_08923A74;
    }
L_08923A74:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2888)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
        goto L_08923A94;
    }
    goto L_08923A80;
L_08923A80:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(2888)));
    if (ctx.gpr[5] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08923AD8;
    }
    goto L_08923A8C;
L_08923A8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08923AD4;
      }
      goto L_08923A94;
    }
L_08923A94:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08923AA0u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 543u, 0x08A9DEE8u>(ctx, &aot_mem) && ctx.pc == 0x08923AA0u) goto L_08923AA0;
    return;
L_08923AA0:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08923AD8;
    }
    goto L_08923AA8;
L_08923AA8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(2888)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2888)));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08923AD8;
    }
    goto L_08923AB8;
L_08923AB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2748)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2748)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08923AD8;
    }
    goto L_08923AD0;
L_08923AD0:
    ctx.gpr[23] = (ctx.gpr[17] | 0u);
    goto L_08923AD4;
L_08923AD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08923AD8;
L_08923AD8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08923A58;
      }
      goto L_08923AF0;
    }
L_08923AF0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[22]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[4];
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08923B98;
      }
      goto L_08923B00;
    }
L_08923B00:
    ctx.gpr[21] = (ctx.gpr[23] | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[23] << 5u);
      if (branch_taken) {
          goto L_08923B98;
      }
      goto L_08923B14;
    }
L_08923B14:
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[23]);
    ctx.gpr[19] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[17] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[23] << 2u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(2426));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(2900));
    ctx.gpr[16] = (ctx.gpr[30] + ctx.gpr[16]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(2458));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2912));
    goto L_08923B40;
L_08923B40:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[30]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2417)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2752)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2416), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2889)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2748), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2888), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08923B68u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08923B68u) goto L_08923B68;
    return;
L_08923B68:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08923B78u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08923B78u) goto L_08923B78;
    return;
L_08923B78:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08923B40;
      }
      goto L_08923B98;
    }
L_08923B98:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08923A34;
      }
      goto L_08923BD4;
    }
L_08923BD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[30] | 0u);
      if (branch_taken) {
          goto L_08923CC4;
      }
      goto L_08923BE8;
    }
L_08923BE8:
    ctx.gpr[19] = (ctx.gpr[30] + static_cast<std::uint32_t>(2426));
    ctx.gpr[20] = (ctx.gpr[30] + static_cast<std::uint32_t>(2900));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08923BF4;
L_08923BF4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08923C48;
      }
      goto L_08923C04;
    }
L_08923C04:
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    goto L_08923C08;
L_08923C08:
    if (ctx.gpr[17] == ctx.gpr[4]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08923C3C;
    }
    goto L_08923C10;
L_08923C10:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2748)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2748)));
    ctx.gpr[8] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08923C24;
    }
    goto L_08923C24;
L_08923C24:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08923C38;
      }
      goto L_08923C2C;
    }
L_08923C2C:
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08923C3C;
    }
    goto L_08923C34;
L_08923C34:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08923C38;
L_08923C38:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08923C3C;
L_08923C3C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08923C08;
      }
      goto L_08923C48;
    }
L_08923C48:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08923CB0;
    }
    goto L_08923C54;
L_08923C54:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2748)));
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1400), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[30]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2888)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[22]);
    ctx.gpr[6] = (ctx.gpr[16] << 5u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1472), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1237));
    ctx.gpr[31] = (0x08923C8Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08923C8Cu) goto L_08923C8C;
    return;
L_08923C8C:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1480));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08923CACu);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08923CACu) goto L_08923CAC;
    return;
L_08923CAC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08923CB0;
L_08923CB0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08923BF4;
      }
      goto L_08923CC4;
    }
L_08923CC4:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    goto L_08923CD4;
L_08923CD4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_08923CE4;
      }
      goto L_08923CDC;
    }
L_08923CDC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1232), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08923D04;
      }
      goto L_08923CE4;
    }
L_08923CE4:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(1400)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(1396)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[11];
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1231)));
      if (branch_taken) {
          goto L_08923CFC;
      }
      goto L_08923CF4;
    }
L_08923CF4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1232), static_cast<std::uint8_t>(ctx.gpr[8]));
      if (branch_taken) {
          goto L_08923D04;
      }
      goto L_08923CFC;
    }
L_08923CFC:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1232), static_cast<std::uint8_t>(ctx.gpr[8]));
    goto L_08923D04;
L_08923D04:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08923CD4;
      }
      goto L_08923D14;
    }
L_08923D14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08923D98;
      }
      goto L_08923D1C;
    }
L_08923D1C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[30] | 0u);
    ctx.gpr[18] = (ctx.gpr[23] | 0u);
    ctx.gpr[19] = (ctx.gpr[23] + static_cast<std::uint32_t>(1237));
    ctx.gpr[20] = (ctx.gpr[30] + static_cast<std::uint32_t>(2426));
    ctx.gpr[21] = (ctx.gpr[23] + static_cast<std::uint32_t>(1480));
    ctx.gpr[22] = (ctx.gpr[30] + static_cast<std::uint32_t>(2900));
    goto L_08923D38;
L_08923D38:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[30]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2416)));
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[23]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1232), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2748)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1400), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2888)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08923D64u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1472), static_cast<std::uint8_t>(ctx.gpr[7]));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08923D64u) goto L_08923D64;
    return;
L_08923D64:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08923D74u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08923D74u) goto L_08923D74;
    return;
L_08923D74:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08923D38;
      }
      goto L_08923D98;
    }
L_08923D98:
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
L_08923DC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (0u | 10u);
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08923F38;
      }
      goto L_08923E14;
    }
L_08923E14:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(60));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(3504));
    ctx.gpr[23] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_08923E2C;
L_08923E2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08923E38u);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 625u, 0x08843014u>(ctx, &aot_mem) && ctx.pc == 0x08923E38u) goto L_08923E38;
    return;
L_08923E38:
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[30]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3492)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08923E58;
      }
      goto L_08923E4C;
    }
L_08923E4C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08923E58;
      }
      goto L_08923E54;
    }
L_08923E54:
    ctx.gpr[18] = (ctx.gpr[23] | 0u);
    goto L_08923E58;
L_08923E58:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08923E78;
      }
      goto L_08923E60;
    }
L_08923E60:
    ctx.gpr[31] = (0x08923E68u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x08923E68u) goto L_08923E68;
    return;
L_08923E68:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08923E78;
      }
      goto L_08923E74;
    }
L_08923E74:
    ctx.gpr[18] = (ctx.gpr[23] | 0u);
    goto L_08923E78;
L_08923E78:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[16];
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08923F14;
      }
      goto L_08923E80;
    }
L_08923E80:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] << 5u);
      if (branch_taken) {
          goto L_08923F14;
      }
      goto L_08923E90;
    }
L_08923E90:
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[19] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[16] = (ctx.gpr[18] << 2u);
    ctx.gpr[17] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(3030));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(3504));
    ctx.gpr[16] = (ctx.gpr[30] + ctx.gpr[16]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(3062));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(3516));
    goto L_08923EBC;
L_08923EBC:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[30]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3021)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3356)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3020), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3493)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3352), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3492), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08923EE4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08923EE4u) goto L_08923EE4;
    return;
L_08923EE4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08923EF4u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08923EF4u) goto L_08923EF4;
    return;
L_08923EF4:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08923EBC;
      }
      goto L_08923F14;
    }
L_08923F14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08923E2C;
      }
      goto L_08923F2C;
    }
L_08923F2C:
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08923F98;
      }
      goto L_08923F38;
    }
L_08923F38:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[18] = (ctx.gpr[30] + static_cast<std::uint32_t>(3030));
    ctx.gpr[17] = (ctx.gpr[30] + static_cast<std::uint32_t>(3504));
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08923F4C;
L_08923F4C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08923F58u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08923F58u) goto L_08923F58;
    return;
L_08923F58:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08923F88;
    }
    goto L_08923F60;
L_08923F60:
    ctx.gpr[31] = (0x08923F68u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 625u, 0x08843014u>(ctx, &aot_mem) && ctx.pc == 0x08923F68u) goto L_08923F68;
    return;
L_08923F68:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[30]);
      if (branch_taken) {
          goto L_08923F84;
      }
      goto L_08923F70;
    }
L_08923F70:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3492)));
    if (ctx.gpr[4] != ctx.gpr[19]) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08923F88;
    }
    goto L_08923F7C;
L_08923F7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08923F98;
      }
      goto L_08923F84;
    }
L_08923F84:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08923F88;
L_08923F88:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08923F4C;
      }
      goto L_08923F98;
    }
L_08923F98:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08923FB0;
      }
      goto L_08923FA0;
    }
L_08923FA0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
        (void)rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 53u, 0x0892434Cu>(ctx, &aot_mem); return;
    }
    goto L_08923FB0;
L_08923FB0:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[21];
    ctx.gpr[22] = (0u | 10u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 5u, 0x08924054u>(ctx, &aot_mem); return;
      }
      goto L_08923FB8;
    }
L_08923FB8:
    ctx.gpr[21] = (ctx.gpr[23] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (0u | 9u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 5u, 0x08924054u>(ctx, &aot_mem); return;
      }
      goto L_08923FC8;
    }
L_08923FC8:
    ctx.gpr[4] = (ctx.gpr[23] << 5u);
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[23]);
    ctx.gpr[19] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[17] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[23] << 2u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(3030));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(3504));
    ctx.gpr[16] = (ctx.gpr[30] + ctx.gpr[16]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(3062));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(3516));
    goto L_08923FF8;
L_08923FF8:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[30]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3021)));
    ctx.pc = 0x08924000u; return;
}

void recomp_unit_0071(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0071_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_71(Runtime &runtime) {
    runtime.register_generated_unit(71u, 0x08920000u, 16384u, &recomp_unit_0071, &recomp_unit_0071_entry);
    runtime.register_function(0x08920000u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920018u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920040u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920050u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920070u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920078u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892007Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920088u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920094u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089200A8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089200ACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089200B4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089200C4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089200CCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089200D4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089200D8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089200DCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089200E8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892011Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892013Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920154u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920158u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920164u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920170u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920178u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920180u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920190u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920198u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089201A0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089201B0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089201E0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920238u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920254u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920280u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920290u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089202B4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089202C4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089202E4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089202ECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089202F4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920300u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892030Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920328u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920334u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892033Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920348u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920350u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920368u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892036Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920370u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920384u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920390u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892039Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089203ACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089203DCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920404u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920414u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920434u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920438u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892043Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920448u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920454u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920468u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892046Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920474u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920484u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892048Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920494u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920498u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892049Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089204A8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089204DCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089204FCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920514u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920518u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920524u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920530u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920538u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920540u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920550u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920558u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920560u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920570u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089205A0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089205F8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920614u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920640u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920650u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920674u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920684u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089206A4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089206ACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089206B4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089206C0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089206CCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089206E8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089206F4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089206FCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920708u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920710u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920728u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892072Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920730u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920744u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920750u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892075Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892076Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892079Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089207C4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089207D4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089207F4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089207F8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089207FCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920808u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920814u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920828u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892082Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920834u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920844u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892084Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920854u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920858u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892085Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920868u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892089Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089208BCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089208D4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089208D8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089208E4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089208F0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089208F8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920900u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920910u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920918u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920920u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920930u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920960u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089209B8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089209D4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920A00u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920A10u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920A34u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920A44u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920A64u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920A6Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920A74u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920A80u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920A8Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920AA8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920AB4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920ABCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920AC8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920AD0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920AE8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920AECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920AF0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920B04u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920B10u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920B1Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920B2Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920B5Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920B84u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920B94u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920BB4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920BB8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920BBCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920BC8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920BD4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920BE8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920BECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920BF4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920C04u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920C0Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920C14u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920C18u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920C1Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920C28u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920C5Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920C7Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920C94u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920C98u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920CA4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920CB0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920CB8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920CC0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920CD0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920CD8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920CE0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920CF0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920D20u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920D78u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920D94u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920DC0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920DD0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920DF4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920E04u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920E24u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920E2Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920E34u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920E40u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920E4Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920E68u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920E74u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920E7Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920E88u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920E90u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920EA8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920EACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920EB0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920EC4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920ED0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920EDCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920EECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920F1Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920F44u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920F54u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920F74u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920F78u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920F7Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920F88u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920F94u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920FA8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920FACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920FB4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920FC4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920FCCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920FD4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920FD8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920FDCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920FE8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892101Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892103Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921054u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921058u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921064u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921070u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921078u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921080u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921090u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921098u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089210A0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089210B0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089210E0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921124u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892112Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892113Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892114Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921170u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892117Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089211CCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089211F8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921224u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921238u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921248u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892126Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921278u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089212C8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089212F4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921320u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921338u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921348u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921358u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921368u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921378u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921388u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921398u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089213A8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089213B8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089213C0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089213F0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921430u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921440u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921448u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921458u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921468u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892148Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921498u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089214E8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921514u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921540u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921550u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921558u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921568u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892158Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921598u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089215E8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921614u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921640u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921658u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921668u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921678u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921688u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921698u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089216A8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089216B8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089216C8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089216D8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089216E0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921710u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921754u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892175Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892176Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892177Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089217A0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089217ACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089217FCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921828u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921854u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921864u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921878u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921880u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921890u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089218B4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089218C0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921910u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892193Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921968u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921984u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921994u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089219A4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089219B4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089219C4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089219D4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089219E4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089219F4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921A04u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921A0Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921A3Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921A8Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921AA4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921AB0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921AC4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921ACCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921AD0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921AD8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921AE0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921AECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921AF0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921AF8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921B10u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921B3Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921B64u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921B74u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921B94u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921B9Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921BB4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921BC0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921BD4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921BE0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921BE8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921BF0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921BF8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921C04u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921C10u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921C14u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921C28u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921C30u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921C40u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921C48u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921C5Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921C90u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921CB8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921CC8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921CE8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921CF0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921D00u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921D18u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921D2Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921D3Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921D44u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921D50u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921D58u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921D64u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921D70u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921D78u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921D84u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921D8Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921D9Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921DB4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921DB8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921DBCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921DD4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921DE4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921DF8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921E24u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921E4Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921E5Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921E7Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921EB8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921ECCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921ED8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921EE8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921EECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921EF4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921F08u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921F10u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921F18u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921F1Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921F20u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921F2Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921F38u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921F70u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921F90u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921F94u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921FA8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921FB8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921FC0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921FC8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921FD8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921FE0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921FE8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921FF8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922000u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892201Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922048u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922058u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892207Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089220ACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922104u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892211Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922128u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922140u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922148u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892214Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922154u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892215Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922168u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892216Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922174u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892218Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089221C0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089221F4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922204u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922224u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922228u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892222Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892223Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922248u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922260u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892226Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922274u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892227Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922284u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922298u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089222A4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089222B8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089222C0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089222D0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089222DCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089222F0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922328u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922358u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922368u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922388u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892238Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089223A0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089223B8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089223CCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089223DCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089223E4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089223F0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089223F8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892240Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922418u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922420u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892242Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922434u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922444u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922458u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892246Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892247Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892248Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922498u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892249Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089224A0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089224B0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089224C4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089224D4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089224E4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089224F0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922500u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922504u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922508u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922520u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922530u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922544u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922574u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089225ACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089225B8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089225D8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892260Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922620u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922634u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922644u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922648u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922650u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922664u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922678u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922688u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922698u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089226A4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089226A8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089226ACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089226BCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089226D0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089226E0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089226F0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089226FCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892270Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892271Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922724u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922728u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892272Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922738u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922744u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922784u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089227A4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089227A8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089227BCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089227C0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089227CCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089227D4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089227DCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089227F4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922808u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922818u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922828u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922834u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922838u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892283Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892284Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922860u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922870u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922880u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892288Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892289Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089228A4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089228A8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089228B8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089228C0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089228E0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922914u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922924u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922948u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922980u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089229D0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089229E8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089229F4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922A08u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922A10u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922A14u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922A1Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922A24u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922A30u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922A34u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922A3Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922A54u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922A80u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922AA8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922AB8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922AD8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922AE0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922AF8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922B04u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922B18u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922B24u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922B2Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922B34u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922B3Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922B48u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922B54u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922B58u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922B6Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922B74u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922B84u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922B8Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922BA0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922BD4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922BFCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922C0Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922C2Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922C34u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922C44u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922C5Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922C70u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922C80u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922C88u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922C94u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922C9Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922CA8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922CB4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922CBCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922CC8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922CD0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922CE0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922CF8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922CFCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922D00u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922D18u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922D28u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922D3Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922D68u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922D90u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922DA0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922DC0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922DFCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922E10u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922E1Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922E2Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922E30u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922E38u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922E4Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922E54u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922E5Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922E60u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922E64u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922E70u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922E7Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922EB4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922ED4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922ED8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922EECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922EFCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922F04u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922F0Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922F1Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922F24u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922F2Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922F3Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922F44u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922F60u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922F8Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922F9Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922FC0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922FF0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923040u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892305Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923068u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923080u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923088u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892308Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923094u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892309Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089230A8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089230ACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089230B4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089230CCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923108u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892313Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892314Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923170u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923174u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923178u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923190u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892319Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089231B4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089231C0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089231C8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089231D0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089231D8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089231ECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089231F4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923204u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892320Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892321Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923224u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892323Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892327Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089232ACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089232BCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089232E0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089232E4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089232F0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923300u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923318u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892332Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892333Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923344u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923350u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923358u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892336Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923378u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923380u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892338Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923394u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089233A4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089233B8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089233BCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089233C0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089233D8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089233ECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923400u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892343Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923470u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923480u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089234A4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089234A8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089234DCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089234F0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923508u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923518u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923520u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923528u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892353Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923544u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892354Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923560u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923568u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923570u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923574u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923578u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923588u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923594u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089235DCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089235FCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923600u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923618u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892361Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892362Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923634u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892363Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892364Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892365Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923664u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892366Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923674u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923688u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923690u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089236B0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089236ECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089236FCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923728u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923758u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089237A8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089237C0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089237CCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089237E0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089237E8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089237ECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089237F4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089237FCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923808u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892380Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923814u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892382Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923858u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923880u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923890u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089238B0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089238B8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089238D0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089238DCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089238F0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089238FCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923904u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892390Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923914u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923920u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892392Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923930u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923944u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892394Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892395Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923964u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923978u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089239ACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089239D4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089239E4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923A04u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923A0Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923A1Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923A34u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923A48u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923A58u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923A60u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923A6Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923A74u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923A80u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923A8Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923A94u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923AA0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923AA8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923AB8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923AD0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923AD4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923AD8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923AF0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923B00u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923B14u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923B40u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923B68u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923B78u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923B98u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923BD4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923BE8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923BF4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923C04u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923C08u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923C10u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923C24u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923C2Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923C34u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923C38u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923C3Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923C48u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923C54u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923C8Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923CACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923CB0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923CC4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923CD4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923CDCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923CE4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923CF4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923CFCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923D04u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923D14u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923D1Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923D38u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923D64u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923D74u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923D98u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923DC8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923E14u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923E2Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923E38u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923E4Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923E54u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923E58u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923E60u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923E68u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923E74u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923E78u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923E80u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923E90u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923EBCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923EE4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923EF4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923F14u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923F2Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923F38u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923F4Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923F58u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923F60u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923F68u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923F70u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923F7Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923F84u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923F88u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923F98u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923FA0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923FB0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923FB8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923FC8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923FF8u, &recomp_unit_0071, "recomp_unit_0071");
}
} // namespace psprecomp

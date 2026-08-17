#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0019[4063] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
    0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0,
    0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0,
    0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0,
    0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 31,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    32, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0,
    0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47,
    0, 48, 49, 0, 50, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 55,
    0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0,
    63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 67, 0, 68, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0,
    0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0,
    0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 80, 0, 81, 0, 0, 0, 82, 0,
    0, 0, 83, 0, 0, 0, 84, 0, 85, 0, 86, 0, 87, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 90, 91, 0, 0, 0, 0, 92, 0,
    0, 93, 0, 94, 0, 95, 0, 96, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 101, 0, 102, 0,
    103, 0, 104, 0, 0, 105, 0, 0, 106, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 110, 0, 0, 111, 0, 0, 112, 0, 113, 0, 0,
    0, 0, 0, 114, 0, 0, 115, 0, 116, 0, 0, 117, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 122, 0, 0, 123, 0,
    0, 124, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 128, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 133,
    0, 0, 134, 0, 0, 135, 0, 136, 0, 0, 0, 0, 0, 137, 0, 138, 139, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0,
    143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0,
    0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 152, 0, 0,
    153, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0,
    0, 160, 0, 161, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 166, 0, 167, 0, 168, 0, 169, 0, 0, 0, 0, 170, 0, 171, 0, 172, 0, 173, 0, 174, 0, 175, 0, 0, 176, 0, 177, 0, 0, 178,
    0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 182, 0, 183, 0, 184, 0, 185, 186, 0, 0, 187, 0, 188, 0, 189, 0, 190,
    0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 194, 0, 195, 0, 196, 0, 0, 197, 0, 198, 0, 0, 199, 0, 200, 0, 201,
    0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 205, 206, 0, 0, 207, 0, 0, 208, 0, 0, 209, 0, 210, 0, 211, 0, 212, 213, 0,
    214, 0, 0, 215, 0, 216, 0, 0, 217, 0, 218, 0, 219, 0, 220, 221, 0, 222, 0, 0, 223, 0, 0, 224, 0, 225, 0, 226, 0, 227, 228, 0,
    229, 0, 230, 0, 231, 0, 0, 232, 0, 233, 0, 234, 0, 235, 236, 0, 237, 0, 238, 0, 239, 0, 0, 0, 0, 240, 0, 241, 0, 242, 243, 0,
    0, 0, 244, 0, 0, 0, 0, 0, 245, 246, 0, 247, 0, 248, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251,
    0, 252, 0, 0, 253, 0, 254, 0, 255, 0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 259, 0, 0, 260, 0,
    261, 0, 262, 0, 263, 0, 264, 265, 0, 0, 266, 0, 0, 267, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 271, 0, 272, 0, 0,
    273, 274, 275, 0, 0, 0, 276, 0, 0, 0, 277, 0, 278, 0, 279, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0,
    283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 285, 0, 286, 0, 0, 287, 0, 288, 0, 289, 0, 0, 290, 0,
    0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0,
    0, 296, 0, 297, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0,
    303, 0, 0, 304, 0, 305, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 312, 0, 313, 0, 314, 0, 0, 315, 0, 316, 317, 0, 318, 0, 319, 0,
    320, 0, 0, 321, 0, 322, 0, 0, 0, 0, 323, 324, 0, 325, 0, 326, 0, 0, 0, 0, 0, 327, 0, 328, 0, 329, 0, 0, 330, 0, 0, 331,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0,
    0, 0, 0, 335, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 341,
    0, 342, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 346, 0, 0, 347, 0, 0, 0,
    0, 348, 0, 349, 0, 0, 350, 0, 0, 0, 0, 351, 0, 352, 0, 0, 353, 0, 354, 0, 0, 355, 0, 356, 0, 0, 357, 0, 358, 0, 359, 0,
    0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 365, 0, 366, 0,
    367, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 374, 0, 0, 0,
    375, 376, 377, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 0, 382, 0, 383, 0, 0, 0, 0, 0, 0, 0, 384, 0,
    0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 389, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 392, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0,
    0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0,
    401, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 406, 0, 0, 0, 407, 0, 408,
    0, 0, 0, 0, 409, 0, 410, 0, 0, 0, 411, 0, 412, 0, 0, 0, 413, 0, 414, 0, 0, 415, 0, 416, 0, 0, 417, 0, 0, 418, 0, 0,
    419, 0, 0, 420, 0, 421, 0, 0, 0, 422, 0, 423, 0, 0, 424, 0, 425, 0, 0, 0, 426, 0, 427, 0, 0, 428, 0, 429, 0, 0, 430, 0,
    431, 0, 432, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 437,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0,
    0, 0, 441, 0, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 445, 0, 0, 0, 446, 0, 0, 0, 447, 0,
    0, 0, 448, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 452, 0, 0, 453, 0, 0, 454, 0, 0, 0,
    455, 0, 0, 0, 456, 0, 457, 0, 0, 458, 0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0,
    0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 465,
    0, 466, 0, 0, 467, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 470, 0, 0, 0, 471, 0, 472, 0, 473, 0, 0,
    474, 0, 0, 0, 475, 0, 0, 0, 476, 0, 0, 0, 477, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 480,
    0, 0, 481, 0, 0, 482, 0, 483, 0, 484, 0, 485, 0, 486, 0, 487, 0, 488, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 490, 0, 0,
    0, 491, 0, 492, 0, 0, 0, 0, 0, 493, 0, 0, 494, 0, 0, 0, 495, 0, 0, 0, 496, 0, 0, 0, 497, 0, 0, 498, 0, 499, 0, 500,
    0, 501, 0, 502, 0, 503, 0, 504, 0, 505, 506, 0, 507, 0, 0, 508, 0, 0, 0, 0, 0, 509, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0,
    511, 0, 0, 0, 0, 0, 0, 512, 0, 0, 513, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 516, 0,
    0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 519, 0, 0, 0, 520, 0, 0, 0, 521, 0, 0, 0, 0, 0, 522, 0, 0, 523, 0,
    0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 526, 0, 527, 0, 0, 0, 528, 0, 529, 0, 0, 0, 530, 0, 0, 0, 0,
    0, 0, 0, 0, 531, 0, 532, 0, 0, 0, 533, 0, 0, 0, 534, 0, 535, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 543, 0, 544, 0, 0,
    0, 0, 0, 545, 0, 0, 0, 546, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 549, 0, 550, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 556, 0, 0, 557, 0, 0, 0, 0, 0, 0, 558, 0, 0,
    0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 560, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 563,
    0, 0, 0, 564, 0, 0, 0, 565, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    567, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 572,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 577, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 581, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 584, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0,
    0, 587, 0, 0, 0, 588, 0, 0, 0, 0, 589, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 592,
    0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 595, 0, 0, 0, 0,
    0, 596, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 598, 0, 599, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 602,
    0, 603, 0, 604, 0, 605, 0, 0, 0, 606, 0, 0, 0, 607, 0, 0, 0, 608, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 610, 0, 611, 0,
    612, 0, 0, 0, 613, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 617, 0, 0, 0,
    0, 0, 618, 0, 0, 0, 0, 619, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 622, 0, 0, 0, 623, 0, 624, 0, 0, 0, 0,
    625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 629, 0, 0,
    0, 0, 630, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0,
    0, 0, 634, 0, 0, 0, 0, 635, 0, 0, 0, 636, 0, 637, 0, 638, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0,
    0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 648, 0, 649, 0, 650, 0, 651, 0,
    652, 0, 653, 0, 654, 0, 655, 0, 656, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 659, 0, 0, 660, 0,
    0, 0, 661, 0, 0, 0, 0, 662, 0, 0, 663, 0, 664, 0, 0, 665, 0, 0, 0, 0, 666, 0, 0, 0, 0, 667, 0, 0, 0, 0, 668, 0,
    0, 0, 0, 669, 0, 0, 0, 0, 670, 0, 0, 671, 0, 672, 0, 673, 0, 674, 0, 675, 0, 676, 0, 677, 0, 678, 0, 679, 0, 680, 0, 0,
    681, 682, 0, 0, 0, 683, 0, 0, 0, 0, 0, 684, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 687,
    0, 0, 0, 688, 0, 689, 0, 690, 0, 691, 0, 0, 0, 692, 0, 693, 0, 694, 695, 0, 696, 0, 697, 698, 0, 0, 699, 0, 0, 700, 0, 0,
    0, 701, 0, 702, 0, 703, 0, 704, 0, 0, 0, 705, 0, 706, 0, 0, 707, 0, 708, 0, 709, 0, 0, 710, 0, 0, 0, 711, 0, 0, 712, 0,
    713, 0, 714, 0, 715, 0, 716, 0, 717, 0, 0, 718, 0, 719, 0, 720, 0, 721, 0, 0, 722, 0, 723, 0, 724, 0, 725, 0, 726, 0, 727, 0,
    728, 0, 0, 0, 729, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 730, 0, 0, 731, 0, 0, 732, 0, 0, 0, 0, 733, 0, 0,
    0, 734, 0, 735, 0, 0, 736, 0, 737, 0, 0, 738, 0, 739, 0, 740, 0, 0, 0, 0, 741, 0, 0, 742, 0, 743, 0, 744, 0, 745, 0, 0,
    746, 0, 747, 0, 748, 0, 749, 0, 750, 0, 0, 0, 0, 0, 0, 0, 0, 751, 0, 0, 752, 0, 753, 0, 754, 0, 0, 0, 0, 755, 0, 756,
    0, 757, 0, 758, 0, 759, 0, 760, 0, 0, 0, 0, 0, 0, 0, 0, 0, 761, 0, 0, 762, 0, 0, 763, 0, 0, 0, 764, 0, 0, 0, 0,
    765, 0, 766, 0, 0, 767, 0, 0, 768, 0, 0, 0, 769, 770, 0, 0, 771, 0, 0, 772, 0, 773, 0, 774, 0, 775, 0, 776, 0, 0, 0, 0,
    0, 777, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 778, 0, 0, 779, 0, 0, 0, 0, 780, 0, 0, 0, 781, 0, 782, 0, 0, 783, 0, 784,
    0, 0, 785, 0, 0, 786, 0, 0, 787, 0, 0, 0, 0, 788, 0, 0, 0, 789, 0, 790, 0, 0, 791, 0, 792, 0, 0, 793, 0, 794, 0, 795,
    0, 796, 0, 797, 0, 0, 0, 0, 0, 798, 0, 0, 0, 0, 799, 0, 0, 0, 0, 0, 0, 0, 800, 0, 0, 801, 802, 0, 0, 0, 0, 803,
    0, 804, 0, 805, 0, 806, 0, 807, 0, 808, 0, 0, 0, 0, 0, 0, 0, 0, 0, 809, 0, 0, 810, 0, 0, 811, 0, 0, 0, 812, 0, 0,
    0, 0, 813, 0, 814, 0, 0, 815, 0, 0, 816, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 817, 818, 0, 0, 819, 0, 0, 0, 820, 0,
    821, 0, 822, 0, 823, 0, 824, 0, 0, 0, 0, 825, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 826, 0, 0, 0, 0, 0, 0, 0, 827,
};
void recomp_unit_0019_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08850000u;
        entry_id = (entry_delta < 16252u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0019[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08850000;
    case 2u: goto L_08850024;
    case 3u: goto L_08850038;
    case 4u: goto L_08850050;
    case 5u: goto L_08850070;
    case 6u: goto L_08850084;
    case 7u: goto L_088500A4;
    case 8u: goto L_088500BC;
    case 9u: goto L_088500D4;
    case 10u: goto L_088500F0;
    case 11u: goto L_0885010C;
    case 12u: goto L_0885011C;
    case 13u: goto L_08850128;
    case 14u: goto L_08850144;
    case 15u: goto L_0885014C;
    case 16u: goto L_08850168;
    case 17u: goto L_08850170;
    case 18u: goto L_0885018C;
    case 19u: goto L_08850194;
    case 20u: goto L_088501B0;
    case 21u: goto L_088501B8;
    case 22u: goto L_088501E0;
    case 23u: goto L_08850204;
    case 24u: goto L_0885021C;
    case 25u: goto L_08850278;
    case 26u: goto L_088502B4;
    case 27u: goto L_088502BC;
    case 28u: goto L_088502CC;
    case 29u: goto L_088502E8;
    case 30u: goto L_088502F0;
    case 31u: goto L_088502FC;
    case 32u: goto L_08850380;
    case 33u: goto L_0885038C;
    case 34u: goto L_088503CC;
    case 35u: goto L_088503E8;
    case 36u: goto L_08850500;
    case 37u: goto L_0885054C;
    case 38u: goto L_0885055C;
    case 39u: goto L_08850588;
    case 40u: goto L_088505B0;
    case 41u: goto L_088505B8;
    case 42u: goto L_088505D0;
    case 43u: goto L_088505E4;
    case 44u: goto L_08850604;
    case 45u: goto L_0885062C;
    case 46u: goto L_08850670;
    case 47u: goto L_0885067C;
    case 48u: goto L_08850684;
    case 49u: goto L_08850688;
    case 50u: goto L_08850690;
    case 51u: goto L_088506A0;
    case 52u: goto L_088506A8;
    case 53u: goto L_088506E4;
    case 54u: goto L_088506EC;
    case 55u: goto L_088506FC;
    case 56u: goto L_08850704;
    case 57u: goto L_0885071C;
    case 58u: goto L_0885072C;
    case 59u: goto L_08850730;
    case 60u: goto L_08850738;
    case 61u: goto L_08850768;
    case 62u: goto L_08850770;
    case 63u: goto L_08850780;
    case 64u: goto L_0885078C;
    case 65u: goto L_088507BC;
    case 66u: goto L_088507C4;
    case 67u: goto L_088507CC;
    case 68u: goto L_088507D4;
    case 69u: goto L_088507E4;
    case 70u: goto L_088507F4;
    case 71u: goto L_08850810;
    case 72u: goto L_08850820;
    case 73u: goto L_08850830;
    case 74u: goto L_088508B4;
    case 75u: goto L_088508F0;
    case 76u: goto L_08850904;
    case 77u: goto L_08850928;
    case 78u: goto L_08850950;
    case 79u: goto L_08850958;
    case 80u: goto L_08850960;
    case 81u: goto L_08850968;
    case 82u: goto L_08850978;
    case 83u: goto L_08850988;
    case 84u: goto L_08850998;
    case 85u: goto L_088509A0;
    case 86u: goto L_088509A8;
    case 87u: goto L_088509B0;
    case 88u: goto L_088509C0;
    case 89u: goto L_088509D0;
    case 90u: goto L_088509E0;
    case 91u: goto L_088509E4;
    case 92u: goto L_088509F8;
    case 93u: goto L_08850A04;
    case 94u: goto L_08850A0C;
    case 95u: goto L_08850A14;
    case 96u: goto L_08850A1C;
    case 97u: goto L_08850A24;
    case 98u: goto L_08850A3C;
    case 99u: goto L_08850A60;
    case 100u: goto L_08850A68;
    case 101u: goto L_08850A70;
    case 102u: goto L_08850A78;
    case 103u: goto L_08850A80;
    case 104u: goto L_08850A88;
    case 105u: goto L_08850A94;
    case 106u: goto L_08850AA0;
    case 107u: goto L_08850AA8;
    case 108u: goto L_08850AC0;
    case 109u: goto L_08850ACC;
    case 110u: goto L_08850AD4;
    case 111u: goto L_08850AE0;
    case 112u: goto L_08850AEC;
    case 113u: goto L_08850AF4;
    case 114u: goto L_08850B0C;
    case 115u: goto L_08850B18;
    case 116u: goto L_08850B20;
    case 117u: goto L_08850B2C;
    case 118u: goto L_08850B38;
    case 119u: goto L_08850B40;
    case 120u: goto L_08850B58;
    case 121u: goto L_08850B64;
    case 122u: goto L_08850B6C;
    case 123u: goto L_08850B78;
    case 124u: goto L_08850B84;
    case 125u: goto L_08850B8C;
    case 126u: goto L_08850BA4;
    case 127u: goto L_08850BB0;
    case 128u: goto L_08850BB8;
    case 129u: goto L_08850BC4;
    case 130u: goto L_08850BD0;
    case 131u: goto L_08850BE8;
    case 132u: goto L_08850BF4;
    case 133u: goto L_08850BFC;
    case 134u: goto L_08850C08;
    case 135u: goto L_08850C14;
    case 136u: goto L_08850C1C;
    case 137u: goto L_08850C34;
    case 138u: goto L_08850C3C;
    case 139u: goto L_08850C40;
    case 140u: goto L_08850C4C;
    case 141u: goto L_08850C6C;
    case 142u: goto L_08850C74;
    case 143u: goto L_08850C80;
    case 144u: goto L_08850C9C;
    case 145u: goto L_08850CB0;
    case 146u: goto L_08850CD8;
    case 147u: goto L_08850CF4;
    case 148u: goto L_08850D0C;
    case 149u: goto L_08850D48;
    case 150u: goto L_08850D64;
    case 151u: goto L_08850D6C;
    case 152u: goto L_08850D74;
    case 153u: goto L_08850D80;
    case 154u: goto L_08850D8C;
    case 155u: goto L_08850D9C;
    case 156u: goto L_08850DAC;
    case 157u: goto L_08850DC0;
    case 158u: goto L_08850DD8;
    case 159u: goto L_08850DF4;
    case 160u: goto L_08850E04;
    case 161u: goto L_08850E0C;
    case 162u: goto L_08850E20;
    case 163u: goto L_08850E28;
    case 164u: goto L_08850E3C;
    case 165u: goto L_08850E54;
    case 166u: goto L_08850E88;
    case 167u: goto L_08850E90;
    case 168u: goto L_08850E98;
    case 169u: goto L_08850EA0;
    case 170u: goto L_08850EB4;
    case 171u: goto L_08850EBC;
    case 172u: goto L_08850EC4;
    case 173u: goto L_08850ECC;
    case 174u: goto L_08850ED4;
    case 175u: goto L_08850EDC;
    case 176u: goto L_08850EE8;
    case 177u: goto L_08850EF0;
    case 178u: goto L_08850EFC;
    case 179u: goto L_08850F04;
    case 180u: goto L_08850F24;
    case 181u: goto L_08850F30;
    case 182u: goto L_08850F3C;
    case 183u: goto L_08850F44;
    case 184u: goto L_08850F4C;
    case 185u: goto L_08850F54;
    case 186u: goto L_08850F58;
    case 187u: goto L_08850F64;
    case 188u: goto L_08850F6C;
    case 189u: goto L_08850F74;
    case 190u: goto L_08850F7C;
    case 191u: goto L_08850F84;
    case 192u: goto L_08850FA4;
    case 193u: goto L_08850FB4;
    case 194u: goto L_08850FBC;
    case 195u: goto L_08850FC4;
    case 196u: goto L_08850FCC;
    case 197u: goto L_08850FD8;
    case 198u: goto L_08850FE0;
    case 199u: goto L_08850FEC;
    case 200u: goto L_08850FF4;
    case 201u: goto L_08850FFC;
    case 202u: goto L_08851004;
    case 203u: goto L_08851024;
    case 204u: goto L_0885102C;
    case 205u: goto L_08851034;
    case 206u: goto L_08851038;
    case 207u: goto L_08851044;
    case 208u: goto L_08851050;
    case 209u: goto L_0885105C;
    case 210u: goto L_08851064;
    case 211u: goto L_0885106C;
    case 212u: goto L_08851074;
    case 213u: goto L_08851078;
    case 214u: goto L_08851080;
    case 215u: goto L_0885108C;
    case 216u: goto L_08851094;
    case 217u: goto L_088510A0;
    case 218u: goto L_088510A8;
    case 219u: goto L_088510B0;
    case 220u: goto L_088510B8;
    case 221u: goto L_088510BC;
    case 222u: goto L_088510C4;
    case 223u: goto L_088510D0;
    case 224u: goto L_088510DC;
    case 225u: goto L_088510E4;
    case 226u: goto L_088510EC;
    case 227u: goto L_088510F4;
    case 228u: goto L_088510F8;
    case 229u: goto L_08851100;
    case 230u: goto L_08851108;
    case 231u: goto L_08851110;
    case 232u: goto L_0885111C;
    case 233u: goto L_08851124;
    case 234u: goto L_0885112C;
    case 235u: goto L_08851134;
    case 236u: goto L_08851138;
    case 237u: goto L_08851140;
    case 238u: goto L_08851148;
    case 239u: goto L_08851150;
    case 240u: goto L_08851164;
    case 241u: goto L_0885116C;
    case 242u: goto L_08851174;
    case 243u: goto L_08851178;
    case 244u: goto L_08851188;
    case 245u: goto L_088511A0;
    case 246u: goto L_088511A4;
    case 247u: goto L_088511AC;
    case 248u: goto L_088511B4;
    case 249u: goto L_088511BC;
    case 250u: goto L_088511DC;
    case 251u: goto L_088511FC;
    case 252u: goto L_08851204;
    case 253u: goto L_08851210;
    case 254u: goto L_08851218;
    case 255u: goto L_08851220;
    case 256u: goto L_08851228;
    case 257u: goto L_08851234;
    case 258u: goto L_08851264;
    case 259u: goto L_0885126C;
    case 260u: goto L_08851278;
    case 261u: goto L_08851280;
    case 262u: goto L_08851288;
    case 263u: goto L_08851290;
    case 264u: goto L_08851298;
    case 265u: goto L_0885129C;
    case 266u: goto L_088512A8;
    case 267u: goto L_088512B4;
    case 268u: goto L_088512C0;
    case 269u: goto L_088512CC;
    case 270u: goto L_088512E0;
    case 271u: goto L_088512EC;
    case 272u: goto L_088512F4;
    case 273u: goto L_08851300;
    case 274u: goto L_08851304;
    case 275u: goto L_08851308;
    case 276u: goto L_08851318;
    case 277u: goto L_08851328;
    case 278u: goto L_08851330;
    case 279u: goto L_08851338;
    case 280u: goto L_08851340;
    case 281u: goto L_0885135C;
    case 282u: goto L_08851370;
    case 283u: goto L_08851380;
    case 284u: goto L_088513C0;
    case 285u: goto L_088513C8;
    case 286u: goto L_088513D0;
    case 287u: goto L_088513DC;
    case 288u: goto L_088513E4;
    case 289u: goto L_088513EC;
    case 290u: goto L_088513F8;
    case 291u: goto L_08851408;
    case 292u: goto L_0885141C;
    case 293u: goto L_08851430;
    case 294u: goto L_08851458;
    case 295u: goto L_0885146C;
    case 296u: goto L_08851484;
    case 297u: goto L_0885148C;
    case 298u: goto L_0885149C;
    case 299u: goto L_088514AC;
    case 300u: goto L_088514C4;
    case 301u: goto L_088514D8;
    case 302u: goto L_088514F0;
    case 303u: goto L_08851500;
    case 304u: goto L_0885150C;
    case 305u: goto L_08851514;
    case 306u: goto L_0885151C;
    case 307u: goto L_08851534;
    case 308u: goto L_08851560;
    case 309u: goto L_088515A8;
    case 310u: goto L_088515F8;
    case 311u: goto L_08851634;
    case 312u: goto L_08851640;
    case 313u: goto L_08851648;
    case 314u: goto L_08851650;
    case 315u: goto L_0885165C;
    case 316u: goto L_08851664;
    case 317u: goto L_08851668;
    case 318u: goto L_08851670;
    case 319u: goto L_08851678;
    case 320u: goto L_08851680;
    case 321u: goto L_0885168C;
    case 322u: goto L_08851694;
    case 323u: goto L_088516A8;
    case 324u: goto L_088516AC;
    case 325u: goto L_088516B4;
    case 326u: goto L_088516BC;
    case 327u: goto L_088516D4;
    case 328u: goto L_088516DC;
    case 329u: goto L_088516E4;
    case 330u: goto L_088516F0;
    case 331u: goto L_088516FC;
    case 332u: goto L_0885172C;
    case 333u: goto L_08851758;
    case 334u: goto L_08851770;
    case 335u: goto L_0885178C;
    case 336u: goto L_08851794;
    case 337u: goto L_088517AC;
    case 338u: goto L_088517C8;
    case 339u: goto L_088517D8;
    case 340u: goto L_088517F4;
    case 341u: goto L_088517FC;
    case 342u: goto L_08851804;
    case 343u: goto L_0885180C;
    case 344u: goto L_08851824;
    case 345u: goto L_0885185C;
    case 346u: goto L_08851864;
    case 347u: goto L_08851870;
    case 348u: goto L_08851884;
    case 349u: goto L_0885188C;
    case 350u: goto L_08851898;
    case 351u: goto L_088518AC;
    case 352u: goto L_088518B4;
    case 353u: goto L_088518C0;
    case 354u: goto L_088518C8;
    case 355u: goto L_088518D4;
    case 356u: goto L_088518DC;
    case 357u: goto L_088518E8;
    case 358u: goto L_088518F0;
    case 359u: goto L_088518F8;
    case 360u: goto L_08851908;
    case 361u: goto L_08851920;
    case 362u: goto L_08851938;
    case 363u: goto L_08851950;
    case 364u: goto L_08851968;
    case 365u: goto L_08851970;
    case 366u: goto L_08851978;
    case 367u: goto L_08851980;
    case 368u: goto L_08851988;
    case 369u: goto L_0885199C;
    case 370u: goto L_088519B4;
    case 371u: goto L_088519DC;
    case 372u: goto L_08851A54;
    case 373u: goto L_08851A64;
    case 374u: goto L_08851A70;
    case 375u: goto L_08851A80;
    case 376u: goto L_08851A84;
    case 377u: goto L_08851A88;
    case 378u: goto L_08851A90;
    case 379u: goto L_08851AB8;
    case 380u: goto L_08851B28;
    case 381u: goto L_08851B38;
    case 382u: goto L_08851B50;
    case 383u: goto L_08851B58;
    case 384u: goto L_08851B78;
    case 385u: goto L_08851B8C;
    case 386u: goto L_08851B9C;
    case 387u: goto L_08851BB4;
    case 388u: goto L_08851BE0;
    case 389u: goto L_08851C0C;
    case 390u: goto L_08851C14;
    case 391u: goto L_08851C28;
    case 392u: goto L_08851C8C;
    case 393u: goto L_08851C94;
    case 394u: goto L_08851CCC;
    case 395u: goto L_08851CF0;
    case 396u: goto L_08851D10;
    case 397u: goto L_08851DB0;
    case 398u: goto L_08851DC8;
    case 399u: goto L_08851DD4;
    case 400u: goto L_08851DF8;
    case 401u: goto L_08851E00;
    case 402u: goto L_08851E08;
    case 403u: goto L_08851E1C;
    case 404u: goto L_08851E34;
    case 405u: goto L_08851E58;
    case 406u: goto L_08851E64;
    case 407u: goto L_08851E74;
    case 408u: goto L_08851E7C;
    case 409u: goto L_08851E90;
    case 410u: goto L_08851E98;
    case 411u: goto L_08851EA8;
    case 412u: goto L_08851EB0;
    case 413u: goto L_08851EC0;
    case 414u: goto L_08851EC8;
    case 415u: goto L_08851ED4;
    case 416u: goto L_08851EDC;
    case 417u: goto L_08851EE8;
    case 418u: goto L_08851EF4;
    case 419u: goto L_08851F00;
    case 420u: goto L_08851F0C;
    case 421u: goto L_08851F14;
    case 422u: goto L_08851F24;
    case 423u: goto L_08851F2C;
    case 424u: goto L_08851F38;
    case 425u: goto L_08851F40;
    case 426u: goto L_08851F50;
    case 427u: goto L_08851F58;
    case 428u: goto L_08851F64;
    case 429u: goto L_08851F6C;
    case 430u: goto L_08851F78;
    case 431u: goto L_08851F80;
    case 432u: goto L_08851F88;
    case 433u: goto L_08851F94;
    case 434u: goto L_08851FAC;
    case 435u: goto L_08851FB8;
    case 436u: goto L_08851FDC;
    case 437u: goto L_08851FFC;
    case 438u: goto L_08852134;
    case 439u: goto L_08852160;
    case 440u: goto L_08852174;
    case 441u: goto L_08852188;
    case 442u: goto L_0885219C;
    case 443u: goto L_088521AC;
    case 444u: goto L_088521D0;
    case 445u: goto L_088521D8;
    case 446u: goto L_088521E8;
    case 447u: goto L_088521F8;
    case 448u: goto L_08852208;
    case 449u: goto L_08852210;
    case 450u: goto L_08852224;
    case 451u: goto L_0885223C;
    case 452u: goto L_08852258;
    case 453u: goto L_08852264;
    case 454u: goto L_08852270;
    case 455u: goto L_08852280;
    case 456u: goto L_08852290;
    case 457u: goto L_08852298;
    case 458u: goto L_088522A4;
    case 459u: goto L_088522B4;
    case 460u: goto L_088522C4;
    case 461u: goto L_088522F8;
    case 462u: goto L_08852304;
    case 463u: goto L_08852334;
    case 464u: goto L_08852368;
    case 465u: goto L_0885237C;
    case 466u: goto L_08852384;
    case 467u: goto L_08852390;
    case 468u: goto L_088523A4;
    case 469u: goto L_088523C8;
    case 470u: goto L_088523D4;
    case 471u: goto L_088523E4;
    case 472u: goto L_088523EC;
    case 473u: goto L_088523F4;
    case 474u: goto L_08852400;
    case 475u: goto L_08852410;
    case 476u: goto L_08852420;
    case 477u: goto L_08852430;
    case 478u: goto L_08852438;
    case 479u: goto L_08852464;
    case 480u: goto L_0885247C;
    case 481u: goto L_08852488;
    case 482u: goto L_08852494;
    case 483u: goto L_0885249C;
    case 484u: goto L_088524A4;
    case 485u: goto L_088524AC;
    case 486u: goto L_088524B4;
    case 487u: goto L_088524BC;
    case 488u: goto L_088524C4;
    case 489u: goto L_088524E4;
    case 490u: goto L_088524F4;
    case 491u: goto L_08852504;
    case 492u: goto L_0885250C;
    case 493u: goto L_08852524;
    case 494u: goto L_08852530;
    case 495u: goto L_08852540;
    case 496u: goto L_08852550;
    case 497u: goto L_08852560;
    case 498u: goto L_0885256C;
    case 499u: goto L_08852574;
    case 500u: goto L_0885257C;
    case 501u: goto L_08852584;
    case 502u: goto L_0885258C;
    case 503u: goto L_08852594;
    case 504u: goto L_0885259C;
    case 505u: goto L_088525A4;
    case 506u: goto L_088525A8;
    case 507u: goto L_088525B0;
    case 508u: goto L_088525BC;
    case 509u: goto L_088525D4;
    case 510u: goto L_088525DC;
    case 511u: goto L_08852600;
    case 512u: goto L_0885261C;
    case 513u: goto L_08852628;
    case 514u: goto L_0885263C;
    case 515u: goto L_08852670;
    case 516u: goto L_08852678;
    case 517u: goto L_08852688;
    case 518u: goto L_088526AC;
    case 519u: goto L_088526B4;
    case 520u: goto L_088526C4;
    case 521u: goto L_088526D4;
    case 522u: goto L_088526EC;
    case 523u: goto L_088526F8;
    case 524u: goto L_08852708;
    case 525u: goto L_0885272C;
    case 526u: goto L_0885273C;
    case 527u: goto L_08852744;
    case 528u: goto L_08852754;
    case 529u: goto L_0885275C;
    case 530u: goto L_0885276C;
    case 531u: goto L_08852790;
    case 532u: goto L_08852798;
    case 533u: goto L_088527A8;
    case 534u: goto L_088527B8;
    case 535u: goto L_088527C0;
    case 536u: goto L_088527D0;
    case 537u: goto L_08852814;
    case 538u: goto L_08852834;
    case 539u: goto L_08852864;
    case 540u: goto L_0885291C;
    case 541u: goto L_08852934;
    case 542u: goto L_088529D4;
    case 543u: goto L_088529EC;
    case 544u: goto L_088529F4;
    case 545u: goto L_08852A0C;
    case 546u: goto L_08852A1C;
    case 547u: goto L_08852A2C;
    case 548u: goto L_08852A5C;
    case 549u: goto L_08852A84;
    case 550u: goto L_08852A8C;
    case 551u: goto L_08852AA4;
    case 552u: goto L_08852AB8;
    case 553u: goto L_08852AD8;
    case 554u: goto L_08852B14;
    case 555u: goto L_08852B40;
    case 556u: goto L_08852B4C;
    case 557u: goto L_08852B58;
    case 558u: goto L_08852B74;
    case 559u: goto L_08852B94;
    case 560u: goto L_08852BA8;
    case 561u: goto L_08852BBC;
    case 562u: goto L_08852BDC;
    case 563u: goto L_08852BFC;
    case 564u: goto L_08852C0C;
    case 565u: goto L_08852C1C;
    case 566u: goto L_08852C34;
    case 567u: goto L_08852C80;
    case 568u: goto L_08852C9C;
    case 569u: goto L_08852D1C;
    case 570u: goto L_08852DCC;
    case 571u: goto L_08852DE4;
    case 572u: goto L_08852DFC;
    case 573u: goto L_08852E68;
    case 574u: goto L_08852EB4;
    case 575u: goto L_08852ECC;
    case 576u: goto L_08852EE4;
    case 577u: goto L_08852EF8;
    case 578u: goto L_08852F24;
    case 579u: goto L_08852F3C;
    case 580u: goto L_08852F54;
    case 581u: goto L_08853008;
    case 582u: goto L_08853020;
    case 583u: goto L_088530B0;
    case 584u: goto L_088530B8;
    case 585u: goto L_088530CC;
    case 586u: goto L_088530E4;
    case 587u: goto L_08853104;
    case 588u: goto L_08853114;
    case 589u: goto L_08853128;
    case 590u: goto L_0885313C;
    case 591u: goto L_08853160;
    case 592u: goto L_0885317C;
    case 593u: goto L_08853194;
    case 594u: goto L_088531D8;
    case 595u: goto L_088531EC;
    case 596u: goto L_08853204;
    case 597u: goto L_0885321C;
    case 598u: goto L_08853234;
    case 599u: goto L_0885323C;
    case 600u: goto L_08853250;
    case 601u: goto L_08853268;
    case 602u: goto L_0885327C;
    case 603u: goto L_08853284;
    case 604u: goto L_0885328C;
    case 605u: goto L_08853294;
    case 606u: goto L_088532A4;
    case 607u: goto L_088532B4;
    case 608u: goto L_088532C4;
    case 609u: goto L_088532D8;
    case 610u: goto L_088532F0;
    case 611u: goto L_088532F8;
    case 612u: goto L_08853300;
    case 613u: goto L_08853310;
    case 614u: goto L_08853328;
    case 615u: goto L_08853340;
    case 616u: goto L_08853358;
    case 617u: goto L_08853370;
    case 618u: goto L_08853388;
    case 619u: goto L_0885339C;
    case 620u: goto L_088533A4;
    case 621u: goto L_088533CC;
    case 622u: goto L_088533D4;
    case 623u: goto L_088533E4;
    case 624u: goto L_088533EC;
    case 625u: goto L_08853400;
    case 626u: goto L_08853428;
    case 627u: goto L_08853444;
    case 628u: goto L_08853464;
    case 629u: goto L_08853474;
    case 630u: goto L_08853488;
    case 631u: goto L_088534A0;
    case 632u: goto L_088534C0;
    case 633u: goto L_088534EC;
    case 634u: goto L_08853508;
    case 635u: goto L_0885351C;
    case 636u: goto L_0885352C;
    case 637u: goto L_08853534;
    case 638u: goto L_0885353C;
    case 639u: goto L_08853550;
    case 640u: goto L_08853568;
    case 641u: goto L_08853598;
    case 642u: goto L_088535B4;
    case 643u: goto L_088535CC;
    case 644u: goto L_088535F4;
    case 645u: goto L_08853614;
    case 646u: goto L_0885362C;
    case 647u: goto L_08853658;
    case 648u: goto L_08853660;
    case 649u: goto L_08853668;
    case 650u: goto L_08853670;
    case 651u: goto L_08853678;
    case 652u: goto L_08853680;
    case 653u: goto L_08853688;
    case 654u: goto L_08853690;
    case 655u: goto L_08853698;
    case 656u: goto L_088536A0;
    case 657u: goto L_088536B8;
    case 658u: goto L_088536E0;
    case 659u: goto L_088536EC;
    case 660u: goto L_088536F8;
    case 661u: goto L_08853708;
    case 662u: goto L_0885371C;
    case 663u: goto L_08853728;
    case 664u: goto L_08853730;
    case 665u: goto L_0885373C;
    case 666u: goto L_08853750;
    case 667u: goto L_08853764;
    case 668u: goto L_08853778;
    case 669u: goto L_0885378C;
    case 670u: goto L_088537A0;
    case 671u: goto L_088537AC;
    case 672u: goto L_088537B4;
    case 673u: goto L_088537BC;
    case 674u: goto L_088537C4;
    case 675u: goto L_088537CC;
    case 676u: goto L_088537D4;
    case 677u: goto L_088537DC;
    case 678u: goto L_088537E4;
    case 679u: goto L_088537EC;
    case 680u: goto L_088537F4;
    case 681u: goto L_08853800;
    case 682u: goto L_08853804;
    case 683u: goto L_08853814;
    case 684u: goto L_0885382C;
    case 685u: goto L_08853844;
    case 686u: goto L_08853860;
    case 687u: goto L_0885387C;
    case 688u: goto L_0885388C;
    case 689u: goto L_08853894;
    case 690u: goto L_0885389C;
    case 691u: goto L_088538A4;
    case 692u: goto L_088538B4;
    case 693u: goto L_088538BC;
    case 694u: goto L_088538C4;
    case 695u: goto L_088538C8;
    case 696u: goto L_088538D0;
    case 697u: goto L_088538D8;
    case 698u: goto L_088538DC;
    case 699u: goto L_088538E8;
    case 700u: goto L_088538F4;
    case 701u: goto L_08853904;
    case 702u: goto L_0885390C;
    case 703u: goto L_08853914;
    case 704u: goto L_0885391C;
    case 705u: goto L_0885392C;
    case 706u: goto L_08853934;
    case 707u: goto L_08853940;
    case 708u: goto L_08853948;
    case 709u: goto L_08853950;
    case 710u: goto L_0885395C;
    case 711u: goto L_0885396C;
    case 712u: goto L_08853978;
    case 713u: goto L_08853980;
    case 714u: goto L_08853988;
    case 715u: goto L_08853990;
    case 716u: goto L_08853998;
    case 717u: goto L_088539A0;
    case 718u: goto L_088539AC;
    case 719u: goto L_088539B4;
    case 720u: goto L_088539BC;
    case 721u: goto L_088539C4;
    case 722u: goto L_088539D0;
    case 723u: goto L_088539D8;
    case 724u: goto L_088539E0;
    case 725u: goto L_088539E8;
    case 726u: goto L_088539F0;
    case 727u: goto L_088539F8;
    case 728u: goto L_08853A00;
    case 729u: goto L_08853A10;
    case 730u: goto L_08853A48;
    case 731u: goto L_08853A54;
    case 732u: goto L_08853A60;
    case 733u: goto L_08853A74;
    case 734u: goto L_08853A84;
    case 735u: goto L_08853A8C;
    case 736u: goto L_08853A98;
    case 737u: goto L_08853AA0;
    case 738u: goto L_08853AAC;
    case 739u: goto L_08853AB4;
    case 740u: goto L_08853ABC;
    case 741u: goto L_08853AD0;
    case 742u: goto L_08853ADC;
    case 743u: goto L_08853AE4;
    case 744u: goto L_08853AEC;
    case 745u: goto L_08853AF4;
    case 746u: goto L_08853B00;
    case 747u: goto L_08853B08;
    case 748u: goto L_08853B10;
    case 749u: goto L_08853B18;
    case 750u: goto L_08853B20;
    case 751u: goto L_08853B44;
    case 752u: goto L_08853B50;
    case 753u: goto L_08853B58;
    case 754u: goto L_08853B60;
    case 755u: goto L_08853B74;
    case 756u: goto L_08853B7C;
    case 757u: goto L_08853B84;
    case 758u: goto L_08853B8C;
    case 759u: goto L_08853B94;
    case 760u: goto L_08853B9C;
    case 761u: goto L_08853BC4;
    case 762u: goto L_08853BD0;
    case 763u: goto L_08853BDC;
    case 764u: goto L_08853BEC;
    case 765u: goto L_08853C00;
    case 766u: goto L_08853C08;
    case 767u: goto L_08853C14;
    case 768u: goto L_08853C20;
    case 769u: goto L_08853C30;
    case 770u: goto L_08853C34;
    case 771u: goto L_08853C40;
    case 772u: goto L_08853C4C;
    case 773u: goto L_08853C54;
    case 774u: goto L_08853C5C;
    case 775u: goto L_08853C64;
    case 776u: goto L_08853C6C;
    case 777u: goto L_08853C84;
    case 778u: goto L_08853CB0;
    case 779u: goto L_08853CBC;
    case 780u: goto L_08853CD0;
    case 781u: goto L_08853CE0;
    case 782u: goto L_08853CE8;
    case 783u: goto L_08853CF4;
    case 784u: goto L_08853CFC;
    case 785u: goto L_08853D08;
    case 786u: goto L_08853D14;
    case 787u: goto L_08853D20;
    case 788u: goto L_08853D34;
    case 789u: goto L_08853D44;
    case 790u: goto L_08853D4C;
    case 791u: goto L_08853D58;
    case 792u: goto L_08853D60;
    case 793u: goto L_08853D6C;
    case 794u: goto L_08853D74;
    case 795u: goto L_08853D7C;
    case 796u: goto L_08853D84;
    case 797u: goto L_08853D8C;
    case 798u: goto L_08853DA4;
    case 799u: goto L_08853DB8;
    case 800u: goto L_08853DD8;
    case 801u: goto L_08853DE4;
    case 802u: goto L_08853DE8;
    case 803u: goto L_08853DFC;
    case 804u: goto L_08853E04;
    case 805u: goto L_08853E0C;
    case 806u: goto L_08853E14;
    case 807u: goto L_08853E1C;
    case 808u: goto L_08853E24;
    case 809u: goto L_08853E4C;
    case 810u: goto L_08853E58;
    case 811u: goto L_08853E64;
    case 812u: goto L_08853E74;
    case 813u: goto L_08853E88;
    case 814u: goto L_08853E90;
    case 815u: goto L_08853E9C;
    case 816u: goto L_08853EA8;
    case 817u: goto L_08853ED8;
    case 818u: goto L_08853EDC;
    case 819u: goto L_08853EE8;
    case 820u: goto L_08853EF8;
    case 821u: goto L_08853F00;
    case 822u: goto L_08853F08;
    case 823u: goto L_08853F10;
    case 824u: goto L_08853F18;
    case 825u: goto L_08853F2C;
    case 826u: goto L_08853F58;
    case 827u: goto L_08853F78;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08850000:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[31] = (0x08850024u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x08850024u) goto L_08850024;
    return;
L_08850024:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08850038u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08850038u) goto L_08850038;
    return;
L_08850038:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22684)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08850050u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08850050u) goto L_08850050;
    return;
L_08850050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22684)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[31] = (0x08850070u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883F120u>(ctx, &aot_mem) && ctx.pc == 0x08850070u) goto L_08850070;
    return;
L_08850070:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08850084:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22684)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088500A4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x088500A4u) goto L_088500A4;
    return;
L_088500A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22684)));
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088500BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088500BCu) goto L_088500BC;
    return;
L_088500BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22684)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088500D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088500D4u) goto L_088500D4;
    return;
L_088500D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22684)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088500F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22684)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0885010Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 275u, 0x0883F12Cu>(ctx, &aot_mem) && ctx.pc == 0x0885010Cu) goto L_0885010C;
    return;
L_0885010C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22684)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_088502B4;
      }
      goto L_0885011C;
    }
L_0885011C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_08850144;
      }
      goto L_08850128;
    }
L_08850128:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (16704u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    goto L_08850144;
L_08850144:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[7] = (0u | 2u);
      if (branch_taken) {
          goto L_08850168;
      }
      goto L_0885014C;
    }
L_0885014C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (16704u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    goto L_08850168;
L_08850168:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[7] = (0u | 3u);
      if (branch_taken) {
          goto L_0885018C;
      }
      goto L_08850170;
    }
L_08850170:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (16640u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    goto L_0885018C;
L_0885018C:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088501B0;
      }
      goto L_08850194;
    }
L_08850194:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (16640u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    goto L_088501B0;
L_088501B0:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[6] = (0u | 255u);
      if (branch_taken) {
          goto L_08850278;
      }
      goto L_088501B8;
    }
L_088501B8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[7] = (16996u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[7] = (49992u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08850204;
      }
      goto L_088501E0;
    }
L_088501E0:
    ctx.gpr[6] = (0u - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] & 3u);
    ctx.gpr[6] = (0u - ctx.gpr[6]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
      if (branch_taken) {
          goto L_0885021C;
      }
      goto L_08850204;
    }
L_08850204:
    ctx.gpr[6] = (ctx.gpr[6] & 3u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    goto L_0885021C;
L_0885021C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (49943u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (0u | 255u);
    goto L_08850278;
L_08850278:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[7] = (0u | 115u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    goto L_088502B4;
L_088502B4:
    ctx.gpr[31] = (0x088502BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x088502BCu) goto L_088502BC;
    return;
L_088502BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088502CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22684)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088502F0;
      }
      goto L_088502E8;
    }
L_088502E8:
    ctx.gpr[31] = (0x088502F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088502F0u) goto L_088502F0;
    return;
L_088502F0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088502FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22684)));
    ctx.gpr[6] = (49992u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22684)));
    ctx.gpr[6] = (49945u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (0u | 115u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22684)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22684)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08850380u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x08850380u) goto L_08850380;
    return;
L_08850380:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885038C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 184u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088503CCu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088503CCu) goto L_088503CC;
    return;
L_088503CC:
    ctx.gpr[23] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(22684)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088503E8u);
    ctx.gpr[6] = (0u | 184u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088503E8u) goto L_088503E8;
    return;
L_088503E8:
    ctx.gpr[5] = (17304u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(22684)));
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (16988u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17165u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17219u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] << 6u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[6] = (17303u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (ctx.gpr[6] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17138u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17171u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17157u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(512));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(128), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.gpr[20] = (ctx.gpr[4] << 24u);
    ctx.gpr[19] = (ctx.gpr[5] << 24u);
    ctx.gpr[18] = (ctx.gpr[6] << 24u);
    ctx.gpr[17] = (ctx.gpr[7] << 24u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 24u));
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 24u));
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 24u));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 24u));
    goto L_08850500;
L_08850500:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(22684)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x0885054Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x0885054Cu) goto L_0885054C;
    return;
L_0885054C:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_08850500;
      }
      goto L_0885055C;
    }
L_0885055C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08850588:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22684)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_088505B0;
L_088505B0:
    ctx.gpr[31] = (0x088505B8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x088505B8u) goto L_088505B8;
    return;
L_088505B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22684)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_088505B0;
      }
      goto L_088505D0;
    }
L_088505D0:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088505E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088505E4u) goto L_088505E4;
    return;
L_088505E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22684)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
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
L_08850604:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22684)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    goto L_0885062C;
L_0885062C:
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[9]);
    ctx.gpr[10] = (ctx.gpr[10] << 6u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(64)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[11] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(92));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(8));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_0885062C;
      }
      goto L_08850670;
    }
L_08850670:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_08850688;
    }
    goto L_0885067C;
L_0885067C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088507CC;
      }
      goto L_08850684;
    }
L_08850684:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_08850688;
L_08850688:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088507CC;
      }
      goto L_08850690;
    }
L_08850690:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 45 ? 1u : 0u);
      if (branch_taken) {
          goto L_088506E4;
      }
      goto L_088506A0;
    }
L_088506A0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088506E4;
      }
      goto L_088506A8;
    }
L_088506A8:
    ctx.gpr[4] = (16518u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (16576u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 45 ? 1u : 0u);
    goto L_088506E4;
L_088506E4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
      if (branch_taken) {
          goto L_088506FC;
      }
      goto L_088506EC;
    }
L_088506EC:
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    goto L_088506FC;
L_088506FC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_088507BC;
      }
      goto L_08850704;
    }
L_08850704:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(115)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(115), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_0885072C;
      }
      goto L_0885071C;
    }
L_0885071C:
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u - ctx.gpr[5]);
      if (branch_taken) {
          goto L_08850730;
      }
      goto L_0885072C;
    }
L_0885072C:
    ctx.gpr[5] = (ctx.gpr[4] & 3u);
    goto L_08850730;
L_08850730:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08850768;
      }
      goto L_08850738;
    }
L_08850738:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_08850768;
L_08850768:
    if (static_cast<std::int32_t>(ctx.gpr[5]) >= 0) {
    ctx.gpr[5] = (ctx.gpr[5] & 3u);
        goto L_08850780;
    }
    goto L_08850770;
L_08850770:
    ctx.gpr[5] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u - ctx.gpr[5]);
      if (branch_taken) {
          goto L_08850780;
      }
      goto L_08850780;
    }
L_08850780:
    ctx.gpr[8] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[8];
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_088507BC;
      }
      goto L_0885078C;
    }
L_0885078C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 8u);
    goto L_088507BC;
L_088507BC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088507CC;
      }
      goto L_088507C4;
    }
L_088507C4:
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(115), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(64)));
    goto L_088507CC;
L_088507CC:
    ctx.gpr[31] = (0x088507D4u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x088507D4u) goto L_088507D4;
    return;
L_088507D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22684)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x088507E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x088507E4u) goto L_088507E4;
    return;
L_088507E4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088507F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22684)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08850810u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x08850810u) goto L_08850810;
    return;
L_08850810:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22684)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x08850820u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x08850820u) goto L_08850820;
    return;
L_08850820:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08850830:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[21] = (2222u << 16u);
    ctx.gpr[5] = (17304u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(22684)));
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (16988u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (17303u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[6] | 32768u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17138u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[16] = (0u | 255u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    goto L_088508B4;
L_088508B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(22684)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[31] = (0x088508F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x088508F0u) goto L_088508F0;
    return;
L_088508F0:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(512));
      if (branch_taken) {
          goto L_088508B4;
      }
      goto L_08850904;
    }
L_08850904:
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
L_08850928:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22684)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08850958;
      }
      goto L_08850950;
    }
L_08850950:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08850A0C;
      }
      goto L_08850958;
    }
L_08850958:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088509A0;
      }
      goto L_08850960;
    }
L_08850960:
    ctx.gpr[31] = (0x08850968u);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 861u, 0x0881F4B4u>(ctx, &aot_mem) && ctx.pc == 0x08850968u) goto L_08850968;
    return;
L_08850968:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x08850978u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3668));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 702u, 0x0884BCB8u>(ctx, &aot_mem) && ctx.pc == 0x08850978u) goto L_08850978;
    return;
L_08850978:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08850988u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4572));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 706u, 0x0884BCFCu>(ctx, &aot_mem) && ctx.pc == 0x08850988u) goto L_08850988;
    return;
L_08850988:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08850998u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4660));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 709u, 0x0884BD28u>(ctx, &aot_mem) && ctx.pc == 0x08850998u) goto L_08850998;
    return;
L_08850998:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22684)));
      if (branch_taken) {
          goto L_088509E4;
      }
      goto L_088509A0;
    }
L_088509A0:
    ctx.gpr[31] = (0x088509A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 145u, 0x088748B0u>(ctx, &aot_mem) && ctx.pc == 0x088509A8u) goto L_088509A8;
    return;
L_088509A8:
    ctx.gpr[31] = (0x088509B0u);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 861u, 0x0881F4B4u>(ctx, &aot_mem) && ctx.pc == 0x088509B0u) goto L_088509B0;
    return;
L_088509B0:
    ctx.gpr[4] = (2183u << 16u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x088509C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(31844));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 702u, 0x0884BCB8u>(ctx, &aot_mem) && ctx.pc == 0x088509C0u) goto L_088509C0;
    return;
L_088509C0:
    ctx.gpr[4] = (2183u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x088509D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18436));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 706u, 0x0884BCFCu>(ctx, &aot_mem) && ctx.pc == 0x088509D0u) goto L_088509D0;
    return;
L_088509D0:
    ctx.gpr[4] = (2183u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x088509E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18444));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 709u, 0x0884BD28u>(ctx, &aot_mem) && ctx.pc == 0x088509E0u) goto L_088509E0;
    return;
L_088509E0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22684)));
    goto L_088509E4;
L_088509E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x088509F8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x088509F8u) goto L_088509F8;
    return;
L_088509F8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08850A04u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08850A04u) goto L_08850A04;
    return;
L_08850A04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08850C80;
      }
      goto L_08850A0C;
    }
L_08850A0C:
    ctx.gpr[31] = (0x08850A14u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 705u, 0x0884BCE4u>(ctx, &aot_mem) && ctx.pc == 0x08850A14u) goto L_08850A14;
    return;
L_08850A14:
    ctx.gpr[31] = (0x08850A1Cu);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 712u, 0x0884BD54u>(ctx, &aot_mem) && ctx.pc == 0x08850A1Cu) goto L_08850A1C;
    return;
L_08850A1C:
    ctx.gpr[31] = (0x08850A24u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 713u, 0x0884BD6Cu>(ctx, &aot_mem) && ctx.pc == 0x08850A24u) goto L_08850A24;
    return;
L_08850A24:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22684)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08850C40;
      }
      goto L_08850A3C;
    }
L_08850A3C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[18] = (2183u << 16u);
    ctx.gpr[17] = (2181u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4252));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(18308));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(3520));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08850ACC;
      }
      goto L_08850A60;
    }
L_08850A60:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08850BB0;
      }
      goto L_08850A68;
    }
L_08850A68:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08850B18;
      }
      goto L_08850A70;
    }
L_08850A70:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08850B64;
      }
      goto L_08850A78;
    }
L_08850A78:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08850BF4;
      }
      goto L_08850A80;
    }
L_08850A80:
    ctx.gpr[31] = (0x08850A88u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x08850A88u) goto L_08850A88;
    return;
L_08850A88:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08850A94u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x08850A94u) goto L_08850A94;
    return;
L_08850A94:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08850AA0u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x08850AA0u) goto L_08850AA0;
    return;
L_08850AA0:
    ctx.gpr[31] = (0x08850AA8u);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 861u, 0x0881F4B4u>(ctx, &aot_mem) && ctx.pc == 0x08850AA8u) goto L_08850AA8;
    return;
L_08850AA8:
    ctx.gpr[4] = (2182u << 16u);
    ctx.gpr[5] = (2182u << 16u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28924));
    ctx.gpr[31] = (0x08850AC0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29180));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x08850AC0u) goto L_08850AC0;
    return;
L_08850AC0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22684)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08850C3C;
      }
      goto L_08850ACC;
    }
L_08850ACC:
    ctx.gpr[31] = (0x08850AD4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x08850AD4u) goto L_08850AD4;
    return;
L_08850AD4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08850AE0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x08850AE0u) goto L_08850AE0;
    return;
L_08850AE0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08850AECu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x08850AECu) goto L_08850AEC;
    return;
L_08850AEC:
    ctx.gpr[31] = (0x08850AF4u);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 861u, 0x0881F4B4u>(ctx, &aot_mem) && ctx.pc == 0x08850AF4u) goto L_08850AF4;
    return;
L_08850AF4:
    ctx.gpr[4] = (2183u << 16u);
    ctx.gpr[5] = (2183u << 16u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9876));
    ctx.gpr[31] = (0x08850B0Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9656));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x08850B0Cu) goto L_08850B0C;
    return;
L_08850B0C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22684)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08850C3C;
      }
      goto L_08850B18;
    }
L_08850B18:
    ctx.gpr[31] = (0x08850B20u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x08850B20u) goto L_08850B20;
    return;
L_08850B20:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08850B2Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x08850B2Cu) goto L_08850B2C;
    return;
L_08850B2C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08850B38u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x08850B38u) goto L_08850B38;
    return;
L_08850B38:
    ctx.gpr[31] = (0x08850B40u);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 861u, 0x0881F4B4u>(ctx, &aot_mem) && ctx.pc == 0x08850B40u) goto L_08850B40;
    return;
L_08850B40:
    ctx.gpr[4] = (2185u << 16u);
    ctx.gpr[5] = (2185u << 16u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30224));
    ctx.gpr[31] = (0x08850B58u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30456));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x08850B58u) goto L_08850B58;
    return;
L_08850B58:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22684)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08850C3C;
      }
      goto L_08850B64;
    }
L_08850B64:
    ctx.gpr[31] = (0x08850B6Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x08850B6Cu) goto L_08850B6C;
    return;
L_08850B6C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08850B78u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x08850B78u) goto L_08850B78;
    return;
L_08850B78:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08850B84u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x08850B84u) goto L_08850B84;
    return;
L_08850B84:
    ctx.gpr[31] = (0x08850B8Cu);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 861u, 0x0881F4B4u>(ctx, &aot_mem) && ctx.pc == 0x08850B8Cu) goto L_08850B8C;
    return;
L_08850B8C:
    ctx.gpr[4] = (2187u << 16u);
    ctx.gpr[5] = (2187u << 16u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18024));
    ctx.gpr[31] = (0x08850BA4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-17588));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x08850BA4u) goto L_08850BA4;
    return;
L_08850BA4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22684)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08850C3C;
      }
      goto L_08850BB0;
    }
L_08850BB0:
    ctx.gpr[31] = (0x08850BB8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x08850BB8u) goto L_08850BB8;
    return;
L_08850BB8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08850BC4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x08850BC4u) goto L_08850BC4;
    return;
L_08850BC4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08850BD0u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x08850BD0u) goto L_08850BD0;
    return;
L_08850BD0:
    ctx.gpr[4] = (2188u << 16u);
    ctx.gpr[5] = (2188u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10316));
    ctx.gpr[31] = (0x08850BE8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9688));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x08850BE8u) goto L_08850BE8;
    return;
L_08850BE8:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22684)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08850C3C;
      }
      goto L_08850BF4;
    }
L_08850BF4:
    ctx.gpr[31] = (0x08850BFCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x08850BFCu) goto L_08850BFC;
    return;
L_08850BFC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08850C08u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x08850C08u) goto L_08850C08;
    return;
L_08850C08:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08850C14u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x08850C14u) goto L_08850C14;
    return;
L_08850C14:
    ctx.gpr[31] = (0x08850C1Cu);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 861u, 0x0881F4B4u>(ctx, &aot_mem) && ctx.pc == 0x08850C1Cu) goto L_08850C1C;
    return;
L_08850C1C:
    ctx.gpr[4] = (2194u << 16u);
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11580));
    ctx.gpr[31] = (0x08850C34u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11440));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x08850C34u) goto L_08850C34;
    return;
L_08850C34:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22684)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08850C3C;
L_08850C3C:
    ctx.gpr[17] = (0u | 1u);
    goto L_08850C40;
L_08850C40:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08850C4Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x08850C4Cu) goto L_08850C4C;
    return;
L_08850C4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22684)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[31] = (0x08850C6Cu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 887u, 0x0884F634u>(ctx, &aot_mem) && ctx.pc == 0x08850C6Cu) goto L_08850C6C;
    return;
L_08850C6C:
    ctx.gpr[31] = (0x08850C74u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08850C74u) goto L_08850C74;
    return;
L_08850C74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22684)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08850C80;
L_08850C80:
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
L_08850C9C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7200)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(7204), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08850CB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 2524u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08850CD8u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08850CD8u) goto L_08850CD8;
    return;
L_08850CD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[17] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(7472), ctx.gpr[2]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 24u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08850CF4u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08850CF4u) goto L_08850CF4;
    return;
L_08850CF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7472)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[31] = (0x08850D0Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28972));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 595u, 0x088473B4u>(ctx, &aot_mem) && ctx.pc == 0x08850D0Cu) goto L_08850D0C;
    return;
L_08850D0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7472)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2520), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2480), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 16u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08850D48u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08850D48u) goto L_08850D48;
    return;
L_08850D48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7472)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2516), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2516)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x08850D64u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2516)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883F120u>(ctx, &aot_mem) && ctx.pc == 0x08850D64u) goto L_08850D64;
    return;
L_08850D64:
    ctx.gpr[31] = (0x08850D6Cu);
    // nop
    goto L_08852C34;
L_08850D6C:
    ctx.gpr[31] = (0x08850D74u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x08850D74u) goto L_08850D74;
    return;
L_08850D74:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (2181u << 16u);
      if (branch_taken) {
          goto L_08850DAC;
      }
      goto L_08850D80;
    }
L_08850D80:
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x08850D8Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3668));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 702u, 0x0884BCB8u>(ctx, &aot_mem) && ctx.pc == 0x08850D8Cu) goto L_08850D8C;
    return;
L_08850D8C:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08850D9Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4572));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 706u, 0x0884BCFCu>(ctx, &aot_mem) && ctx.pc == 0x08850D9Cu) goto L_08850D9C;
    return;
L_08850D9C:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08850DACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4660));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 709u, 0x0884BD28u>(ctx, &aot_mem) && ctx.pc == 0x08850DACu) goto L_08850DAC;
    return;
L_08850DAC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08850DC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08850DD8u);
    // nop
    goto L_08851824;
L_08850DD8:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08850DF4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2516)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08850DF4u) goto L_08850DF4;
    return;
L_08850DF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(2516), 0u);
      if (branch_taken) {
          goto L_08850E28;
      }
      goto L_08850E04;
    }
L_08850E04:
    ctx.gpr[31] = (0x08850E0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 563u, 0x08847174u>(ctx, &aot_mem) && ctx.pc == 0x08850E0Cu) goto L_08850E0C;
    return;
L_08850E0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08850E20u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08850E20u) goto L_08850E20;
    return;
L_08850E20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7472)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), 0u);
    goto L_08850E28;
L_08850E28:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08850E3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08850E3Cu) goto L_08850E3C;
    return;
L_08850E3C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(7472), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08850E54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7472)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08850E98;
      }
      goto L_08850E88;
    }
L_08850E88:
    ctx.gpr[31] = (0x08850E90u);
    // nop
    goto L_08851380;
L_08850E90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088511BC;
      }
      goto L_08850E98;
    }
L_08850E98:
    ctx.gpr[31] = (0x08850EA0u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x08850EA0u) goto L_08850EA0;
    return;
L_08850EA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[19] = (ctx.gpr[2] ^ 3u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.gpr[19] = (ctx.gpr[19] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08850EBC;
      }
      goto L_08850EB4;
    }
L_08850EB4:
    ctx.gpr[31] = (0x08850EBCu);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 862u, 0x0881F4CCu>(ctx, &aot_mem) && ctx.pc == 0x08850EBCu) goto L_08850EBC;
    return;
L_08850EBC:
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7472)));
        goto L_08850F24;
    }
    goto L_08850EC4;
L_08850EC4:
    ctx.gpr[31] = (0x08850ECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 209u, 0x088BD67Cu>(ctx, &aot_mem) && ctx.pc == 0x08850ECCu) goto L_08850ECC;
    return;
L_08850ECC:
    if (ctx.gpr[2] != ctx.gpr[18]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7472)));
        goto L_08850F24;
    }
    goto L_08850ED4;
L_08850ED4:
    ctx.gpr[31] = (0x08850EDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 204u, 0x088BD640u>(ctx, &aot_mem) && ctx.pc == 0x08850EDCu) goto L_08850EDC;
    return;
L_08850EDC:
    ctx.gpr[4] = (0u | 30u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088511BC;
      }
      goto L_08850EE8;
    }
L_08850EE8:
    ctx.gpr[31] = (0x08850EF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 290u, 0x088BDB98u>(ctx, &aot_mem) && ctx.pc == 0x08850EF0u) goto L_08850EF0;
    return;
L_08850EF0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088511BC;
      }
      goto L_08850EFC;
    }
L_08850EFC:
    ctx.gpr[31] = (0x08850F04u);
    // nop
    goto L_08852464;
L_08850F04:
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
L_08850F24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2520)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088511A4;
      }
      goto L_08850F30;
    }
L_08850F30:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7472)));
        goto L_08851178;
    }
    goto L_08850F3C;
L_08850F3C:
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_08850F58;
    }
    goto L_08850F44;
L_08850F44:
    ctx.gpr[31] = (0x08850F4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 206u, 0x088BD65Cu>(ctx, &aot_mem) && ctx.pc == 0x08850F4Cu) goto L_08850F4C;
    return;
L_08850F4C:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7472)));
        goto L_08851178;
    }
    goto L_08850F54;
L_08850F54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_08850F58;
L_08850F58:
    ctx.gpr[5] = (0u | 64u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 128u);
      if (branch_taken) {
          goto L_08850F74;
      }
      goto L_08850F64;
    }
L_08850F64:
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7472)));
        goto L_08850FA4;
    }
    goto L_08850F6C;
L_08850F6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08851038;
      }
      goto L_08850F74;
    }
L_08850F74:
    ctx.gpr[31] = (0x08850F7Cu);
    // nop
    goto L_088522C4;
L_08850F7C:
    ctx.gpr[31] = (0x08850F84u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08850F84u) goto L_08850F84;
    return;
L_08850F84:
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
L_08850FA4:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2480)));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7472)));
        goto L_08851178;
    }
    goto L_08850FB4;
L_08850FB4:
    ctx.gpr[31] = (0x08850FBCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_0885135C;
L_08850FBC:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08851024;
      }
      goto L_08850FC4;
    }
L_08850FC4:
    ctx.gpr[31] = (0x08850FCCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x08850FCCu) goto L_08850FCC;
    return;
L_08850FCC:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08850FF4;
      }
      goto L_08850FD8;
    }
L_08850FD8:
    ctx.gpr[31] = (0x08850FE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 204u, 0x088BD640u>(ctx, &aot_mem) && ctx.pc == 0x08850FE0u) goto L_08850FE0;
    return;
L_08850FE0:
    ctx.gpr[4] = (0u | 30u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08850FF4;
      }
      goto L_08850FEC;
    }
L_08850FEC:
    ctx.gpr[31] = (0x08850FF4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 285u, 0x088BDB4Cu>(ctx, &aot_mem) && ctx.pc == 0x08850FF4u) goto L_08850FF4;
    return;
L_08850FF4:
    ctx.gpr[31] = (0x08850FFCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08852464;
L_08850FFC:
    ctx.gpr[31] = (0x08851004u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08851004u) goto L_08851004;
    return;
L_08851004:
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
L_08851024:
    ctx.gpr[31] = (0x0885102Cu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0885102Cu) goto L_0885102C;
    return;
L_0885102C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7472)));
      if (branch_taken) {
          goto L_08851178;
      }
      goto L_08851034;
    }
L_08851034:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_08851038;
L_08851038:
    ctx.gpr[6] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] & 2u);
      if (branch_taken) {
          goto L_08851078;
      }
      goto L_08851044;
    }
L_08851044:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08851064;
      }
      goto L_08851050;
    }
L_08851050:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.gpr[31] = (0x0885105Cu);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0885105Cu) goto L_0885105C;
    return;
L_0885105C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7472)));
      if (branch_taken) {
          goto L_08851178;
      }
      goto L_08851064;
    }
L_08851064:
    ctx.gpr[31] = (0x0885106Cu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0885106Cu) goto L_0885106C;
    return;
L_0885106C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7472)));
      if (branch_taken) {
          goto L_08851178;
      }
      goto L_08851074;
    }
L_08851074:
    ctx.gpr[6] = (ctx.gpr[5] & 2u);
    goto L_08851078;
L_08851078:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] & 4u);
      if (branch_taken) {
          goto L_088510BC;
      }
      goto L_08851080;
    }
L_08851080:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 5u);
      if (branch_taken) {
          goto L_088510A8;
      }
      goto L_0885108C;
    }
L_0885108C:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088510A8;
      }
      goto L_08851094;
    }
L_08851094:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x088510A0u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088510A0u) goto L_088510A0;
    return;
L_088510A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7472)));
      if (branch_taken) {
          goto L_08851178;
      }
      goto L_088510A8;
    }
L_088510A8:
    ctx.gpr[31] = (0x088510B0u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088510B0u) goto L_088510B0;
    return;
L_088510B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7472)));
      if (branch_taken) {
          goto L_08851178;
      }
      goto L_088510B8;
    }
L_088510B8:
    ctx.gpr[6] = (ctx.gpr[5] & 4u);
    goto L_088510BC;
L_088510BC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
      if (branch_taken) {
          goto L_088510F8;
      }
      goto L_088510C4;
    }
L_088510C4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088510E4;
      }
      goto L_088510D0;
    }
L_088510D0:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-3));
    ctx.gpr[31] = (0x088510DCu);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088510DCu) goto L_088510DC;
    return;
L_088510DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7472)));
      if (branch_taken) {
          goto L_08851178;
      }
      goto L_088510E4;
    }
L_088510E4:
    ctx.gpr[31] = (0x088510ECu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088510ECu) goto L_088510EC;
    return;
L_088510EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7472)));
      if (branch_taken) {
          goto L_08851178;
      }
      goto L_088510F4;
    }
L_088510F4:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    goto L_088510F8;
L_088510F8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 256u);
      if (branch_taken) {
          goto L_08851138;
      }
      goto L_08851100;
    }
L_08851100:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_08851124;
      }
      goto L_08851108;
    }
L_08851108:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08851124;
      }
      goto L_08851110;
    }
L_08851110:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0885111Cu);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0885111Cu) goto L_0885111C;
    return;
L_0885111C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7472)));
      if (branch_taken) {
          goto L_08851178;
      }
      goto L_08851124;
    }
L_08851124:
    ctx.gpr[31] = (0x0885112Cu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0885112Cu) goto L_0885112C;
    return;
L_0885112C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7472)));
      if (branch_taken) {
          goto L_08851178;
      }
      goto L_08851134;
    }
L_08851134:
    ctx.gpr[5] = (0u | 256u);
    goto L_08851138;
L_08851138:
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7472)));
        goto L_08851178;
    }
    goto L_08851140;
L_08851140:
    ctx.gpr[31] = (0x08851148u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_0885135C;
L_08851148:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0885116C;
      }
      goto L_08851150;
    }
L_08851150:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08851164u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08851164u) goto L_08851164;
    return;
L_08851164:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7472)));
      if (branch_taken) {
          goto L_08851178;
      }
      goto L_0885116C;
    }
L_0885116C:
    ctx.gpr[31] = (0x08851174u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08851174u) goto L_08851174;
    return;
L_08851174:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7472)));
    goto L_08851178;
L_08851178:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2480)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088511A4;
      }
      goto L_08851188;
    }
L_08851188:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2480), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2480)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 30 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088511A4;
      }
      goto L_088511A0;
    }
L_088511A0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2480), ctx.gpr[6]);
    goto L_088511A4;
L_088511A4:
    ctx.gpr[31] = (0x088511ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08852708;
L_088511AC:
    ctx.gpr[31] = (0x088511B4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_088519DC;
L_088511B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7472)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    goto L_088511BC;
L_088511BC:
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
L_088511DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08851228;
      }
      goto L_088511FC;
    }
L_088511FC:
    ctx.gpr[31] = (0x08851204u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x08851204u) goto L_08851204;
    return;
L_08851204:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08851228;
      }
      goto L_08851210;
    }
L_08851210:
    ctx.gpr[31] = (0x08851218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 209u, 0x088BD67Cu>(ctx, &aot_mem) && ctx.pc == 0x08851218u) goto L_08851218;
    return;
L_08851218:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08851228;
      }
      goto L_08851220;
    }
L_08851220:
    ctx.gpr[31] = (0x08851228u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 206u, 0x088BD65Cu>(ctx, &aot_mem) && ctx.pc == 0x08851228u) goto L_08851228;
    return;
L_08851228:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08851234:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(7472)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08851340;
      }
      goto L_08851264;
    }
L_08851264:
    ctx.gpr[31] = (0x0885126Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x0885126Cu) goto L_0885126C;
    return;
L_0885126C:
    ctx.gpr[4] = (0u | 3u);
    if (ctx.gpr[2] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(7472)));
        goto L_0885129C;
    }
    goto L_08851278;
L_08851278:
    ctx.gpr[31] = (0x08851280u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 209u, 0x088BD67Cu>(ctx, &aot_mem) && ctx.pc == 0x08851280u) goto L_08851280;
    return;
L_08851280:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08851340;
      }
      goto L_08851288;
    }
L_08851288:
    ctx.gpr[31] = (0x08851290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 206u, 0x088BD65Cu>(ctx, &aot_mem) && ctx.pc == 0x08851290u) goto L_08851290;
    return;
L_08851290:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08851340;
      }
      goto L_08851298;
    }
L_08851298:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(7472)));
    goto L_0885129C;
L_0885129C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x088512A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 394u, 0x089DE9F0u>(ctx, &aot_mem) && ctx.pc == 0x088512A8u) goto L_088512A8;
    return;
L_088512A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[31] = (0x088512B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2496)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088512B4u) goto L_088512B4;
    return;
L_088512B4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[16] = (0u | 0u);
    goto L_088512C0;
L_088512C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2488)));
    ctx.gpr[31] = (0x088512CCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088512CCu) goto L_088512CC;
    return;
L_088512CC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(7472)));
      if (branch_taken) {
          goto L_088512C0;
      }
      goto L_088512E0;
    }
L_088512E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088512ECu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 288u, 0x0884D2A0u>(ctx, &aot_mem) && ctx.pc == 0x088512ECu) goto L_088512EC;
    return;
L_088512EC:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08851304;
      }
      goto L_088512F4;
    }
L_088512F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[31] = (0x08851300u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2492)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x08851300u) goto L_08851300;
    return;
L_08851300:
    ctx.gpr[17] = (0u | 0u);
    goto L_08851304;
L_08851304:
    ctx.gpr[16] = (0u | 0u);
    goto L_08851308;
L_08851308:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2484)));
    ctx.gpr[31] = (0x08851318u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x08851318u) goto L_08851318;
    return;
L_08851318:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_08851308;
      }
      goto L_08851328;
    }
L_08851328:
    ctx.gpr[31] = (0x08851330u);
    // nop
    goto L_08851F94;
L_08851330:
    ctx.gpr[31] = (0x08851338u);
    // nop
    goto L_0885223C;
L_08851338:
    ctx.gpr[31] = (0x08851340u);
    // nop
    goto L_0885276C;
L_08851340:
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
L_0885135C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08851370u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 288u, 0x0884D2A0u>(ctx, &aot_mem) && ctx.pc == 0x08851370u) goto L_08851370;
    return;
L_08851370:
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08851380:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088513D0;
      }
      goto L_088513C0;
    }
L_088513C0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08851534;
      }
      goto L_088513C8;
    }
L_088513C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088513E4;
      }
      goto L_088513D0;
    }
L_088513D0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (0u | 1u);
        goto L_08851534;
    }
    goto L_088513DC;
L_088513DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08851534;
      }
      goto L_088513E4;
    }
L_088513E4:
    ctx.gpr[31] = (0x088513ECu);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 469u, 0x08809D90u>(ctx, &aot_mem) && ctx.pc == 0x088513ECu) goto L_088513EC;
    return;
L_088513EC:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08851534;
      }
      goto L_088513F8;
    }
L_088513F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08851408u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 522u, 0x0880A0E8u>(ctx, &aot_mem) && ctx.pc == 0x08851408u) goto L_08851408;
    return;
L_08851408:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0885141Cu);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0885141Cu) goto L_0885141C;
    return;
L_0885141C:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08851430u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08851430u) goto L_08851430;
    return;
L_08851430:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(7364));
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28960));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7344)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08851458u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08851458u) goto L_08851458;
    return;
L_08851458:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x0885146Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x0885146Cu) goto L_0885146C;
    return;
L_0885146C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08851484u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x08851484u) goto L_08851484;
    return;
L_08851484:
    ctx.gpr[31] = (0x0885148Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08851560;
L_0885148C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0885149Cu);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0885149Cu) goto L_0885149C;
    return;
L_0885149C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088514ACu);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088514ACu) goto L_088514AC;
    return;
L_088514AC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7348)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088514C4u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088514C4u) goto L_088514C4;
    return;
L_088514C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x088514D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x088514D8u) goto L_088514D8;
    return;
L_088514D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088514F0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x088514F0u) goto L_088514F0;
    return;
L_088514F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08851500u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 881u, 0x0882F7DCu>(ctx, &aot_mem) && ctx.pc == 0x08851500u) goto L_08851500;
    return;
L_08851500:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[31] = (0x0885150Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 761u, 0x0882EFC4u>(ctx, &aot_mem) && ctx.pc == 0x0885150Cu) goto L_0885150C;
    return;
L_0885150C:
    ctx.gpr[31] = (0x08851514u);
    // nop
    goto L_0885172C;
L_08851514:
    ctx.gpr[31] = (0x0885151Cu);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 862u, 0x0881F4CCu>(ctx, &aot_mem) && ctx.pc == 0x0885151Cu) goto L_0885151C;
    return;
L_0885151C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08851534;
      }
      goto L_08851534;
    }
L_08851534:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08851560:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 2448u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[31]);
    ctx.gpr[31] = (0x088515A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088515A8u) goto L_088515A8;
    return;
L_088515A8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19864));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088515F8u);
    ctx.gpr[16] = (ctx.gpr[7] + static_cast<std::uint32_t>(19848));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 621u, 0x0880ABA0u>(ctx, &aot_mem) && ctx.pc == 0x088515F8u) goto L_088515F8;
    return;
L_088515F8:
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(132), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28952));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[4]);
    ctx.gpr[23] = (2220u << 16u);
    ctx.gpr[22] = (2220u << 16u);
    ctx.gpr[21] = (2220u << 16u);
    ctx.gpr[30] = (2220u << 16u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[16]);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-28936));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-28928));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-28920));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-28944));
    goto L_08851634;
L_08851634:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[31] = (0x08851640u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08851640u) goto L_08851640;
    return;
L_08851640:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088516E4;
      }
      goto L_08851648;
    }
L_08851648:
    ctx.gpr[31] = (0x08851650u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08851650u) goto L_08851650;
    return;
L_08851650:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0885165Cu);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0885165Cu) goto L_0885165C;
    return;
L_0885165C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08851634;
      }
      goto L_08851664;
    }
L_08851664:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08851668;
L_08851668:
    ctx.gpr[31] = (0x08851670u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08851670u) goto L_08851670;
    return;
L_08851670:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088516DC;
      }
      goto L_08851678;
    }
L_08851678:
    ctx.gpr[31] = (0x08851680u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08851680u) goto L_08851680;
    return;
L_08851680:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0885168Cu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0885168Cu) goto L_0885168C;
    return;
L_0885168C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088516AC;
      }
      goto L_08851694;
    }
L_08851694:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[31] = (0x088516A8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x088516A8u) goto L_088516A8;
    return;
L_088516A8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088516AC;
L_088516AC:
    ctx.gpr[31] = (0x088516B4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088516B4u) goto L_088516B4;
    return;
L_088516B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08851668;
      }
      goto L_088516BC;
    }
L_088516BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088516D4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(53));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x088516D4u) goto L_088516D4;
    return;
L_088516D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08851664;
      }
      goto L_088516DC;
    }
L_088516DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(408));
      if (branch_taken) {
          goto L_08851634;
      }
      goto L_088516E4;
    }
L_088516E4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[31] = (0x088516F0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 624u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x088516F0u) goto L_088516F0;
    return;
L_088516F0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.gpr[31] = (0x088516FCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 624u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x088516FCu) goto L_088516FC;
    return;
L_088516FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885172C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_08851758;
L_08851758:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2484)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2484)));
    ctx.gpr[31] = (0x08851770u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x08851770u) goto L_08851770;
    return;
L_08851770:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851758;
      }
      goto L_0885178C;
    }
L_0885178C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    goto L_08851794;
L_08851794:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2488)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2488)));
    ctx.gpr[31] = (0x088517ACu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x088517ACu) goto L_088517AC;
    return;
L_088517AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[18]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851794;
      }
      goto L_088517C8;
    }
L_088517C8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2492)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[31] = (0x088517D8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2492)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x088517D8u) goto L_088517D8;
    return;
L_088517D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2496)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[31] = (0x088517F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2496)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x088517F4u) goto L_088517F4;
    return;
L_088517F4:
    ctx.gpr[31] = (0x088517FCu);
    // nop
    goto L_08851DB0;
L_088517FC:
    ctx.gpr[31] = (0x08851804u);
    // nop
    goto L_08852134;
L_08851804:
    ctx.gpr[31] = (0x0885180Cu);
    // nop
    goto L_088525DC;
L_0885180C:
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
L_08851824:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(7472)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[17] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[19];
    ctx.gpr[16] = (2222u << 16u);
      if (branch_taken) {
          goto L_088518DC;
      }
      goto L_0885185C;
    }
L_0885185C:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    goto L_08851864;
L_08851864:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2484)));
    ctx.gpr[31] = (0x08851870u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x08851870u) goto L_08851870;
    return;
L_08851870:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(7472)));
      if (branch_taken) {
          goto L_08851864;
      }
      goto L_08851884;
    }
L_08851884:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    goto L_0885188C;
L_0885188C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2488)));
    ctx.gpr[31] = (0x08851898u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x08851898u) goto L_08851898;
    return;
L_08851898:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(7472)));
      if (branch_taken) {
          goto L_0885188C;
      }
      goto L_088518AC;
    }
L_088518AC:
    ctx.gpr[31] = (0x088518B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2492)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x088518B4u) goto L_088518B4;
    return;
L_088518B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[31] = (0x088518C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2496)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x088518C0u) goto L_088518C0;
    return;
L_088518C0:
    ctx.gpr[31] = (0x088518C8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 761u, 0x0882EFC4u>(ctx, &aot_mem) && ctx.pc == 0x088518C8u) goto L_088518C8;
    return;
L_088518C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[31] = (0x088518D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 742u, 0x0882EEA8u>(ctx, &aot_mem) && ctx.pc == 0x088518D4u) goto L_088518D4;
    return;
L_088518D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(7472)));
      if (branch_taken) {
          goto L_088518F8;
      }
      goto L_088518DC;
    }
L_088518DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x088518E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 469u, 0x08809D90u>(ctx, &aot_mem) && ctx.pc == 0x088518E8u) goto L_088518E8;
    return;
L_088518E8:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(7472)));
      if (branch_taken) {
          goto L_088518F8;
      }
      goto L_088518F0;
    }
L_088518F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_088518F8;
L_088518F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08851908u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2484)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08851908u) goto L_08851908;
    return;
L_08851908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(7472)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2484), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08851920u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2488)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08851920u) goto L_08851920;
    return;
L_08851920:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(7472)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2488), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08851938u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2492)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08851938u) goto L_08851938;
    return;
L_08851938:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(7472)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2492), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08851950u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2496)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08851950u) goto L_08851950;
    return;
L_08851950:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(2496), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08851970;
      }
      goto L_08851968;
    }
L_08851968:
    ctx.gpr[31] = (0x08851970u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x08851970u) goto L_08851970;
    return;
L_08851970:
    ctx.gpr[31] = (0x08851978u);
    // nop
    goto L_08851DD4;
L_08851978:
    ctx.gpr[31] = (0x08851980u);
    // nop
    goto L_088521AC;
L_08851980:
    ctx.gpr[31] = (0x08851988u);
    // nop
    goto L_08852688;
L_08851988:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0885199Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885199Cu) goto L_0885199C;
    return;
L_0885199C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(7472)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088519B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088519B4u) goto L_088519B4;
    return;
L_088519B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(7472)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
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
L_088519DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[30]);
    ctx.gpr[30] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(7472)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2520)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    ctx.gpr[23] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[23];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08851A70;
      }
      goto L_08851A54;
    }
L_08851A54:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 130 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2516)));
        goto L_08851A88;
    }
    goto L_08851A64;
L_08851A64:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2520), 0u);
      if (branch_taken) {
          goto L_08851A84;
      }
      goto L_08851A70;
    }
L_08851A70:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 382 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2516)));
        goto L_08851A88;
    }
    goto L_08851A80;
L_08851A80:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), 0u);
    goto L_08851A84;
L_08851A84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2516)));
    goto L_08851A88;
L_08851A88:
    ctx.gpr[31] = (0x08851A90u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 275u, 0x0883F12Cu>(ctx, &aot_mem) && ctx.pc == 0x08851A90u) goto L_08851A90;
    return;
L_08851A90:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[18] = (ctx.gpr[16] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7484));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (16792u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (16776u << 16u);
    ctx.gpr[16] = (0u | 0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08851AB8;
L_08851AB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2516)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2484)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[6] = (ctx.lo);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2516)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2484)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[6] = (ctx.lo);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2484)));
    ctx.gpr[31] = (0x08851B28u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x08851B28u) goto L_08851B28;
    return;
L_08851B28:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_08851AB8;
      }
      goto L_08851B38;
    }
L_08851B38:
    ctx.gpr[22] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    goto L_08851B50;
L_08851B50:
    ctx.gpr[31] = (0x08851B58u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0885135C;
L_08851B58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2488)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[23];
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
      if (branch_taken) {
          goto L_08851B8C;
      }
      goto L_08851B78;
    }
L_08851B78:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2488)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_08851B9C;
      }
      goto L_08851B8C;
    }
L_08851B8C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(384));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2488)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    goto L_08851B9C;
L_08851B9C:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[23]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2488)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[8];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08851BE0;
      }
      goto L_08851BB4;
    }
L_08851BB4:
    ctx.gpr[20] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2488)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_08851C0C;
      }
      goto L_08851BE0;
    }
L_08851BE0:
    ctx.gpr[22] = (0u | 127u);
    ctx.gpr[22] = (ctx.gpr[22] & 255u);
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    ctx.gpr[18] = (ctx.gpr[21] | 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2488)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    goto L_08851C0C;
L_08851C0C:
    ctx.gpr[31] = (0x08851C14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x08851C14u) goto L_08851C14;
    return;
L_08851C14:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08851B50;
      }
      goto L_08851C28;
    }
L_08851C28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2492)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[23]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2492)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(448));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[31] = (0x08851C8Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2492)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x08851C8Cu) goto L_08851C8C;
    return;
L_08851C8C:
    ctx.gpr[31] = (0x08851C94u);
    // nop
    goto L_08851E34;
L_08851C94:
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
L_08851CCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 92u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08851CF0u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08851CF0u) goto L_08851CF0;
    return;
L_08851CF0:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2500), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[6] = (0u | 92u);
    ctx.gpr[31] = (0x08851D10u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2500)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08851D10u) goto L_08851D10;
    return;
L_08851D10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2500)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2500)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (17392u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2500)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (17288u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2500)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2500)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2500)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08851DB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7472)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08851DC8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2500)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x08851DC8u) goto L_08851DC8;
    return;
L_08851DC8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08851DD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2500)));
      if (branch_taken) {
          goto L_08851E08;
      }
      goto L_08851DF8;
    }
L_08851DF8:
    ctx.gpr[31] = (0x08851E00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x08851E00u) goto L_08851E00;
    return;
L_08851E00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2500)));
    goto L_08851E08;
L_08851E08:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08851E1Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08851E1Cu) goto L_08851E1C;
    return;
L_08851E1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2500), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08851E34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(2520)));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[7];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(2500)));
      if (branch_taken) {
          goto L_08851EF4;
      }
      goto L_08851E58;
    }
L_08851E58:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 45 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 65 ? 1u : 0u);
      if (branch_taken) {
          goto L_08851E74;
      }
      goto L_08851E64;
    }
L_08851E64:
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(2500)));
      if (branch_taken) {
          goto L_08851F80;
      }
      goto L_08851E74;
    }
L_08851E74:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 93 ? 1u : 0u);
      if (branch_taken) {
          goto L_08851E90;
      }
      goto L_08851E7C;
    }
L_08851E7C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(23)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(2500)));
      if (branch_taken) {
          goto L_08851F80;
      }
      goto L_08851E90;
    }
L_08851E90:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 106 ? 1u : 0u);
      if (branch_taken) {
          goto L_08851EA8;
      }
      goto L_08851E98;
    }
L_08851E98:
    ctx.gpr[5] = (0u | 153u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(2500)));
      if (branch_taken) {
          goto L_08851F80;
      }
      goto L_08851EA8;
    }
L_08851EA8:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 118 ? 1u : 0u);
      if (branch_taken) {
          goto L_08851EC0;
      }
      goto L_08851EB0;
    }
L_08851EB0:
    ctx.gpr[5] = (0u | 76u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(2500)));
      if (branch_taken) {
          goto L_08851F80;
      }
      goto L_08851EC0;
    }
L_08851EC0:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 124 ? 1u : 0u);
      if (branch_taken) {
          goto L_08851ED4;
      }
      goto L_08851EC8;
    }
L_08851EC8:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(2500)));
      if (branch_taken) {
          goto L_08851F80;
      }
      goto L_08851ED4;
    }
L_08851ED4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 102u);
      if (branch_taken) {
          goto L_08851EE8;
      }
      goto L_08851EDC;
    }
L_08851EDC:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(2500)));
      if (branch_taken) {
          goto L_08851F80;
      }
      goto L_08851EE8;
    }
L_08851EE8:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(2500)));
      if (branch_taken) {
          goto L_08851F80;
      }
      goto L_08851EF4;
    }
L_08851EF4:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 54 ? 1u : 0u);
      if (branch_taken) {
          goto L_08851F0C;
      }
      goto L_08851F00;
    }
L_08851F00:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(2500)));
      if (branch_taken) {
          goto L_08851F80;
      }
      goto L_08851F0C;
    }
L_08851F0C:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 177 ? 1u : 0u);
      if (branch_taken) {
          goto L_08851F24;
      }
      goto L_08851F14;
    }
L_08851F14:
    ctx.gpr[5] = (0u | 26u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(2500)));
      if (branch_taken) {
          goto L_08851F80;
      }
      goto L_08851F24;
    }
L_08851F24:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 180 ? 1u : 0u);
      if (branch_taken) {
          goto L_08851F38;
      }
      goto L_08851F2C;
    }
L_08851F2C:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(2500)));
      if (branch_taken) {
          goto L_08851F80;
      }
      goto L_08851F38;
    }
L_08851F38:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 184 ? 1u : 0u);
      if (branch_taken) {
          goto L_08851F50;
      }
      goto L_08851F40;
    }
L_08851F40:
    ctx.gpr[5] = (0u | 13u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(2500)));
      if (branch_taken) {
          goto L_08851F80;
      }
      goto L_08851F50;
    }
L_08851F50:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 192 ? 1u : 0u);
      if (branch_taken) {
          goto L_08851F64;
      }
      goto L_08851F58;
    }
L_08851F58:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(2500)));
      if (branch_taken) {
          goto L_08851F80;
      }
      goto L_08851F64;
    }
L_08851F64:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 26u);
      if (branch_taken) {
          goto L_08851F78;
      }
      goto L_08851F6C;
    }
L_08851F6C:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(2500)));
      if (branch_taken) {
          goto L_08851F80;
      }
      goto L_08851F78;
    }
L_08851F78:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(2500)));
    goto L_08851F80;
L_08851F80:
    ctx.gpr[31] = (0x08851F88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x08851F88u) goto L_08851F88;
    return;
L_08851F88:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08851F94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7472)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08851FACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2500)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x08851FACu) goto L_08851FAC;
    return;
L_08851FAC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08851FB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 368u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08851FDCu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08851FDCu) goto L_08851FDC;
    return;
L_08851FDC:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2504), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[6] = (0u | 368u);
    ctx.gpr[31] = (0x08851FFCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2504)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08851FFCu) goto L_08851FFC;
    return;
L_08851FFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2504)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (16544u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2504)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (17280u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2504)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (16800u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2504)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2504)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1024));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2504)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2504)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (17358u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2504)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (16448u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2504)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (17357u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2504)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2504)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (17332u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2504)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2504)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08852134:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2504)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[31] = (0x08852160u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2504)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x08852160u) goto L_08852160;
    return;
L_08852160:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2504)));
    ctx.gpr[31] = (0x08852174u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 129u, 0x0883D148u>(ctx, &aot_mem) && ctx.pc == 0x08852174u) goto L_08852174;
    return;
L_08852174:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2504)));
    ctx.gpr[31] = (0x08852188u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 129u, 0x0883D148u>(ctx, &aot_mem) && ctx.pc == 0x08852188u) goto L_08852188;
    return;
L_08852188:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (0u | 24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2504)));
    ctx.gpr[31] = (0x0885219Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 129u, 0x0883D148u>(ctx, &aot_mem) && ctx.pc == 0x0885219Cu) goto L_0885219C;
    return;
L_0885219C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088521AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2504)));
      if (branch_taken) {
          goto L_08852210;
      }
      goto L_088521D0;
    }
L_088521D0:
    ctx.gpr[31] = (0x088521D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x088521D8u) goto L_088521D8;
    return;
L_088521D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2504)));
    ctx.gpr[31] = (0x088521E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 474u, 0x0883B820u>(ctx, &aot_mem) && ctx.pc == 0x088521E8u) goto L_088521E8;
    return;
L_088521E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2504)));
    ctx.gpr[31] = (0x088521F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 474u, 0x0883B820u>(ctx, &aot_mem) && ctx.pc == 0x088521F8u) goto L_088521F8;
    return;
L_088521F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2504)));
    ctx.gpr[31] = (0x08852208u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 474u, 0x0883B820u>(ctx, &aot_mem) && ctx.pc == 0x08852208u) goto L_08852208;
    return;
L_08852208:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2504)));
    goto L_08852210;
L_08852210:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08852224u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08852224u) goto L_08852224;
    return;
L_08852224:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2504), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885223C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08852258u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2504)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x08852258u) goto L_08852258;
    return;
L_08852258:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[31] = (0x08852264u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0885135C;
L_08852264:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08852290;
      }
      goto L_08852270;
    }
L_08852270:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2504)));
    ctx.gpr[31] = (0x08852280u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 478u, 0x0883B858u>(ctx, &aot_mem) && ctx.pc == 0x08852280u) goto L_08852280;
    return;
L_08852280:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2504)));
    ctx.gpr[31] = (0x08852290u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 478u, 0x0883B858u>(ctx, &aot_mem) && ctx.pc == 0x08852290u) goto L_08852290;
    return;
L_08852290:
    ctx.gpr[31] = (0x08852298u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x08852298u) goto L_08852298;
    return;
L_08852298:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088522B4;
      }
      goto L_088522A4;
    }
L_088522A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2504)));
    ctx.gpr[31] = (0x088522B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 478u, 0x0883B858u>(ctx, &aot_mem) && ctx.pc == 0x088522B4u) goto L_088522B4;
    return;
L_088522B4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088522C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    ctx.gpr[21] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x088522F8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x088522F8u) goto L_088522F8;
    return;
L_088522F8:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[20] = (2221u << 16u);
      if (branch_taken) {
          goto L_08852438;
      }
      goto L_08852304;
    }
L_08852304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (16792u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[5] = (16776u << 16u);
    ctx.gpr[19] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2520), ctx.gpr[21]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[18] + static_cast<std::uint32_t>(7484));
    goto L_08852334;
L_08852334:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(7484)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2484)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2484)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2484)));
    ctx.gpr[31] = (0x08852368u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x08852368u) goto L_08852368;
    return;
L_08852368:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(7472)));
      if (branch_taken) {
          goto L_08852334;
      }
      goto L_0885237C;
    }
L_0885237C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    goto L_08852384;
L_08852384:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2488)));
    ctx.gpr[31] = (0x08852390u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x08852390u) goto L_08852390;
    return;
L_08852390:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(7472)));
      if (branch_taken) {
          goto L_08852384;
      }
      goto L_088523A4;
    }
L_088523A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2492)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2492)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(448));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[31] = (0x088523C8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2492)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x088523C8u) goto L_088523C8;
    return;
L_088523C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[31] = (0x088523D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2516)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883F120u>(ctx, &aot_mem) && ctx.pc == 0x088523D4u) goto L_088523D4;
    return;
L_088523D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x088523E4u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 705u, 0x0884BCE4u>(ctx, &aot_mem) && ctx.pc == 0x088523E4u) goto L_088523E4;
    return;
L_088523E4:
    ctx.gpr[31] = (0x088523ECu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 712u, 0x0884BD54u>(ctx, &aot_mem) && ctx.pc == 0x088523ECu) goto L_088523EC;
    return;
L_088523EC:
    ctx.gpr[31] = (0x088523F4u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 713u, 0x0884BD6Cu>(ctx, &aot_mem) && ctx.pc == 0x088523F4u) goto L_088523F4;
    return;
L_088523F4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08852400u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x08852400u) goto L_08852400;
    return;
L_08852400:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08852410u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4132));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 702u, 0x0884BCB8u>(ctx, &aot_mem) && ctx.pc == 0x08852410u) goto L_08852410;
    return;
L_08852410:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x08852420u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3420));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 706u, 0x0884BCFCu>(ctx, &aot_mem) && ctx.pc == 0x08852420u) goto L_08852420;
    return;
L_08852420:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x08852430u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3412));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 709u, 0x0884BD28u>(ctx, &aot_mem) && ctx.pc == 0x08852430u) goto L_08852430;
    return;
L_08852430:
    ctx.gpr[31] = (0x08852438u);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 861u, 0x0881F4B4u>(ctx, &aot_mem) && ctx.pc == 0x08852438u) goto L_08852438;
    return;
L_08852438:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
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
L_08852464:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0885247Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x0885247Cu) goto L_0885247C;
    return;
L_0885247C:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_0885249C;
      }
      goto L_08852488;
    }
L_08852488:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x08852494u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x08852494u) goto L_08852494;
    return;
L_08852494:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08852530;
      }
      goto L_0885249C;
    }
L_0885249C:
    ctx.gpr[31] = (0x088524A4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x088524A4u) goto L_088524A4;
    return;
L_088524A4:
    ctx.gpr[31] = (0x088524ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08852540;
L_088524AC:
    ctx.gpr[31] = (0x088524B4u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 705u, 0x0884BCE4u>(ctx, &aot_mem) && ctx.pc == 0x088524B4u) goto L_088524B4;
    return;
L_088524B4:
    ctx.gpr[31] = (0x088524BCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 712u, 0x0884BD54u>(ctx, &aot_mem) && ctx.pc == 0x088524BCu) goto L_088524BC;
    return;
L_088524BC:
    ctx.gpr[31] = (0x088524C4u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 713u, 0x0884BD6Cu>(ctx, &aot_mem) && ctx.pc == 0x088524C4u) goto L_088524C4;
    return;
L_088524C4:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x088524E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4252));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x088524E4u) goto L_088524E4;
    return;
L_088524E4:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x088524F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3520));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x088524F4u) goto L_088524F4;
    return;
L_088524F4:
    ctx.gpr[4] = (2183u << 16u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08852504u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18308));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x08852504u) goto L_08852504;
    return;
L_08852504:
    ctx.gpr[31] = (0x0885250Cu);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 861u, 0x0881F4B4u>(ctx, &aot_mem) && ctx.pc == 0x0885250Cu) goto L_0885250C;
    return;
L_0885250C:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[5] = (2181u << 16u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12780));
    ctx.gpr[31] = (0x08852524u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13016));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x08852524u) goto L_08852524;
    return;
L_08852524:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08852530u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x08852530u) goto L_08852530;
    return;
L_08852530:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08852540:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088525B0;
      }
      goto L_08852550;
    }
L_08852550:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088525A8;
      }
      goto L_08852560;
    }
L_08852560:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0885258C;
      }
      goto L_0885256C;
    }
L_0885256C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08852594;
      }
      goto L_08852574;
    }
L_08852574:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0885259C;
      }
      goto L_0885257C;
    }
L_0885257C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_088525A4;
      }
      goto L_08852584;
    }
L_08852584:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 13u);
      if (branch_taken) {
          goto L_088525A8;
      }
      goto L_0885258C;
    }
L_0885258C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_088525A8;
      }
      goto L_08852594;
    }
L_08852594:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 14u);
      if (branch_taken) {
          goto L_088525A8;
      }
      goto L_0885259C;
    }
L_0885259C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 12u);
      if (branch_taken) {
          goto L_088525A8;
      }
      goto L_088525A4;
    }
L_088525A4:
    ctx.gpr[5] = (0u | 4u);
    goto L_088525A8;
L_088525A8:
    ctx.gpr[31] = (0x088525B0u);
    ctx.gpr[4] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x088525B0u) goto L_088525B0;
    return;
L_088525B0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088525BC:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[2] = (0u | 1u);
        goto L_088525D4;
    }
    goto L_088525D4;
L_088525D4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088525DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 276u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08852600u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08852600u) goto L_08852600;
    return;
L_08852600:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2508), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0885261Cu);
    ctx.gpr[6] = (0u | 276u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0885261Cu) goto L_0885261C;
    return;
L_0885261C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[31] = (0x08852628u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2508)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 47u, 0x088386E0u>(ctx, &aot_mem) && ctx.pc == 0x08852628u) goto L_08852628;
    return;
L_08852628:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2508)));
    ctx.gpr[31] = (0x0885263Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 24u, 0x0883C3CCu>(ctx, &aot_mem) && ctx.pc == 0x0885263Cu) goto L_0885263C;
    return;
L_0885263C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (17248u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2508)));
    ctx.gpr[6] = (17226u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2508)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2508)));
    ctx.gpr[31] = (0x08852670u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 129u, 0x0883D148u>(ctx, &aot_mem) && ctx.pc == 0x08852670u) goto L_08852670;
    return;
L_08852670:
    ctx.gpr[31] = (0x08852678u);
    // nop
    goto L_088527D0;
L_08852678:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08852688:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088526F8;
      }
      goto L_088526AC;
    }
L_088526AC:
    ctx.gpr[31] = (0x088526B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2508)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 50u, 0x08838774u>(ctx, &aot_mem) && ctx.pc == 0x088526B4u) goto L_088526B4;
    return;
L_088526B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2508)));
    ctx.gpr[31] = (0x088526C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 39u, 0x0883C59Cu>(ctx, &aot_mem) && ctx.pc == 0x088526C4u) goto L_088526C4;
    return;
L_088526C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2508)));
    ctx.gpr[31] = (0x088526D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 474u, 0x0883B820u>(ctx, &aot_mem) && ctx.pc == 0x088526D4u) goto L_088526D4;
    return;
L_088526D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088526ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2508)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088526ECu) goto L_088526EC;
    return;
L_088526EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[31] = (0x088526F8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2508), 0u);
    goto L_08852A5C;
L_088526F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08852708:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08852754;
      }
      goto L_0885272C;
    }
L_0885272C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 128u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08852754;
      }
      goto L_0885273C;
    }
L_0885273C:
    ctx.gpr[31] = (0x08852744u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08852744u) goto L_08852744;
    return;
L_08852744:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2480), 0u);
    goto L_08852754;
L_08852754:
    ctx.gpr[31] = (0x0885275Cu);
    // nop
    goto L_08852AD8;
L_0885275C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885276C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088527C0;
      }
      goto L_08852790;
    }
L_08852790:
    ctx.gpr[31] = (0x08852798u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2508)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 54u, 0x088387ACu>(ctx, &aot_mem) && ctx.pc == 0x08852798u) goto L_08852798;
    return;
L_08852798:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2508)));
    ctx.gpr[31] = (0x088527A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 41u, 0x0883C5B8u>(ctx, &aot_mem) && ctx.pc == 0x088527A8u) goto L_088527A8;
    return;
L_088527A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2508)));
    ctx.gpr[31] = (0x088527B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 478u, 0x0883B858u>(ctx, &aot_mem) && ctx.pc == 0x088527B8u) goto L_088527B8;
    return;
L_088527B8:
    ctx.gpr[31] = (0x088527C0u);
    // nop
    goto L_08852BDC;
L_088527C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088527D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 1260u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08852814u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08852814u) goto L_08852814;
    return;
L_08852814:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2512), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[6] = (0u | 1260u);
    ctx.gpr[31] = (0x08852834u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2512)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08852834u) goto L_08852834;
    return;
L_08852834:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2512)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[31] = (0x08852864u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08852864u) goto L_08852864;
    return;
L_08852864:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2512)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (16784u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2512)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (17136u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2512)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (17048u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2512)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[20] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2512)));
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
    ctx.gpr[4] = (17114u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (2220u << 16u);
    ctx.gpr[4] = (17068u << 16u);
    ctx.gpr[19] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28912));
    goto L_0885291C;
L_0885291C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2512)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08852934u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(212));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08852934u) goto L_08852934;
    return;
L_08852934:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2512)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), 0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2512)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2512)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2512)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2512)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(348));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_0885291C;
      }
      goto L_088529D4;
    }
L_088529D4:
    ctx.gpr[19] = (2220u << 16u);
    ctx.gpr[17] = (2220u << 16u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-28908));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28892));
    goto L_088529EC;
L_088529EC:
    ctx.gpr[31] = (0x088529F4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x088529F4u) goto L_088529F4;
    return;
L_088529F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2512)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08852A0Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08852A0Cu) goto L_08852A0C;
    return;
L_08852A0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2512)));
    ctx.gpr[31] = (0x08852A1Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x08852A1Cu) goto L_08852A1C;
    return;
L_08852A1C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_088529EC;
      }
      goto L_08852A2C;
    }
L_08852A2C:
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
L_08852A5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7472)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2512)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_08852A84;
L_08852A84:
    ctx.gpr[31] = (0x08852A8Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08852A8Cu) goto L_08852A8C;
    return;
L_08852A8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2512)));
      if (branch_taken) {
          goto L_08852A84;
      }
      goto L_08852AA4;
    }
L_08852AA4:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08852AB8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08852AB8u) goto L_08852AB8;
    return;
L_08852AB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7472)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2512), 0u);
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
L_08852AD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(7472)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2512)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08852B14u);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08852B14u) goto L_08852B14;
    return;
L_08852B14:
    ctx.gpr[4] = (ctx.gpr[16] << 7u);
    ctx.gpr[6] = (ctx.gpr[16] << 3u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2512)));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08852B40u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08852B40u) goto L_08852B40;
    return;
L_08852B40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[31] = (0x08852B4Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2512)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x08852B4Cu) goto L_08852B4C;
    return;
L_08852B4C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    goto L_08852B58;
L_08852B58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2512)));
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x08852B74u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(212));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08852B74u) goto L_08852B74;
    return;
L_08852B74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2512)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(212));
    ctx.gpr[31] = (0x08852B94u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(53));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08852B94u) goto L_08852B94;
    return;
L_08852B94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2512)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x08852BA8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(180));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x08852BA8u) goto L_08852BA8;
    return;
L_08852BA8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(180));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08852B58;
      }
      goto L_08852BBC;
    }
L_08852BBC:
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
L_08852BDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_08852BFC;
L_08852BFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2512)));
    ctx.gpr[31] = (0x08852C0Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x08852C0Cu) goto L_08852C0C;
    return;
L_08852C0C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_08852BFC;
      }
      goto L_08852C1C;
    }
L_08852C1C:
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
L_08852C34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 184u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08852C80u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08852C80u) goto L_08852C80;
    return;
L_08852C80:
    ctx.gpr[21] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(7472)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(2484), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08852C9Cu);
    ctx.gpr[6] = (0u | 184u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08852C9Cu) goto L_08852C9C;
    return;
L_08852C9C:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(106), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(107), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (16792u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(105)));
    ctx.gpr[2] = (16776u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(106)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(107)));
    ctx.gpr[2] = (17104u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (ctx.gpr[5] << 24u);
    ctx.gpr[6] = (ctx.gpr[6] << 24u);
    ctx.gpr[7] = (ctx.gpr[7] << 24u);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[2] = (17172u << 16u);
    ctx.gpr[10] = (0u | 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 24u));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(7484));
    goto L_08852D1C;
L_08852D1C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] << 3u);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[17]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(2484)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[12];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] << 3u);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[17]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(2484)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[13];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(2484)));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(2484)));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(2484)));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(2484)));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[9]);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(2484)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[9]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[8]);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(832));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(92));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[10]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08852D1C;
      }
      goto L_08852DCC;
    }
L_08852DCC:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 552u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08852DE4u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08852DE4u) goto L_08852DE4;
    return;
L_08852DE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(2488), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08852DFCu);
    ctx.gpr[6] = (0u | 552u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08852DFCu) goto L_08852DFC;
    return;
L_08852DFC:
    ctx.gpr[4] = (0u | 127u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(109), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(110), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(111), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(109)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(110)));
    ctx.gpr[5] = (ctx.gpr[5] << 24u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(111)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
    ctx.gpr[5] = (17024u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[30] = (ctx.gpr[6] << 24u);
    ctx.gpr[23] = (ctx.gpr[7] << 24u);
    ctx.gpr[22] = (ctx.gpr[8] << 24u);
    ctx.gpr[5] = (17066u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[30]) >> 24u));
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[23]) >> 24u));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 24u));
    goto L_08852E68;
L_08852E68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2488)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2488)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2488)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2488)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2488)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[31] = (0x08852EB4u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    goto L_0885135C;
L_08852EB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2488)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_08852EE4;
      }
      goto L_08852ECC;
    }
L_08852ECC:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2488)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08852EF8;
      }
      goto L_08852EE4;
    }
L_08852EE4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(384));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2488)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    goto L_08852EF8;
L_08852EF8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[23]));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08852E68;
      }
      goto L_08852F24;
    }
L_08852F24:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 92u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08852F3Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08852F3Cu) goto L_08852F3C;
    return;
L_08852F3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2492), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08852F54u);
    ctx.gpr[6] = (0u | 92u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08852F54u) goto L_08852F54;
    return;
L_08852F54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (17236u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (16752u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2492)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2492)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (17280u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2492)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[17] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2492)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2492)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(115), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2492)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(113)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(114)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(115)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2492)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(448));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 92u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08853008u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08853008u) goto L_08853008;
    return;
L_08853008:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2496), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08853020u);
    ctx.gpr[6] = (0u | 92u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08853020u) goto L_08853020;
    return;
L_08853020:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(7472)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (17392u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2496)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2496)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2496)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (17288u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2496)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2496)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(118), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(119), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2496)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(117)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(118)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(119)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2496)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(960));
    ctx.gpr[31] = (0x088530B0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    goto L_08851CCC;
L_088530B0:
    ctx.gpr[31] = (0x088530B8u);
    // nop
    goto L_08851FB8;
L_088530B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 144u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088530CCu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088530CCu) goto L_088530CC;
    return;
L_088530CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088530E4u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088530E4u) goto L_088530E4;
    return;
L_088530E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08853104u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08853104u) goto L_08853104;
    return;
L_08853104:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08853114u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 741u, 0x0882EE90u>(ctx, &aot_mem) && ctx.pc == 0x08853114u) goto L_08853114;
    return;
L_08853114:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08853128u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08853128u) goto L_08853128;
    return;
L_08853128:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0885313Cu);
    ctx.gpr[6] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0885313Cu) goto L_0885313C;
    return;
L_0885313C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7364));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7352)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08853160u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28884));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08853160u) goto L_08853160;
    return;
L_08853160:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7360)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7468)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0885317Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 605u, 0x0897A8A0u>(ctx, &aot_mem) && ctx.pc == 0x0885317Cu) goto L_0885317C;
    return;
L_0885317C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 130u);
    ctx.gpr[31] = (0x08853194u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 465u, 0x08809CF0u>(ctx, &aot_mem) && ctx.pc == 0x08853194u) goto L_08853194;
    return;
L_08853194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(7472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088531D8:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(7356)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(7360), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088531EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08853204u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 88u, 0x0886CB5Cu>(ctx, &aot_mem) && ctx.pc == 0x08853204u) goto L_08853204;
    return;
L_08853204:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 256u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0885321Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885321Cu) goto L_0885321C;
    return;
L_0885321C:
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(22688), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08853234u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08853234u) goto L_08853234;
    return;
L_08853234:
    ctx.gpr[31] = (0x0885323Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 404u, 0x088561A0u>(ctx, &aot_mem) && ctx.pc == 0x0885323Cu) goto L_0885323C;
    return;
L_0885323C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 24u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08853250u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08853250u) goto L_08853250;
    return;
L_08853250:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08853268u);
    ctx.gpr[6] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08853268u) goto L_08853268;
    return;
L_08853268:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x0885327Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28404));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 595u, 0x088473B4u>(ctx, &aot_mem) && ctx.pc == 0x0885327Cu) goto L_0885327C;
    return;
L_0885327C:
    ctx.gpr[31] = (0x08853284u);
    // nop
    goto L_08853400;
L_08853284:
    ctx.gpr[31] = (0x0885328Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 504u, 0x08856A58u>(ctx, &aot_mem) && ctx.pc == 0x0885328Cu) goto L_0885328C;
    return;
L_0885328C:
    ctx.gpr[31] = (0x08853294u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 483u, 0x088568ACu>(ctx, &aot_mem) && ctx.pc == 0x08853294u) goto L_08853294;
    return;
L_08853294:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x088532A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(31260));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 702u, 0x0884BCB8u>(ctx, &aot_mem) && ctx.pc == 0x088532A4u) goto L_088532A4;
    return;
L_088532A4:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x088532B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13212));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 706u, 0x0884BCFCu>(ctx, &aot_mem) && ctx.pc == 0x088532B4u) goto L_088532B4;
    return;
L_088532B4:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x088532C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13220));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 709u, 0x0884BD28u>(ctx, &aot_mem) && ctx.pc == 0x088532C4u) goto L_088532C4;
    return;
L_088532C4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088532D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088532F0u);
    // nop
    goto L_088536B8;
L_088532F0:
    ctx.gpr[31] = (0x088532F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 507u, 0x08856A7Cu>(ctx, &aot_mem) && ctx.pc == 0x088532F8u) goto L_088532F8;
    return;
L_088532F8:
    ctx.gpr[31] = (0x08853300u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 497u, 0x088569D0u>(ctx, &aot_mem) && ctx.pc == 0x08853300u) goto L_08853300;
    return;
L_08853300:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[31] = (0x08853310u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 563u, 0x08847174u>(ctx, &aot_mem) && ctx.pc == 0x08853310u) goto L_08853310;
    return;
L_08853310:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08853328u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08853328u) goto L_08853328;
    return;
L_08853328:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08853340u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08853340u) goto L_08853340;
    return;
L_08853340:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08853358u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08853358u) goto L_08853358;
    return;
L_08853358:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08853370u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08853370u) goto L_08853370;
    return;
L_08853370:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08853388u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08853388u) goto L_08853388;
    return;
L_08853388:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885339C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088533A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(252)));
    ctx.gpr[16] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088533EC;
      }
      goto L_088533CC;
    }
L_088533CC:
    ctx.gpr[31] = (0x088533D4u);
    // nop
    goto L_08853860;
L_088533D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(63)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088533EC;
      }
      goto L_088533E4;
    }
L_088533E4:
    ctx.gpr[31] = (0x088533ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 561u, 0x08856D70u>(ctx, &aot_mem) && ctx.pc == 0x088533ECu) goto L_088533EC;
    return;
L_088533EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853400:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 144u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08853428u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08853428u) goto L_08853428;
    return;
L_08853428:
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(244), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08853444u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08853444u) goto L_08853444;
    return;
L_08853444:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(244)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 16u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08853464u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08853464u) goto L_08853464;
    return;
L_08853464:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08853474u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(240), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 741u, 0x0882EE90u>(ctx, &aot_mem) && ctx.pc == 0x08853474u) goto L_08853474;
    return;
L_08853474:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 144u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08853488u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08853488u) goto L_08853488;
    return;
L_08853488:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(248), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088534A0u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088534A0u) goto L_088534A0;
    return;
L_088534A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(248)));
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
L_088534C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 184u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088534ECu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088534ECu) goto L_088534EC;
    return;
L_088534EC:
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(128), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08853508u);
    ctx.gpr[6] = (0u | 184u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08853508u) goto L_08853508;
    return;
L_08853508:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (0x0885351Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 866u, 0x08837A88u>(ctx, &aot_mem) && ctx.pc == 0x0885351Cu) goto L_0885351C;
    return;
L_0885351C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (0x0885352Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 877u, 0x08837B90u>(ctx, &aot_mem) && ctx.pc == 0x0885352Cu) goto L_0885352C;
    return;
L_0885352C:
    ctx.gpr[31] = (0x08853534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 885u, 0x08837C78u>(ctx, &aot_mem) && ctx.pc == 0x08853534u) goto L_08853534;
    return;
L_08853534:
    ctx.gpr[31] = (0x0885353Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 894u, 0x08837E14u>(ctx, &aot_mem) && ctx.pc == 0x0885353Cu) goto L_0885353C;
    return;
L_0885353C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 92u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08853550u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08853550u) goto L_08853550;
    return;
L_08853550:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(192), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08853568u);
    ctx.gpr[6] = (0u | 92u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08853568u) goto L_08853568;
    return;
L_08853568:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (17378u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    ctx.gpr[6] = (17028u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08853598u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 480u, 0x0883BB48u>(ctx, &aot_mem) && ctx.pc == 0x08853598u) goto L_08853598;
    return;
L_08853598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 52u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088535B4u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088535B4u) goto L_088535B4;
    return;
L_088535B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(208), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088535CCu);
    ctx.gpr[6] = (0u | 52u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088535CCu) goto L_088535CC;
    return;
L_088535CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(248)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[31] = (0x088535F4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 749u, 0x08847D14u>(ctx, &aot_mem) && ctx.pc == 0x088535F4u) goto L_088535F4;
    return;
L_088535F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 48u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08853614u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08853614u) goto L_08853614;
    return;
L_08853614:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(212), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0885362Cu);
    ctx.gpr[6] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0885362Cu) goto L_0885362C;
    return;
L_0885362C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(248)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x08853658u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 403u, 0x0883F70Cu>(ctx, &aot_mem) && ctx.pc == 0x08853658u) goto L_08853658;
    return;
L_08853658:
    ctx.gpr[31] = (0x08853660u);
    // nop
    goto L_08853F2C;
L_08853660:
    ctx.gpr[31] = (0x08853668u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 70u, 0x088547A8u>(ctx, &aot_mem) && ctx.pc == 0x08853668u) goto L_08853668;
    return;
L_08853668:
    ctx.gpr[31] = (0x08853670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 93u, 0x08858B5Cu>(ctx, &aot_mem) && ctx.pc == 0x08853670u) goto L_08853670;
    return;
L_08853670:
    ctx.gpr[31] = (0x08853678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 55u, 0x08854664u>(ctx, &aot_mem) && ctx.pc == 0x08853678u) goto L_08853678;
    return;
L_08853678:
    ctx.gpr[31] = (0x08853680u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 102u, 0x08854ADCu>(ctx, &aot_mem) && ctx.pc == 0x08853680u) goto L_08853680;
    return;
L_08853680:
    ctx.gpr[31] = (0x08853688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 30u, 0x088581B8u>(ctx, &aot_mem) && ctx.pc == 0x08853688u) goto L_08853688;
    return;
L_08853688:
    ctx.gpr[31] = (0x08853690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 219u, 0x088551F4u>(ctx, &aot_mem) && ctx.pc == 0x08853690u) goto L_08853690;
    return;
L_08853690:
    ctx.gpr[31] = (0x08853698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 107u, 0x08858E68u>(ctx, &aot_mem) && ctx.pc == 0x08853698u) goto L_08853698;
    return;
L_08853698:
    ctx.gpr[31] = (0x088536A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 19u, 0x0885426Cu>(ctx, &aot_mem) && ctx.pc == 0x088536A0u) goto L_088536A0;
    return;
L_088536A0:
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
L_088536B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(252)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[16] = (2222u << 16u);
      if (branch_taken) {
          goto L_08853804;
      }
      goto L_088536E0;
    }
L_088536E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(248)));
    ctx.gpr[31] = (0x088536ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x088536ECu) goto L_088536EC;
    return;
L_088536EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[31] = (0x088536F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 873u, 0x08837B58u>(ctx, &aot_mem) && ctx.pc == 0x088536F8u) goto L_088536F8;
    return;
L_088536F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (0x08853708u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 881u, 0x08837C40u>(ctx, &aot_mem) && ctx.pc == 0x08853708u) goto L_08853708;
    return;
L_08853708:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0885371Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885371Cu) goto L_0885371C;
    return;
L_0885371C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[31] = (0x08853728u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(128), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 889u, 0x08837DA4u>(ctx, &aot_mem) && ctx.pc == 0x08853728u) goto L_08853728;
    return;
L_08853728:
    ctx.gpr[31] = (0x08853730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 898u, 0x08837F3Cu>(ctx, &aot_mem) && ctx.pc == 0x08853730u) goto L_08853730;
    return;
L_08853730:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[31] = (0x0885373Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 485u, 0x0883BBF8u>(ctx, &aot_mem) && ctx.pc == 0x0885373Cu) goto L_0885373C;
    return;
L_0885373C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08853750u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08853750u) goto L_08853750;
    return;
L_08853750:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(192), 0u);
    ctx.gpr[31] = (0x08853764u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 751u, 0x08847D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08853764u) goto L_08853764;
    return;
L_08853764:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08853778u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08853778u) goto L_08853778;
    return;
L_08853778:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(208), 0u);
    ctx.gpr[31] = (0x0885378Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 405u, 0x0883F740u>(ctx, &aot_mem) && ctx.pc == 0x0885378Cu) goto L_0885378C;
    return;
L_0885378C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088537A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088537A0u) goto L_088537A0;
    return;
L_088537A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[31] = (0x088537ACu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(212), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 59u, 0x088546E4u>(ctx, &aot_mem) && ctx.pc == 0x088537ACu) goto L_088537AC;
    return;
L_088537AC:
    ctx.gpr[31] = (0x088537B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 114u, 0x08854C08u>(ctx, &aot_mem) && ctx.pc == 0x088537B4u) goto L_088537B4;
    return;
L_088537B4:
    ctx.gpr[31] = (0x088537BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 160u, 0x08854ECCu>(ctx, &aot_mem) && ctx.pc == 0x088537BCu) goto L_088537BC;
    return;
L_088537BC:
    ctx.gpr[31] = (0x088537C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 229u, 0x0885533Cu>(ctx, &aot_mem) && ctx.pc == 0x088537C4u) goto L_088537C4;
    return;
L_088537C4:
    ctx.gpr[31] = (0x088537CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 285u, 0x0885582Cu>(ctx, &aot_mem) && ctx.pc == 0x088537CCu) goto L_088537CC;
    return;
L_088537CC:
    ctx.gpr[31] = (0x088537D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 31u, 0x088543F0u>(ctx, &aot_mem) && ctx.pc == 0x088537D4u) goto L_088537D4;
    return;
L_088537D4:
    ctx.gpr[31] = (0x088537DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 8u, 0x0885417Cu>(ctx, &aot_mem) && ctx.pc == 0x088537DCu) goto L_088537DC;
    return;
L_088537DC:
    ctx.gpr[31] = (0x088537E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 77u, 0x08854930u>(ctx, &aot_mem) && ctx.pc == 0x088537E4u) goto L_088537E4;
    return;
L_088537E4:
    ctx.gpr[31] = (0x088537ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 242u, 0x08855444u>(ctx, &aot_mem) && ctx.pc == 0x088537ECu) goto L_088537EC;
    return;
L_088537EC:
    ctx.gpr[31] = (0x088537F4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 761u, 0x0882EFC4u>(ctx, &aot_mem) && ctx.pc == 0x088537F4u) goto L_088537F4;
    return;
L_088537F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[31] = (0x08853800u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(240)));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 742u, 0x0882EEA8u>(ctx, &aot_mem) && ctx.pc == 0x08853800u) goto L_08853800;
    return;
L_08853800:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    goto L_08853804;
L_08853804:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08853814u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(244)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08853814u) goto L_08853814;
    return;
L_08853814:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(244), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0885382Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(240)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885382Cu) goto L_0885382C;
    return;
L_0885382C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(240), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08853844u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(248)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08853844u) goto L_08853844;
    return;
L_08853844:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(248), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853860:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0885387Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 875u, 0x08837B74u>(ctx, &aot_mem) && ctx.pc == 0x0885387Cu) goto L_0885387C;
    return;
L_0885387C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (0x0885388Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 883u, 0x08837C5Cu>(ctx, &aot_mem) && ctx.pc == 0x0885388Cu) goto L_0885388C;
    return;
L_0885388C:
    ctx.gpr[31] = (0x08853894u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 892u, 0x08837DF0u>(ctx, &aot_mem) && ctx.pc == 0x08853894u) goto L_08853894;
    return;
L_08853894:
    ctx.gpr[31] = (0x0885389Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 14u, 0x08854204u>(ctx, &aot_mem) && ctx.pc == 0x0885389Cu) goto L_0885389C;
    return;
L_0885389C:
    ctx.gpr[31] = (0x088538A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 68u, 0x08854784u>(ctx, &aot_mem) && ctx.pc == 0x088538A4u) goto L_088538A4;
    return;
L_088538A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[6] = (0u | 2u);
      if (branch_taken) {
          goto L_088538C8;
      }
      goto L_088538B4;
    }
L_088538B4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_088539D8;
      }
      goto L_088538BC;
    }
L_088538BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_088538DC;
      }
      goto L_088538C4;
    }
L_088538C4:
    ctx.gpr[6] = (0u | 2u);
    goto L_088538C8;
L_088538C8:
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
        goto L_08853950;
    }
    goto L_088538D0;
L_088538D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088539D8;
      }
      goto L_088538D8;
    }
L_088538D8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_088538DC;
L_088538DC:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08853914;
      }
      goto L_088538E8;
    }
L_088538E8:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08853914;
      }
      goto L_088538F4;
    }
L_088538F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08853914;
      }
      goto L_08853904;
    }
L_08853904:
    ctx.gpr[31] = (0x0885390Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 776u, 0x08847EA8u>(ctx, &aot_mem) && ctx.pc == 0x0885390Cu) goto L_0885390C;
    return;
L_0885390C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08853940;
      }
      goto L_08853914;
    }
L_08853914:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08853940;
      }
      goto L_0885391C;
    }
L_0885391C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08853940;
      }
      goto L_0885392C;
    }
L_0885392C:
    ctx.gpr[31] = (0x08853934u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 416u, 0x0883F7F4u>(ctx, &aot_mem) && ctx.pc == 0x08853934u) goto L_08853934;
    return;
L_08853934:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[31] = (0x08853940u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 776u, 0x08847EA8u>(ctx, &aot_mem) && ctx.pc == 0x08853940u) goto L_08853940;
    return;
L_08853940:
    ctx.gpr[31] = (0x08853948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 901u, 0x08837F88u>(ctx, &aot_mem) && ctx.pc == 0x08853948u) goto L_08853948;
    return;
L_08853948:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088539D8;
      }
      goto L_08853950;
    }
L_08853950:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088539B4;
      }
      goto L_0885395C;
    }
L_0885395C:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08853990;
      }
      goto L_0885396C;
    }
L_0885396C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08853990;
      }
      goto L_08853978;
    }
L_08853978:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08853990;
      }
      goto L_08853980;
    }
L_08853980:
    ctx.gpr[31] = (0x08853988u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 776u, 0x08847EA8u>(ctx, &aot_mem) && ctx.pc == 0x08853988u) goto L_08853988;
    return;
L_08853988:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088539D0;
      }
      goto L_08853990;
    }
L_08853990:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088539D0;
      }
      goto L_08853998;
    }
L_08853998:
    ctx.gpr[31] = (0x088539A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 416u, 0x0883F7F4u>(ctx, &aot_mem) && ctx.pc == 0x088539A0u) goto L_088539A0;
    return;
L_088539A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[31] = (0x088539ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 776u, 0x08847EA8u>(ctx, &aot_mem) && ctx.pc == 0x088539ACu) goto L_088539AC;
    return;
L_088539AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088539D0;
      }
      goto L_088539B4;
    }
L_088539B4:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088539D0;
      }
      goto L_088539BC;
    }
L_088539BC:
    ctx.gpr[31] = (0x088539C4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 416u, 0x0883F7F4u>(ctx, &aot_mem) && ctx.pc == 0x088539C4u) goto L_088539C4;
    return;
L_088539C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[31] = (0x088539D0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 776u, 0x08847EA8u>(ctx, &aot_mem) && ctx.pc == 0x088539D0u) goto L_088539D0;
    return;
L_088539D0:
    ctx.gpr[31] = (0x088539D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 901u, 0x08837F88u>(ctx, &aot_mem) && ctx.pc == 0x088539D8u) goto L_088539D8;
    return;
L_088539D8:
    ctx.gpr[31] = (0x088539E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 205u, 0x08855120u>(ctx, &aot_mem) && ctx.pc == 0x088539E0u) goto L_088539E0;
    return;
L_088539E0:
    ctx.gpr[31] = (0x088539E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 273u, 0x0885578Cu>(ctx, &aot_mem) && ctx.pc == 0x088539E8u) goto L_088539E8;
    return;
L_088539E8:
    ctx.gpr[31] = (0x088539F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 316u, 0x08855C18u>(ctx, &aot_mem) && ctx.pc == 0x088539F0u) goto L_088539F0;
    return;
L_088539F0:
    ctx.gpr[31] = (0x088539F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 150u, 0x08854E30u>(ctx, &aot_mem) && ctx.pc == 0x088539F8u) goto L_088539F8;
    return;
L_088539F8:
    ctx.gpr[31] = (0x08853A00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 92u, 0x08854A64u>(ctx, &aot_mem) && ctx.pc == 0x08853A00u) goto L_08853A00;
    return;
L_08853A00:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853A10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    if (ctx.gpr[8] == ctx.gpr[16]) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
        goto L_08853A48;
    }
    goto L_08853A48;
L_08853A48:
    ctx.gpr[8] = (ctx.gpr[6] & 8u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[6] & 4u);
      if (branch_taken) {
          goto L_08853AAC;
      }
      goto L_08853A54;
    }
L_08853A54:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08853A84;
      }
      goto L_08853A60;
    }
L_08853A60:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08853A74u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08853A74u) goto L_08853A74;
    return;
L_08853A74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08853A98;
      }
      goto L_08853A84;
    }
L_08853A84:
    ctx.gpr[31] = (0x08853A8Cu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08853A8Cu) goto L_08853A8C;
    return;
L_08853A8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    goto L_08853A98;
L_08853A98:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08853C34;
      }
      goto L_08853AA0;
    }
L_08853AA0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22688)));
      if (branch_taken) {
          goto L_08853C34;
      }
      goto L_08853AAC;
    }
L_08853AAC:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[6] & 1024u);
      if (branch_taken) {
          goto L_08853B00;
      }
      goto L_08853AB4;
    }
L_08853AB4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08853ADC;
      }
      goto L_08853ABC;
    }
L_08853ABC:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08853AD0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08853AD0u) goto L_08853AD0;
    return;
L_08853AD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22688)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08853AEC;
      }
      goto L_08853ADC;
    }
L_08853ADC:
    ctx.gpr[31] = (0x08853AE4u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08853AE4u) goto L_08853AE4;
    return;
L_08853AE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    goto L_08853AEC;
L_08853AEC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08853C34;
      }
      goto L_08853AF4;
    }
L_08853AF4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22688)));
      if (branch_taken) {
          goto L_08853C34;
      }
      goto L_08853B00;
    }
L_08853B00:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 2048u);
      if (branch_taken) {
          goto L_08853B7C;
      }
      goto L_08853B08;
    }
L_08853B08:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08853B20;
      }
      goto L_08853B10;
    }
L_08853B10:
    ctx.gpr[31] = (0x08853B18u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08853B18u) goto L_08853B18;
    return;
L_08853B18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22688)));
      if (branch_taken) {
          goto L_08853C34;
      }
      goto L_08853B20;
    }
L_08853B20:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
        goto L_08853B50;
    }
    goto L_08853B44;
L_08853B44:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    goto L_08853B50;
L_08853B50:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08853B60;
      }
      goto L_08853B58;
    }
L_08853B58:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22688)));
    goto L_08853B60;
L_08853B60:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08853B74u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08853B74u) goto L_08853B74;
    return;
L_08853B74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22688)));
      if (branch_taken) {
          goto L_08853C34;
      }
      goto L_08853B7C;
    }
L_08853B7C:
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
        goto L_08853C08;
    }
    goto L_08853B84;
L_08853B84:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[17];
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08853B9C;
      }
      goto L_08853B8C;
    }
L_08853B8C:
    ctx.gpr[31] = (0x08853B94u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08853B94u) goto L_08853B94;
    return;
L_08853B94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22688)));
      if (branch_taken) {
          goto L_08853C34;
      }
      goto L_08853B9C;
    }
L_08853B9C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
        goto L_08853BD0;
    }
    goto L_08853BC4;
L_08853BC4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    goto L_08853BD0;
L_08853BD0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08853BEC;
      }
      goto L_08853BDC;
    }
L_08853BDC:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (0u | 1u);
    goto L_08853BEC;
L_08853BEC:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08853C00u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08853C00u) goto L_08853C00;
    return;
L_08853C00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22688)));
      if (branch_taken) {
          goto L_08853C34;
      }
      goto L_08853C08;
    }
L_08853C08:
    ctx.gpr[6] = (0u | 512u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08853C34;
      }
      goto L_08853C14;
    }
L_08853C14:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (0x08853C20u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 454u, 0x08856588u>(ctx, &aot_mem) && ctx.pc == 0x08853C20u) goto L_08853C20;
    return;
L_08853C20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08853C30u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08853C30u) goto L_08853C30;
    return;
L_08853C30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22688)));
    goto L_08853C34;
L_08853C34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08853C4C;
      }
      goto L_08853C40;
    }
L_08853C40:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(62)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08853C64;
      }
      goto L_08853C4C;
    }
L_08853C4C:
    ctx.gpr[31] = (0x08853C54u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 168u, 0x08854F78u>(ctx, &aot_mem) && ctx.pc == 0x08853C54u) goto L_08853C54;
    return;
L_08853C54:
    ctx.gpr[31] = (0x08853C5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 54u, 0x088586F0u>(ctx, &aot_mem) && ctx.pc == 0x08853C5Cu) goto L_08853C5C;
    return;
L_08853C5C:
    ctx.gpr[31] = (0x08853C64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 119u, 0x08854C84u>(ctx, &aot_mem) && ctx.pc == 0x08853C64u) goto L_08853C64;
    return;
L_08853C64:
    ctx.gpr[31] = (0x08853C6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 252u, 0x08855500u>(ctx, &aot_mem) && ctx.pc == 0x08853C6Cu) goto L_08853C6C;
    return;
L_08853C6C:
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
L_08853C84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[8] = (ctx.gpr[6] & 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_08853D08;
      }
      goto L_08853CB0;
    }
L_08853CB0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08853CE0;
      }
      goto L_08853CBC;
    }
L_08853CBC:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08853CD0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08853CD0u) goto L_08853CD0;
    return;
L_08853CD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08853CF4;
      }
      goto L_08853CE0;
    }
L_08853CE0:
    ctx.gpr[31] = (0x08853CE8u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08853CE8u) goto L_08853CE8;
    return;
L_08853CE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    goto L_08853CF4;
L_08853CF4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08853EDC;
      }
      goto L_08853CFC;
    }
L_08853CFC:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
      if (branch_taken) {
          goto L_08853EDC;
      }
      goto L_08853D08;
    }
L_08853D08:
    ctx.gpr[8] = (ctx.gpr[6] & 4u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[6] & 1024u);
      if (branch_taken) {
          goto L_08853D6C;
      }
      goto L_08853D14;
    }
L_08853D14:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08853D44;
      }
      goto L_08853D20;
    }
L_08853D20:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08853D34u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08853D34u) goto L_08853D34;
    return;
L_08853D34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08853D58;
      }
      goto L_08853D44;
    }
L_08853D44:
    ctx.gpr[31] = (0x08853D4Cu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08853D4Cu) goto L_08853D4C;
    return;
L_08853D4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    goto L_08853D58;
L_08853D58:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08853EDC;
      }
      goto L_08853D60;
    }
L_08853D60:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
      if (branch_taken) {
          goto L_08853EDC;
      }
      goto L_08853D6C;
    }
L_08853D6C:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 2048u);
      if (branch_taken) {
          goto L_08853E04;
      }
      goto L_08853D74;
    }
L_08853D74:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-3));
      if (branch_taken) {
          goto L_08853D8C;
      }
      goto L_08853D7C;
    }
L_08853D7C:
    ctx.gpr[31] = (0x08853D84u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08853D84u) goto L_08853D84;
    return;
L_08853D84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
      if (branch_taken) {
          goto L_08853EDC;
      }
      goto L_08853D8C;
    }
L_08853D8C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08853DB8;
      }
      goto L_08853DA4;
    }
L_08853DA4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
      if (branch_taken) {
          goto L_08853DE4;
      }
      goto L_08853DB8;
    }
L_08853DB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08853DE8;
      }
      goto L_08853DD8;
    }
L_08853DD8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    goto L_08853DE4;
L_08853DE4:
    ctx.gpr[4] = (0u | 1u);
    goto L_08853DE8;
L_08853DE8:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08853DFCu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08853DFCu) goto L_08853DFC;
    return;
L_08853DFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
      if (branch_taken) {
          goto L_08853EDC;
      }
      goto L_08853E04;
    }
L_08853E04:
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
        goto L_08853E90;
    }
    goto L_08853E0C;
L_08853E0C:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[16];
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08853E24;
      }
      goto L_08853E14;
    }
L_08853E14:
    ctx.gpr[31] = (0x08853E1Cu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08853E1Cu) goto L_08853E1C;
    return;
L_08853E1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
      if (branch_taken) {
          goto L_08853EDC;
      }
      goto L_08853E24;
    }
L_08853E24:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
        goto L_08853E58;
    }
    goto L_08853E4C;
L_08853E4C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    goto L_08853E58;
L_08853E58:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08853E74;
      }
      goto L_08853E64;
    }
L_08853E64:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (0u | 1u);
    goto L_08853E74;
L_08853E74:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08853E88u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08853E88u) goto L_08853E88;
    return;
L_08853E88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
      if (branch_taken) {
          goto L_08853EDC;
      }
      goto L_08853E90;
    }
L_08853E90:
    ctx.gpr[6] = (0u | 512u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08853EDC;
      }
      goto L_08853E9C;
    }
L_08853E9C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x08853EA8u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 454u, 0x08856588u>(ctx, &aot_mem) && ctx.pc == 0x08853EA8u) goto L_08853EA8;
    return;
L_08853EA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08853ED8u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08853ED8u) goto L_08853ED8;
    return;
L_08853ED8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22688)));
    goto L_08853EDC;
L_08853EDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08853EF8;
      }
      goto L_08853EE8;
    }
L_08853EE8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(62)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08853F10;
      }
      goto L_08853EF8;
    }
L_08853EF8:
    ctx.gpr[31] = (0x08853F00u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 168u, 0x08854F78u>(ctx, &aot_mem) && ctx.pc == 0x08853F00u) goto L_08853F00;
    return;
L_08853F00:
    ctx.gpr[31] = (0x08853F08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 54u, 0x088586F0u>(ctx, &aot_mem) && ctx.pc == 0x08853F08u) goto L_08853F08;
    return;
L_08853F08:
    ctx.gpr[31] = (0x08853F10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 119u, 0x08854C84u>(ctx, &aot_mem) && ctx.pc == 0x08853F10u) goto L_08853F10;
    return;
L_08853F10:
    ctx.gpr[31] = (0x08853F18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 252u, 0x08855500u>(ctx, &aot_mem) && ctx.pc == 0x08853F18u) goto L_08853F18;
    return;
L_08853F18:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853F2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 552u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08853F58u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08853F58u) goto L_08853F58;
    return;
L_08853F58:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(144), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[6] = (0u | 552u);
    ctx.gpr[31] = (0x08853F78u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08853F78u) goto L_08853F78;
    return;
L_08853F78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (16544u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (17215u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (16800u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08854000u; return;
}

void recomp_unit_0019(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0019_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_19(Runtime &runtime) {
    runtime.register_generated_unit(19u, 0x08850000u, 16384u, &recomp_unit_0019, &recomp_unit_0019_entry);
    runtime.register_function(0x08850000u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850024u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850038u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850050u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850070u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850084u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088500A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088500BCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088500D4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088500F0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885010Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885011Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850128u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850144u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885014Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850168u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850170u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885018Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850194u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088501B0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088501B8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088501E0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850204u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885021Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850278u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088502B4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088502BCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088502CCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088502E8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088502F0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088502FCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850380u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885038Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088503CCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088503E8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850500u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885054Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885055Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850588u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088505B0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088505B8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088505D0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088505E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850604u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885062Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850670u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885067Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850684u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850688u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850690u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088506A0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088506A8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088506E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088506ECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088506FCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850704u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885071Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885072Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850730u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850738u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850768u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850770u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850780u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885078Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088507BCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088507C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088507CCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088507D4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088507E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088507F4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850810u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850820u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850830u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088508B4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088508F0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850904u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850928u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850950u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850958u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850960u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850968u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850978u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850988u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850998u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088509A0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088509A8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088509B0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088509C0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088509D0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088509E0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088509E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088509F8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850A04u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850A0Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850A14u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850A1Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850A24u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850A3Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850A60u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850A68u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850A70u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850A78u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850A80u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850A88u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850A94u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850AA0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850AA8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850AC0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850ACCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850AD4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850AE0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850AECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850AF4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850B0Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850B18u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850B20u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850B2Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850B38u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850B40u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850B58u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850B64u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850B6Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850B78u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850B84u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850B8Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850BA4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850BB0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850BB8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850BC4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850BD0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850BE8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850BF4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850BFCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850C08u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850C14u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850C1Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850C34u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850C3Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850C40u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850C4Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850C6Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850C74u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850C80u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850C9Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850CB0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850CD8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850CF4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850D0Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850D48u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850D64u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850D6Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850D74u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850D80u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850D8Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850D9Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850DACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850DC0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850DD8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850DF4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850E04u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850E0Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850E20u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850E28u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850E3Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850E54u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850E88u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850E90u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850E98u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850EA0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850EB4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850EBCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850EC4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850ECCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850ED4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850EDCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850EE8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850EF0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850EFCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850F04u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850F24u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850F30u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850F3Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850F44u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850F4Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850F54u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850F58u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850F64u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850F6Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850F74u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850F7Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850F84u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850FA4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850FB4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850FBCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850FC4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850FCCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850FD8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850FE0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850FECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850FF4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850FFCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851004u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851024u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885102Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851034u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851038u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851044u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851050u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885105Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851064u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885106Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851074u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851078u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851080u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885108Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851094u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088510A0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088510A8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088510B0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088510B8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088510BCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088510C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088510D0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088510DCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088510E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088510ECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088510F4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088510F8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851100u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851108u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851110u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885111Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851124u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885112Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851134u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851138u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851140u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851148u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851150u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851164u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885116Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851174u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851178u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851188u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088511A0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088511A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088511ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088511B4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088511BCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088511DCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088511FCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851204u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851210u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851218u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851220u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851228u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851234u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851264u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885126Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851278u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851280u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851288u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851290u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851298u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885129Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088512A8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088512B4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088512C0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088512CCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088512E0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088512ECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088512F4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851300u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851304u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851308u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851318u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851328u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851330u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851338u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851340u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885135Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851370u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851380u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088513C0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088513C8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088513D0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088513DCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088513E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088513ECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088513F8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851408u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885141Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851430u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851458u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885146Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851484u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885148Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885149Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088514ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088514C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088514D8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088514F0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851500u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885150Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851514u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885151Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851534u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851560u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088515A8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088515F8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851634u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851640u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851648u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851650u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885165Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851664u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851668u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851670u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851678u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851680u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885168Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851694u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088516A8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088516ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088516B4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088516BCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088516D4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088516DCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088516E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088516F0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088516FCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885172Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851758u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851770u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885178Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851794u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088517ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088517C8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088517D8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088517F4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088517FCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851804u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885180Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851824u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885185Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851864u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851870u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851884u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885188Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851898u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088518ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088518B4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088518C0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088518C8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088518D4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088518DCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088518E8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088518F0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088518F8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851908u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851920u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851938u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851950u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851968u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851970u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851978u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851980u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851988u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885199Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088519B4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088519DCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851A54u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851A64u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851A70u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851A80u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851A84u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851A88u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851A90u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851AB8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851B28u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851B38u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851B50u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851B58u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851B78u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851B8Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851B9Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851BB4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851BE0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851C0Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851C14u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851C28u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851C8Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851C94u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851CCCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851CF0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851D10u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851DB0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851DC8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851DD4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851DF8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851E00u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851E08u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851E1Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851E34u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851E58u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851E64u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851E74u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851E7Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851E90u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851E98u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851EA8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851EB0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851EC0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851EC8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851ED4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851EDCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851EE8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851EF4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851F00u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851F0Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851F14u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851F24u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851F2Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851F38u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851F40u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851F50u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851F58u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851F64u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851F6Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851F78u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851F80u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851F88u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851F94u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851FACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851FB8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851FDCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851FFCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852134u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852160u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852174u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852188u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885219Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088521ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088521D0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088521D8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088521E8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088521F8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852208u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852210u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852224u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885223Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852258u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852264u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852270u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852280u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852290u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852298u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088522A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088522B4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088522C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088522F8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852304u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852334u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852368u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885237Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852384u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852390u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088523A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088523C8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088523D4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088523E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088523ECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088523F4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852400u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852410u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852420u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852430u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852438u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852464u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885247Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852488u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852494u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885249Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088524A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088524ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088524B4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088524BCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088524C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088524E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088524F4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852504u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885250Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852524u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852530u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852540u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852550u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852560u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885256Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852574u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885257Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852584u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885258Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852594u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885259Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088525A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088525A8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088525B0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088525BCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088525D4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088525DCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852600u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885261Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852628u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885263Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852670u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852678u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852688u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088526ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088526B4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088526C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088526D4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088526ECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088526F8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852708u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885272Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885273Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852744u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852754u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885275Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885276Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852790u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852798u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088527A8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088527B8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088527C0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088527D0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852814u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852834u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852864u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885291Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852934u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088529D4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088529ECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088529F4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852A0Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852A1Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852A2Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852A5Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852A84u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852A8Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852AA4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852AB8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852AD8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852B14u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852B40u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852B4Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852B58u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852B74u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852B94u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852BA8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852BBCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852BDCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852BFCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852C0Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852C1Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852C34u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852C80u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852C9Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852D1Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852DCCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852DE4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852DFCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852E68u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852EB4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852ECCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852EE4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852EF8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852F24u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852F3Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852F54u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853008u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853020u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088530B0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088530B8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088530CCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088530E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853104u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853114u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853128u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885313Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853160u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885317Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853194u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088531D8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088531ECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853204u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885321Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853234u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885323Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853250u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853268u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885327Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853284u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885328Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853294u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088532A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088532B4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088532C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088532D8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088532F0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088532F8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853300u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853310u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853328u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853340u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853358u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853370u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853388u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885339Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088533A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088533CCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088533D4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088533E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088533ECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853400u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853428u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853444u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853464u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853474u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853488u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088534A0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088534C0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088534ECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853508u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885351Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885352Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853534u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885353Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853550u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853568u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853598u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088535B4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088535CCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088535F4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853614u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885362Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853658u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853660u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853668u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853670u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853678u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853680u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853688u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853690u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853698u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088536A0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088536B8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088536E0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088536ECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088536F8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853708u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885371Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853728u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853730u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885373Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853750u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853764u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853778u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885378Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088537A0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088537ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088537B4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088537BCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088537C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088537CCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088537D4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088537DCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088537E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088537ECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088537F4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853800u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853804u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853814u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885382Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853844u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853860u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885387Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885388Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853894u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885389Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088538A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088538B4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088538BCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088538C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088538C8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088538D0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088538D8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088538DCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088538E8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088538F4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853904u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885390Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853914u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885391Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885392Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853934u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853940u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853948u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853950u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885395Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885396Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853978u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853980u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853988u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853990u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853998u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088539A0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088539ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088539B4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088539BCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088539C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088539D0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088539D8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088539E0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088539E8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088539F0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088539F8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853A00u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853A10u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853A48u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853A54u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853A60u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853A74u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853A84u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853A8Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853A98u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853AA0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853AACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853AB4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853ABCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853AD0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853ADCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853AE4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853AECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853AF4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853B00u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853B08u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853B10u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853B18u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853B20u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853B44u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853B50u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853B58u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853B60u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853B74u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853B7Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853B84u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853B8Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853B94u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853B9Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853BC4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853BD0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853BDCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853BECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853C00u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853C08u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853C14u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853C20u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853C30u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853C34u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853C40u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853C4Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853C54u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853C5Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853C64u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853C6Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853C84u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853CB0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853CBCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853CD0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853CE0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853CE8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853CF4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853CFCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853D08u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853D14u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853D20u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853D34u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853D44u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853D4Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853D58u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853D60u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853D6Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853D74u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853D7Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853D84u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853D8Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853DA4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853DB8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853DD8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853DE4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853DE8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853DFCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853E04u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853E0Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853E14u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853E1Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853E24u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853E4Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853E58u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853E64u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853E74u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853E88u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853E90u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853E9Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853EA8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853ED8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853EDCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853EE8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853EF8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853F00u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853F08u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853F10u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853F18u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853F2Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853F58u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853F78u, &recomp_unit_0019, "recomp_unit_0019");
}
} // namespace psprecomp

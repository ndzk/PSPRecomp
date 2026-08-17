#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0048[4093] = {
    1, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9,
    0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 14, 0, 15, 0, 16, 0, 0, 17, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 20, 0, 21, 22, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 26, 0,
    0, 27, 0, 0, 0, 28, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 33, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 37, 0, 38, 0, 39, 0, 0, 0,
    0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 43, 0, 0, 44, 0, 45, 0, 46, 0, 0, 0, 0, 0, 47, 0,
    48, 0, 0, 49, 0, 50, 51, 0, 52, 0, 53, 0, 0, 54, 0, 55, 56, 0, 57, 0, 58, 0, 0, 59, 0, 60, 0, 0, 0, 0, 61, 0,
    0, 62, 0, 63, 0, 64, 0, 65, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0,
    0, 71, 0, 72, 0, 0, 0, 0, 73, 0, 0, 74, 0, 75, 0, 76, 0, 77, 0, 78, 0, 79, 0, 80, 0, 81, 0, 82, 0, 83, 0, 84,
    0, 85, 0, 86, 0, 87, 0, 88, 0, 89, 0, 90, 0, 91, 0, 92, 0, 93, 0, 94, 0, 95, 0, 96, 0, 97, 0, 98, 0, 99, 0, 100,
    0, 101, 0, 0, 0, 0, 102, 0, 103, 0, 104, 0, 105, 0, 106, 0, 107, 0, 108, 0, 109, 0, 110, 0, 0, 0, 111, 0, 0, 0, 112, 0,
    113, 0, 114, 0, 115, 0, 116, 0, 117, 0, 118, 0, 119, 0, 120, 0, 121, 0, 122, 123, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0,
    0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0,
    0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0,
    0, 156, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 163,
    0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0,
    169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0,
    0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 191, 0, 0, 0, 192, 193, 0, 0, 194, 0, 0, 195, 0, 0, 0, 196, 0, 0,
    197, 0, 198, 0, 199, 0, 200, 201, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0,
    0, 206, 0, 0, 207, 0, 0, 208, 0, 0, 0, 209, 0, 0, 210, 0, 211, 0, 212, 0, 213, 214, 0, 215, 0, 216, 0, 0, 0, 0, 0, 0,
    0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 220, 0, 0, 221, 0, 0, 0, 222, 0, 0, 223, 0, 224, 0,
    225, 0, 226, 227, 0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0,
    233, 0, 0, 234, 0, 0, 0, 235, 0, 0, 236, 0, 237, 0, 238, 0, 239, 240, 0, 241, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 247, 0, 0, 0, 248, 0, 0, 249, 0, 250, 0, 251,
    0, 252, 253, 0, 254, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 258, 0,
    0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0,
    263, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 270, 0, 271,
    0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 278, 0, 279, 0,
    0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 291,
    0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 294, 0, 295, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299,
    0, 300, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 304, 0, 305, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 308,
    0, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 313, 0, 314, 0, 0, 315, 0, 0, 0, 316,
    0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0,
    320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 326, 0, 0, 327, 0, 0,
    0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 0,
    0, 339, 0, 0, 0, 340, 0, 0, 341, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 344, 0, 0, 345, 0, 346, 0, 0, 0, 347,
    0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 350, 0, 351, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 355, 0, 0,
    356, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 359, 0, 360, 0, 361, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 365, 0,
    366, 0, 367, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 371, 0, 372, 0, 373, 0, 0, 0, 374, 0, 375, 0, 0, 0, 376, 0,
    377, 0, 378, 0, 0, 0, 379, 0, 380, 0, 0, 0, 381, 0, 382, 0, 0, 0, 383, 0, 384, 0, 385, 0, 0, 0, 386, 0, 387, 0, 388, 0,
    0, 0, 389, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 393, 0, 394, 0, 0, 395, 0, 0, 0, 396, 0, 397, 0, 398, 0, 0,
    0, 399, 0, 400, 0, 0, 0, 401, 0, 402, 0, 0, 0, 403, 0, 404, 0, 405, 0, 0, 0, 406, 0, 407, 0, 0, 0, 408, 0, 409, 0, 0,
    0, 410, 0, 411, 0, 412, 0, 0, 0, 413, 0, 414, 0, 0, 0, 415, 0, 416, 0, 0, 0, 417, 0, 418, 0, 419, 0, 0, 0, 420, 0, 421,
    0, 0, 0, 422, 0, 423, 0, 0, 0, 424, 0, 425, 0, 426, 0, 0, 0, 427, 0, 428, 0, 0, 0, 429, 0, 430, 0, 0, 0, 431, 0, 432,
    0, 433, 0, 0, 0, 434, 435, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 441,
    0, 0, 0, 442, 0, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 445, 0, 0, 446, 0, 0, 0, 0, 447, 0, 0, 448, 0, 0, 0, 449,
    0, 450, 0, 0, 451, 0, 0, 0, 452, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 455, 0, 456, 0, 0, 457, 0, 0, 0, 0, 0, 458, 0,
    0, 0, 459, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 462, 463, 0, 464, 0, 0, 0, 465, 0, 0, 0, 466, 0, 467,
    0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 473, 474, 0, 475,
    0, 0, 0, 476, 0, 0, 0, 477, 0, 0, 0, 0, 0, 478, 0, 0, 479, 0, 0, 0, 0, 0, 480, 0, 0, 0, 481, 0, 0, 0, 482, 0,
    0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 484, 0, 0, 0, 0, 485, 0, 486, 0, 0, 0, 487, 0, 0, 0, 488, 0, 0, 0, 489, 0, 0,
    490, 0, 0, 0, 0, 0, 491, 0, 0, 0, 492, 0, 0, 0, 493, 0, 0, 0, 0, 0, 494, 0, 495, 0, 0, 496, 0, 497, 0, 0, 0, 0,
    0, 498, 0, 0, 0, 0, 499, 0, 0, 500, 0, 501, 0, 0, 0, 502, 0, 0, 0, 0, 0, 503, 0, 0, 0, 504, 0, 0, 0, 505, 0, 0,
    506, 0, 0, 0, 507, 0, 508, 0, 0, 509, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 512, 0, 513, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 516, 0,
    517, 0, 518, 0, 519, 520, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 524, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 527, 0, 528, 0, 529, 0, 530, 0, 531, 0, 0, 0,
    532, 0, 0, 0, 533, 0, 0, 0, 534, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 536, 0, 537, 0, 538, 0, 539, 0, 0, 0, 540, 0, 0,
    0, 0, 0, 541, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 545, 0, 546, 0,
    547, 0, 548, 0, 549, 0, 0, 550, 0, 0, 0, 551, 0, 0, 552, 0, 553, 0, 554, 0, 555, 0, 0, 0, 556, 0, 557, 0, 0, 0, 0, 0,
    558, 0, 559, 0, 0, 0, 560, 0, 0, 0, 0, 0, 561, 0, 562, 0, 0, 0, 563, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 566,
    0, 0, 0, 567, 0, 568, 0, 0, 0, 0, 0, 569, 0, 0, 0, 570, 0, 571, 0, 0, 0, 0, 572, 0, 0, 0, 0, 573, 0, 0, 0, 574,
    0, 575, 0, 576, 0, 577, 578, 0, 579, 0, 580, 0, 0, 0, 0, 0, 581, 0, 582, 0, 0, 0, 0, 0, 0, 0, 583, 0, 584, 0, 585, 0,
    0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 588, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0,
    0, 591, 0, 0, 0, 0, 592, 0, 0, 593, 0, 594, 0, 595, 0, 596, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 599, 0, 600,
    0, 601, 0, 0, 602, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0,
    606, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 608, 0, 609, 0, 0, 0, 610, 0, 0, 0, 611, 0, 612, 0,
    0, 613, 614, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 616, 0, 617, 0, 0, 618, 0, 0, 619, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0,
    0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 624, 0, 0, 0, 625, 0, 0, 0, 0, 0,
    626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    629, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 632, 0, 0, 0, 633, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 637, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 639, 0, 0, 0, 0,
    0, 0, 0, 640, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0,
    0, 0, 0, 646, 0, 647, 648, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0,
    0, 0, 0, 651, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0, 654, 0, 655, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 658, 0, 0, 0, 659, 0, 0, 0, 0, 0, 660, 0, 0, 0,
    0, 0, 0, 661, 0, 0, 0, 0, 0, 662, 0, 663, 0, 664, 0, 665, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 667, 0, 0, 0, 0,
    0, 668, 0, 0, 669, 0, 670, 0, 0, 671, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0,
    674, 0, 0, 0, 0, 0, 675, 0, 0, 0, 0, 0, 0, 0, 676, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0,
    0, 679, 0, 0, 0, 680, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 681,
    0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 684,
    0, 0, 0, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    687, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 690, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 691, 0, 0, 692, 0, 0, 693, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 695, 0, 696, 697, 0, 698, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 700, 0, 701, 0, 702, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 703, 0, 0, 0,
    0, 704, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 707, 0, 708, 0, 709, 0, 710, 0, 0, 711, 0, 0,
    0, 0, 0, 712, 0, 713, 0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 717, 0,
    0, 0, 0, 0, 0, 0, 0, 718, 0, 719, 0, 0, 720, 0, 0, 721, 0, 0, 0, 722, 0, 723, 0, 724, 0, 0, 0, 0, 0, 725, 0, 0,
    0, 0, 0, 0, 0, 726, 0, 0, 0, 727, 0, 728, 0, 729, 0, 0, 730, 0, 0, 0, 0, 0, 0, 731, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 732, 0, 0, 733, 0, 0, 0, 734, 0, 0, 0, 735, 0, 0, 736, 0, 0, 0, 0, 0,
    737, 0, 0, 0, 738, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 739, 0, 740, 0, 0, 0, 0, 741, 0, 0, 0, 0, 0, 742, 0, 0,
    743, 0, 744, 0, 0, 0, 745, 0, 746, 747, 0, 748, 0, 749, 0, 0, 0, 750, 751, 0, 0, 0, 0, 0, 0, 752, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 753, 0, 0, 0, 0, 0, 0, 754, 0, 0, 0, 755, 0, 0, 0, 0, 756, 0, 0, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0,
    758, 0, 0, 0, 0, 759, 0, 0, 0, 0, 0, 0, 0, 760, 0, 0, 0, 0, 0, 761, 0, 0, 0, 0, 762, 0, 0, 0, 0, 763, 0, 0,
    0, 0, 0, 0, 764, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 765, 0, 0, 0, 766, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 767, 0, 0, 0, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0, 769, 0, 0, 770, 0, 0, 0, 771,
};
void recomp_unit_0048_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088C4000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0048[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088C4000;
    case 2u: goto L_088C4018;
    case 3u: goto L_088C4020;
    case 4u: goto L_088C4040;
    case 5u: goto L_088C405C;
    case 6u: goto L_088C4064;
    case 7u: goto L_088C406C;
    case 8u: goto L_088C4074;
    case 9u: goto L_088C407C;
    case 10u: goto L_088C4084;
    case 11u: goto L_088C4094;
    case 12u: goto L_088C40C8;
    case 13u: goto L_088C40D4;
    case 14u: goto L_088C40DC;
    case 15u: goto L_088C40E4;
    case 16u: goto L_088C40EC;
    case 17u: goto L_088C40F8;
    case 18u: goto L_088C4124;
    case 19u: goto L_088C4130;
    case 20u: goto L_088C4138;
    case 21u: goto L_088C4140;
    case 22u: goto L_088C4144;
    case 23u: goto L_088C4148;
    case 24u: goto L_088C4168;
    case 25u: goto L_088C4170;
    case 26u: goto L_088C4178;
    case 27u: goto L_088C4184;
    case 28u: goto L_088C4194;
    case 29u: goto L_088C4198;
    case 30u: goto L_088C41A8;
    case 31u: goto L_088C41E0;
    case 32u: goto L_088C41EC;
    case 33u: goto L_088C41F4;
    case 34u: goto L_088C4258;
    case 35u: goto L_088C42C4;
    case 36u: goto L_088C42CC;
    case 37u: goto L_088C42E0;
    case 38u: goto L_088C42E8;
    case 39u: goto L_088C42F0;
    case 40u: goto L_088C430C;
    case 41u: goto L_088C4328;
    case 42u: goto L_088C4338;
    case 43u: goto L_088C4344;
    case 44u: goto L_088C4350;
    case 45u: goto L_088C4358;
    case 46u: goto L_088C4360;
    case 47u: goto L_088C4378;
    case 48u: goto L_088C4380;
    case 49u: goto L_088C438C;
    case 50u: goto L_088C4394;
    case 51u: goto L_088C4398;
    case 52u: goto L_088C43A0;
    case 53u: goto L_088C43A8;
    case 54u: goto L_088C43B4;
    case 55u: goto L_088C43BC;
    case 56u: goto L_088C43C0;
    case 57u: goto L_088C43C8;
    case 58u: goto L_088C43D0;
    case 59u: goto L_088C43DC;
    case 60u: goto L_088C43E4;
    case 61u: goto L_088C43F8;
    case 62u: goto L_088C4404;
    case 63u: goto L_088C440C;
    case 64u: goto L_088C4414;
    case 65u: goto L_088C441C;
    case 66u: goto L_088C4424;
    case 67u: goto L_088C4434;
    case 68u: goto L_088C4448;
    case 69u: goto L_088C4464;
    case 70u: goto L_088C4474;
    case 71u: goto L_088C4484;
    case 72u: goto L_088C448C;
    case 73u: goto L_088C44A0;
    case 74u: goto L_088C44AC;
    case 75u: goto L_088C44B4;
    case 76u: goto L_088C44BC;
    case 77u: goto L_088C44C4;
    case 78u: goto L_088C44CC;
    case 79u: goto L_088C44D4;
    case 80u: goto L_088C44DC;
    case 81u: goto L_088C44E4;
    case 82u: goto L_088C44EC;
    case 83u: goto L_088C44F4;
    case 84u: goto L_088C44FC;
    case 85u: goto L_088C4504;
    case 86u: goto L_088C450C;
    case 87u: goto L_088C4514;
    case 88u: goto L_088C451C;
    case 89u: goto L_088C4524;
    case 90u: goto L_088C452C;
    case 91u: goto L_088C4534;
    case 92u: goto L_088C453C;
    case 93u: goto L_088C4544;
    case 94u: goto L_088C454C;
    case 95u: goto L_088C4554;
    case 96u: goto L_088C455C;
    case 97u: goto L_088C4564;
    case 98u: goto L_088C456C;
    case 99u: goto L_088C4574;
    case 100u: goto L_088C457C;
    case 101u: goto L_088C4584;
    case 102u: goto L_088C4598;
    case 103u: goto L_088C45A0;
    case 104u: goto L_088C45A8;
    case 105u: goto L_088C45B0;
    case 106u: goto L_088C45B8;
    case 107u: goto L_088C45C0;
    case 108u: goto L_088C45C8;
    case 109u: goto L_088C45D0;
    case 110u: goto L_088C45D8;
    case 111u: goto L_088C45E8;
    case 112u: goto L_088C45F8;
    case 113u: goto L_088C4600;
    case 114u: goto L_088C4608;
    case 115u: goto L_088C4610;
    case 116u: goto L_088C4618;
    case 117u: goto L_088C4620;
    case 118u: goto L_088C4628;
    case 119u: goto L_088C4630;
    case 120u: goto L_088C4638;
    case 121u: goto L_088C4640;
    case 122u: goto L_088C4648;
    case 123u: goto L_088C464C;
    case 124u: goto L_088C4654;
    case 125u: goto L_088C4668;
    case 126u: goto L_088C46CC;
    case 127u: goto L_088C46E8;
    case 128u: goto L_088C46F8;
    case 129u: goto L_088C47C4;
    case 130u: goto L_088C4898;
    case 131u: goto L_088C48AC;
    case 132u: goto L_088C48C8;
    case 133u: goto L_088C4904;
    case 134u: goto L_088C49DC;
    case 135u: goto L_088C49F8;
    case 136u: goto L_088C4A2C;
    case 137u: goto L_088C4A60;
    case 138u: goto L_088C4A70;
    case 139u: goto L_088C4A84;
    case 140u: goto L_088C4AA0;
    case 141u: goto L_088C4AD8;
    case 142u: goto L_088C4AEC;
    case 143u: goto L_088C4B08;
    case 144u: goto L_088C4BBC;
    case 145u: goto L_088C4BD0;
    case 146u: goto L_088C4BEC;
    case 147u: goto L_088C4C20;
    case 148u: goto L_088C4C34;
    case 149u: goto L_088C4C50;
    case 150u: goto L_088C4D00;
    case 151u: goto L_088C4D44;
    case 152u: goto L_088C4D98;
    case 153u: goto L_088C4DB8;
    case 154u: goto L_088C4DD0;
    case 155u: goto L_088C4E68;
    case 156u: goto L_088C4E84;
    case 157u: goto L_088C4E90;
    case 158u: goto L_088C4EA4;
    case 159u: goto L_088C4EC0;
    case 160u: goto L_088C4ED0;
    case 161u: goto L_088C4F5C;
    case 162u: goto L_088C4F70;
    case 163u: goto L_088C4F7C;
    case 164u: goto L_088C4F90;
    case 165u: goto L_088C4FAC;
    case 166u: goto L_088C4FC4;
    case 167u: goto L_088C5060;
    case 168u: goto L_088C5074;
    case 169u: goto L_088C5080;
    case 170u: goto L_088C5094;
    case 171u: goto L_088C50B0;
    case 172u: goto L_088C50D8;
    case 173u: goto L_088C50F0;
    case 174u: goto L_088C5188;
    case 175u: goto L_088C51A0;
    case 176u: goto L_088C51B0;
    case 177u: goto L_088C51C0;
    case 178u: goto L_088C51D4;
    case 179u: goto L_088C51F0;
    case 180u: goto L_088C5210;
    case 181u: goto L_088C5228;
    case 182u: goto L_088C52C0;
    case 183u: goto L_088C52D8;
    case 184u: goto L_088C52E8;
    case 185u: goto L_088C52F8;
    case 186u: goto L_088C5338;
    case 187u: goto L_088C5370;
    case 188u: goto L_088C5378;
    case 189u: goto L_088C53A0;
    case 190u: goto L_088C53A8;
    case 191u: goto L_088C53B8;
    case 192u: goto L_088C53C8;
    case 193u: goto L_088C53CC;
    case 194u: goto L_088C53D8;
    case 195u: goto L_088C53E4;
    case 196u: goto L_088C53F4;
    case 197u: goto L_088C5400;
    case 198u: goto L_088C5408;
    case 199u: goto L_088C5410;
    case 200u: goto L_088C5418;
    case 201u: goto L_088C541C;
    case 202u: goto L_088C5424;
    case 203u: goto L_088C542C;
    case 204u: goto L_088C5450;
    case 205u: goto L_088C5478;
    case 206u: goto L_088C5484;
    case 207u: goto L_088C5490;
    case 208u: goto L_088C549C;
    case 209u: goto L_088C54AC;
    case 210u: goto L_088C54B8;
    case 211u: goto L_088C54C0;
    case 212u: goto L_088C54C8;
    case 213u: goto L_088C54D0;
    case 214u: goto L_088C54D4;
    case 215u: goto L_088C54DC;
    case 216u: goto L_088C54E4;
    case 217u: goto L_088C5508;
    case 218u: goto L_088C5530;
    case 219u: goto L_088C553C;
    case 220u: goto L_088C5548;
    case 221u: goto L_088C5554;
    case 222u: goto L_088C5564;
    case 223u: goto L_088C5570;
    case 224u: goto L_088C5578;
    case 225u: goto L_088C5580;
    case 226u: goto L_088C5588;
    case 227u: goto L_088C558C;
    case 228u: goto L_088C5594;
    case 229u: goto L_088C559C;
    case 230u: goto L_088C55C0;
    case 231u: goto L_088C55E8;
    case 232u: goto L_088C55F4;
    case 233u: goto L_088C5600;
    case 234u: goto L_088C560C;
    case 235u: goto L_088C561C;
    case 236u: goto L_088C5628;
    case 237u: goto L_088C5630;
    case 238u: goto L_088C5638;
    case 239u: goto L_088C5640;
    case 240u: goto L_088C5644;
    case 241u: goto L_088C564C;
    case 242u: goto L_088C5654;
    case 243u: goto L_088C5678;
    case 244u: goto L_088C56A0;
    case 245u: goto L_088C56B8;
    case 246u: goto L_088C56C4;
    case 247u: goto L_088C56D0;
    case 248u: goto L_088C56E0;
    case 249u: goto L_088C56EC;
    case 250u: goto L_088C56F4;
    case 251u: goto L_088C56FC;
    case 252u: goto L_088C5704;
    case 253u: goto L_088C5708;
    case 254u: goto L_088C5710;
    case 255u: goto L_088C5718;
    case 256u: goto L_088C5748;
    case 257u: goto L_088C5770;
    case 258u: goto L_088C5778;
    case 259u: goto L_088C5790;
    case 260u: goto L_088C57C0;
    case 261u: goto L_088C57D8;
    case 262u: goto L_088C57F0;
    case 263u: goto L_088C5800;
    case 264u: goto L_088C5814;
    case 265u: goto L_088C5824;
    case 266u: goto L_088C583C;
    case 267u: goto L_088C5844;
    case 268u: goto L_088C5854;
    case 269u: goto L_088C586C;
    case 270u: goto L_088C5874;
    case 271u: goto L_088C587C;
    case 272u: goto L_088C5890;
    case 273u: goto L_088C58A0;
    case 274u: goto L_088C58B8;
    case 275u: goto L_088C58C0;
    case 276u: goto L_088C58D0;
    case 277u: goto L_088C58E8;
    case 278u: goto L_088C58F0;
    case 279u: goto L_088C58F8;
    case 280u: goto L_088C5908;
    case 281u: goto L_088C5918;
    case 282u: goto L_088C5930;
    case 283u: goto L_088C5938;
    case 284u: goto L_088C5948;
    case 285u: goto L_088C5960;
    case 286u: goto L_088C5974;
    case 287u: goto L_088C59B0;
    case 288u: goto L_088C59C8;
    case 289u: goto L_088C59E0;
    case 290u: goto L_088C59F0;
    case 291u: goto L_088C59FC;
    case 292u: goto L_088C5A0C;
    case 293u: goto L_088C5A24;
    case 294u: goto L_088C5A30;
    case 295u: goto L_088C5A38;
    case 296u: goto L_088C5A44;
    case 297u: goto L_088C5A54;
    case 298u: goto L_088C5A6C;
    case 299u: goto L_088C5A7C;
    case 300u: goto L_088C5A84;
    case 301u: goto L_088C5A90;
    case 302u: goto L_088C5AA0;
    case 303u: goto L_088C5AB8;
    case 304u: goto L_088C5AC4;
    case 305u: goto L_088C5ACC;
    case 306u: goto L_088C5ADC;
    case 307u: goto L_088C5AEC;
    case 308u: goto L_088C5AFC;
    case 309u: goto L_088C5B14;
    case 310u: goto L_088C5B24;
    case 311u: goto L_088C5B34;
    case 312u: goto L_088C5B4C;
    case 313u: goto L_088C5B58;
    case 314u: goto L_088C5B60;
    case 315u: goto L_088C5B6C;
    case 316u: goto L_088C5B7C;
    case 317u: goto L_088C5B94;
    case 318u: goto L_088C5BB4;
    case 319u: goto L_088C5BE8;
    case 320u: goto L_088C5C00;
    case 321u: goto L_088C5C18;
    case 322u: goto L_088C5C28;
    case 323u: goto L_088C5C34;
    case 324u: goto L_088C5C44;
    case 325u: goto L_088C5C5C;
    case 326u: goto L_088C5C68;
    case 327u: goto L_088C5C74;
    case 328u: goto L_088C5C84;
    case 329u: goto L_088C5C94;
    case 330u: goto L_088C5CAC;
    case 331u: goto L_088C5CB4;
    case 332u: goto L_088C5CC4;
    case 333u: goto L_088C5CDC;
    case 334u: goto L_088C5CF4;
    case 335u: goto L_088C5D28;
    case 336u: goto L_088C5D48;
    case 337u: goto L_088C5D58;
    case 338u: goto L_088C5D6C;
    case 339u: goto L_088C5D84;
    case 340u: goto L_088C5D94;
    case 341u: goto L_088C5DA0;
    case 342u: goto L_088C5DAC;
    case 343u: goto L_088C5DD0;
    case 344u: goto L_088C5DD8;
    case 345u: goto L_088C5DE4;
    case 346u: goto L_088C5DEC;
    case 347u: goto L_088C5DFC;
    case 348u: goto L_088C5E0C;
    case 349u: goto L_088C5E18;
    case 350u: goto L_088C5E28;
    case 351u: goto L_088C5E30;
    case 352u: goto L_088C5E38;
    case 353u: goto L_088C5E5C;
    case 354u: goto L_088C5E6C;
    case 355u: goto L_088C5E74;
    case 356u: goto L_088C5E80;
    case 357u: goto L_088C5E94;
    case 358u: goto L_088C5EA4;
    case 359u: goto L_088C5EAC;
    case 360u: goto L_088C5EB4;
    case 361u: goto L_088C5EBC;
    case 362u: goto L_088C5EC8;
    case 363u: goto L_088C5EDC;
    case 364u: goto L_088C5EF0;
    case 365u: goto L_088C5EF8;
    case 366u: goto L_088C5F00;
    case 367u: goto L_088C5F08;
    case 368u: goto L_088C5F14;
    case 369u: goto L_088C5F28;
    case 370u: goto L_088C5F38;
    case 371u: goto L_088C5F40;
    case 372u: goto L_088C5F48;
    case 373u: goto L_088C5F50;
    case 374u: goto L_088C5F60;
    case 375u: goto L_088C5F68;
    case 376u: goto L_088C5F78;
    case 377u: goto L_088C5F80;
    case 378u: goto L_088C5F88;
    case 379u: goto L_088C5F98;
    case 380u: goto L_088C5FA0;
    case 381u: goto L_088C5FB0;
    case 382u: goto L_088C5FB8;
    case 383u: goto L_088C5FC8;
    case 384u: goto L_088C5FD0;
    case 385u: goto L_088C5FD8;
    case 386u: goto L_088C5FE8;
    case 387u: goto L_088C5FF0;
    case 388u: goto L_088C5FF8;
    case 389u: goto L_088C6008;
    case 390u: goto L_088C6014;
    case 391u: goto L_088C6028;
    case 392u: goto L_088C6038;
    case 393u: goto L_088C6040;
    case 394u: goto L_088C6048;
    case 395u: goto L_088C6054;
    case 396u: goto L_088C6064;
    case 397u: goto L_088C606C;
    case 398u: goto L_088C6074;
    case 399u: goto L_088C6084;
    case 400u: goto L_088C608C;
    case 401u: goto L_088C609C;
    case 402u: goto L_088C60A4;
    case 403u: goto L_088C60B4;
    case 404u: goto L_088C60BC;
    case 405u: goto L_088C60C4;
    case 406u: goto L_088C60D4;
    case 407u: goto L_088C60DC;
    case 408u: goto L_088C60EC;
    case 409u: goto L_088C60F4;
    case 410u: goto L_088C6104;
    case 411u: goto L_088C610C;
    case 412u: goto L_088C6114;
    case 413u: goto L_088C6124;
    case 414u: goto L_088C612C;
    case 415u: goto L_088C613C;
    case 416u: goto L_088C6144;
    case 417u: goto L_088C6154;
    case 418u: goto L_088C615C;
    case 419u: goto L_088C6164;
    case 420u: goto L_088C6174;
    case 421u: goto L_088C617C;
    case 422u: goto L_088C618C;
    case 423u: goto L_088C6194;
    case 424u: goto L_088C61A4;
    case 425u: goto L_088C61AC;
    case 426u: goto L_088C61B4;
    case 427u: goto L_088C61C4;
    case 428u: goto L_088C61CC;
    case 429u: goto L_088C61DC;
    case 430u: goto L_088C61E4;
    case 431u: goto L_088C61F4;
    case 432u: goto L_088C61FC;
    case 433u: goto L_088C6204;
    case 434u: goto L_088C6214;
    case 435u: goto L_088C6218;
    case 436u: goto L_088C6224;
    case 437u: goto L_088C6234;
    case 438u: goto L_088C6248;
    case 439u: goto L_088C6258;
    case 440u: goto L_088C626C;
    case 441u: goto L_088C627C;
    case 442u: goto L_088C628C;
    case 443u: goto L_088C62A0;
    case 444u: goto L_088C62B4;
    case 445u: goto L_088C62C0;
    case 446u: goto L_088C62CC;
    case 447u: goto L_088C62E0;
    case 448u: goto L_088C62EC;
    case 449u: goto L_088C62FC;
    case 450u: goto L_088C6304;
    case 451u: goto L_088C6310;
    case 452u: goto L_088C6320;
    case 453u: goto L_088C632C;
    case 454u: goto L_088C633C;
    case 455u: goto L_088C634C;
    case 456u: goto L_088C6354;
    case 457u: goto L_088C6360;
    case 458u: goto L_088C6378;
    case 459u: goto L_088C6388;
    case 460u: goto L_088C6398;
    case 461u: goto L_088C63B8;
    case 462u: goto L_088C63C8;
    case 463u: goto L_088C63CC;
    case 464u: goto L_088C63D4;
    case 465u: goto L_088C63E4;
    case 466u: goto L_088C63F4;
    case 467u: goto L_088C63FC;
    case 468u: goto L_088C6408;
    case 469u: goto L_088C6420;
    case 470u: goto L_088C6430;
    case 471u: goto L_088C6440;
    case 472u: goto L_088C6460;
    case 473u: goto L_088C6470;
    case 474u: goto L_088C6474;
    case 475u: goto L_088C647C;
    case 476u: goto L_088C648C;
    case 477u: goto L_088C649C;
    case 478u: goto L_088C64B4;
    case 479u: goto L_088C64C0;
    case 480u: goto L_088C64D8;
    case 481u: goto L_088C64E8;
    case 482u: goto L_088C64F8;
    case 483u: goto L_088C6518;
    case 484u: goto L_088C6528;
    case 485u: goto L_088C653C;
    case 486u: goto L_088C6544;
    case 487u: goto L_088C6554;
    case 488u: goto L_088C6564;
    case 489u: goto L_088C6574;
    case 490u: goto L_088C6580;
    case 491u: goto L_088C6598;
    case 492u: goto L_088C65A8;
    case 493u: goto L_088C65B8;
    case 494u: goto L_088C65D0;
    case 495u: goto L_088C65D8;
    case 496u: goto L_088C65E4;
    case 497u: goto L_088C65EC;
    case 498u: goto L_088C6604;
    case 499u: goto L_088C6618;
    case 500u: goto L_088C6624;
    case 501u: goto L_088C662C;
    case 502u: goto L_088C663C;
    case 503u: goto L_088C6654;
    case 504u: goto L_088C6664;
    case 505u: goto L_088C6674;
    case 506u: goto L_088C6680;
    case 507u: goto L_088C6690;
    case 508u: goto L_088C6698;
    case 509u: goto L_088C66A4;
    case 510u: goto L_088C66B8;
    case 511u: goto L_088C66DC;
    case 512u: goto L_088C66EC;
    case 513u: goto L_088C66F4;
    case 514u: goto L_088C6748;
    case 515u: goto L_088C6760;
    case 516u: goto L_088C6778;
    case 517u: goto L_088C6780;
    case 518u: goto L_088C6788;
    case 519u: goto L_088C6790;
    case 520u: goto L_088C6794;
    case 521u: goto L_088C67A4;
    case 522u: goto L_088C67D0;
    case 523u: goto L_088C67E4;
    case 524u: goto L_088C680C;
    case 525u: goto L_088C6824;
    case 526u: goto L_088C6838;
    case 527u: goto L_088C6850;
    case 528u: goto L_088C6858;
    case 529u: goto L_088C6860;
    case 530u: goto L_088C6868;
    case 531u: goto L_088C6870;
    case 532u: goto L_088C6880;
    case 533u: goto L_088C6890;
    case 534u: goto L_088C68A0;
    case 535u: goto L_088C68B4;
    case 536u: goto L_088C68CC;
    case 537u: goto L_088C68D4;
    case 538u: goto L_088C68DC;
    case 539u: goto L_088C68E4;
    case 540u: goto L_088C68F4;
    case 541u: goto L_088C690C;
    case 542u: goto L_088C6924;
    case 543u: goto L_088C693C;
    case 544u: goto L_088C6968;
    case 545u: goto L_088C6970;
    case 546u: goto L_088C6978;
    case 547u: goto L_088C6980;
    case 548u: goto L_088C6988;
    case 549u: goto L_088C6990;
    case 550u: goto L_088C699C;
    case 551u: goto L_088C69AC;
    case 552u: goto L_088C69B8;
    case 553u: goto L_088C69C0;
    case 554u: goto L_088C69C8;
    case 555u: goto L_088C69D0;
    case 556u: goto L_088C69E0;
    case 557u: goto L_088C69E8;
    case 558u: goto L_088C6A00;
    case 559u: goto L_088C6A08;
    case 560u: goto L_088C6A18;
    case 561u: goto L_088C6A30;
    case 562u: goto L_088C6A38;
    case 563u: goto L_088C6A48;
    case 564u: goto L_088C6A50;
    case 565u: goto L_088C6A74;
    case 566u: goto L_088C6A7C;
    case 567u: goto L_088C6A8C;
    case 568u: goto L_088C6A94;
    case 569u: goto L_088C6AAC;
    case 570u: goto L_088C6ABC;
    case 571u: goto L_088C6AC4;
    case 572u: goto L_088C6AD8;
    case 573u: goto L_088C6AEC;
    case 574u: goto L_088C6AFC;
    case 575u: goto L_088C6B04;
    case 576u: goto L_088C6B0C;
    case 577u: goto L_088C6B14;
    case 578u: goto L_088C6B18;
    case 579u: goto L_088C6B20;
    case 580u: goto L_088C6B28;
    case 581u: goto L_088C6B40;
    case 582u: goto L_088C6B48;
    case 583u: goto L_088C6B68;
    case 584u: goto L_088C6B70;
    case 585u: goto L_088C6B78;
    case 586u: goto L_088C6B84;
    case 587u: goto L_088C6BB0;
    case 588u: goto L_088C6BB8;
    case 589u: goto L_088C6BC8;
    case 590u: goto L_088C6BEC;
    case 591u: goto L_088C6C04;
    case 592u: goto L_088C6C18;
    case 593u: goto L_088C6C24;
    case 594u: goto L_088C6C2C;
    case 595u: goto L_088C6C34;
    case 596u: goto L_088C6C3C;
    case 597u: goto L_088C6C48;
    case 598u: goto L_088C6C68;
    case 599u: goto L_088C6C74;
    case 600u: goto L_088C6C7C;
    case 601u: goto L_088C6C84;
    case 602u: goto L_088C6C90;
    case 603u: goto L_088C6CAC;
    case 604u: goto L_088C6CCC;
    case 605u: goto L_088C6CF0;
    case 606u: goto L_088C6D00;
    case 607u: goto L_088C6D18;
    case 608u: goto L_088C6D48;
    case 609u: goto L_088C6D50;
    case 610u: goto L_088C6D60;
    case 611u: goto L_088C6D70;
    case 612u: goto L_088C6D78;
    case 613u: goto L_088C6D84;
    case 614u: goto L_088C6D88;
    case 615u: goto L_088C6D98;
    case 616u: goto L_088C6DB4;
    case 617u: goto L_088C6DBC;
    case 618u: goto L_088C6DC8;
    case 619u: goto L_088C6DD4;
    case 620u: goto L_088C6DEC;
    case 621u: goto L_088C6E04;
    case 622u: goto L_088C6E28;
    case 623u: goto L_088C6E48;
    case 624u: goto L_088C6E58;
    case 625u: goto L_088C6E68;
    case 626u: goto L_088C6E80;
    case 627u: goto L_088C6ED4;
    case 628u: goto L_088C6EF0;
    case 629u: goto L_088C6F80;
    case 630u: goto L_088C6F98;
    case 631u: goto L_088C7014;
    case 632u: goto L_088C702C;
    case 633u: goto L_088C703C;
    case 634u: goto L_088C7050;
    case 635u: goto L_088C7090;
    case 636u: goto L_088C70B8;
    case 637u: goto L_088C70C0;
    case 638u: goto L_088C70D8;
    case 639u: goto L_088C70EC;
    case 640u: goto L_088C710C;
    case 641u: goto L_088C714C;
    case 642u: goto L_088C7190;
    case 643u: goto L_088C71AC;
    case 644u: goto L_088C71C4;
    case 645u: goto L_088C71F8;
    case 646u: goto L_088C720C;
    case 647u: goto L_088C7214;
    case 648u: goto L_088C7218;
    case 649u: goto L_088C7220;
    case 650u: goto L_088C7270;
    case 651u: goto L_088C728C;
    case 652u: goto L_088C72A4;
    case 653u: goto L_088C72D0;
    case 654u: goto L_088C72E4;
    case 655u: goto L_088C72EC;
    case 656u: goto L_088C7318;
    case 657u: goto L_088C7338;
    case 658u: goto L_088C7348;
    case 659u: goto L_088C7358;
    case 660u: goto L_088C7370;
    case 661u: goto L_088C738C;
    case 662u: goto L_088C73A4;
    case 663u: goto L_088C73AC;
    case 664u: goto L_088C73B4;
    case 665u: goto L_088C73BC;
    case 666u: goto L_088C73D4;
    case 667u: goto L_088C73EC;
    case 668u: goto L_088C7404;
    case 669u: goto L_088C7410;
    case 670u: goto L_088C7418;
    case 671u: goto L_088C7424;
    case 672u: goto L_088C7450;
    case 673u: goto L_088C746C;
    case 674u: goto L_088C7480;
    case 675u: goto L_088C7498;
    case 676u: goto L_088C74B8;
    case 677u: goto L_088C74CC;
    case 678u: goto L_088C74E4;
    case 679u: goto L_088C7504;
    case 680u: goto L_088C7514;
    case 681u: goto L_088C75FC;
    case 682u: goto L_088C7610;
    case 683u: goto L_088C7648;
    case 684u: goto L_088C767C;
    case 685u: goto L_088C76A0;
    case 686u: goto L_088C76D8;
    case 687u: goto L_088C7700;
    case 688u: goto L_088C7710;
    case 689u: goto L_088C77B0;
    case 690u: goto L_088C77BC;
    case 691u: goto L_088C783C;
    case 692u: goto L_088C7848;
    case 693u: goto L_088C7854;
    case 694u: goto L_088C785C;
    case 695u: goto L_088C7910;
    case 696u: goto L_088C7918;
    case 697u: goto L_088C791C;
    case 698u: goto L_088C7924;
    case 699u: goto L_088C7930;
    case 700u: goto L_088C79D8;
    case 701u: goto L_088C79E0;
    case 702u: goto L_088C79E8;
    case 703u: goto L_088C7A70;
    case 704u: goto L_088C7A84;
    case 705u: goto L_088C7A98;
    case 706u: goto L_088C7AB8;
    case 707u: goto L_088C7AD0;
    case 708u: goto L_088C7AD8;
    case 709u: goto L_088C7AE0;
    case 710u: goto L_088C7AE8;
    case 711u: goto L_088C7AF4;
    case 712u: goto L_088C7B0C;
    case 713u: goto L_088C7B14;
    case 714u: goto L_088C7B30;
    case 715u: goto L_088C7B48;
    case 716u: goto L_088C7B60;
    case 717u: goto L_088C7B78;
    case 718u: goto L_088C7B9C;
    case 719u: goto L_088C7BA4;
    case 720u: goto L_088C7BB0;
    case 721u: goto L_088C7BBC;
    case 722u: goto L_088C7BCC;
    case 723u: goto L_088C7BD4;
    case 724u: goto L_088C7BDC;
    case 725u: goto L_088C7BF4;
    case 726u: goto L_088C7C14;
    case 727u: goto L_088C7C24;
    case 728u: goto L_088C7C2C;
    case 729u: goto L_088C7C34;
    case 730u: goto L_088C7C40;
    case 731u: goto L_088C7C5C;
    case 732u: goto L_088C7CB0;
    case 733u: goto L_088C7CBC;
    case 734u: goto L_088C7CCC;
    case 735u: goto L_088C7CDC;
    case 736u: goto L_088C7CE8;
    case 737u: goto L_088C7D00;
    case 738u: goto L_088C7D10;
    case 739u: goto L_088C7D40;
    case 740u: goto L_088C7D48;
    case 741u: goto L_088C7D5C;
    case 742u: goto L_088C7D74;
    case 743u: goto L_088C7D80;
    case 744u: goto L_088C7D88;
    case 745u: goto L_088C7D98;
    case 746u: goto L_088C7DA0;
    case 747u: goto L_088C7DA4;
    case 748u: goto L_088C7DAC;
    case 749u: goto L_088C7DB4;
    case 750u: goto L_088C7DC4;
    case 751u: goto L_088C7DC8;
    case 752u: goto L_088C7DE4;
    case 753u: goto L_088C7E0C;
    case 754u: goto L_088C7E28;
    case 755u: goto L_088C7E38;
    case 756u: goto L_088C7E4C;
    case 757u: goto L_088C7E64;
    case 758u: goto L_088C7E80;
    case 759u: goto L_088C7E94;
    case 760u: goto L_088C7EB4;
    case 761u: goto L_088C7ECC;
    case 762u: goto L_088C7EE0;
    case 763u: goto L_088C7EF4;
    case 764u: goto L_088C7F10;
    case 765u: goto L_088C7F60;
    case 766u: goto L_088C7F70;
    case 767u: goto L_088C7F9C;
    case 768u: goto L_088C7FB8;
    case 769u: goto L_088C7FD4;
    case 770u: goto L_088C7FE0;
    case 771u: goto L_088C7FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088C4000:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088C4018u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 228u, 0x088C0FB4u>(ctx, &aot_mem) && ctx.pc == 0x088C4018u) goto L_088C4018;
    return;
L_088C4018:
    ctx.gpr[31] = (0x088C4020u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 32u, 0x088C8244u>(ctx, &aot_mem) && ctx.pc == 0x088C4020u) goto L_088C4020;
    return;
L_088C4020:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (153u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27008));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[31] = (0x088C4040u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4040u) goto L_088C4040;
    return;
L_088C4040:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C405C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C406C;
      }
      goto L_088C4064;
    }
L_088C4064:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_088C42F0;
      }
      goto L_088C406C;
    }
L_088C406C:
    ctx.gpr[31] = (0x088C4074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 602u, 0x088C227Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4074u) goto L_088C4074;
    return;
L_088C4074:
    ctx.gpr[31] = (0x088C407Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 53u, 0x088C02D8u>(ctx, &aot_mem) && ctx.pc == 0x088C407Cu) goto L_088C407C;
    return;
L_088C407C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C42F0;
      }
      goto L_088C4084;
    }
L_088C4084:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
      if (branch_taken) {
          goto L_088C40EC;
      }
      goto L_088C4094;
    }
L_088C4094:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088C40DC;
      }
      goto L_088C40C8;
    }
L_088C40C8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[31] = (0x088C40D4u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088C40D4u) goto L_088C40D4;
    return;
L_088C40D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
      if (branch_taken) {
          goto L_088C4144;
      }
      goto L_088C40DC;
    }
L_088C40DC:
    ctx.gpr[31] = (0x088C40E4u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088C40E4u) goto L_088C40E4;
    return;
L_088C40E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
      if (branch_taken) {
          goto L_088C4144;
      }
      goto L_088C40EC;
    }
L_088C40EC:
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_088C4148;
    }
    goto L_088C40F8;
L_088C40F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088C4138;
      }
      goto L_088C4124;
    }
L_088C4124:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x088C4130u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088C4130u) goto L_088C4130;
    return;
L_088C4130:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
      if (branch_taken) {
          goto L_088C4144;
      }
      goto L_088C4138;
    }
L_088C4138:
    ctx.gpr[31] = (0x088C4140u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088C4140u) goto L_088C4140;
    return;
L_088C4140:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    goto L_088C4144;
L_088C4144:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_088C4148;
L_088C4148:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C4170;
      }
      goto L_088C4168;
    }
L_088C4168:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_088C4198;
      }
      goto L_088C4170;
    }
L_088C4170:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088C4184;
      }
      goto L_088C4178;
    }
L_088C4178:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088C4198;
      }
      goto L_088C4184;
    }
L_088C4184:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088C4198;
      }
      goto L_088C4194;
    }
L_088C4194:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_088C4198;
L_088C4198:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C42F0;
      }
      goto L_088C41A8;
    }
L_088C41A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10600)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088C42F0;
      }
      goto L_088C41E0;
    }
L_088C41E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088C42F0;
      }
      goto L_088C41EC;
    }
L_088C41EC:
    ctx.gpr[31] = (0x088C41F4u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088C41F4u) goto L_088C41F4;
    return;
L_088C41F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10600)));
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(5)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10604));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x088C4258u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11380));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088C4258u) goto L_088C4258;
    return;
L_088C4258:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10600)));
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(54));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088C42C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 228u, 0x088C0FB4u>(ctx, &aot_mem) && ctx.pc == 0x088C42C4u) goto L_088C42C4;
    return;
L_088C42C4:
    ctx.gpr[31] = (0x088C42CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 32u, 0x088C8244u>(ctx, &aot_mem) && ctx.pc == 0x088C42CCu) goto L_088C42CC;
    return;
L_088C42CC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(54));
    ctx.gpr[31] = (0x088C42E0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(10604));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 244u, 0x0897E5E0u>(ctx, &aot_mem) && ctx.pc == 0x088C42E0u) goto L_088C42E0;
    return;
L_088C42E0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_088C42F0;
      }
      goto L_088C42E8;
    }
L_088C42E8:
    ctx.gpr[31] = (0x088C42F0u);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 44u, 0x088C025Cu>(ctx, &aot_mem) && ctx.pc == 0x088C42F0u) goto L_088C42F0;
    return;
L_088C42F0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C430C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C4328u);
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 209u, 0x088BD67Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4328u) goto L_088C4328;
    return;
L_088C4328:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1002 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088C43E4;
      }
      goto L_088C4338;
    }
L_088C4338:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 54 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1000 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C4398;
      }
      goto L_088C4344;
    }
L_088C4344:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 29 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 36 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C4378;
      }
      goto L_088C4350;
    }
L_088C4350:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 20 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C4358;
    }
L_088C4358:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4654;
      }
      goto L_088C4360;
    }
L_088C4360:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-10560)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4378:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (0u | 7u);
      if (branch_taken) {
          goto L_088C454C;
      }
      goto L_088C4380;
    }
L_088C4380:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 43 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (0u | 8u);
      if (branch_taken) {
          goto L_088C455C;
      }
      goto L_088C438C;
    }
L_088C438C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 9u);
      if (branch_taken) {
          goto L_088C456C;
      }
      goto L_088C4394;
    }
L_088C4394:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1000 ? 1u : 0u);
    goto L_088C4398;
L_088C4398:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 81 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C43D0;
      }
      goto L_088C43A0;
    }
L_088C43A0:
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (0u | 87u);
        goto L_088C43C0;
    }
    goto L_088C43A8;
L_088C43A8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 68 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C457C;
      }
      goto L_088C43B4;
    }
L_088C43B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088C45A0;
      }
      goto L_088C43BC;
    }
L_088C43BC:
    ctx.gpr[4] = (0u | 87u);
    goto L_088C43C0;
L_088C43C0:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C43C8;
    }
L_088C43C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C43D0;
    }
L_088C43D0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1001 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C45B0;
      }
      goto L_088C43DC;
    }
L_088C43DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 23u);
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C43E4;
    }
L_088C43E4:
    ctx.gpr[4] = (28672u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (28672u << 16u);
      if (branch_taken) {
          goto L_088C4424;
      }
      goto L_088C43F8;
    }
L_088C43F8:
    ctx.gpr[4] = (0u | 4000u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 3000u);
      if (branch_taken) {
          goto L_088C45C8;
      }
      goto L_088C4404;
    }
L_088C4404:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 2001u);
      if (branch_taken) {
          goto L_088C45B8;
      }
      goto L_088C440C;
    }
L_088C440C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 2000u);
      if (branch_taken) {
          goto L_088C45C0;
      }
      goto L_088C4414;
    }
L_088C4414:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C441C;
    }
L_088C441C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 24u);
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C4424;
    }
L_088C4424:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(256));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (28672u << 16u);
      if (branch_taken) {
          goto L_088C4464;
      }
      goto L_088C4434;
    }
L_088C4434:
    ctx.gpr[4] = (28672u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (28672u << 16u);
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C4448;
    }
L_088C4448:
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-10480)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4464:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(257));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (28672u << 16u);
      if (branch_taken) {
          goto L_088C4648;
      }
      goto L_088C4474;
    }
L_088C4474:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(258));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C4484;
    }
L_088C4484:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C448C;
    }
L_088C448C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[31] = (0x088C44A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10692)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 579u, 0x088C20E8u>(ctx, &aot_mem) && ctx.pc == 0x088C44A0u) goto L_088C44A0;
    return;
L_088C44A0:
    ctx.gpr[4] = (0u | 1u);
    if (ctx.gpr[2] == ctx.gpr[4]) {
    ctx.gpr[16] = (0u | 32u);
        goto L_088C44AC;
    }
    goto L_088C44AC;
L_088C44AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C44B4;
    }
L_088C44B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C44BC;
    }
L_088C44BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C44C4;
    }
L_088C44C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 14u);
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C44CC;
    }
L_088C44CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C44D4;
    }
L_088C44D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C44DC;
    }
L_088C44DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C44E4;
    }
L_088C44E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 3u);
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C44EC;
    }
L_088C44EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 2u);
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C44F4;
    }
L_088C44F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C44FC;
    }
L_088C44FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C4504;
    }
L_088C4504:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 38u);
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C450C;
    }
L_088C450C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 4u);
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C4514;
    }
L_088C4514:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 6u);
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C451C;
    }
L_088C451C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 14u);
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C4524;
    }
L_088C4524:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 14u);
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C452C;
    }
L_088C452C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C4534;
    }
L_088C4534:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C453C;
    }
L_088C453C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C4544;
    }
L_088C4544:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C454C;
    }
L_088C454C:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
        goto L_088C4554;
    }
    goto L_088C4554;
L_088C4554:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C455C;
    }
L_088C455C:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
        goto L_088C4564;
    }
    goto L_088C4564;
L_088C4564:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C456C;
    }
L_088C456C:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
        goto L_088C4574;
    }
    goto L_088C4574;
L_088C4574:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C457C;
    }
L_088C457C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088C4598;
      }
      goto L_088C4584;
    }
L_088C4584:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17276)));
    ctx.gpr[16] = (0u | 19u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (0u | 39u);
        goto L_088C4598;
    }
    goto L_088C4598;
L_088C4598:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C45A0;
    }
L_088C45A0:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (0u | 20u);
        goto L_088C45A8;
    }
    goto L_088C45A8;
L_088C45A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C45B0;
    }
L_088C45B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 23u);
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C45B8;
    }
L_088C45B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 23u);
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C45C0;
    }
L_088C45C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 24u);
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C45C8;
    }
L_088C45C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 24u);
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C45D0;
    }
L_088C45D0:
    ctx.gpr[31] = (0x088C45D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 49u, 0x088C029Cu>(ctx, &aot_mem) && ctx.pc == 0x088C45D8u) goto L_088C45D8;
    return;
L_088C45D8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 89 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (0u | 30u);
      if (branch_taken) {
          goto L_088C45F8;
      }
      goto L_088C45E8;
    }
L_088C45E8:
    ctx.gpr[16] = (0u | 17u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 29 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[16] = (0u | 14u);
        goto L_088C45F8;
    }
    goto L_088C45F8;
L_088C45F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C4600;
    }
L_088C4600:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 14u);
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C4608;
    }
L_088C4608:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 14u);
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C4610;
    }
L_088C4610:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 15u);
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C4618;
    }
L_088C4618:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 29u);
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C4620;
    }
L_088C4620:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 16u);
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C4628;
    }
L_088C4628:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 14u);
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C4630;
    }
L_088C4630:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 14u);
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C4638;
    }
L_088C4638:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 10u);
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C4640;
    }
L_088C4640:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088C464C;
      }
      goto L_088C4648;
    }
L_088C4648:
    ctx.gpr[16] = (0u | 30u);
    goto L_088C464C;
L_088C464C:
    ctx.gpr[31] = (0x088C4654u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088C7C40;
L_088C4654:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4668:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[23]);
    ctx.gpr[23] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[22]);
    ctx.gpr[21] = (2222u << 16u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10748)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    ctx.gpr[5] = (0u | 153u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C46CCu);
    ctx.gpr[4] = (0u | 276u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C46CCu) goto L_088C46CC;
    return;
L_088C46CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10656), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[6] = (0u | 276u);
    ctx.gpr[31] = (0x088C46E8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10656)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C46E8u) goto L_088C46E8;
    return;
L_088C46E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C46F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10656)));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 866u, 0x08837A88u>(ctx, &aot_mem) && ctx.pc == 0x088C46F8u) goto L_088C46F8;
    return;
L_088C46F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10656)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10656)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (17392u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10656)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (17288u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10656)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10656)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10656)));
    ctx.gpr[20] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10648)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10656)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(192));
    ctx.gpr[19] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(128), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10656)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10656)));
    ctx.gpr[31] = (0x088C47C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x088C47C4u) goto L_088C47C4;
    return;
L_088C47C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (17036u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10656)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (16808u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10656)));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (17321u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10656)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (17260u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10656)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10656)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(212), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10656)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(208), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10648)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10656)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(220), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10656)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(204));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10656)));
    ctx.gpr[31] = (0x088C4898u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x088C4898u) goto L_088C4898;
    return;
L_088C4898:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 460u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C48ACu);
    ctx.gpr[5] = (0u | 153u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C48ACu) goto L_088C48AC;
    return;
L_088C48AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10660), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[6] = (0u | 460u);
    ctx.gpr[31] = (0x088C48C8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10660)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C48C8u) goto L_088C48C8;
    return;
L_088C48C8:
    ctx.gpr[5] = (16512u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16544u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16640u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17076u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16800u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10660)));
    ctx.gpr[16] = (0u | 0u);
    goto L_088C4904;
L_088C4904:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10660)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10660)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10660)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10660)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10660)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10648)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10660)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10660)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10660)));
    ctx.gpr[31] = (0x088C49DCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x088C49DCu) goto L_088C49DC;
    return;
L_088C49DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10660)));
      if (branch_taken) {
          goto L_088C4904;
      }
      goto L_088C49F8;
    }
L_088C49F8:
    ctx.gpr[5] = (17362u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (16704u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10660)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10660)));
    ctx.gpr[31] = (0x088C4A2Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 129u, 0x0883D148u>(ctx, &aot_mem) && ctx.pc == 0x088C4A2Cu) goto L_088C4A2C;
    return;
L_088C4A2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (17330u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10660)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10660)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10660)));
    ctx.gpr[31] = (0x088C4A60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 129u, 0x0883D148u>(ctx, &aot_mem) && ctx.pc == 0x088C4A60u) goto L_088C4A60;
    return;
L_088C4A60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10660)));
    ctx.gpr[31] = (0x088C4A70u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 56u, 0x088387C8u>(ctx, &aot_mem) && ctx.pc == 0x088C4A70u) goto L_088C4A70;
    return;
L_088C4A70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 92u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C4A84u);
    ctx.gpr[5] = (0u | 153u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C4A84u) goto L_088C4A84;
    return;
L_088C4A84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10672), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[6] = (0u | 92u);
    ctx.gpr[31] = (0x088C4AA0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10672)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C4AA0u) goto L_088C4AA0;
    return;
L_088C4AA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (17072u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10672)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16928u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10672)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[31] = (0x088C4AD8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10672)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 494u, 0x0883BC74u>(ctx, &aot_mem) && ctx.pc == 0x088C4AD8u) goto L_088C4AD8;
    return;
L_088C4AD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 92u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C4AECu);
    ctx.gpr[5] = (0u | 153u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C4AECu) goto L_088C4AEC;
    return;
L_088C4AEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10676), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[6] = (0u | 92u);
    ctx.gpr[31] = (0x088C4B08u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10676)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C4B08u) goto L_088C4B08;
    return;
L_088C4B08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (17104u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10676)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (17090u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10676)));
    ctx.gpr[5] = (17285u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (0u | 10u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.gpr[5] = (0u | 147u);
    ctx.gpr[7] = (0u | 13u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10676)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10676)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10676)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[31] = (0x088C4BBCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10676)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x088C4BBCu) goto L_088C4BBC;
    return;
L_088C4BBC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 92u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C4BD0u);
    ctx.gpr[5] = (0u | 153u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C4BD0u) goto L_088C4BD0;
    return;
L_088C4BD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10680), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[6] = (0u | 92u);
    ctx.gpr[31] = (0x088C4BECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10680)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C4BECu) goto L_088C4BEC;
    return;
L_088C4BEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (17340u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10680)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10680)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[31] = (0x088C4C20u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10680)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 480u, 0x0883BB48u>(ctx, &aot_mem) && ctx.pc == 0x088C4C20u) goto L_088C4C20;
    return;
L_088C4C20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 92u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C4C34u);
    ctx.gpr[5] = (0u | 153u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C4C34u) goto L_088C4C34;
    return;
L_088C4C34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10684), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[6] = (0u | 92u);
    ctx.gpr[31] = (0x088C4C50u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10684)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C4C50u) goto L_088C4C50;
    return;
L_088C4C50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10684)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (16448u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10684)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (17064u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10684)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 32u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10684)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10684)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(29)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(30)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10684)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10684)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10684)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[31] = (0x088C4D00u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10684)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x088C4D00u) goto L_088C4D00;
    return;
L_088C4D00:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4D44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 180u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C4D98u);
    ctx.gpr[5] = (0u | 153u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C4D98u) goto L_088C4D98;
    return;
L_088C4D98:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10688), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[6] = (0u | 180u);
    ctx.gpr[31] = (0x088C4DB8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10688)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C4DB8u) goto L_088C4DB8;
    return;
L_088C4DB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[21] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10688)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(17044)));
    ctx.gpr[31] = (0x088C4DD0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C4DD0u) goto L_088C4DD0;
    return;
L_088C4DD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10688)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (16736u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10688)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (17146u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10688)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (16944u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10688)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (0u | 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10688)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[19] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-11360));
    ctx.gpr[31] = (0x088C4E68u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x088C4E68u) goto L_088C4E68;
    return;
L_088C4E68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10688)));
    ctx.gpr[20] = (2220u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-11344));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    ctx.gpr[31] = (0x088C4E84u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C4E84u) goto L_088C4E84;
    return;
L_088C4E84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[31] = (0x088C4E90u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10688)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x088C4E90u) goto L_088C4E90;
    return;
L_088C4E90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 180u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C4EA4u);
    ctx.gpr[5] = (0u | 153u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C4EA4u) goto L_088C4EA4;
    return;
L_088C4EA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10692), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[6] = (0u | 180u);
    ctx.gpr[31] = (0x088C4EC0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10692)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C4EC0u) goto L_088C4EC0;
    return;
L_088C4EC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10692)));
    ctx.gpr[31] = (0x088C4ED0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 215u, 0x088C0EE8u>(ctx, &aot_mem) && ctx.pc == 0x088C4ED0u) goto L_088C4ED0;
    return;
L_088C4ED0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10692)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (16776u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10692)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (17201u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10692)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (16932u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10692)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10692)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x088C4F5Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x088C4F5Cu) goto L_088C4F5C;
    return;
L_088C4F5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10692)));
    ctx.gpr[31] = (0x088C4F70u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C4F70u) goto L_088C4F70;
    return;
L_088C4F70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[31] = (0x088C4F7Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10692)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x088C4F7Cu) goto L_088C4F7C;
    return;
L_088C4F7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 180u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C4F90u);
    ctx.gpr[5] = (0u | 153u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C4F90u) goto L_088C4F90;
    return;
L_088C4F90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10696), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[6] = (0u | 180u);
    ctx.gpr[31] = (0x088C4FACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10696)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C4FACu) goto L_088C4FAC;
    return;
L_088C4FAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(17044));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10696)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x088C4FC4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C4FC4u) goto L_088C4FC4;
    return;
L_088C4FC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10696)));
    ctx.gpr[21] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (16784u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10696)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (17260u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10696)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (17032u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10696)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 204u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 202u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 183u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10696)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x088C5060u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x088C5060u) goto L_088C5060;
    return;
L_088C5060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10696)));
    ctx.gpr[31] = (0x088C5074u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5074u) goto L_088C5074;
    return;
L_088C5074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[31] = (0x088C5080u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10696)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x088C5080u) goto L_088C5080;
    return;
L_088C5080:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 720u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C5094u);
    ctx.gpr[5] = (0u | 153u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C5094u) goto L_088C5094;
    return;
L_088C5094:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10704), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[6] = (0u | 720u);
    ctx.gpr[31] = (0x088C50B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10704)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C50B0u) goto L_088C50B0;
    return;
L_088C50B0:
    ctx.gpr[4] = (17126u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16808u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (2220u << 16u);
    ctx.gpr[4] = (17098u << 16u);
    ctx.gpr[22] = (0u | 0u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-11388));
    goto L_088C50D8;
L_088C50D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10704)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[31] = (0x088C50F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C50F0u) goto L_088C50F0;
    return;
L_088C50F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10704)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10704)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10704)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10704)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10704)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(29)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(30)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x088C5188u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x088C5188u) goto L_088C5188;
    return;
L_088C5188:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10704)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[31] = (0x088C51A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C51A0u) goto L_088C51A0;
    return;
L_088C51A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10704)));
    ctx.gpr[31] = (0x088C51B0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x088C51B0u) goto L_088C51B0;
    return;
L_088C51B0:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_088C50D8;
      }
      goto L_088C51C0;
    }
L_088C51C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 720u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C51D4u);
    ctx.gpr[5] = (0u | 153u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C51D4u) goto L_088C51D4;
    return;
L_088C51D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10700), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[6] = (0u | 720u);
    ctx.gpr[31] = (0x088C51F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10700)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C51F0u) goto L_088C51F0;
    return;
L_088C51F0:
    ctx.gpr[4] = (16704u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (17264u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (17215u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088C5210;
L_088C5210:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10700)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[31] = (0x088C5228u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5228u) goto L_088C5228;
    return;
L_088C5228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10700)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10700)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10700)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10700)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10700)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x088C52C0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x088C52C0u) goto L_088C52C0;
    return;
L_088C52C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10700)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[31] = (0x088C52D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C52D8u) goto L_088C52D8;
    return;
L_088C52D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10700)));
    ctx.gpr[31] = (0x088C52E8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x088C52E8u) goto L_088C52E8;
    return;
L_088C52E8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_088C5210;
      }
      goto L_088C52F8;
    }
L_088C52F8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
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
L_088C5338:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C5370u);
    ctx.gpr[6] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C5370u) goto L_088C5370;
    return;
L_088C5370:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088C53A0;
      }
      goto L_088C5378;
    }
L_088C5378:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088C53CC;
      }
      goto L_088C53A0;
    }
L_088C53A0:
    ctx.gpr[31] = (0x088C53A8u);
    ctx.gpr[5] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 198u, 0x0884CD88u>(ctx, &aot_mem) && ctx.pc == 0x088C53A8u) goto L_088C53A8;
    return;
L_088C53A8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088C53B8u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 198u, 0x0884CD88u>(ctx, &aot_mem) && ctx.pc == 0x088C53B8u) goto L_088C53B8;
    return;
L_088C53B8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088C53C8u);
    ctx.gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 198u, 0x0884CD88u>(ctx, &aot_mem) && ctx.pc == 0x088C53C8u) goto L_088C53C8;
    return;
L_088C53C8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_088C53CC;
L_088C53CC:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_088C53D8;
L_088C53D8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
        goto L_088C53E4;
    }
    goto L_088C53E4;
L_088C53E4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088C53D8;
      }
      goto L_088C53F4;
    }
L_088C53F4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C541C;
      }
      goto L_088C5400;
    }
L_088C5400:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_088C5484;
      }
      goto L_088C5408;
    }
L_088C5408:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_088C5484;
      }
      goto L_088C5410;
    }
L_088C5410:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088C5478;
      }
      goto L_088C5418;
    }
L_088C5418:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    goto L_088C541C;
L_088C541C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C5450;
      }
      goto L_088C5424;
    }
L_088C5424:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_088C5484;
      }
      goto L_088C542C;
    }
L_088C542C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_088C5450;
L_088C5450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_088C5478;
L_088C5478:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[7] = (0u | 0u);
    goto L_088C5484;
L_088C5484:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_088C5490;
L_088C5490:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[8] == ctx.gpr[6]) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
        goto L_088C549C;
    }
    goto L_088C549C;
L_088C549C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088C5490;
      }
      goto L_088C54AC;
    }
L_088C54AC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C54D4;
      }
      goto L_088C54B8;
    }
L_088C54B8:
    if (static_cast<std::int32_t>(ctx.gpr[7]) < 0) {
    ctx.gpr[7] = (0u | 0u);
        goto L_088C553C;
    }
    goto L_088C54C0;
L_088C54C0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_088C553C;
      }
      goto L_088C54C8;
    }
L_088C54C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088C5530;
      }
      goto L_088C54D0;
    }
L_088C54D0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
    goto L_088C54D4;
L_088C54D4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C5508;
      }
      goto L_088C54DC;
    }
L_088C54DC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_088C553C;
      }
      goto L_088C54E4;
    }
L_088C54E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_088C5508;
L_088C5508:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_088C5530;
L_088C5530:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[7] = (0u | 0u);
    goto L_088C553C;
L_088C553C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_088C5548;
L_088C5548:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[8] == ctx.gpr[6]) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
        goto L_088C5554;
    }
    goto L_088C5554;
L_088C5554:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088C5548;
      }
      goto L_088C5564;
    }
L_088C5564:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C558C;
      }
      goto L_088C5570;
    }
L_088C5570:
    if (static_cast<std::int32_t>(ctx.gpr[7]) < 0) {
    ctx.gpr[7] = (0u | 0u);
        goto L_088C55F4;
    }
    goto L_088C5578;
L_088C5578:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_088C55F4;
      }
      goto L_088C5580;
    }
L_088C5580:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088C55E8;
      }
      goto L_088C5588;
    }
L_088C5588:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
    goto L_088C558C;
L_088C558C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C55C0;
      }
      goto L_088C5594;
    }
L_088C5594:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_088C55F4;
      }
      goto L_088C559C;
    }
L_088C559C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    goto L_088C55C0;
L_088C55C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_088C55E8;
L_088C55E8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[7] = (0u | 0u);
    goto L_088C55F4;
L_088C55F4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_088C5600;
L_088C5600:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[8] == ctx.gpr[6]) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
        goto L_088C560C;
    }
    goto L_088C560C;
L_088C560C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088C5600;
      }
      goto L_088C561C;
    }
L_088C561C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C5644;
      }
      goto L_088C5628;
    }
L_088C5628:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088C56B8;
      }
      goto L_088C5630;
    }
L_088C5630:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088C56B8;
      }
      goto L_088C5638;
    }
L_088C5638:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088C56A0;
      }
      goto L_088C5640;
    }
L_088C5640:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
    goto L_088C5644;
L_088C5644:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C5678;
      }
      goto L_088C564C;
    }
L_088C564C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088C56B8;
      }
      goto L_088C5654;
    }
L_088C5654:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_088C5678;
L_088C5678:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_088C56A0;
L_088C56A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    goto L_088C56B8;
L_088C56B8:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (0u | 4u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    goto L_088C56C4;
L_088C56C4:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[8] == ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_088C56D0;
    }
    goto L_088C56D0;
L_088C56D0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088C56C4;
      }
      goto L_088C56E0;
    }
L_088C56E0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C5708;
      }
      goto L_088C56EC;
    }
L_088C56EC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088C5778;
      }
      goto L_088C56F4;
    }
L_088C56F4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088C5778;
      }
      goto L_088C56FC;
    }
L_088C56FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088C5770;
      }
      goto L_088C5704;
    }
L_088C5704:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    goto L_088C5708;
L_088C5708:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C5748;
      }
      goto L_088C5710;
    }
L_088C5710:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5778;
      }
      goto L_088C5718;
    }
L_088C5718:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    goto L_088C5748;
L_088C5748:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088C5770;
L_088C5770:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_088C5778;
L_088C5778:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5790:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10708)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C57C0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(612));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C57C0u) goto L_088C57C0;
    return;
L_088C57C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x088C57D8u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(621));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C57D8u) goto L_088C57D8;
    return;
L_088C57D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(652))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C5960;
      }
      goto L_088C57F0;
    }
L_088C57F0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(738)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[7] = (0u | 2u);
      if (branch_taken) {
          goto L_088C5874;
      }
      goto L_088C5800;
    }
L_088C5800:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(638)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_088C5844;
      }
      goto L_088C5814;
    }
L_088C5814:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(686));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088C5824u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5824u) goto L_088C5824;
    return;
L_088C5824:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x088C583Cu);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(695));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C583Cu) goto L_088C583C;
    return;
L_088C583C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5960;
      }
      goto L_088C5844;
    }
L_088C5844:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(660));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088C5854u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5854u) goto L_088C5854;
    return;
L_088C5854:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x088C586Cu);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(669));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C586Cu) goto L_088C586C;
    return;
L_088C586C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5960;
      }
      goto L_088C5874;
    }
L_088C5874:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[7] = (0u | 3u);
      if (branch_taken) {
          goto L_088C58F0;
      }
      goto L_088C587C;
    }
L_088C587C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(638)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_088C58C0;
      }
      goto L_088C5890;
    }
L_088C5890:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(686));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088C58A0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C58A0u) goto L_088C58A0;
    return;
L_088C58A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x088C58B8u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(695));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C58B8u) goto L_088C58B8;
    return;
L_088C58B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5960;
      }
      goto L_088C58C0;
    }
L_088C58C0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(660));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088C58D0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C58D0u) goto L_088C58D0;
    return;
L_088C58D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x088C58E8u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(669));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C58E8u) goto L_088C58E8;
    return;
L_088C58E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5960;
      }
      goto L_088C58F0;
    }
L_088C58F0:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088C5960;
      }
      goto L_088C58F8;
    }
L_088C58F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(638)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_088C5938;
      }
      goto L_088C5908;
    }
L_088C5908:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(686));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088C5918u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5918u) goto L_088C5918;
    return;
L_088C5918:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x088C5930u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(695));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5930u) goto L_088C5930;
    return;
L_088C5930:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5960;
      }
      goto L_088C5938;
    }
L_088C5938:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(660));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088C5948u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5948u) goto L_088C5948;
    return;
L_088C5948:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x088C5960u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(669));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5960u) goto L_088C5960;
    return;
L_088C5960:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5974:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(128));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10708)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C59B0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(660));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C59B0u) goto L_088C59B0;
    return;
L_088C59B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x088C59C8u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(669));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C59C8u) goto L_088C59C8;
    return;
L_088C59C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(604))))));
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[5] == ctx.gpr[20]) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(748))))));
        goto L_088C5AC4;
    }
    goto L_088C59E0;
L_088C59E0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(738)));
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    ctx.gpr[17] = (0u | 2u);
      if (branch_taken) {
          goto L_088C5A30;
      }
      goto L_088C59F0;
    }
L_088C59F0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(638)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088C5A30;
      }
      goto L_088C59FC;
    }
L_088C59FC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(686));
    ctx.gpr[31] = (0x088C5A0Cu);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5A0Cu) goto L_088C5A0C;
    return;
L_088C5A0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x088C5A24u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(695));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5A24u) goto L_088C5A24;
    return;
L_088C5A24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(738)));
    goto L_088C5A30;
L_088C5A30:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[6] = (0u | 3u);
      if (branch_taken) {
          goto L_088C5A7C;
      }
      goto L_088C5A38;
    }
L_088C5A38:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(639)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[18];
    ctx.gpr[6] = (0u | 3u);
      if (branch_taken) {
          goto L_088C5A7C;
      }
      goto L_088C5A44;
    }
L_088C5A44:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(686));
    ctx.gpr[31] = (0x088C5A54u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5A54u) goto L_088C5A54;
    return;
L_088C5A54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x088C5A6Cu);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(695));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5A6Cu) goto L_088C5A6C;
    return;
L_088C5A6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(738)));
    ctx.gpr[6] = (0u | 3u);
    goto L_088C5A7C;
L_088C5A7C:
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(748))))));
        goto L_088C5AC4;
    }
    goto L_088C5A84;
L_088C5A84:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(640)));
    if (ctx.gpr[5] != ctx.gpr[18]) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(748))))));
        goto L_088C5AC4;
    }
    goto L_088C5A90;
L_088C5A90:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(686));
    ctx.gpr[31] = (0x088C5AA0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5AA0u) goto L_088C5AA0;
    return;
L_088C5AA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x088C5AB8u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(695));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5AB8u) goto L_088C5AB8;
    return;
L_088C5AB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(748))))));
    goto L_088C5AC4;
L_088C5AC4:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088C5B94;
      }
      goto L_088C5ACC;
    }
L_088C5ACC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(811)));
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    ctx.gpr[17] = (0u | 2u);
      if (branch_taken) {
          goto L_088C5B58;
      }
      goto L_088C5ADC;
    }
L_088C5ADC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(742)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[18];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(192));
      if (branch_taken) {
          goto L_088C5B24;
      }
      goto L_088C5AEC;
    }
L_088C5AEC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(782));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088C5AFCu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5AFCu) goto L_088C5AFC;
    return;
L_088C5AFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(208));
    ctx.gpr[31] = (0x088C5B14u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(791));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5B14u) goto L_088C5B14;
    return;
L_088C5B14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10708)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(811)));
      if (branch_taken) {
          goto L_088C5B58;
      }
      goto L_088C5B24;
    }
L_088C5B24:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(756));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088C5B34u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5B34u) goto L_088C5B34;
    return;
L_088C5B34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(208));
    ctx.gpr[31] = (0x088C5B4Cu);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(765));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5B4Cu) goto L_088C5B4C;
    return;
L_088C5B4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(811)));
    goto L_088C5B58;
L_088C5B58:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088C5B94;
      }
      goto L_088C5B60;
    }
L_088C5B60:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(744)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088C5B94;
      }
      goto L_088C5B6C;
    }
L_088C5B6C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(712));
    ctx.gpr[31] = (0x088C5B7Cu);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5B7Cu) goto L_088C5B7C;
    return;
L_088C5B7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x088C5B94u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(721));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5B94u) goto L_088C5B94;
    return;
L_088C5B94:
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
L_088C5BB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(192));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10708)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C5BE8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(756));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5BE8u) goto L_088C5BE8;
    return;
L_088C5BE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(208));
    ctx.gpr[31] = (0x088C5C00u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(765));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5C00u) goto L_088C5C00;
    return;
L_088C5C00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(652))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C5CDC;
      }
      goto L_088C5C18;
    }
L_088C5C18:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(811)));
    ctx.gpr[17] = (0u | 1u);
    if (ctx.gpr[5] != ctx.gpr[17]) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(811)));
        goto L_088C5C68;
    }
    goto L_088C5C28;
L_088C5C28:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(742)));
    if (ctx.gpr[5] != ctx.gpr[17]) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(811)));
        goto L_088C5C68;
    }
    goto L_088C5C34;
L_088C5C34:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(782));
    ctx.gpr[31] = (0x088C5C44u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(192));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5C44u) goto L_088C5C44;
    return;
L_088C5C44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(208));
    ctx.gpr[31] = (0x088C5C5Cu);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(791));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5C5Cu) goto L_088C5C5C;
    return;
L_088C5C5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(811)));
    goto L_088C5C68;
L_088C5C68:
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088C5CDC;
      }
      goto L_088C5C74;
    }
L_088C5C74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(744)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[17];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_088C5CB4;
      }
      goto L_088C5C84;
    }
L_088C5C84:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(712));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088C5C94u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5C94u) goto L_088C5C94;
    return;
L_088C5C94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x088C5CACu);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(721));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5CACu) goto L_088C5CAC;
    return;
L_088C5CAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5CDC;
      }
      goto L_088C5CB4;
    }
L_088C5CB4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(660));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088C5CC4u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5CC4u) goto L_088C5CC4;
    return;
L_088C5CC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x088C5CDCu);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(669));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5CDCu) goto L_088C5CDC;
    return;
L_088C5CDC:
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
L_088C5CF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-944));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(908), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(912), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(916), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(920), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(924), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(928), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(932), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(936), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(940), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C5D28u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 665u, 0x088C26ECu>(ctx, &aot_mem) && ctx.pc == 0x088C5D28u) goto L_088C5D28;
    return;
L_088C5D28:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17))))));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[31] = (0x088C5D48u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 668u, 0x088C271Cu>(ctx, &aot_mem) && ctx.pc == 0x088C5D48u) goto L_088C5D48;
    return;
L_088C5D48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.gpr[31] = (0x088C5D58u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(512));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5D58u) goto L_088C5D58;
    return;
L_088C5D58:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C5D6Cu);
    ctx.gpr[6] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C5D6Cu) goto L_088C5D6C;
    return;
L_088C5D6C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(69));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (2221u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (2221u << 16u);
      if (branch_taken) {
          goto L_088C5DA0;
      }
      goto L_088C5D84;
    }
L_088C5D84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C5D94u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(528));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5D94u) goto L_088C5D94;
    return;
L_088C5D94:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(528));
      if (branch_taken) {
          goto L_088C5DD8;
      }
      goto L_088C5DA0;
    }
L_088C5DA0:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[31] = (0x088C5DACu);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11336));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 664u, 0x088C26D8u>(ctx, &aot_mem) && ctx.pc == 0x088C5DACu) goto L_088C5DAC;
    return;
L_088C5DAC:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16936));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088C5DD0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088C5DD0u) goto L_088C5DD0;
    return;
L_088C5DD0:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(528));
    goto L_088C5DD8;
L_088C5DD8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C5DE4u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5DE4u) goto L_088C5DE4;
    return;
L_088C5DE4:
    ctx.gpr[31] = (0x088C5DECu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 671u, 0x088C274Cu>(ctx, &aot_mem) && ctx.pc == 0x088C5DECu) goto L_088C5DEC;
    return;
L_088C5DEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x088C5DFCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(576));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5DFCu) goto L_088C5DFC;
    return;
L_088C5DFC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C5E0Cu);
    ctx.gpr[6] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C5E0Cu) goto L_088C5E0C;
    return;
L_088C5E0C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2220u << 16u);
      if (branch_taken) {
          goto L_088C5E30;
      }
      goto L_088C5E18;
    }
L_088C5E18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16820)));
    ctx.gpr[31] = (0x088C5E28u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(592));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5E28u) goto L_088C5E28;
    return;
L_088C5E28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5E6C;
      }
      goto L_088C5E30;
    }
L_088C5E30:
    ctx.gpr[31] = (0x088C5E38u);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11336));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 664u, 0x088C26D8u>(ctx, &aot_mem) && ctx.pc == 0x088C5E38u) goto L_088C5E38;
    return;
L_088C5E38:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16936));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C5E5Cu);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(105));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088C5E5Cu) goto L_088C5E5C;
    return;
L_088C5E5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088C5E6Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(592));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5E6Cu) goto L_088C5E6C;
    return;
L_088C5E6C:
    ctx.gpr[31] = (0x088C5E74u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(124));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 674u, 0x088C277Cu>(ctx, &aot_mem) && ctx.pc == 0x088C5E74u) goto L_088C5E74;
    return;
L_088C5E74:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(124))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088C5EAC;
      }
      goto L_088C5E80;
    }
L_088C5E80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x088C5E94u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11328));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5E94u) goto L_088C5E94;
    return;
L_088C5E94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16820)));
    ctx.gpr[31] = (0x088C5EA4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5EA4u) goto L_088C5EA4;
    return;
L_088C5EA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5EB4;
      }
      goto L_088C5EAC;
    }
L_088C5EAC:
    ctx.gpr[31] = (0x088C5EB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088C5790;
L_088C5EB4:
    ctx.gpr[31] = (0x088C5EBCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(172));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 677u, 0x088C27ACu>(ctx, &aot_mem) && ctx.pc == 0x088C5EBCu) goto L_088C5EBC;
    return;
L_088C5EBC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(172))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088C5EF8;
      }
      goto L_088C5EC8;
    }
L_088C5EC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(128));
    ctx.gpr[31] = (0x088C5EDCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11316));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5EDCu) goto L_088C5EDC;
    return;
L_088C5EDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x088C5EF0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11304));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5EF0u) goto L_088C5EF0;
    return;
L_088C5EF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5F00;
      }
      goto L_088C5EF8;
    }
L_088C5EF8:
    ctx.gpr[31] = (0x088C5F00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088C5974;
L_088C5F00:
    ctx.gpr[31] = (0x088C5F08u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(268));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 680u, 0x088C27DCu>(ctx, &aot_mem) && ctx.pc == 0x088C5F08u) goto L_088C5F08;
    return;
L_088C5F08:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(268))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088C5F40;
      }
      goto L_088C5F14;
    }
L_088C5F14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x088C5F28u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11288));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5F28u) goto L_088C5F28;
    return;
L_088C5F28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16820)));
    ctx.gpr[31] = (0x088C5F38u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(208));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5F38u) goto L_088C5F38;
    return;
L_088C5F38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5F48;
      }
      goto L_088C5F40;
    }
L_088C5F40:
    ctx.gpr[31] = (0x088C5F48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088C5BB4;
L_088C5F48:
    ctx.gpr[31] = (0x088C5F50u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(332));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 683u, 0x088C280Cu>(ctx, &aot_mem) && ctx.pc == 0x088C5F50u) goto L_088C5F50;
    return;
L_088C5F50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(332))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(256));
      if (branch_taken) {
          goto L_088C5F80;
      }
      goto L_088C5F60;
    }
L_088C5F60:
    ctx.gpr[31] = (0x088C5F68u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16816)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5F68u) goto L_088C5F68;
    return;
L_088C5F68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16820)));
    ctx.gpr[31] = (0x088C5F78u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(272));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5F78u) goto L_088C5F78;
    return;
L_088C5F78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5F98;
      }
      goto L_088C5F80;
    }
L_088C5F80:
    ctx.gpr[31] = (0x088C5F88u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(340));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5F88u) goto L_088C5F88;
    return;
L_088C5F88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(349));
    ctx.gpr[31] = (0x088C5F98u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(272));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5F98u) goto L_088C5F98;
    return;
L_088C5F98:
    ctx.gpr[31] = (0x088C5FA0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 686u, 0x088C283Cu>(ctx, &aot_mem) && ctx.pc == 0x088C5FA0u) goto L_088C5FA0;
    return;
L_088C5FA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(368))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(320));
      if (branch_taken) {
          goto L_088C5FD0;
      }
      goto L_088C5FB0;
    }
L_088C5FB0:
    ctx.gpr[31] = (0x088C5FB8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16816)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5FB8u) goto L_088C5FB8;
    return;
L_088C5FB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16820)));
    ctx.gpr[31] = (0x088C5FC8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(336));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5FC8u) goto L_088C5FC8;
    return;
L_088C5FC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5FE8;
      }
      goto L_088C5FD0;
    }
L_088C5FD0:
    ctx.gpr[31] = (0x088C5FD8u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(376));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5FD8u) goto L_088C5FD8;
    return;
L_088C5FD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(385));
    ctx.gpr[31] = (0x088C5FE8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(336));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C5FE8u) goto L_088C5FE8;
    return;
L_088C5FE8:
    ctx.gpr[31] = (0x088C5FF0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(408));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 689u, 0x088C286Cu>(ctx, &aot_mem) && ctx.pc == 0x088C5FF0u) goto L_088C5FF0;
    return;
L_088C5FF0:
    ctx.gpr[31] = (0x088C5FF8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(444));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 692u, 0x088C289Cu>(ctx, &aot_mem) && ctx.pc == 0x088C5FF8u) goto L_088C5FF8;
    return;
L_088C5FF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(408))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(384));
      if (branch_taken) {
          goto L_088C6040;
      }
      goto L_088C6008;
    }
L_088C6008:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(444))))));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088C6040;
      }
      goto L_088C6014;
    }
L_088C6014:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11276));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088C6028u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C6028u) goto L_088C6028;
    return;
L_088C6028:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16820)));
    ctx.gpr[31] = (0x088C6038u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(400));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C6038u) goto L_088C6038;
    return;
L_088C6038:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6084;
      }
      goto L_088C6040;
    }
L_088C6040:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088C606C;
      }
      goto L_088C6048;
    }
L_088C6048:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088C6054u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C6054u) goto L_088C6054;
    return;
L_088C6054:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(425));
    ctx.gpr[31] = (0x088C6064u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(400));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C6064u) goto L_088C6064;
    return;
L_088C6064:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6084;
      }
      goto L_088C606C;
    }
L_088C606C:
    ctx.gpr[31] = (0x088C6074u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(452));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C6074u) goto L_088C6074;
    return;
L_088C6074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(461));
    ctx.gpr[31] = (0x088C6084u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(400));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C6084u) goto L_088C6084;
    return;
L_088C6084:
    ctx.gpr[31] = (0x088C608Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 695u, 0x088C28CCu>(ctx, &aot_mem) && ctx.pc == 0x088C608Cu) goto L_088C608C;
    return;
L_088C608C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(480))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(448));
      if (branch_taken) {
          goto L_088C60BC;
      }
      goto L_088C609C;
    }
L_088C609C:
    ctx.gpr[31] = (0x088C60A4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16816)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C60A4u) goto L_088C60A4;
    return;
L_088C60A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16820)));
    ctx.gpr[31] = (0x088C60B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(464));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C60B4u) goto L_088C60B4;
    return;
L_088C60B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C60D4;
      }
      goto L_088C60BC;
    }
L_088C60BC:
    ctx.gpr[31] = (0x088C60C4u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(488));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C60C4u) goto L_088C60C4;
    return;
L_088C60C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(497));
    ctx.gpr[31] = (0x088C60D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(464));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C60D4u) goto L_088C60D4;
    return;
L_088C60D4:
    ctx.gpr[31] = (0x088C60DCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(516));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 698u, 0x088C28FCu>(ctx, &aot_mem) && ctx.pc == 0x088C60DCu) goto L_088C60DC;
    return;
L_088C60DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(516))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(640));
      if (branch_taken) {
          goto L_088C610C;
      }
      goto L_088C60EC;
    }
L_088C60EC:
    ctx.gpr[31] = (0x088C60F4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16816)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C60F4u) goto L_088C60F4;
    return;
L_088C60F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16820)));
    ctx.gpr[31] = (0x088C6104u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(656));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C6104u) goto L_088C6104;
    return;
L_088C6104:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6124;
      }
      goto L_088C610C;
    }
L_088C610C:
    ctx.gpr[31] = (0x088C6114u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(524));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C6114u) goto L_088C6114;
    return;
L_088C6114:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(533));
    ctx.gpr[31] = (0x088C6124u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(656));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C6124u) goto L_088C6124;
    return;
L_088C6124:
    ctx.gpr[31] = (0x088C612Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(552));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 701u, 0x088C292Cu>(ctx, &aot_mem) && ctx.pc == 0x088C612Cu) goto L_088C612C;
    return;
L_088C612C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(552))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(704));
      if (branch_taken) {
          goto L_088C615C;
      }
      goto L_088C613C;
    }
L_088C613C:
    ctx.gpr[31] = (0x088C6144u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16816)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C6144u) goto L_088C6144;
    return;
L_088C6144:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16820)));
    ctx.gpr[31] = (0x088C6154u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(720));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C6154u) goto L_088C6154;
    return;
L_088C6154:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6174;
      }
      goto L_088C615C;
    }
L_088C615C:
    ctx.gpr[31] = (0x088C6164u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C6164u) goto L_088C6164;
    return;
L_088C6164:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(569));
    ctx.gpr[31] = (0x088C6174u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(720));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C6174u) goto L_088C6174;
    return;
L_088C6174:
    ctx.gpr[31] = (0x088C617Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 704u, 0x088C295Cu>(ctx, &aot_mem) && ctx.pc == 0x088C617Cu) goto L_088C617C;
    return;
L_088C617C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(592))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(768));
      if (branch_taken) {
          goto L_088C61AC;
      }
      goto L_088C618C;
    }
L_088C618C:
    ctx.gpr[31] = (0x088C6194u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16816)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C6194u) goto L_088C6194;
    return;
L_088C6194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16820)));
    ctx.gpr[31] = (0x088C61A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(784));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C61A4u) goto L_088C61A4;
    return;
L_088C61A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C61C4;
      }
      goto L_088C61AC;
    }
L_088C61AC:
    ctx.gpr[31] = (0x088C61B4u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(600));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C61B4u) goto L_088C61B4;
    return;
L_088C61B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(609));
    ctx.gpr[31] = (0x088C61C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(784));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C61C4u) goto L_088C61C4;
    return;
L_088C61C4:
    ctx.gpr[31] = (0x088C61CCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(632));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 707u, 0x088C298Cu>(ctx, &aot_mem) && ctx.pc == 0x088C61CCu) goto L_088C61CC;
    return;
L_088C61CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(632))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(832));
      if (branch_taken) {
          goto L_088C61FC;
      }
      goto L_088C61DC;
    }
L_088C61DC:
    ctx.gpr[31] = (0x088C61E4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16816)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C61E4u) goto L_088C61E4;
    return;
L_088C61E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16820)));
    ctx.gpr[31] = (0x088C61F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(848));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C61F4u) goto L_088C61F4;
    return;
L_088C61F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088C6218;
      }
      goto L_088C61FC;
    }
L_088C61FC:
    ctx.gpr[31] = (0x088C6204u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C6204u) goto L_088C6204;
    return;
L_088C6204:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(649));
    ctx.gpr[31] = (0x088C6214u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(848));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C6214u) goto L_088C6214;
    return;
L_088C6214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_088C6218;
L_088C6218:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[31] = (0x088C6224u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11264));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C6224u) goto L_088C6224;
    return;
L_088C6224:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16820)));
    ctx.gpr[31] = (0x088C6234u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C6234u) goto L_088C6234;
    return;
L_088C6234:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(896));
    ctx.gpr[31] = (0x088C6248u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11252));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C6248u) goto L_088C6248;
    return;
L_088C6248:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16820)));
    ctx.gpr[31] = (0x088C6258u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C6258u) goto L_088C6258;
    return;
L_088C6258:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(960));
    ctx.gpr[31] = (0x088C626Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11240));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C626Cu) goto L_088C626C;
    return;
L_088C626C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16820)));
    ctx.gpr[31] = (0x088C627Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(976));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C627Cu) goto L_088C627C;
    return;
L_088C627C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C628Cu);
    ctx.gpr[6] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C628Cu) goto L_088C628C;
    return;
L_088C628C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17))))));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088C62C0;
      }
      goto L_088C62A0;
    }
L_088C62A0:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088C62B4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11228));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088C62B4u) goto L_088C62B4;
    return;
L_088C62B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1024));
      if (branch_taken) {
          goto L_088C6304;
      }
      goto L_088C62C0;
    }
L_088C62C0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088C62EC;
      }
      goto L_088C62CC;
    }
L_088C62CC:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088C62E0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11216));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088C62E0u) goto L_088C62E0;
    return;
L_088C62E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1024));
      if (branch_taken) {
          goto L_088C6304;
      }
      goto L_088C62EC;
    }
L_088C62EC:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088C62FCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11204));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088C62FCu) goto L_088C62FC;
    return;
L_088C62FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1024));
    goto L_088C6304;
L_088C6304:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088C6310u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C6310u) goto L_088C6310;
    return;
L_088C6310:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16820)));
    ctx.gpr[31] = (0x088C6320u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1040));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C6320u) goto L_088C6320;
    return;
L_088C6320:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_088C6354;
      }
      goto L_088C632C;
    }
L_088C632C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16816)));
    ctx.gpr[31] = (0x088C633Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1088));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C633Cu) goto L_088C633C;
    return;
L_088C633C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16820)));
    ctx.gpr[31] = (0x088C634Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1104));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C634Cu) goto L_088C634C;
    return;
L_088C634C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22))))));
      if (branch_taken) {
          goto L_088C63CC;
      }
      goto L_088C6354;
    }
L_088C6354:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C6360u);
    ctx.gpr[6] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C6360u) goto L_088C6360;
    return;
L_088C6360:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19))))));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[31] = (0x088C6378u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11192));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088C6378u) goto L_088C6378;
    return;
L_088C6378:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088C6388u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1088));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C6388u) goto L_088C6388;
    return;
L_088C6388:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C6398u);
    ctx.gpr[6] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C6398u) goto L_088C6398;
    return;
L_088C6398:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088C63B8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11180));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088C63B8u) goto L_088C63B8;
    return;
L_088C63B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088C63C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1104));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C63C8u) goto L_088C63C8;
    return;
L_088C63C8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22))))));
    goto L_088C63CC;
L_088C63CC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_088C63FC;
      }
      goto L_088C63D4;
    }
L_088C63D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16816)));
    ctx.gpr[31] = (0x088C63E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1152));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C63E4u) goto L_088C63E4;
    return;
L_088C63E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16820)));
    ctx.gpr[31] = (0x088C63F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1168));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C63F4u) goto L_088C63F4;
    return;
L_088C63F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23))))));
      if (branch_taken) {
          goto L_088C6474;
      }
      goto L_088C63FC;
    }
L_088C63FC:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C6408u);
    ctx.gpr[6] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C6408u) goto L_088C6408;
    return;
L_088C6408:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[31] = (0x088C6420u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11160));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088C6420u) goto L_088C6420;
    return;
L_088C6420:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088C6430u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1152));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C6430u) goto L_088C6430;
    return;
L_088C6430:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C6440u);
    ctx.gpr[6] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C6440u) goto L_088C6440;
    return;
L_088C6440:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088C6460u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11148));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088C6460u) goto L_088C6460;
    return;
L_088C6460:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088C6470u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1168));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C6470u) goto L_088C6470;
    return;
L_088C6470:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23))))));
    goto L_088C6474;
L_088C6474:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_088C64B4;
      }
      goto L_088C647C;
    }
L_088C647C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16816)));
    ctx.gpr[31] = (0x088C648Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1216));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C648Cu) goto L_088C648C;
    return;
L_088C648C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16820)));
    ctx.gpr[31] = (0x088C649Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1232));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C649Cu) goto L_088C649C;
    return;
L_088C649C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
      if (branch_taken) {
          goto L_088C653C;
      }
      goto L_088C64B4;
    }
L_088C64B4:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C64C0u);
    ctx.gpr[6] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C64C0u) goto L_088C64C0;
    return;
L_088C64C0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23))))));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[31] = (0x088C64D8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11128));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088C64D8u) goto L_088C64D8;
    return;
L_088C64D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088C64E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1216));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C64E8u) goto L_088C64E8;
    return;
L_088C64E8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C64F8u);
    ctx.gpr[6] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C64F8u) goto L_088C64F8;
    return;
L_088C64F8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088C6518u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11116));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088C6518u) goto L_088C6518;
    return;
L_088C6518:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088C6528u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1232));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C6528u) goto L_088C6528;
    return;
L_088C6528:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    goto L_088C653C;
L_088C653C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_088C6574;
      }
      goto L_088C6544;
    }
L_088C6544:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16816)));
    ctx.gpr[31] = (0x088C6554u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1280));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C6554u) goto L_088C6554;
    return;
L_088C6554:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16820)));
    ctx.gpr[31] = (0x088C6564u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1296));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C6564u) goto L_088C6564;
    return;
L_088C6564:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16816)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1344));
      if (branch_taken) {
          goto L_088C6624;
      }
      goto L_088C6574;
    }
L_088C6574:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C6580u);
    ctx.gpr[6] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C6580u) goto L_088C6580;
    return;
L_088C6580:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[31] = (0x088C6598u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11096));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088C6598u) goto L_088C6598;
    return;
L_088C6598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088C65A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1280));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C65A8u) goto L_088C65A8;
    return;
L_088C65A8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C65B8u);
    ctx.gpr[6] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C65B8u) goto L_088C65B8;
    return;
L_088C65B8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[6] = (2220u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-11084));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[7] = (ctx.gpr[5] & 1u);
      if (branch_taken) {
          goto L_088C65D8;
      }
      goto L_088C65D0;
    }
L_088C65D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u - ctx.gpr[7]);
      if (branch_taken) {
          goto L_088C65D8;
      }
      goto L_088C65D8;
    }
L_088C65D8:
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_088C65EC;
      }
      goto L_088C65E4;
    }
L_088C65E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088C65EC;
      }
      goto L_088C65EC;
    }
L_088C65EC:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088C6604u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088C6604u) goto L_088C6604;
    return;
L_088C6604:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1296));
    ctx.gpr[31] = (0x088C6618u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C6618u) goto L_088C6618;
    return;
L_088C6618:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16816)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1344));
    goto L_088C6624;
L_088C6624:
    ctx.gpr[31] = (0x088C662Cu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C662Cu) goto L_088C662C;
    return;
L_088C662C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C663Cu);
    ctx.gpr[6] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C663Cu) goto L_088C663C;
    return;
L_088C663C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x088C6654u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11064));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088C6654u) goto L_088C6654;
    return;
L_088C6654:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088C6664u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1360));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C6664u) goto L_088C6664;
    return;
L_088C6664:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16816)));
    ctx.gpr[31] = (0x088C6674u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1408));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C6674u) goto L_088C6674;
    return;
L_088C6674:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_088C6698;
      }
      goto L_088C6680;
    }
L_088C6680:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16820)));
    ctx.gpr[31] = (0x088C6690u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1424));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C6690u) goto L_088C6690;
    return;
L_088C6690:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C66EC;
      }
      goto L_088C6698;
    }
L_088C6698:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C66A4u);
    ctx.gpr[6] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C66A4u) goto L_088C66A4;
    return;
L_088C66A4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21))))));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[21] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11048));
    ctx.gpr[31] = (0x088C66B8u);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 664u, 0x088C26D8u>(ctx, &aot_mem) && ctx.pc == 0x088C66B8u) goto L_088C66B8;
    return;
L_088C66B8:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16936));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C66DCu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088C66DCu) goto L_088C66DC;
    return;
L_088C66DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088C66ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1424));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C66ECu) goto L_088C66EC;
    return;
L_088C66EC:
    ctx.gpr[31] = (0x088C66F4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(668));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 710u, 0x088C29BCu>(ctx, &aot_mem) && ctx.pc == 0x088C66F4u) goto L_088C66F4;
    return;
L_088C66F4:
    ctx.gpr[4] = (0u | 23u);
    ctx.gpr[5] = (0u | 24u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(872), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 28u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(876), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 26u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(880), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 29u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(884), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 27u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(888), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 31u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(892), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 30u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(896), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 25u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(900), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(904), ctx.gpr[4]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[29] | 0u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(716));
    goto L_088C6748;
L_088C6748:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(872)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[23] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[23]);
    ctx.gpr[31] = (0x088C6760u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16816)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C6760u) goto L_088C6760;
    return;
L_088C6760:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(668))))));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[23]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[18];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088C6788;
      }
      goto L_088C6778;
    }
L_088C6778:
    ctx.gpr[31] = (0x088C6780u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16820)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C6780u) goto L_088C6780;
    return;
L_088C6780:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088C6794;
      }
      goto L_088C6788;
    }
L_088C6788:
    ctx.gpr[31] = (0x088C6790u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C6790u) goto L_088C6790;
    return;
L_088C6790:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_088C6794;
L_088C6794:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(17));
      if (branch_taken) {
          goto L_088C6748;
      }
      goto L_088C67A4;
    }
L_088C67A4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(908)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(912)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(916)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(920)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(924)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(928)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(932)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(936)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(940)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(944));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C67D0:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16824)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16828), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C67E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 44u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C680Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C680Cu) goto L_088C680C;
    return;
L_088C680C:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(17448), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C6824u);
    ctx.gpr[6] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C6824u) goto L_088C6824;
    return;
L_088C6824:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 24u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C6838u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C6838u) goto L_088C6838;
    return;
L_088C6838:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17448)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[31] = (0x088C6850u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9916));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 595u, 0x088473B4u>(ctx, &aot_mem) && ctx.pc == 0x088C6850u) goto L_088C6850;
    return;
L_088C6850:
    ctx.gpr[31] = (0x088C6858u);
    // nop
    goto L_088C7370;
L_088C6858:
    ctx.gpr[31] = (0x088C6860u);
    // nop
    goto L_088C7424;
L_088C6860:
    ctx.gpr[31] = (0x088C6868u);
    // nop
    goto L_088C6E80;
L_088C6868:
    ctx.gpr[31] = (0x088C6870u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 716u, 0x08806E2Cu>(ctx, &aot_mem) && ctx.pc == 0x088C6870u) goto L_088C6870;
    return;
L_088C6870:
    ctx.gpr[4] = (2188u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C6880u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26940));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 702u, 0x0884BCB8u>(ctx, &aot_mem) && ctx.pc == 0x088C6880u) goto L_088C6880;
    return;
L_088C6880:
    ctx.gpr[4] = (2188u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C6890u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(27456));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 706u, 0x0884BCFCu>(ctx, &aot_mem) && ctx.pc == 0x088C6890u) goto L_088C6890;
    return;
L_088C6890:
    ctx.gpr[4] = (2188u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C68A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(27464));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 709u, 0x0884BD28u>(ctx, &aot_mem) && ctx.pc == 0x088C68A0u) goto L_088C68A0;
    return;
L_088C68A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C68B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C68CCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 722u, 0x08806E84u>(ctx, &aot_mem) && ctx.pc == 0x088C68CCu) goto L_088C68CC;
    return;
L_088C68CC:
    ctx.gpr[31] = (0x088C68D4u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 724u, 0x08806EA0u>(ctx, &aot_mem) && ctx.pc == 0x088C68D4u) goto L_088C68D4;
    return;
L_088C68D4:
    ctx.gpr[31] = (0x088C68DCu);
    // nop
    goto L_088C6D18;
L_088C68DC:
    ctx.gpr[31] = (0x088C68E4u);
    // nop
    goto L_088C7090;
L_088C68E4:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17448)));
    ctx.gpr[31] = (0x088C68F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 563u, 0x08847174u>(ctx, &aot_mem) && ctx.pc == 0x088C68F4u) goto L_088C68F4;
    return;
L_088C68F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17448)));
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088C690Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C690Cu) goto L_088C690C;
    return;
L_088C690C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17448)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088C6924u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C6924u) goto L_088C6924;
    return;
L_088C6924:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17448), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C693C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17448)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
        goto L_088C6978;
    }
    goto L_088C6968;
L_088C6968:
    ctx.gpr[31] = (0x088C6970u);
    // nop
    goto L_088C6B84;
L_088C6970:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6B28;
      }
      goto L_088C6978;
    }
L_088C6978:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088C699C;
      }
      goto L_088C6980;
    }
L_088C6980:
    ctx.gpr[31] = (0x088C6988u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 718u, 0x08806E50u>(ctx, &aot_mem) && ctx.pc == 0x088C6988u) goto L_088C6988;
    return;
L_088C6988:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17448)));
      if (branch_taken) {
          goto L_088C699C;
      }
      goto L_088C6990;
    }
L_088C6990:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17448)));
    goto L_088C699C;
L_088C699C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (0u | 4u);
        goto L_088C6B14;
    }
    goto L_088C69AC;
L_088C69AC:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088C6A7C;
      }
      goto L_088C69B8;
    }
L_088C69B8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088C6A08;
      }
      goto L_088C69C0;
    }
L_088C69C0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088C6AAC;
      }
      goto L_088C69C8;
    }
L_088C69C8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_088C6AD8;
      }
      goto L_088C69D0;
    }
L_088C69D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088C69E8;
      }
      goto L_088C69E0;
    }
L_088C69E0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088C6B18;
      }
      goto L_088C69E8;
    }
L_088C69E8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17448)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[31] = (0x088C6A00u);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088C6A00u) goto L_088C6A00;
    return;
L_088C6A00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6B18;
      }
      goto L_088C6A08;
    }
L_088C6A08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 255 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088C6A38;
      }
      goto L_088C6A18;
    }
L_088C6A18:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17448)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 255u);
      if (branch_taken) {
          goto L_088C6B18;
      }
      goto L_088C6A30;
    }
L_088C6A30:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088C6B18;
      }
      goto L_088C6A38;
    }
L_088C6A38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 180 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088C6A50;
      }
      goto L_088C6A48;
    }
L_088C6A48:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088C6B18;
      }
      goto L_088C6A50;
    }
L_088C6A50:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17448)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17448)));
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[31] = (0x088C6A74u);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088C6A74u) goto L_088C6A74;
    return;
L_088C6A74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6B18;
      }
      goto L_088C6A7C;
    }
L_088C6A7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 25 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088C6A94;
      }
      goto L_088C6A8C;
    }
L_088C6A8C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088C6B18;
      }
      goto L_088C6A94;
    }
L_088C6A94:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17448)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088C6B18;
      }
      goto L_088C6AAC;
    }
L_088C6AAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088C6AC4;
      }
      goto L_088C6ABC;
    }
L_088C6ABC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088C6B18;
      }
      goto L_088C6AC4;
    }
L_088C6AC4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17448)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088C6B18;
      }
      goto L_088C6AD8;
    }
L_088C6AD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 48u);
    ctx.gpr[4] = (ctx.gpr[4] & 48u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C6B18;
      }
      goto L_088C6AEC;
    }
L_088C6AEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6B18;
      }
      goto L_088C6AFC;
    }
L_088C6AFC:
    ctx.gpr[31] = (0x088C6B04u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088C6B04u) goto L_088C6B04;
    return;
L_088C6B04:
    ctx.gpr[31] = (0x088C6B0Cu);
    // nop
    goto L_088C738C;
L_088C6B0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6B18;
      }
      goto L_088C6B14;
    }
L_088C6B14:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_088C6B18;
L_088C6B18:
    ctx.gpr[31] = (0x088C6B20u);
    // nop
    goto L_088C76D8;
L_088C6B20:
    ctx.gpr[31] = (0x088C6B28u);
    // nop
    goto L_088C710C;
L_088C6B28:
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
L_088C6B40:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C6B48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17448)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C6B78;
      }
      goto L_088C6B68;
    }
L_088C6B68:
    ctx.gpr[31] = (0x088C6B70u);
    // nop
    goto L_088C6E28;
L_088C6B70:
    ctx.gpr[31] = (0x088C6B78u);
    // nop
    goto L_088C7318;
L_088C6B78:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C6B84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17448)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088C6C18;
      }
      goto L_088C6BB0;
    }
L_088C6BB0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088C6C90;
      }
      goto L_088C6BB8;
    }
L_088C6BB8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C6BC8u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C6BC8u) goto L_088C6BC8;
    return;
L_088C6BC8:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17340)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17344));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17452)));
    ctx.gpr[31] = (0x088C6BECu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 605u, 0x0897A8A0u>(ctx, &aot_mem) && ctx.pc == 0x088C6BECu) goto L_088C6BEC;
    return;
L_088C6BEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17448)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (0u | 130u);
    ctx.gpr[31] = (0x088C6C04u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 465u, 0x08809CF0u>(ctx, &aot_mem) && ctx.pc == 0x088C6C04u) goto L_088C6C04;
    return;
L_088C6C04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17448)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088C6C90;
      }
      goto L_088C6C18;
    }
L_088C6C18:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C6C34;
      }
      goto L_088C6C24;
    }
L_088C6C24:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (0u | 1u);
        goto L_088C6C90;
    }
    goto L_088C6C2C;
L_088C6C2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6C90;
      }
      goto L_088C6C34;
    }
L_088C6C34:
    ctx.gpr[31] = (0x088C6C3Cu);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 469u, 0x08809D90u>(ctx, &aot_mem) && ctx.pc == 0x088C6C3Cu) goto L_088C6C3C;
    return;
L_088C6C3C:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088C6C90;
      }
      goto L_088C6C48;
    }
L_088C6C48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17448)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x088C6C68u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 881u, 0x0882F7DCu>(ctx, &aot_mem) && ctx.pc == 0x088C6C68u) goto L_088C6C68;
    return;
L_088C6C68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17448)));
    ctx.gpr[31] = (0x088C6C74u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 761u, 0x0882EFC4u>(ctx, &aot_mem) && ctx.pc == 0x088C6C74u) goto L_088C6C74;
    return;
L_088C6C74:
    ctx.gpr[31] = (0x088C6C7Cu);
    // nop
    goto L_088C6CAC;
L_088C6C7C:
    ctx.gpr[31] = (0x088C6C84u);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 862u, 0x0881F4CCu>(ctx, &aot_mem) && ctx.pc == 0x088C6C84u) goto L_088C6C84;
    return;
L_088C6C84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17448)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088C6C90;
      }
      goto L_088C6C90;
    }
L_088C6C90:
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
L_088C6CAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_088C6CCC;
L_088C6CCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17448)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x088C6CF0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x088C6CF0u) goto L_088C6CF0;
    return;
L_088C6CF0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_088C6CCC;
      }
      goto L_088C6D00;
    }
L_088C6D00:
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
L_088C6D18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17448)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[16] = (2222u << 16u);
      if (branch_taken) {
          goto L_088C6D88;
      }
      goto L_088C6D48;
    }
L_088C6D48:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    goto L_088C6D50;
L_088C6D50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17448)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x088C6D60u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x088C6D60u) goto L_088C6D60;
    return;
L_088C6D60:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_088C6D50;
      }
      goto L_088C6D70;
    }
L_088C6D70:
    ctx.gpr[31] = (0x088C6D78u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 761u, 0x0882EFC4u>(ctx, &aot_mem) && ctx.pc == 0x088C6D78u) goto L_088C6D78;
    return;
L_088C6D78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17448)));
    ctx.gpr[31] = (0x088C6D84u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 742u, 0x0882EEA8u>(ctx, &aot_mem) && ctx.pc == 0x088C6D84u) goto L_088C6D84;
    return;
L_088C6D84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17448)));
    goto L_088C6D88;
L_088C6D88:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088C6D98u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C6D98u) goto L_088C6D98;
    return;
L_088C6D98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17448)));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
        goto L_088C6DC8;
    }
    goto L_088C6DB4;
L_088C6DB4:
    ctx.gpr[31] = (0x088C6DBCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x088C6DBCu) goto L_088C6DBC;
    return;
L_088C6DBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17448)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    goto L_088C6DC8;
L_088C6DC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088C6DD4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C6DD4u) goto L_088C6DD4;
    return;
L_088C6DD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17448)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088C6DECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C6DECu) goto L_088C6DEC;
    return;
L_088C6DEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17448)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088C6E04u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C6E04u) goto L_088C6E04;
    return;
L_088C6E04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17448)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
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
L_088C6E28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_088C6E48;
L_088C6E48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17448)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x088C6E58u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088C6E58u) goto L_088C6E58;
    return;
L_088C6E58:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_088C6E48;
      }
      goto L_088C6E68;
    }
L_088C6E68:
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
L_088C6E80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 360u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C6ED4u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C6ED4u) goto L_088C6ED4;
    return;
L_088C6ED4:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17448)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C6EF0u);
    ctx.gpr[6] = (0u | 360u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C6EF0u) goto L_088C6EF0;
    return;
L_088C6EF0:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (16720u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17263u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16736u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 24u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[30] = (ctx.gpr[6] << 24u);
    ctx.gpr[23] = (ctx.gpr[7] << 24u);
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[4] = (17245u << 16u);
    ctx.gpr[22] = (2220u << 16u);
    ctx.gpr[21] = (2220u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[30]) >> 24u));
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[23]) >> 24u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(17456));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-9908));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-9892));
    goto L_088C6F80;
L_088C6F80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17448)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088C6F98u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C6F98u) goto L_088C6F98;
    return;
L_088C6F98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17448)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[23]));
    ctx.gpr[31] = (0x088C7014u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x088C7014u) goto L_088C7014;
    return;
L_088C7014:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17448)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088C702Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C702Cu) goto L_088C702C;
    return;
L_088C702C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17448)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x088C703Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x088C703Cu) goto L_088C703C;
    return;
L_088C703C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088C6F80;
      }
      goto L_088C7050;
    }
L_088C7050:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
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
L_088C7090:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17448)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_088C70B8;
L_088C70B8:
    ctx.gpr[31] = (0x088C70C0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x088C70C0u) goto L_088C70C0;
    return;
L_088C70C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17448)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088C70B8;
      }
      goto L_088C70D8;
    }
L_088C70D8:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088C70ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C70ECu) goto L_088C70EC;
    return;
L_088C70EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17448)));
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
L_088C710C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17448)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C7218;
      }
      goto L_088C714C;
    }
L_088C714C:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    ctx.gpr[21] = (ctx.gpr[4] << 24u);
    ctx.gpr[22] = (ctx.gpr[5] << 24u);
    ctx.gpr[23] = (ctx.gpr[6] << 24u);
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 24u));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 24u));
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[23]) >> 24u));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(17456));
    goto L_088C7190;
L_088C7190:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17448)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x088C71ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C71ACu) goto L_088C71AC;
    return;
L_088C71AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17448)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x088C71C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C71C4u) goto L_088C71C4;
    return;
L_088C71C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17448)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[20] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(168));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x088C71F8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x088C71F8u) goto L_088C71F8;
    return;
L_088C71F8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(180));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088C7190;
      }
      goto L_088C720C;
    }
L_088C720C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[20]));
      if (branch_taken) {
          goto L_088C72EC;
      }
      goto L_088C7214;
    }
L_088C7214:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    goto L_088C7218;
L_088C7218:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 255u);
      if (branch_taken) {
          goto L_088C72EC;
      }
      goto L_088C7220;
    }
L_088C7220:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    ctx.gpr[20] = (ctx.gpr[4] << 24u);
    ctx.gpr[21] = (ctx.gpr[5] << 24u);
    ctx.gpr[22] = (ctx.gpr[6] << 24u);
    ctx.gpr[23] = (ctx.gpr[7] << 24u);
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 24u));
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 24u));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 24u));
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[23]) >> 24u));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(17456));
    goto L_088C7270;
L_088C7270:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17448)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x088C728Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C728Cu) goto L_088C728C;
    return;
L_088C728C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17448)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x088C72A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C72A4u) goto L_088C72A4;
    return;
L_088C72A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17448)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(168));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[23]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x088C72D0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x088C72D0u) goto L_088C72D0;
    return;
L_088C72D0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(180));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088C7270;
      }
      goto L_088C72E4;
    }
L_088C72E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C72EC;
      }
      goto L_088C72EC;
    }
L_088C72EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C7318:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_088C7338;
L_088C7338:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17448)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x088C7348u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088C7348u) goto L_088C7348;
    return;
L_088C7348:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_088C7338;
      }
      goto L_088C7358;
    }
L_088C7358:
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
L_088C7370:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17448)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C738C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2188u << 16u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C73A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26804));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x088C73A4u) goto L_088C73A4;
    return;
L_088C73A4:
    ctx.gpr[31] = (0x088C73ACu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 705u, 0x0884BCE4u>(ctx, &aot_mem) && ctx.pc == 0x088C73ACu) goto L_088C73AC;
    return;
L_088C73AC:
    ctx.gpr[31] = (0x088C73B4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 712u, 0x0884BD54u>(ctx, &aot_mem) && ctx.pc == 0x088C73B4u) goto L_088C73B4;
    return;
L_088C73B4:
    ctx.gpr[31] = (0x088C73BCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 713u, 0x0884BD6Cu>(ctx, &aot_mem) && ctx.pc == 0x088C73BCu) goto L_088C73BC;
    return;
L_088C73BC:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[5] = (2181u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4484));
    ctx.gpr[31] = (0x088C73D4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4252));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x088C73D4u) goto L_088C73D4;
    return;
L_088C73D4:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[5] = (2181u << 16u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3248));
    ctx.gpr[31] = (0x088C73ECu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3520));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x088C73ECu) goto L_088C73EC;
    return;
L_088C73EC:
    ctx.gpr[4] = (2183u << 16u);
    ctx.gpr[5] = (2183u << 16u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18136));
    ctx.gpr[31] = (0x088C7404u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18308));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x088C7404u) goto L_088C7404;
    return;
L_088C7404:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088C7410u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x088C7410u) goto L_088C7410;
    return;
L_088C7410:
    ctx.gpr[31] = (0x088C7418u);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 861u, 0x0881F4B4u>(ctx, &aot_mem) && ctx.pc == 0x088C7418u) goto L_088C7418;
    return;
L_088C7418:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C7424:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 276u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C7450u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7450u) goto L_088C7450;
    return;
L_088C7450:
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(17448)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088C746Cu);
    ctx.gpr[6] = (0u | 276u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C746Cu) goto L_088C746C;
    return;
L_088C746C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 16u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C7480u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7480u) goto L_088C7480;
    return;
L_088C7480:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(17448)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088C7498u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C7498u) goto L_088C7498;
    return;
L_088C7498:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(17448)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[31] = (0x088C74B8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883F120u>(ctx, &aot_mem) && ctx.pc == 0x088C74B8u) goto L_088C74B8;
    return;
L_088C74B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 144u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C74CCu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C74CCu) goto L_088C74CC;
    return;
L_088C74CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(17448)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088C74E4u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C74E4u) goto L_088C74E4;
    return;
L_088C74E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(17448)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 16u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C7504u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7504u) goto L_088C7504;
    return;
L_088C7504:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(17448)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088C7514u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 741u, 0x0882EE90u>(ctx, &aot_mem) && ctx.pc == 0x088C7514u) goto L_088C7514;
    return;
L_088C7514:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(17448)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17392u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17288u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17183u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17181u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17192u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17016u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17058u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (16512u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17311u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (17178u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[14] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[15] = (0u | 0u);
    goto L_088C75FC;
L_088C75FC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[24] = (ctx.gpr[6] & 255u);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_088C7648;
      }
      goto L_088C7610;
    }
L_088C7610:
    ctx.gpr[7] = (ctx.gpr[24] | 0u);
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    ctx.gpr[10] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (ctx.gpr[24] + ctx.gpr[11]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[24] = (ctx.gpr[25] + ctx.gpr[15]);
      if (branch_taken) {
          goto L_088C767C;
      }
      goto L_088C7648;
    }
L_088C7648:
    ctx.gpr[3] = (ctx.gpr[24] | 0u);
    ctx.gpr[12] = (ctx.gpr[3] | 0u);
    ctx.gpr[13] = (ctx.gpr[12] | 0u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[13]));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[13]));
    ctx.gpr[14] = (0u & 255u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[13]));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[14]));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (ctx.gpr[24] + ctx.gpr[11]);
    ctx.gpr[24] = (ctx.gpr[25] + ctx.gpr[15]);
    goto L_088C767C;
L_088C767C:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(36), ctx.gpr[24]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(92));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_088C75FC;
      }
      goto L_088C76A0;
    }
L_088C76A0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[3]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[13]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[14]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C76D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17448)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088C7848;
      }
      goto L_088C7700;
    }
L_088C7700:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[16]) < 6 ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (0u | 255u);
      if (branch_taken) {
          goto L_088C77BC;
      }
      goto L_088C7710;
    }
L_088C7710:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(184)));
    ctx.gpr[7] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[7] = (16640u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(188)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[7] = (ctx.gpr[16] << 4u);
    ctx.gpr[8] = (ctx.gpr[16] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(192)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(196)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(204));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x088C77B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x088C77B0u) goto L_088C77B0;
    return;
L_088C77B0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17448)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088C7918;
      }
      goto L_088C77BC;
    }
L_088C77BC:
    ctx.gpr[7] = (17088u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (16792u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (17296u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (17144u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(204));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x088C783Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x088C783Cu) goto L_088C783C;
    return;
L_088C783C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17448)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088C7918;
      }
      goto L_088C7848;
    }
L_088C7848:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_088C791C;
      }
      goto L_088C7854;
    }
L_088C7854:
    ctx.gpr[31] = (0x088C785Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 275u, 0x0883F12Cu>(ctx, &aot_mem) && ctx.pc == 0x088C785Cu) goto L_088C785C;
    return;
L_088C785C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17448)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (17088u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16792u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[7] = (17144u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (17296u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[6] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(204));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x088C7910u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x088C7910u) goto L_088C7910;
    return;
L_088C7910:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17448)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_088C7918;
L_088C7918:
    ctx.gpr[5] = (0u | 3u);
    goto L_088C791C;
L_088C791C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C79E0;
      }
      goto L_088C7924;
    }
L_088C7924:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7A70;
      }
      goto L_088C7930;
    }
L_088C7930:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[5] = (16640u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.gpr[8] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(29)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(30)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x088C79D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x088C79D8u) goto L_088C79D8;
    return;
L_088C79D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7A70;
      }
      goto L_088C79E0;
    }
L_088C79E0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7A70;
      }
      goto L_088C79E8;
    }
L_088C79E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (17198u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17196u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17162u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (16896u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x088C7A70u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x088C7A70u) goto L_088C7A70;
    return;
L_088C7A70:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C7A84:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17336)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(17340), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C7A98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 192u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C7AB8u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7AB8u) goto L_088C7AB8;
    return;
L_088C7AB8:
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(17472), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C7AD0u);
    ctx.gpr[6] = (0u | 192u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C7AD0u) goto L_088C7AD0;
    return;
L_088C7AD0:
    ctx.gpr[31] = (0x088C7AD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 24u, 0x088C8168u>(ctx, &aot_mem) && ctx.pc == 0x088C7AD8u) goto L_088C7AD8;
    return;
L_088C7AD8:
    ctx.gpr[31] = (0x088C7AE0u);
    // nop
    goto L_088C7DE4;
L_088C7AE0:
    ctx.gpr[31] = (0x088C7AE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 97u, 0x088C8654u>(ctx, &aot_mem) && ctx.pc == 0x088C7AE8u) goto L_088C7AE8;
    return;
L_088C7AE8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C7AF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C7B0Cu);
    // nop
    goto L_088C7E94;
L_088C7B0C:
    ctx.gpr[31] = (0x088C7B14u);
    // nop
    goto L_088C7FF0;
L_088C7B14:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088C7B30u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7B30u) goto L_088C7B30;
    return;
L_088C7B30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088C7B48u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7B48u) goto L_088C7B48;
    return;
L_088C7B48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088C7B60u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7B60u) goto L_088C7B60;
    return;
L_088C7B60:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17472), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C7B78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[17] = (0u | 2u);
      if (branch_taken) {
          goto L_088C7BBC;
      }
      goto L_088C7B9C;
    }
L_088C7B9C:
    ctx.gpr[31] = (0x088C7BA4u);
    // nop
    goto L_088C7D10;
L_088C7BA4:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C7BDC;
      }
      goto L_088C7BB0;
    }
L_088C7BB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088C7BDC;
      }
      goto L_088C7BBC;
    }
L_088C7BBC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088C7BDC;
      }
      goto L_088C7BCC;
    }
L_088C7BCC:
    ctx.gpr[31] = (0x088C7BD4u);
    // nop
    goto L_088C7F10;
L_088C7BD4:
    ctx.gpr[31] = (0x088C7BDCu);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 112u, 0x088C8A40u>(ctx, &aot_mem) && ctx.pc == 0x088C7BDCu) goto L_088C7BDC;
    return;
L_088C7BDC:
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
L_088C7BF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C7C34;
      }
      goto L_088C7C14;
    }
L_088C7C14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C7C34;
      }
      goto L_088C7C24;
    }
L_088C7C24:
    ctx.gpr[31] = (0x088C7C2Cu);
    // nop
    goto L_088C7FB8;
L_088C7C2C:
    ctx.gpr[31] = (0x088C7C34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 6u, 0x088C806Cu>(ctx, &aot_mem) && ctx.pc == 0x088C7C34u) goto L_088C7C34;
    return;
L_088C7C34:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C7C40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088C7CB0;
      }
      goto L_088C7C5C;
    }
L_088C7C5C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[31] = (0x088C7CB0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 194u, 0x0883E8C4u>(ctx, &aot_mem) && ctx.pc == 0x088C7CB0u) goto L_088C7CB0;
    return;
L_088C7CB0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C7CBC:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17472)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C7CCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C7CDCu);
    // nop
    goto L_088C7CBC;
L_088C7CDC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088C7D00;
      }
      goto L_088C7CE8;
    }
L_088C7CE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C7D00:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C7D10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[16] = (0u | 2u);
      if (branch_taken) {
          goto L_088C7D74;
      }
      goto L_088C7D40;
    }
L_088C7D40:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088C7DA0;
      }
      goto L_088C7D48;
    }
L_088C7D48:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17476)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088C7D5Cu);
    ctx.gpr[6] = (0u | 130u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 465u, 0x08809CF0u>(ctx, &aot_mem) && ctx.pc == 0x088C7D5Cu) goto L_088C7D5C;
    return;
L_088C7D5C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088C7DA0;
      }
      goto L_088C7D74;
    }
L_088C7D74:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_088C7DA4;
    }
    goto L_088C7D80;
L_088C7D80:
    ctx.gpr[31] = (0x088C7D88u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 469u, 0x08809D90u>(ctx, &aot_mem) && ctx.pc == 0x088C7D88u) goto L_088C7D88;
    return;
L_088C7D88:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088C7DA0;
      }
      goto L_088C7D98;
    }
L_088C7D98:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    goto L_088C7DA0;
L_088C7DA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_088C7DA4;
L_088C7DA4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088C7DC8;
      }
      goto L_088C7DAC;
    }
L_088C7DAC:
    ctx.gpr[31] = (0x088C7DB4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 42u, 0x088C82F0u>(ctx, &aot_mem) && ctx.pc == 0x088C7DB4u) goto L_088C7DB4;
    return;
L_088C7DB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088C7DC4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x088C7DC4u) goto L_088C7DC4;
    return;
L_088C7DC4:
    ctx.gpr[18] = (0u | 1u);
    goto L_088C7DC8;
L_088C7DC8:
    ctx.gpr[2] = (0u < ctx.gpr[18] ? 1u : 0u);
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
L_088C7DE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 92u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C7E0Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7E0Cu) goto L_088C7E0C;
    return;
L_088C7E0C:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17472)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088C7E28u);
    ctx.gpr[6] = (0u | 92u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C7E28u) goto L_088C7E28;
    return;
L_088C7E28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C7E38u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 24u, 0x0883C3CCu>(ctx, &aot_mem) && ctx.pc == 0x088C7E38u) goto L_088C7E38;
    return;
L_088C7E38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 464u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C7E4Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7E4Cu) goto L_088C7E4C;
    return;
L_088C7E4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17472)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088C7E64u);
    ctx.gpr[6] = (0u | 464u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C7E64u) goto L_088C7E64;
    return;
L_088C7E64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x088C7E80u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 158u, 0x0883E09Cu>(ctx, &aot_mem) && ctx.pc == 0x088C7E80u) goto L_088C7E80;
    return;
L_088C7E80:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C7E94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C7EB4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 39u, 0x0883C59Cu>(ctx, &aot_mem) && ctx.pc == 0x088C7EB4u) goto L_088C7EB4;
    return;
L_088C7EB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088C7ECCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7ECCu) goto L_088C7ECC;
    return;
L_088C7ECC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[31] = (0x088C7EE0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 89u, 0x0883CBF0u>(ctx, &aot_mem) && ctx.pc == 0x088C7EE0u) goto L_088C7EE0;
    return;
L_088C7EE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088C7EF4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7EF4u) goto L_088C7EF4;
    return;
L_088C7EF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C7F10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C7F60u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 39u, 0x0883C59Cu>(ctx, &aot_mem) && ctx.pc == 0x088C7F60u) goto L_088C7F60;
    return;
L_088C7F60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C7F70u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 24u, 0x0883C3CCu>(ctx, &aot_mem) && ctx.pc == 0x088C7F70u) goto L_088C7F70;
    return;
L_088C7F70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    ctx.gpr[31] = (0x088C7F9Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 194u, 0x0883E8C4u>(ctx, &aot_mem) && ctx.pc == 0x088C7F9Cu) goto L_088C7F9C;
    return;
L_088C7F9C:
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
L_088C7FB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C7FD4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 41u, 0x0883C5B8u>(ctx, &aot_mem) && ctx.pc == 0x088C7FD4u) goto L_088C7FD4;
    return;
L_088C7FD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17472)));
    ctx.gpr[31] = (0x088C7FE0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 94u, 0x0883CC48u>(ctx, &aot_mem) && ctx.pc == 0x088C7FE0u) goto L_088C7FE0;
    return;
L_088C7FE0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C7FF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17472)));
    ctx.pc = 0x088C8000u; return;
}

void recomp_unit_0048(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0048_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_48(Runtime &runtime) {
    runtime.register_generated_unit(48u, 0x088C4000u, 16384u, &recomp_unit_0048, &recomp_unit_0048_entry);
    runtime.register_function(0x088C4000u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4018u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4020u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4040u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C405Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4064u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C406Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4074u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C407Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4084u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4094u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C40C8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C40D4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C40DCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C40E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C40ECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C40F8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4124u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4130u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4138u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4140u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4144u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4148u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4168u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4170u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4178u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4184u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4194u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4198u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C41A8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C41E0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C41ECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C41F4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4258u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C42C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C42CCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C42E0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C42E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C42F0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C430Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4328u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4338u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4344u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4350u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4358u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4360u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4378u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4380u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C438Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4394u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4398u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C43A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C43A8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C43B4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C43BCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C43C0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C43C8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C43D0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C43DCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C43E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C43F8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4404u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C440Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4414u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C441Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4424u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4434u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4448u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4464u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4474u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4484u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C448Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C44A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C44ACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C44B4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C44BCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C44C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C44CCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C44D4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C44DCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C44E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C44ECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C44F4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C44FCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4504u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C450Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4514u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C451Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4524u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C452Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4534u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C453Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4544u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C454Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4554u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C455Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4564u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C456Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4574u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C457Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4584u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4598u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C45A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C45A8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C45B0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C45B8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C45C0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C45C8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C45D0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C45D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C45E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C45F8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4600u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4608u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4610u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4618u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4620u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4628u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4630u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4638u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4640u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4648u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C464Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4654u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4668u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C46CCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C46E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C46F8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C47C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4898u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C48ACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C48C8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4904u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C49DCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C49F8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4A2Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4A60u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4A70u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4A84u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4AA0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4AD8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4AECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4B08u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4BBCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4BD0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4BECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4C20u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4C34u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4C50u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4D00u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4D44u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4D98u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4DB8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4DD0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E68u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E84u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E90u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4EA4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4EC0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4ED0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4F5Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4F70u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4F7Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4F90u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4FACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4FC4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5060u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5074u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5080u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5094u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C50B0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C50D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C50F0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5188u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C51A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C51B0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C51C0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C51D4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C51F0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5210u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5228u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C52C0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C52D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C52E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C52F8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5338u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5370u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5378u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C53A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C53A8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C53B8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C53C8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C53CCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C53D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C53E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C53F4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5400u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5408u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5410u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5418u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C541Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5424u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C542Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5450u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5478u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5484u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5490u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C549Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C54ACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C54B8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C54C0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C54C8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C54D0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C54D4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C54DCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C54E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5508u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5530u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C553Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5548u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5554u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5564u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5570u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5578u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5580u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5588u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C558Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5594u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C559Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C55C0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C55E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C55F4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5600u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C560Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C561Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5628u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5630u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5638u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5640u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5644u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C564Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5654u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5678u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C56A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C56B8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C56C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C56D0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C56E0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C56ECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C56F4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C56FCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5704u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5708u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5710u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5718u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5748u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5770u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5778u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5790u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C57C0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C57D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C57F0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5800u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5814u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5824u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C583Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5844u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5854u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C586Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5874u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C587Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5890u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C58A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C58B8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C58C0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C58D0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C58E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C58F0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C58F8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5908u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5918u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5930u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5938u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5948u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5960u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5974u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C59B0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C59C8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C59E0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C59F0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C59FCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5A0Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5A24u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5A30u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5A38u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5A44u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5A54u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5A6Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5A7Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5A84u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5A90u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5AA0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5AB8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5AC4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5ACCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5ADCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5AECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5AFCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5B14u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5B24u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5B34u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5B4Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5B58u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5B60u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5B6Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5B7Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5B94u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5BB4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5BE8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5C00u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5C18u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5C28u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5C34u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5C44u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5C5Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5C68u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5C74u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5C84u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5C94u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5CACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5CB4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5CC4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5CDCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5CF4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5D28u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5D48u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5D58u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5D6Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5D84u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5D94u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5DA0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5DACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5DD0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5DD8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5DE4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5DECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5DFCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5E0Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5E18u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5E28u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5E30u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5E38u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5E5Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5E6Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5E74u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5E80u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5E94u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5EA4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5EACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5EB4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5EBCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5EC8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5EDCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5EF0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5EF8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5F00u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5F08u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5F14u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5F28u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5F38u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5F40u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5F48u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5F50u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5F60u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5F68u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5F78u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5F80u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5F88u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5F98u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5FA0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5FB0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5FB8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5FC8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5FD0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5FD8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5FE8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5FF0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5FF8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6008u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6014u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6028u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6038u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6040u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6048u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6054u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6064u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C606Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6074u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6084u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C608Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C609Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C60A4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C60B4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C60BCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C60C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C60D4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C60DCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C60ECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C60F4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6104u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C610Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6114u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6124u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C612Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C613Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6144u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6154u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C615Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6164u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6174u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C617Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C618Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6194u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C61A4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C61ACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C61B4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C61C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C61CCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C61DCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C61E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C61F4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C61FCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6204u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6214u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6218u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6224u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6234u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6248u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6258u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C626Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C627Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C628Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C62A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C62B4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C62C0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C62CCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C62E0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C62ECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C62FCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6304u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6310u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6320u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C632Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C633Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C634Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6354u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6360u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6378u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6388u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6398u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C63B8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C63C8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C63CCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C63D4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C63E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C63F4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C63FCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6408u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6420u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6430u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6440u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6460u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6470u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6474u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C647Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C648Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C649Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C64B4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C64C0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C64D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C64E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C64F8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6518u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6528u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C653Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6544u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6554u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6564u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6574u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6580u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6598u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C65A8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C65B8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C65D0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C65D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C65E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C65ECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6604u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6618u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6624u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C662Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C663Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6654u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6664u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6674u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6680u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6690u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6698u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C66A4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C66B8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C66DCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C66ECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C66F4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6748u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6760u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6778u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6780u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6788u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6790u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6794u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C67A4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C67D0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C67E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C680Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6824u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6838u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6850u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6858u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6860u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6868u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6870u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6880u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6890u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C68A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C68B4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C68CCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C68D4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C68DCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C68E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C68F4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C690Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6924u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C693Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6968u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6970u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6978u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6980u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6988u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6990u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C699Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C69ACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C69B8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C69C0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C69C8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C69D0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C69E0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C69E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6A00u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6A08u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6A18u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6A30u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6A38u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6A48u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6A50u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6A74u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6A7Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6A8Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6A94u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6AACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6ABCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6AC4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6AD8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6AECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6AFCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B04u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B0Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B14u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B18u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B20u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B28u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B40u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B48u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B68u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B70u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B78u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B84u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6BB0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6BB8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6BC8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6BECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6C04u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6C18u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6C24u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6C2Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6C34u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6C3Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6C48u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6C68u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6C74u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6C7Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6C84u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6C90u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6CACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6CCCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6CF0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6D00u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6D18u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6D48u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6D50u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6D60u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6D70u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6D78u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6D84u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6D88u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6D98u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6DB4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6DBCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6DC8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6DD4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6DECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6E04u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6E28u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6E48u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6E58u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6E68u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6E80u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6ED4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6EF0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6F80u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6F98u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7014u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C702Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C703Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7050u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7090u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C70B8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C70C0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C70D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C70ECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C710Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C714Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7190u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C71ACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C71C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C71F8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C720Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7214u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7218u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7220u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7270u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C728Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C72A4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C72D0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C72E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C72ECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7318u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7338u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7348u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7358u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7370u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C738Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C73A4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C73ACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C73B4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C73BCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C73D4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C73ECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7404u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7410u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7418u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7424u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7450u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C746Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7480u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7498u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C74B8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C74CCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C74E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7504u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7514u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C75FCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7610u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7648u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C767Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C76A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C76D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7700u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7710u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C77B0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C77BCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C783Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7848u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7854u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C785Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7910u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7918u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C791Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7924u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7930u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C79D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C79E0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C79E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7A70u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7A84u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7A98u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7AB8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7AD0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7AD8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7AE0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7AE8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7AF4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B0Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B14u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B30u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B48u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B60u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B78u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B9Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7BA4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7BB0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7BBCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7BCCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7BD4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7BDCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7BF4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C14u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C24u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C2Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C34u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C40u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C5Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7CB0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7CBCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7CCCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7CDCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7CE8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7D00u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7D10u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7D40u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7D48u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7D5Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7D74u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7D80u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7D88u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7D98u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7DA0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7DA4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7DACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7DB4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7DC4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7DC8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7DE4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7E0Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7E28u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7E38u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7E4Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7E64u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7E80u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7E94u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7EB4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7ECCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7EE0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7EF4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7F10u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7F60u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7F70u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7F9Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7FB8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7FD4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7FE0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7FF0u, &recomp_unit_0048, "recomp_unit_0048");
}
} // namespace psprecomp

#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0004[4088] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7,
    0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 13, 0, 0, 14,
    0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 21, 0, 0,
    22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0,
    0, 0, 27, 0, 0, 0, 0, 28, 0, 29, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 39,
    0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0,
    0, 44, 0, 0, 0, 0, 45, 0, 46, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0,
    0, 0, 52, 0, 0, 53, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0,
    0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0,
    0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 64, 65, 0, 66, 0, 0, 0, 67, 0, 0, 68, 0, 0, 69, 0, 0, 0, 70, 71,
    0, 72, 0, 73, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 78, 0, 0, 79, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 82, 83, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86,
    0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 90, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 93, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 98, 0, 99, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 104, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0,
    0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 115, 0, 0, 116, 0, 0, 117, 0, 118, 0, 119, 0, 0, 0,
    120, 0, 121, 0, 0, 0, 122, 0, 0, 123, 0, 124, 0, 125, 0, 0, 0, 126, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    129, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 132, 133, 0, 134, 0, 135, 0, 136, 0, 0, 0, 137, 0, 138, 0, 0, 0, 0,
    0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 142, 143, 0, 144, 0, 145, 0, 146, 0, 0, 0, 147, 0, 148, 0,
    0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 153, 0, 154, 0, 0, 155, 0,
    0, 0, 0, 156, 157, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 160, 161, 0, 162, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 174, 0, 0, 0, 175, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179,
    0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182, 183, 0, 0, 184, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0,
    188, 0, 0, 189, 190, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0,
    0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 199, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 203, 0,
    0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0,
    0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0,
    0, 0, 0, 214, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0,
    0, 221, 0, 0, 222, 0, 0, 223, 0, 224, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 228, 0, 0, 0,
    229, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0,
    235, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 239, 0, 240, 0, 0, 241, 0, 242, 0, 0, 243, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0,
    248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 251, 0, 0, 0, 0, 252, 0, 253, 0, 254, 0, 0, 0, 0, 0,
    255, 0, 0, 256, 0, 257, 0, 258, 0, 0, 259, 0, 260, 0, 261, 0, 262, 0, 263, 0, 0, 264, 0, 265, 0, 266, 0, 0, 0, 267, 0, 268,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 271, 272, 0, 0, 273, 0, 0, 0, 0, 274,
    0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0,
    0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 281, 0, 282, 0, 283, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0,
    0, 291, 0, 0, 0, 0, 292, 0, 293, 294, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 298, 0, 299, 0, 0, 0, 300, 301,
    302, 0, 303, 0, 0, 304, 305, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 309, 0, 310, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 316, 0, 0, 317, 0, 0,
    0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327,
    0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 330, 0, 0, 0, 331, 332, 0, 0, 333, 0, 0, 0, 0,
    0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 336, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0,
    0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 344,
    0, 0, 345, 0, 0, 0, 0, 346, 0, 347, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 351, 0, 0, 0, 0, 0, 0, 0,
    0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 363,
    0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 371,
    0, 372, 0, 373, 0, 374, 0, 375, 0, 376, 0, 377, 0, 378, 0, 0, 0, 0, 379, 0, 0, 380, 0, 381, 0, 0, 382, 0, 0, 383, 0, 384,
    0, 385, 0, 386, 0, 0, 387, 0, 388, 0, 389, 390, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 392, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 396,
    0, 0, 0, 0, 397, 0, 0, 398, 0, 0, 0, 399, 0, 0, 400, 401, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0,
    0, 0, 404, 0, 405, 0, 0, 406, 0, 407, 0, 408, 0, 409, 0, 0, 410, 0, 411, 0, 412, 0, 413, 0, 414, 0, 415, 0, 416, 0, 0, 0,
    417, 0, 418, 0, 0, 419, 0, 420, 0, 421, 0, 422, 423, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 425, 0, 426, 0, 427,
    0, 428, 0, 0, 0, 429, 0, 430, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    434, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 437, 0, 438, 0, 0, 0, 0, 439, 0, 0, 440, 0, 441, 0, 442, 0, 443, 0, 0,
    0, 444, 0, 0, 0, 445, 0, 446, 447, 0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 452, 0, 0, 453, 0, 0, 0, 454, 0, 0, 455, 0, 456, 0, 457, 0, 0, 458, 0, 459, 0, 460,
    0, 461, 0, 0, 0, 462, 0, 463, 0, 0, 0, 464, 0, 0, 0, 465, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 469, 0, 470, 0, 0, 0, 0, 471, 0, 472, 0, 0, 0, 473, 0, 474, 0, 0, 475, 0,
    0, 0, 476, 0, 0, 477, 478, 0, 479, 0, 0, 0, 0, 480, 0, 0, 0, 0, 481, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 487, 0, 0, 488, 0,
    0, 489, 0, 490, 0, 0, 0, 0, 491, 0, 0, 0, 0, 492, 0, 0, 0, 0, 493, 0, 494, 0, 0, 495, 0, 496, 0, 497, 0, 0, 0, 498,
    0, 499, 500, 0, 501, 0, 0, 0, 0, 0, 0, 502, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0,
    0, 0, 0, 508, 0, 509, 510, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 514, 0, 515,
    0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 517, 0, 0, 0, 518, 0, 0, 519, 0, 520, 0, 0, 0, 0, 0, 521, 0, 0, 522, 0, 0,
    0, 523, 0, 0, 524, 0, 0, 0, 0, 0, 525, 0, 0, 0, 526, 0, 0, 527, 528, 0, 529, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 533, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 536, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 539, 0, 540, 0, 541, 0, 542, 543, 544, 0, 0,
    0, 545, 546, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 550, 0, 551, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 554, 0, 0, 555, 0,
    556, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 558, 0, 0, 0, 559, 0, 560, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0,
    0, 0, 0, 562, 0, 0, 0, 563, 0, 0, 0, 0, 564, 565, 0, 0, 0, 0, 566, 0, 0, 0, 567, 0, 0, 0, 568, 0, 0, 0, 0, 0,
    569, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 571, 0, 0, 0, 572, 0, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 577, 0, 578, 0, 0, 0, 579,
    0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 581, 0, 0, 0, 0, 582, 0, 0, 0, 0, 583, 584, 0, 0, 0, 585, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 588, 589, 0, 0, 590, 0, 591, 0, 592,
    0, 593, 594, 0, 595, 596, 0, 0, 597, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 601, 0, 0, 602, 0, 603, 0, 0, 0, 604, 605, 0, 0, 0, 0, 0, 0,
    606, 0, 0, 0, 607, 608, 0, 0, 0, 0, 0, 609, 0, 610, 0, 0, 0, 0, 611, 0, 612, 0, 613, 0, 614, 0, 0, 0, 0, 615, 0, 0,
    0, 0, 0, 0, 616, 0, 0, 0, 0, 617, 0, 618, 0, 619, 0, 0, 0, 0, 620, 621, 622, 0, 0, 623, 0, 624, 0, 0, 0, 625, 0, 0,
    0, 0, 626, 0, 627, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 630, 631, 0, 0, 0, 632, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 634, 635, 0, 0, 636, 0, 637, 0, 638, 0, 639, 640,
    0, 641, 642, 0, 0, 643, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 646, 0, 0, 647, 0, 0, 648, 0, 0, 0, 0, 0, 649, 0, 0, 650, 0, 651, 0, 0, 0, 0, 652, 0, 653, 0, 0, 0,
    654, 655, 0, 0, 0, 656, 0, 657, 0, 0, 0, 0, 658, 0, 0, 0, 659, 660, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 662, 0, 0, 663,
    0, 664, 0, 665, 0, 0, 666, 0, 667, 0, 0, 668, 0, 0, 669, 0, 670, 0, 671, 0, 0, 672, 0, 673, 0, 0, 674, 0, 0, 675, 0, 676,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 0, 0, 678, 0,
    679, 0, 0, 680, 0, 0, 0, 681, 0, 0, 0, 0, 682, 0, 683, 0, 0, 684, 0, 0, 685, 0, 686, 0, 687, 0, 688, 0, 689, 0, 690, 0,
    691, 0, 692, 0, 0, 0, 0, 0, 693, 0, 0, 694, 0, 0, 695, 0, 696, 697, 0, 0, 0, 698, 699, 0, 0, 0, 700, 0, 0, 0, 0, 701,
    0, 702, 0, 703, 0, 0, 0, 0, 704, 705, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 708, 0, 709, 0, 0, 0, 0, 0, 0, 710, 0, 0, 711, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 713, 0, 0, 0, 0, 0, 0, 714, 0, 715, 0, 716, 0, 717, 0, 718, 0, 0, 719, 0, 0, 720, 0, 721, 0, 0, 722, 0, 723, 0,
    724, 0, 0, 725, 0, 726, 0, 727, 0, 728, 0, 729, 0, 730, 0, 731, 0, 0, 732, 0, 0, 733, 0, 0, 734, 0, 0, 735, 0, 0, 0, 0,
    0, 736, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 737, 0, 0, 738, 0, 739, 0, 740, 0, 741, 0, 742, 0, 743, 0, 744, 0, 745,
    0, 0, 0, 746, 0, 747, 0, 748, 0, 0, 749, 0, 750, 0, 751, 0, 752, 0, 0, 753, 0, 754, 0, 755, 0, 756, 0, 757, 0, 0, 0, 758,
    0, 0, 0, 0, 759, 0, 0, 0, 0, 0, 760, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 761, 0, 0, 762, 0, 763, 0, 0,
    764, 0, 0, 0, 765, 0, 0, 0, 0, 0, 0, 0, 766, 0, 0, 767, 0, 0, 0, 768, 0, 769, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 770, 0, 771, 0, 772, 0, 0, 0, 773, 0, 0, 0, 774, 0, 775, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 776, 0, 0, 777, 0, 0, 0, 0, 0, 0, 0, 778, 0, 779, 0, 0, 0, 0, 0, 780, 0, 0, 781, 0, 782, 0, 0, 0, 0, 0,
    0, 0, 0, 783, 0, 0, 0, 0, 0, 0, 784, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 785, 0, 0, 0, 0, 0, 786, 0, 0, 0,
    0, 0, 0, 0, 0, 787, 0, 0, 0, 0, 0, 0, 788, 0, 789, 0, 0, 0, 0, 0, 0, 0, 0, 0, 790, 0, 0, 0, 0, 791, 0, 0,
    792, 0, 0, 0, 0, 793, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 794, 0, 795, 0, 0, 796, 0, 0, 797, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 798, 0, 0, 0, 0, 799, 0, 0, 800, 0, 0, 0, 801, 0, 0, 0, 0, 0, 802, 0, 0, 0, 0, 0, 803, 0, 0, 804,
    0, 0, 0, 805, 0, 806, 0, 807, 0, 0, 808, 0, 0, 0, 0, 0, 0, 0, 0, 0, 809, 0, 0, 810, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 811, 0, 0, 0, 0, 812, 0, 0, 813, 814, 0, 0, 815, 0, 0, 0, 816, 0, 0, 0, 0, 0, 0, 0, 0, 0, 817, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 818, 0, 0, 819, 0, 0, 0, 0, 0, 0, 0, 0, 0, 820, 0, 0, 0, 0, 821, 0, 822, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 823, 0, 0, 824, 825, 0, 826, 0, 827, 0, 0, 0, 0, 0, 828, 0, 0, 0, 0, 0, 829, 0, 0, 830, 0,
    0, 0, 831, 0, 832, 0, 833, 0, 0, 0, 0, 0, 0, 0, 0, 834, 0, 0, 0, 835, 0, 0, 0, 0, 0, 0, 0, 0, 0, 836, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 837, 0, 0, 0, 838, 0, 0, 0, 0, 839, 840,
    0, 0, 841, 0, 0, 0, 0, 842, 0, 0, 0, 0, 843, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 844, 0, 845, 0, 0, 0, 0, 0, 0, 846, 0, 0, 0, 847, 0, 848, 0, 0, 0, 0, 0, 0, 849, 0, 0, 0, 850, 0,
    851, 0, 0, 0, 0, 0, 0, 852, 0, 0, 0, 853, 0, 854, 0, 0, 0, 0, 0, 0, 855, 0, 0, 0, 856, 0, 857, 0, 0, 0, 0, 0,
    0, 858, 0, 0, 0, 859, 0, 0, 0, 860, 0, 0, 861, 0, 862, 0, 0, 0, 863, 0, 0, 0, 864, 0, 0, 0, 0, 865, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 866, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 867, 868, 0, 0, 0, 869, 0, 0, 0, 870, 0, 871, 0, 0,
    0, 872, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 873, 0, 0, 0, 0, 0, 874, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 875, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 876, 0, 0, 0, 0, 0, 0, 0, 877, 0, 878,
};
void recomp_unit_0004_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08814004u;
        entry_id = (entry_delta < 16352u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0004[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08814004;
    case 2u: goto L_08814018;
    case 3u: goto L_08814028;
    case 4u: goto L_08814048;
    case 5u: goto L_08814050;
    case 6u: goto L_08814060;
    case 7u: goto L_08814080;
    case 8u: goto L_0881408C;
    case 9u: goto L_08814098;
    case 10u: goto L_088140AC;
    case 11u: goto L_088140D8;
    case 12u: goto L_088140EC;
    case 13u: goto L_088140F4;
    case 14u: goto L_08814100;
    case 15u: goto L_08814114;
    case 16u: goto L_08814128;
    case 17u: goto L_0881413C;
    case 18u: goto L_08814148;
    case 19u: goto L_0881415C;
    case 20u: goto L_08814168;
    case 21u: goto L_08814178;
    case 22u: goto L_08814184;
    case 23u: goto L_08814198;
    case 24u: goto L_088141AC;
    case 25u: goto L_088141C4;
    case 26u: goto L_088141F8;
    case 27u: goto L_0881420C;
    case 28u: goto L_08814220;
    case 29u: goto L_08814228;
    case 30u: goto L_08814234;
    case 31u: goto L_08814248;
    case 32u: goto L_0881425C;
    case 33u: goto L_08814294;
    case 34u: goto L_088142A0;
    case 35u: goto L_088142B4;
    case 36u: goto L_088142C0;
    case 37u: goto L_088142E0;
    case 38u: goto L_088142EC;
    case 39u: goto L_08814300;
    case 40u: goto L_08814314;
    case 41u: goto L_08814328;
    case 42u: goto L_08814348;
    case 43u: goto L_08814374;
    case 44u: goto L_08814388;
    case 45u: goto L_0881439C;
    case 46u: goto L_088143A4;
    case 47u: goto L_088143B0;
    case 48u: goto L_088143C4;
    case 49u: goto L_088143D8;
    case 50u: goto L_088143EC;
    case 51u: goto L_088143F8;
    case 52u: goto L_0881440C;
    case 53u: goto L_08814418;
    case 54u: goto L_08814428;
    case 55u: goto L_08814434;
    case 56u: goto L_08814448;
    case 57u: goto L_0881445C;
    case 58u: goto L_08814470;
    case 59u: goto L_08814488;
    case 60u: goto L_088144CC;
    case 61u: goto L_088144F8;
    case 62u: goto L_08814514;
    case 63u: goto L_0881451C;
    case 64u: goto L_08814538;
    case 65u: goto L_0881453C;
    case 66u: goto L_08814544;
    case 67u: goto L_08814554;
    case 68u: goto L_08814560;
    case 69u: goto L_0881456C;
    case 70u: goto L_0881457C;
    case 71u: goto L_08814580;
    case 72u: goto L_08814588;
    case 73u: goto L_08814590;
    case 74u: goto L_088145A0;
    case 75u: goto L_088145AC;
    case 76u: goto L_088145D0;
    case 77u: goto L_088145DC;
    case 78u: goto L_088145EC;
    case 79u: goto L_088145F8;
    case 80u: goto L_08814620;
    case 81u: goto L_0881463C;
    case 82u: goto L_08814644;
    case 83u: goto L_08814648;
    case 84u: goto L_08814650;
    case 85u: goto L_08814674;
    case 86u: goto L_08814680;
    case 87u: goto L_08814690;
    case 88u: goto L_088146B0;
    case 89u: goto L_088146CC;
    case 90u: goto L_088146D4;
    case 91u: goto L_088146D8;
    case 92u: goto L_088146E0;
    case 93u: goto L_08814708;
    case 94u: goto L_08814714;
    case 95u: goto L_08814720;
    case 96u: goto L_0881473C;
    case 97u: goto L_08814748;
    case 98u: goto L_08814750;
    case 99u: goto L_08814758;
    case 100u: goto L_08814764;
    case 101u: goto L_0881478C;
    case 102u: goto L_088147A8;
    case 103u: goto L_088147B0;
    case 104u: goto L_088147B8;
    case 105u: goto L_088147C4;
    case 106u: goto L_088147D8;
    case 107u: goto L_088147F0;
    case 108u: goto L_0881480C;
    case 109u: goto L_0881481C;
    case 110u: goto L_08814830;
    case 111u: goto L_08814864;
    case 112u: goto L_0881489C;
    case 113u: goto L_088148B0;
    case 114u: goto L_088148BC;
    case 115u: goto L_088148CC;
    case 116u: goto L_088148D8;
    case 117u: goto L_088148E4;
    case 118u: goto L_088148EC;
    case 119u: goto L_088148F4;
    case 120u: goto L_08814904;
    case 121u: goto L_0881490C;
    case 122u: goto L_0881491C;
    case 123u: goto L_08814928;
    case 124u: goto L_08814930;
    case 125u: goto L_08814938;
    case 126u: goto L_08814948;
    case 127u: goto L_08814950;
    case 128u: goto L_0881495C;
    case 129u: goto L_08814984;
    case 130u: goto L_088149A0;
    case 131u: goto L_088149A8;
    case 132u: goto L_088149BC;
    case 133u: goto L_088149C0;
    case 134u: goto L_088149C8;
    case 135u: goto L_088149D0;
    case 136u: goto L_088149D8;
    case 137u: goto L_088149E8;
    case 138u: goto L_088149F0;
    case 139u: goto L_08814A10;
    case 140u: goto L_08814A2C;
    case 141u: goto L_08814A34;
    case 142u: goto L_08814A48;
    case 143u: goto L_08814A4C;
    case 144u: goto L_08814A54;
    case 145u: goto L_08814A5C;
    case 146u: goto L_08814A64;
    case 147u: goto L_08814A74;
    case 148u: goto L_08814A7C;
    case 149u: goto L_08814A88;
    case 150u: goto L_08814AB0;
    case 151u: goto L_08814ACC;
    case 152u: goto L_08814AD4;
    case 153u: goto L_08814AE8;
    case 154u: goto L_08814AF0;
    case 155u: goto L_08814AFC;
    case 156u: goto L_08814B10;
    case 157u: goto L_08814B14;
    case 158u: goto L_08814B24;
    case 159u: goto L_08814B34;
    case 160u: goto L_08814B58;
    case 161u: goto L_08814B5C;
    case 162u: goto L_08814B64;
    case 163u: goto L_08814B8C;
    case 164u: goto L_08814BA0;
    case 165u: goto L_08814BC0;
    case 166u: goto L_08814BCC;
    case 167u: goto L_08814BE0;
    case 168u: goto L_08814BEC;
    case 169u: goto L_08814C1C;
    case 170u: goto L_08814C2C;
    case 171u: goto L_08814C38;
    case 172u: goto L_08814C44;
    case 173u: goto L_08814C5C;
    case 174u: goto L_08814C88;
    case 175u: goto L_08814C98;
    case 176u: goto L_08814CA4;
    case 177u: goto L_08814CB0;
    case 178u: goto L_08814CC8;
    case 179u: goto L_08814D00;
    case 180u: goto L_08814D0C;
    case 181u: goto L_08814D28;
    case 182u: goto L_08814D34;
    case 183u: goto L_08814D38;
    case 184u: goto L_08814D44;
    case 185u: goto L_08814D4C;
    case 186u: goto L_08814D5C;
    case 187u: goto L_08814D78;
    case 188u: goto L_08814D84;
    case 189u: goto L_08814D90;
    case 190u: goto L_08814D94;
    case 191u: goto L_08814DA0;
    case 192u: goto L_08814DDC;
    case 193u: goto L_08814DF0;
    case 194u: goto L_08814E0C;
    case 195u: goto L_08814E30;
    case 196u: goto L_08814E44;
    case 197u: goto L_08814E5C;
    case 198u: goto L_08814E68;
    case 199u: goto L_08814E70;
    case 200u: goto L_08814EA4;
    case 201u: goto L_08814EE4;
    case 202u: goto L_08814EF0;
    case 203u: goto L_08814EFC;
    case 204u: goto L_08814F10;
    case 205u: goto L_08814F2C;
    case 206u: goto L_08814F40;
    case 207u: goto L_08814F58;
    case 208u: goto L_08814F68;
    case 209u: goto L_08814F7C;
    case 210u: goto L_08814F8C;
    case 211u: goto L_08814F9C;
    case 212u: goto L_08814FB0;
    case 213u: goto L_08814FF0;
    case 214u: goto L_08815010;
    case 215u: goto L_08815018;
    case 216u: goto L_08815028;
    case 217u: goto L_08815048;
    case 218u: goto L_0881504C;
    case 219u: goto L_08815058;
    case 220u: goto L_0881507C;
    case 221u: goto L_08815088;
    case 222u: goto L_08815094;
    case 223u: goto L_088150A0;
    case 224u: goto L_088150A8;
    case 225u: goto L_088150B0;
    case 226u: goto L_088150D0;
    case 227u: goto L_088150EC;
    case 228u: goto L_088150F4;
    case 229u: goto L_08815104;
    case 230u: goto L_08815128;
    case 231u: goto L_08815130;
    case 232u: goto L_08815144;
    case 233u: goto L_08815158;
    case 234u: goto L_08815168;
    case 235u: goto L_08815184;
    case 236u: goto L_0881518C;
    case 237u: goto L_088151A0;
    case 238u: goto L_088151B8;
    case 239u: goto L_088151C0;
    case 240u: goto L_088151C8;
    case 241u: goto L_088151D4;
    case 242u: goto L_088151DC;
    case 243u: goto L_088151E8;
    case 244u: goto L_08815228;
    case 245u: goto L_08815248;
    case 246u: goto L_0881525C;
    case 247u: goto L_08815270;
    case 248u: goto L_08815284;
    case 249u: goto L_088152A0;
    case 250u: goto L_088152C0;
    case 251u: goto L_088152C8;
    case 252u: goto L_088152DC;
    case 253u: goto L_088152E4;
    case 254u: goto L_088152EC;
    case 255u: goto L_08815304;
    case 256u: goto L_08815310;
    case 257u: goto L_08815318;
    case 258u: goto L_08815320;
    case 259u: goto L_0881532C;
    case 260u: goto L_08815334;
    case 261u: goto L_0881533C;
    case 262u: goto L_08815344;
    case 263u: goto L_0881534C;
    case 264u: goto L_08815358;
    case 265u: goto L_08815360;
    case 266u: goto L_08815368;
    case 267u: goto L_08815378;
    case 268u: goto L_08815380;
    case 269u: goto L_088153B8;
    case 270u: goto L_088153D4;
    case 271u: goto L_088153DC;
    case 272u: goto L_088153E0;
    case 273u: goto L_088153EC;
    case 274u: goto L_08815400;
    case 275u: goto L_08815414;
    case 276u: goto L_08815444;
    case 277u: goto L_08815470;
    case 278u: goto L_0881548C;
    case 279u: goto L_088154A0;
    case 280u: goto L_088154B0;
    case 281u: goto L_088154C0;
    case 282u: goto L_088154C8;
    case 283u: goto L_088154D0;
    case 284u: goto L_088154D8;
    case 285u: goto L_08815514;
    case 286u: goto L_08815528;
    case 287u: goto L_0881553C;
    case 288u: goto L_08815554;
    case 289u: goto L_08815560;
    case 290u: goto L_08815574;
    case 291u: goto L_08815588;
    case 292u: goto L_0881559C;
    case 293u: goto L_088155A4;
    case 294u: goto L_088155A8;
    case 295u: goto L_088155B8;
    case 296u: goto L_088155CC;
    case 297u: goto L_088155DC;
    case 298u: goto L_088155E4;
    case 299u: goto L_088155EC;
    case 300u: goto L_088155FC;
    case 301u: goto L_08815600;
    case 302u: goto L_08815604;
    case 303u: goto L_0881560C;
    case 304u: goto L_08815618;
    case 305u: goto L_0881561C;
    case 306u: goto L_0881562C;
    case 307u: goto L_08815640;
    case 308u: goto L_0881565C;
    case 309u: goto L_08815688;
    case 310u: goto L_08815690;
    case 311u: goto L_0881569C;
    case 312u: goto L_088156B0;
    case 313u: goto L_088156BC;
    case 314u: goto L_088156D0;
    case 315u: goto L_088156DC;
    case 316u: goto L_088156EC;
    case 317u: goto L_088156F8;
    case 318u: goto L_0881570C;
    case 319u: goto L_08815724;
    case 320u: goto L_08815750;
    case 321u: goto L_08815768;
    case 322u: goto L_08815778;
    case 323u: goto L_088157A4;
    case 324u: goto L_088157B4;
    case 325u: goto L_088157D0;
    case 326u: goto L_088157F0;
    case 327u: goto L_08815800;
    case 328u: goto L_08815814;
    case 329u: goto L_08815848;
    case 330u: goto L_08815850;
    case 331u: goto L_08815860;
    case 332u: goto L_08815864;
    case 333u: goto L_08815870;
    case 334u: goto L_08815890;
    case 335u: goto L_088158B8;
    case 336u: goto L_088158C0;
    case 337u: goto L_088158C8;
    case 338u: goto L_088158F8;
    case 339u: goto L_08815914;
    case 340u: goto L_08815930;
    case 341u: goto L_08815938;
    case 342u: goto L_08815954;
    case 343u: goto L_08815974;
    case 344u: goto L_08815980;
    case 345u: goto L_0881598C;
    case 346u: goto L_088159A0;
    case 347u: goto L_088159A8;
    case 348u: goto L_088159B8;
    case 349u: goto L_088159C4;
    case 350u: goto L_088159DC;
    case 351u: goto L_088159E4;
    case 352u: goto L_08815A08;
    case 353u: goto L_08815A2C;
    case 354u: goto L_08815A38;
    case 355u: goto L_08815A4C;
    case 356u: goto L_08815A68;
    case 357u: goto L_08815AB0;
    case 358u: goto L_08815AD4;
    case 359u: goto L_08815B1C;
    case 360u: goto L_08815B30;
    case 361u: goto L_08815B3C;
    case 362u: goto L_08815B68;
    case 363u: goto L_08815B80;
    case 364u: goto L_08815B94;
    case 365u: goto L_08815BD4;
    case 366u: goto L_08815C14;
    case 367u: goto L_08815C40;
    case 368u: goto L_08815C54;
    case 369u: goto L_08815C6C;
    case 370u: goto L_08815C78;
    case 371u: goto L_08815C80;
    case 372u: goto L_08815C88;
    case 373u: goto L_08815C90;
    case 374u: goto L_08815C98;
    case 375u: goto L_08815CA0;
    case 376u: goto L_08815CA8;
    case 377u: goto L_08815CB0;
    case 378u: goto L_08815CB8;
    case 379u: goto L_08815CCC;
    case 380u: goto L_08815CD8;
    case 381u: goto L_08815CE0;
    case 382u: goto L_08815CEC;
    case 383u: goto L_08815CF8;
    case 384u: goto L_08815D00;
    case 385u: goto L_08815D08;
    case 386u: goto L_08815D10;
    case 387u: goto L_08815D1C;
    case 388u: goto L_08815D24;
    case 389u: goto L_08815D2C;
    case 390u: goto L_08815D30;
    case 391u: goto L_08815D3C;
    case 392u: goto L_08815D94;
    case 393u: goto L_08815D9C;
    case 394u: goto L_08815DAC;
    case 395u: goto L_08815DE0;
    case 396u: goto L_08815E00;
    case 397u: goto L_08815E14;
    case 398u: goto L_08815E20;
    case 399u: goto L_08815E30;
    case 400u: goto L_08815E3C;
    case 401u: goto L_08815E40;
    case 402u: goto L_08815E54;
    case 403u: goto L_08815E7C;
    case 404u: goto L_08815E8C;
    case 405u: goto L_08815E94;
    case 406u: goto L_08815EA0;
    case 407u: goto L_08815EA8;
    case 408u: goto L_08815EB0;
    case 409u: goto L_08815EB8;
    case 410u: goto L_08815EC4;
    case 411u: goto L_08815ECC;
    case 412u: goto L_08815ED4;
    case 413u: goto L_08815EDC;
    case 414u: goto L_08815EE4;
    case 415u: goto L_08815EEC;
    case 416u: goto L_08815EF4;
    case 417u: goto L_08815F04;
    case 418u: goto L_08815F0C;
    case 419u: goto L_08815F18;
    case 420u: goto L_08815F20;
    case 421u: goto L_08815F28;
    case 422u: goto L_08815F30;
    case 423u: goto L_08815F34;
    case 424u: goto L_08815F54;
    case 425u: goto L_08815F70;
    case 426u: goto L_08815F78;
    case 427u: goto L_08815F80;
    case 428u: goto L_08815F88;
    case 429u: goto L_08815F98;
    case 430u: goto L_08815FA0;
    case 431u: goto L_08815FA8;
    case 432u: goto L_08815FB8;
    case 433u: goto L_08815FCC;
    case 434u: goto L_08816004;
    case 435u: goto L_08816018;
    case 436u: goto L_08816028;
    case 437u: goto L_08816038;
    case 438u: goto L_08816040;
    case 439u: goto L_08816054;
    case 440u: goto L_08816060;
    case 441u: goto L_08816068;
    case 442u: goto L_08816070;
    case 443u: goto L_08816078;
    case 444u: goto L_08816088;
    case 445u: goto L_08816098;
    case 446u: goto L_088160A0;
    case 447u: goto L_088160A4;
    case 448u: goto L_088160B8;
    case 449u: goto L_088160C8;
    case 450u: goto L_088160F8;
    case 451u: goto L_08816124;
    case 452u: goto L_0881612C;
    case 453u: goto L_08816138;
    case 454u: goto L_08816148;
    case 455u: goto L_08816154;
    case 456u: goto L_0881615C;
    case 457u: goto L_08816164;
    case 458u: goto L_08816170;
    case 459u: goto L_08816178;
    case 460u: goto L_08816180;
    case 461u: goto L_08816188;
    case 462u: goto L_08816198;
    case 463u: goto L_088161A0;
    case 464u: goto L_088161B0;
    case 465u: goto L_088161C0;
    case 466u: goto L_088161D4;
    case 467u: goto L_088161F8;
    case 468u: goto L_08816228;
    case 469u: goto L_08816234;
    case 470u: goto L_0881623C;
    case 471u: goto L_08816250;
    case 472u: goto L_08816258;
    case 473u: goto L_08816268;
    case 474u: goto L_08816270;
    case 475u: goto L_0881627C;
    case 476u: goto L_0881628C;
    case 477u: goto L_08816298;
    case 478u: goto L_0881629C;
    case 479u: goto L_088162A4;
    case 480u: goto L_088162B8;
    case 481u: goto L_088162CC;
    case 482u: goto L_088162D0;
    case 483u: goto L_088162F8;
    case 484u: goto L_0881632C;
    case 485u: goto L_08816338;
    case 486u: goto L_08816364;
    case 487u: goto L_08816370;
    case 488u: goto L_0881637C;
    case 489u: goto L_08816388;
    case 490u: goto L_08816390;
    case 491u: goto L_088163A4;
    case 492u: goto L_088163B8;
    case 493u: goto L_088163CC;
    case 494u: goto L_088163D4;
    case 495u: goto L_088163E0;
    case 496u: goto L_088163E8;
    case 497u: goto L_088163F0;
    case 498u: goto L_08816400;
    case 499u: goto L_08816408;
    case 500u: goto L_0881640C;
    case 501u: goto L_08816414;
    case 502u: goto L_08816430;
    case 503u: goto L_08816438;
    case 504u: goto L_0881645C;
    case 505u: goto L_0881649C;
    case 506u: goto L_088164C0;
    case 507u: goto L_088164FC;
    case 508u: goto L_08816510;
    case 509u: goto L_08816518;
    case 510u: goto L_0881651C;
    case 511u: goto L_08816528;
    case 512u: goto L_0881654C;
    case 513u: goto L_0881655C;
    case 514u: goto L_08816578;
    case 515u: goto L_08816580;
    case 516u: goto L_0881659C;
    case 517u: goto L_088165B0;
    case 518u: goto L_088165C0;
    case 519u: goto L_088165CC;
    case 520u: goto L_088165D4;
    case 521u: goto L_088165EC;
    case 522u: goto L_088165F8;
    case 523u: goto L_08816608;
    case 524u: goto L_08816614;
    case 525u: goto L_0881662C;
    case 526u: goto L_0881663C;
    case 527u: goto L_08816648;
    case 528u: goto L_0881664C;
    case 529u: goto L_08816654;
    case 530u: goto L_08816668;
    case 531u: goto L_08816698;
    case 532u: goto L_088166DC;
    case 533u: goto L_088166EC;
    case 534u: goto L_08816714;
    case 535u: goto L_08816764;
    case 536u: goto L_0881678C;
    case 537u: goto L_088167A4;
    case 538u: goto L_088167BC;
    case 539u: goto L_088167D8;
    case 540u: goto L_088167E0;
    case 541u: goto L_088167E8;
    case 542u: goto L_088167F0;
    case 543u: goto L_088167F4;
    case 544u: goto L_088167F8;
    case 545u: goto L_08816808;
    case 546u: goto L_0881680C;
    case 547u: goto L_08816828;
    case 548u: goto L_08816858;
    case 549u: goto L_08816894;
    case 550u: goto L_088168AC;
    case 551u: goto L_088168B4;
    case 552u: goto L_088168C4;
    case 553u: goto L_088168E0;
    case 554u: goto L_088168F0;
    case 555u: goto L_088168FC;
    case 556u: goto L_08816904;
    case 557u: goto L_08816928;
    case 558u: goto L_0881693C;
    case 559u: goto L_0881694C;
    case 560u: goto L_08816954;
    case 561u: goto L_0881696C;
    case 562u: goto L_08816990;
    case 563u: goto L_088169A0;
    case 564u: goto L_088169B4;
    case 565u: goto L_088169B8;
    case 566u: goto L_088169CC;
    case 567u: goto L_088169DC;
    case 568u: goto L_088169EC;
    case 569u: goto L_08816A04;
    case 570u: goto L_08816A24;
    case 571u: goto L_08816A34;
    case 572u: goto L_08816A44;
    case 573u: goto L_08816A50;
    case 574u: goto L_08816A80;
    case 575u: goto L_08816ABC;
    case 576u: goto L_08816ADC;
    case 577u: goto L_08816AE8;
    case 578u: goto L_08816AF0;
    case 579u: goto L_08816B00;
    case 580u: goto L_08816B1C;
    case 581u: goto L_08816B30;
    case 582u: goto L_08816B44;
    case 583u: goto L_08816B58;
    case 584u: goto L_08816B5C;
    case 585u: goto L_08816B6C;
    case 586u: goto L_08816BA4;
    case 587u: goto L_08816BCC;
    case 588u: goto L_08816BE0;
    case 589u: goto L_08816BE4;
    case 590u: goto L_08816BF0;
    case 591u: goto L_08816BF8;
    case 592u: goto L_08816C00;
    case 593u: goto L_08816C08;
    case 594u: goto L_08816C0C;
    case 595u: goto L_08816C14;
    case 596u: goto L_08816C18;
    case 597u: goto L_08816C24;
    case 598u: goto L_08816C34;
    case 599u: goto L_08816C58;
    case 600u: goto L_08816CB4;
    case 601u: goto L_08816CC0;
    case 602u: goto L_08816CCC;
    case 603u: goto L_08816CD4;
    case 604u: goto L_08816CE4;
    case 605u: goto L_08816CE8;
    case 606u: goto L_08816D04;
    case 607u: goto L_08816D14;
    case 608u: goto L_08816D18;
    case 609u: goto L_08816D30;
    case 610u: goto L_08816D38;
    case 611u: goto L_08816D4C;
    case 612u: goto L_08816D54;
    case 613u: goto L_08816D5C;
    case 614u: goto L_08816D64;
    case 615u: goto L_08816D78;
    case 616u: goto L_08816D94;
    case 617u: goto L_08816DA8;
    case 618u: goto L_08816DB0;
    case 619u: goto L_08816DB8;
    case 620u: goto L_08816DCC;
    case 621u: goto L_08816DD0;
    case 622u: goto L_08816DD4;
    case 623u: goto L_08816DE0;
    case 624u: goto L_08816DE8;
    case 625u: goto L_08816DF8;
    case 626u: goto L_08816E0C;
    case 627u: goto L_08816E14;
    case 628u: goto L_08816E28;
    case 629u: goto L_08816E44;
    case 630u: goto L_08816E58;
    case 631u: goto L_08816E5C;
    case 632u: goto L_08816E6C;
    case 633u: goto L_08816E9C;
    case 634u: goto L_08816ED4;
    case 635u: goto L_08816ED8;
    case 636u: goto L_08816EE4;
    case 637u: goto L_08816EEC;
    case 638u: goto L_08816EF4;
    case 639u: goto L_08816EFC;
    case 640u: goto L_08816F00;
    case 641u: goto L_08816F08;
    case 642u: goto L_08816F0C;
    case 643u: goto L_08816F18;
    case 644u: goto L_08816F28;
    case 645u: goto L_08816F4C;
    case 646u: goto L_08816F94;
    case 647u: goto L_08816FA0;
    case 648u: goto L_08816FAC;
    case 649u: goto L_08816FC4;
    case 650u: goto L_08816FD0;
    case 651u: goto L_08816FD8;
    case 652u: goto L_08816FEC;
    case 653u: goto L_08816FF4;
    case 654u: goto L_08817004;
    case 655u: goto L_08817008;
    case 656u: goto L_08817018;
    case 657u: goto L_08817020;
    case 658u: goto L_08817034;
    case 659u: goto L_08817044;
    case 660u: goto L_08817048;
    case 661u: goto L_08817058;
    case 662u: goto L_08817074;
    case 663u: goto L_08817080;
    case 664u: goto L_08817088;
    case 665u: goto L_08817090;
    case 666u: goto L_0881709C;
    case 667u: goto L_088170A4;
    case 668u: goto L_088170B0;
    case 669u: goto L_088170BC;
    case 670u: goto L_088170C4;
    case 671u: goto L_088170CC;
    case 672u: goto L_088170D8;
    case 673u: goto L_088170E0;
    case 674u: goto L_088170EC;
    case 675u: goto L_088170F8;
    case 676u: goto L_08817100;
    case 677u: goto L_0881715C;
    case 678u: goto L_0881717C;
    case 679u: goto L_08817184;
    case 680u: goto L_08817190;
    case 681u: goto L_088171A0;
    case 682u: goto L_088171B4;
    case 683u: goto L_088171BC;
    case 684u: goto L_088171C8;
    case 685u: goto L_088171D4;
    case 686u: goto L_088171DC;
    case 687u: goto L_088171E4;
    case 688u: goto L_088171EC;
    case 689u: goto L_088171F4;
    case 690u: goto L_088171FC;
    case 691u: goto L_08817204;
    case 692u: goto L_0881720C;
    case 693u: goto L_08817224;
    case 694u: goto L_08817230;
    case 695u: goto L_0881723C;
    case 696u: goto L_08817244;
    case 697u: goto L_08817248;
    case 698u: goto L_08817258;
    case 699u: goto L_0881725C;
    case 700u: goto L_0881726C;
    case 701u: goto L_08817280;
    case 702u: goto L_08817288;
    case 703u: goto L_08817290;
    case 704u: goto L_088172A4;
    case 705u: goto L_088172A8;
    case 706u: goto L_088172B8;
    case 707u: goto L_088172F0;
    case 708u: goto L_0881731C;
    case 709u: goto L_08817324;
    case 710u: goto L_08817340;
    case 711u: goto L_0881734C;
    case 712u: goto L_08817360;
    case 713u: goto L_0881738C;
    case 714u: goto L_088173A8;
    case 715u: goto L_088173B0;
    case 716u: goto L_088173B8;
    case 717u: goto L_088173C0;
    case 718u: goto L_088173C8;
    case 719u: goto L_088173D4;
    case 720u: goto L_088173E0;
    case 721u: goto L_088173E8;
    case 722u: goto L_088173F4;
    case 723u: goto L_088173FC;
    case 724u: goto L_08817404;
    case 725u: goto L_08817410;
    case 726u: goto L_08817418;
    case 727u: goto L_08817420;
    case 728u: goto L_08817428;
    case 729u: goto L_08817430;
    case 730u: goto L_08817438;
    case 731u: goto L_08817440;
    case 732u: goto L_0881744C;
    case 733u: goto L_08817458;
    case 734u: goto L_08817464;
    case 735u: goto L_08817470;
    case 736u: goto L_08817488;
    case 737u: goto L_088174BC;
    case 738u: goto L_088174C8;
    case 739u: goto L_088174D0;
    case 740u: goto L_088174D8;
    case 741u: goto L_088174E0;
    case 742u: goto L_088174E8;
    case 743u: goto L_088174F0;
    case 744u: goto L_088174F8;
    case 745u: goto L_08817500;
    case 746u: goto L_08817510;
    case 747u: goto L_08817518;
    case 748u: goto L_08817520;
    case 749u: goto L_0881752C;
    case 750u: goto L_08817534;
    case 751u: goto L_0881753C;
    case 752u: goto L_08817544;
    case 753u: goto L_08817550;
    case 754u: goto L_08817558;
    case 755u: goto L_08817560;
    case 756u: goto L_08817568;
    case 757u: goto L_08817570;
    case 758u: goto L_08817580;
    case 759u: goto L_08817594;
    case 760u: goto L_088175AC;
    case 761u: goto L_088175E4;
    case 762u: goto L_088175F0;
    case 763u: goto L_088175F8;
    case 764u: goto L_08817604;
    case 765u: goto L_08817614;
    case 766u: goto L_08817634;
    case 767u: goto L_08817640;
    case 768u: goto L_08817650;
    case 769u: goto L_08817658;
    case 770u: goto L_08817698;
    case 771u: goto L_088176A0;
    case 772u: goto L_088176A8;
    case 773u: goto L_088176B8;
    case 774u: goto L_088176C8;
    case 775u: goto L_088176D0;
    case 776u: goto L_0881770C;
    case 777u: goto L_08817718;
    case 778u: goto L_08817738;
    case 779u: goto L_08817740;
    case 780u: goto L_08817758;
    case 781u: goto L_08817764;
    case 782u: goto L_0881776C;
    case 783u: goto L_08817790;
    case 784u: goto L_088177AC;
    case 785u: goto L_088177DC;
    case 786u: goto L_088177F4;
    case 787u: goto L_08817818;
    case 788u: goto L_08817834;
    case 789u: goto L_0881783C;
    case 790u: goto L_08817864;
    case 791u: goto L_08817878;
    case 792u: goto L_08817884;
    case 793u: goto L_08817898;
    case 794u: goto L_088178CC;
    case 795u: goto L_088178D4;
    case 796u: goto L_088178E0;
    case 797u: goto L_088178EC;
    case 798u: goto L_08817914;
    case 799u: goto L_08817928;
    case 800u: goto L_08817934;
    case 801u: goto L_08817944;
    case 802u: goto L_0881795C;
    case 803u: goto L_08817974;
    case 804u: goto L_08817980;
    case 805u: goto L_08817990;
    case 806u: goto L_08817998;
    case 807u: goto L_088179A0;
    case 808u: goto L_088179AC;
    case 809u: goto L_088179D4;
    case 810u: goto L_088179E0;
    case 811u: goto L_08817A10;
    case 812u: goto L_08817A24;
    case 813u: goto L_08817A30;
    case 814u: goto L_08817A34;
    case 815u: goto L_08817A40;
    case 816u: goto L_08817A50;
    case 817u: goto L_08817A78;
    case 818u: goto L_08817AA8;
    case 819u: goto L_08817AB4;
    case 820u: goto L_08817ADC;
    case 821u: goto L_08817AF0;
    case 822u: goto L_08817AF8;
    case 823u: goto L_08817B20;
    case 824u: goto L_08817B2C;
    case 825u: goto L_08817B30;
    case 826u: goto L_08817B38;
    case 827u: goto L_08817B40;
    case 828u: goto L_08817B58;
    case 829u: goto L_08817B70;
    case 830u: goto L_08817B7C;
    case 831u: goto L_08817B8C;
    case 832u: goto L_08817B94;
    case 833u: goto L_08817B9C;
    case 834u: goto L_08817BC0;
    case 835u: goto L_08817BD0;
    case 836u: goto L_08817BF8;
    case 837u: goto L_08817C58;
    case 838u: goto L_08817C68;
    case 839u: goto L_08817C7C;
    case 840u: goto L_08817C80;
    case 841u: goto L_08817C8C;
    case 842u: goto L_08817CA0;
    case 843u: goto L_08817CB4;
    case 844u: goto L_08817D14;
    case 845u: goto L_08817D1C;
    case 846u: goto L_08817D38;
    case 847u: goto L_08817D48;
    case 848u: goto L_08817D50;
    case 849u: goto L_08817D6C;
    case 850u: goto L_08817D7C;
    case 851u: goto L_08817D84;
    case 852u: goto L_08817DA0;
    case 853u: goto L_08817DB0;
    case 854u: goto L_08817DB8;
    case 855u: goto L_08817DD4;
    case 856u: goto L_08817DE4;
    case 857u: goto L_08817DEC;
    case 858u: goto L_08817E08;
    case 859u: goto L_08817E18;
    case 860u: goto L_08817E28;
    case 861u: goto L_08817E34;
    case 862u: goto L_08817E3C;
    case 863u: goto L_08817E4C;
    case 864u: goto L_08817E5C;
    case 865u: goto L_08817E70;
    case 866u: goto L_08817E9C;
    case 867u: goto L_08817ECC;
    case 868u: goto L_08817ED0;
    case 869u: goto L_08817EE0;
    case 870u: goto L_08817EF0;
    case 871u: goto L_08817EF8;
    case 872u: goto L_08817F08;
    case 873u: goto L_08817F38;
    case 874u: goto L_08817F50;
    case 875u: goto L_08817F88;
    case 876u: goto L_08817FB8;
    case 877u: goto L_08817FD8;
    case 878u: goto L_08817FE0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08814004:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (0u | 2u);
      if (branch_taken) {
          goto L_08814048;
      }
      goto L_08814018;
    }
L_08814018:
    ctx.gpr[5] = (2177u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17224));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08814098;
      }
      goto L_08814028;
    }
L_08814028:
    ctx.gpr[5] = (2203u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2384));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08814048:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[5] = (2177u << 16u);
      if (branch_taken) {
          goto L_08814080;
      }
      goto L_08814050;
    }
L_08814050:
    ctx.gpr[5] = (2177u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16836));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08814098;
      }
      goto L_08814060;
    }
L_08814060:
    ctx.gpr[5] = (2203u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2384));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08814080:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16556));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08814098;
      }
      goto L_0881408C;
    }
L_0881408C:
    ctx.gpr[5] = (2203u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2384));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    goto L_08814098;
L_08814098:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088140AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088140D8u);
    ctx.gpr[4] = (0u | 30u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088140D8u) goto L_088140D8;
    return;
L_088140D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088140ECu);
    ctx.gpr[4] = (0u | 29u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088140ECu) goto L_088140EC;
    return;
L_088140EC:
    { const bool branch_taken = 0u != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), 0u);
      if (branch_taken) {
          goto L_08814100;
      }
      goto L_088140F4;
    }
L_088140F4:
    ctx.gpr[4] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2384));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_08814100;
L_08814100:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 30u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08814114u);
    ctx.gpr[5] = (0u | 255u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08814114u) goto L_08814114;
    return;
L_08814114:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 29u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08814128u);
    ctx.gpr[5] = (0u | 7u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08814128u) goto L_08814128;
    return;
L_08814128:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 20u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0881413Cu);
    ctx.gpr[5] = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881413Cu) goto L_0881413C;
    return;
L_0881413C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08814148u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08814148u) goto L_08814148;
    return;
L_08814148:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 20u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0881415Cu);
    ctx.gpr[5] = (0u | 2u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881415Cu) goto L_0881415C;
    return;
L_0881415C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08814168u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08814168u) goto L_08814168;
    return;
L_08814168:
    ctx.gpr[4] = (2177u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16556));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08814184;
      }
      goto L_08814178;
    }
L_08814178:
    ctx.gpr[4] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2384));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_08814184;
L_08814184:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08814198u);
    ctx.gpr[4] = (0u | 30u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08814198u) goto L_08814198;
    return;
L_08814198:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088141ACu);
    ctx.gpr[4] = (0u | 29u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088141ACu) goto L_088141AC;
    return;
L_088141AC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088141C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088141F8u);
    ctx.gpr[4] = (0u | 20u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088141F8u) goto L_088141F8;
    return;
L_088141F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0881420Cu);
    ctx.gpr[4] = (0u | 30u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881420Cu) goto L_0881420C;
    return;
L_0881420C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08814220u);
    ctx.gpr[4] = (0u | 29u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08814220u) goto L_08814220;
    return;
L_08814220:
    { const bool branch_taken = 0u != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), 0u);
      if (branch_taken) {
          goto L_08814234;
      }
      goto L_08814228;
    }
L_08814228:
    ctx.gpr[4] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2384));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_08814234;
L_08814234:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 30u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08814248u);
    ctx.gpr[5] = (0u | 255u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08814248u) goto L_08814248;
    return;
L_08814248:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 29u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0881425Cu);
    ctx.gpr[5] = (0u | 7u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881425Cu) goto L_0881425C;
    return;
L_0881425C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-256));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 20u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08814294u);
    ctx.gpr[5] = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08814294u) goto L_08814294;
    return;
L_08814294:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088142A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088142A0u) goto L_088142A0;
    return;
L_088142A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 20u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088142B4u);
    ctx.gpr[5] = (0u | 2u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088142B4u) goto L_088142B4;
    return;
L_088142B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088142C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088142C0u) goto L_088142C0;
    return;
L_088142C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (2177u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(16836));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088142EC;
      }
      goto L_088142E0;
    }
L_088142E0:
    ctx.gpr[4] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2384));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_088142EC;
L_088142EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08814300u);
    ctx.gpr[4] = (0u | 30u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08814300u) goto L_08814300;
    return;
L_08814300:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08814314u);
    ctx.gpr[4] = (0u | 29u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08814314u) goto L_08814314;
    return;
L_08814314:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08814328u);
    ctx.gpr[4] = (0u | 20u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08814328u) goto L_08814328;
    return;
L_08814328:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08814348:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08814374u);
    ctx.gpr[4] = (0u | 20u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08814374u) goto L_08814374;
    return;
L_08814374:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08814388u);
    ctx.gpr[4] = (0u | 30u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08814388u) goto L_08814388;
    return;
L_08814388:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0881439Cu);
    ctx.gpr[4] = (0u | 29u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881439Cu) goto L_0881439C;
    return;
L_0881439C:
    { const bool branch_taken = 0u != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), 0u);
      if (branch_taken) {
          goto L_088143B0;
      }
      goto L_088143A4;
    }
L_088143A4:
    ctx.gpr[4] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2384));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_088143B0;
L_088143B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 30u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088143C4u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088143C4u) goto L_088143C4;
    return;
L_088143C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 29u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088143D8u);
    ctx.gpr[5] = (0u | 5u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088143D8u) goto L_088143D8;
    return;
L_088143D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 20u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088143ECu);
    ctx.gpr[5] = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088143ECu) goto L_088143EC;
    return;
L_088143EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088143F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088143F8u) goto L_088143F8;
    return;
L_088143F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 20u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0881440Cu);
    ctx.gpr[5] = (0u | 2u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881440Cu) goto L_0881440C;
    return;
L_0881440C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08814418u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08814418u) goto L_08814418;
    return;
L_08814418:
    ctx.gpr[4] = (2177u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17224));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08814434;
      }
      goto L_08814428;
    }
L_08814428:
    ctx.gpr[4] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2384));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_08814434;
L_08814434:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08814448u);
    ctx.gpr[4] = (0u | 30u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08814448u) goto L_08814448;
    return;
L_08814448:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0881445Cu);
    ctx.gpr[4] = (0u | 29u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881445Cu) goto L_0881445C;
    return;
L_0881445C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08814470u);
    ctx.gpr[4] = (0u | 20u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08814470u) goto L_08814470;
    return;
L_08814470:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08814488:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[23]);
    ctx.gpr[20] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), 0u);
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08814588;
      }
      goto L_088144CC;
    }
L_088144CC:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17320)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (2219u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25116));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-1720)));
      if (branch_taken) {
          goto L_0881451C;
      }
      goto L_088144F8;
    }
L_088144F8:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1736)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08814514u);
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08814514u) goto L_08814514;
    return;
L_08814514:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0881453C;
      }
      goto L_0881451C;
    }
L_0881451C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1748)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08814538u);
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08814538u) goto L_08814538;
    return;
L_08814538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    goto L_0881453C;
L_0881453C:
    ctx.gpr[31] = (0x08814544u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 720u, 0x0882ED10u>(ctx, &aot_mem) && ctx.pc == 0x08814544u) goto L_08814544;
    return;
L_08814544:
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08814554u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(25124));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 779u, 0x0882F254u>(ctx, &aot_mem) && ctx.pc == 0x08814554u) goto L_08814554;
    return;
L_08814554:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0881456C;
      }
      goto L_08814560;
    }
L_08814560:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08814580;
      }
      goto L_0881456C;
    }
L_0881456C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0881457Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 385u, 0x089DE94Cu>(ctx, &aot_mem) && ctx.pc == 0x0881457Cu) goto L_0881457C;
    return;
L_0881457C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    goto L_08814580;
L_08814580:
    ctx.gpr[31] = (0x08814588u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 761u, 0x0882EFC4u>(ctx, &aot_mem) && ctx.pc == 0x08814588u) goto L_08814588;
    return;
L_08814588:
    ctx.gpr[31] = (0x08814590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 334u, 0x089DE2ACu>(ctx, &aot_mem) && ctx.pc == 0x08814590u) goto L_08814590;
    return;
L_08814590:
    ctx.gpr[4] = (2177u << 16u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088145A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9620));
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 333u, 0x089DE28Cu>(ctx, &aot_mem) && ctx.pc == 0x088145A0u) goto L_088145A0;
    return;
L_088145A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_08814644;
      }
      goto L_088145AC;
    }
L_088145AC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1720)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1752)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088145D0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(25116));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088145D0u) goto L_088145D0;
    return;
L_088145D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x088145DCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 277u, 0x08811730u>(ctx, &aot_mem) && ctx.pc == 0x088145DCu) goto L_088145DC;
    return;
L_088145DC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 1u);
    if (ctx.gpr[20] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
        goto L_08814648;
    }
    goto L_088145EC;
L_088145EC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), 0u);
    ctx.gpr[31] = (0x088145F8u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 531u, 0x088134A0u>(ctx, &aot_mem) && ctx.pc == 0x088145F8u) goto L_088145F8;
    return;
L_088145F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[2] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1716));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08814620u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 174u, 0x089B100Cu>(ctx, &aot_mem) && ctx.pc == 0x08814620u) goto L_08814620;
    return;
L_08814620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2177u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0881463Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(9628));
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 174u, 0x089B100Cu>(ctx, &aot_mem) && ctx.pc == 0x0881463Cu) goto L_0881463C;
    return;
L_0881463C:
    ctx.gpr[31] = (0x08814644u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 355u, 0x08811C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08814644u) goto L_08814644;
    return;
L_08814644:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    goto L_08814648;
L_08814648:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088146D4;
      }
      goto L_08814650;
    }
L_08814650:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1720)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1752)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08814674u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(25160));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08814674u) goto L_08814674;
    return;
L_08814674:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08814680u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 277u, 0x08811730u>(ctx, &aot_mem) && ctx.pc == 0x08814680u) goto L_08814680;
    return;
L_08814680:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 1u);
    if (ctx.gpr[20] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(12)));
        goto L_088146D8;
    }
    goto L_08814690;
L_08814690:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (2177u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088146B0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16176));
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 174u, 0x089B100Cu>(ctx, &aot_mem) && ctx.pc == 0x088146B0u) goto L_088146B0;
    return;
L_088146B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (2177u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088146CCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(9628));
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 174u, 0x089B100Cu>(ctx, &aot_mem) && ctx.pc == 0x088146CCu) goto L_088146CC;
    return;
L_088146CC:
    ctx.gpr[31] = (0x088146D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 355u, 0x08811C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088146D4u) goto L_088146D4;
    return;
L_088146D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(12)));
    goto L_088146D8;
L_088146D8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[20]);
      if (branch_taken) {
          goto L_088147B0;
      }
      goto L_088146E0;
    }
L_088146E0:
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-1720)));
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-1752)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08814708u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(25172));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08814708u) goto L_08814708;
    return;
L_08814708:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08814714u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 277u, 0x08811730u>(ctx, &aot_mem) && ctx.pc == 0x08814714u) goto L_08814714;
    return;
L_08814714:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08814750;
      }
      goto L_08814720;
    }
L_08814720:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-1720)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-1752)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0881473Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(25116));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0881473Cu) goto L_0881473C;
    return;
L_0881473C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08814748u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 277u, 0x08811730u>(ctx, &aot_mem) && ctx.pc == 0x08814748u) goto L_08814748;
    return;
L_08814748:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 1u);
    goto L_08814750;
L_08814750:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[20]);
      if (branch_taken) {
          goto L_088147B0;
      }
      goto L_08814758;
    }
L_08814758:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), 0u);
    ctx.gpr[31] = (0x08814764u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 531u, 0x088134A0u>(ctx, &aot_mem) && ctx.pc == 0x08814764u) goto L_08814764;
    return;
L_08814764:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[2] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1716));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0881478Cu);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(108));
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 174u, 0x089B100Cu>(ctx, &aot_mem) && ctx.pc == 0x0881478Cu) goto L_0881478C;
    return;
L_0881478C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (2177u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088147A8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(9628));
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 174u, 0x089B100Cu>(ctx, &aot_mem) && ctx.pc == 0x088147A8u) goto L_088147A8;
    return;
L_088147A8:
    ctx.gpr[31] = (0x088147B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 355u, 0x08811C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088147B0u) goto L_088147B0;
    return;
L_088147B0:
    ctx.gpr[31] = (0x088147B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 333u, 0x089DE28Cu>(ctx, &aot_mem) && ctx.pc == 0x088147B8u) goto L_088147B8;
    return;
L_088147B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08814830;
      }
      goto L_088147C4;
    }
L_088147C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (2219u << 16u);
      if (branch_taken) {
          goto L_08814830;
      }
      goto L_088147D8;
    }
L_088147D8:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(25184));
    ctx.gpr[22] = (2221u << 16u);
    ctx.gpr[20] = (2221u << 16u);
    ctx.gpr[19] = (2221u << 16u);
    goto L_088147F0;
L_088147F0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-1720)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-1740)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-1744)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0881480Cu);
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0881480Cu) goto L_0881480C;
    return;
L_0881480C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881481Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 684u, 0x0893ACC8u>(ctx, &aot_mem) && ctx.pc == 0x0881481Cu) goto L_0881481C;
    return;
L_0881481C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088147F0;
      }
      goto L_08814830;
    }
L_08814830:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08814864:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(148));
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08814904;
      }
      goto L_0881489C;
    }
L_0881489C:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088148B0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x088148B0u) goto L_088148B0;
    return;
L_088148B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x088148BCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 881u, 0x0882F7DCu>(ctx, &aot_mem) && ctx.pc == 0x088148BCu) goto L_088148BC;
    return;
L_088148BC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[5] = (2219u << 16u);
      if (branch_taken) {
          goto L_088148EC;
      }
      goto L_088148CC;
    }
L_088148CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x088148D8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(25124));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 779u, 0x0882F254u>(ctx, &aot_mem) && ctx.pc == 0x088148D8u) goto L_088148D8;
    return;
L_088148D8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088148EC;
      }
      goto L_088148E4;
    }
L_088148E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_088148EC;
L_088148EC:
    ctx.gpr[31] = (0x088148F4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 761u, 0x0882EFC4u>(ctx, &aot_mem) && ctx.pc == 0x088148F4u) goto L_088148F4;
    return;
L_088148F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), ctx.gpr[4]);
    goto L_08814904;
L_08814904:
    ctx.gpr[31] = (0x0881490Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 334u, 0x089DE2ACu>(ctx, &aot_mem) && ctx.pc == 0x0881490Cu) goto L_0881490C;
    return;
L_0881490C:
    ctx.gpr[4] = (2177u << 16u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881491Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9620));
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 333u, 0x089DE28Cu>(ctx, &aot_mem) && ctx.pc == 0x0881491Cu) goto L_0881491C;
    return;
L_0881491C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088149BC;
      }
      goto L_08814928;
    }
L_08814928:
    ctx.gpr[31] = (0x08814930u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x08814930u) goto L_08814930;
    return;
L_08814930:
    ctx.gpr[31] = (0x08814938u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 411u, 0x08812510u>(ctx, &aot_mem) && ctx.pc == 0x08814938u) goto L_08814938;
    return;
L_08814938:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 1u);
    if (ctx.gpr[18] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088149C0;
    }
    goto L_08814948;
L_08814948:
    ctx.gpr[31] = (0x08814950u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 651u, 0x08813C54u>(ctx, &aot_mem) && ctx.pc == 0x08814950u) goto L_08814950;
    return;
L_08814950:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[31] = (0x0881495Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 531u, 0x088134A0u>(ctx, &aot_mem) && ctx.pc == 0x0881495Cu) goto L_0881495C;
    return;
L_0881495C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[2] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1716));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08814984u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 174u, 0x089B100Cu>(ctx, &aot_mem) && ctx.pc == 0x08814984u) goto L_08814984;
    return;
L_08814984:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2177u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088149A0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(9628));
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 174u, 0x089B100Cu>(ctx, &aot_mem) && ctx.pc == 0x088149A0u) goto L_088149A0;
    return;
L_088149A0:
    ctx.gpr[31] = (0x088149A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 355u, 0x08811C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088149A8u) goto L_088149A8;
    return;
L_088149A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), ctx.gpr[4]);
    goto L_088149BC;
L_088149BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088149C0;
L_088149C0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08814A48;
      }
      goto L_088149C8;
    }
L_088149C8:
    ctx.gpr[31] = (0x088149D0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x088149D0u) goto L_088149D0;
    return;
L_088149D0:
    ctx.gpr[31] = (0x088149D8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 411u, 0x08812510u>(ctx, &aot_mem) && ctx.pc == 0x088149D8u) goto L_088149D8;
    return;
L_088149D8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 1u);
    if (ctx.gpr[18] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08814A4C;
    }
    goto L_088149E8;
L_088149E8:
    ctx.gpr[31] = (0x088149F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 651u, 0x08813C54u>(ctx, &aot_mem) && ctx.pc == 0x088149F0u) goto L_088149F0;
    return;
L_088149F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (2177u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08814A10u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16176));
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 174u, 0x089B100Cu>(ctx, &aot_mem) && ctx.pc == 0x08814A10u) goto L_08814A10;
    return;
L_08814A10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (2177u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08814A2Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(9628));
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 174u, 0x089B100Cu>(ctx, &aot_mem) && ctx.pc == 0x08814A2Cu) goto L_08814A2C;
    return;
L_08814A2C:
    ctx.gpr[31] = (0x08814A34u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 355u, 0x08811C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08814A34u) goto L_08814A34;
    return;
L_08814A34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), ctx.gpr[4]);
    goto L_08814A48;
L_08814A48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08814A4C;
L_08814A4C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08814AE8;
      }
      goto L_08814A54;
    }
L_08814A54:
    ctx.gpr[31] = (0x08814A5Cu);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x08814A5Cu) goto L_08814A5C;
    return;
L_08814A5C:
    ctx.gpr[31] = (0x08814A64u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 411u, 0x08812510u>(ctx, &aot_mem) && ctx.pc == 0x08814A64u) goto L_08814A64;
    return;
L_08814A64:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08814AE8;
      }
      goto L_08814A74;
    }
L_08814A74:
    ctx.gpr[31] = (0x08814A7Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 651u, 0x08813C54u>(ctx, &aot_mem) && ctx.pc == 0x08814A7Cu) goto L_08814A7C;
    return;
L_08814A7C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[31] = (0x08814A88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 531u, 0x088134A0u>(ctx, &aot_mem) && ctx.pc == 0x08814A88u) goto L_08814A88;
    return;
L_08814A88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[2] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1716));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08814AB0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 174u, 0x089B100Cu>(ctx, &aot_mem) && ctx.pc == 0x08814AB0u) goto L_08814AB0;
    return;
L_08814AB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (2177u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08814ACCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(9628));
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 174u, 0x089B100Cu>(ctx, &aot_mem) && ctx.pc == 0x08814ACCu) goto L_08814ACC;
    return;
L_08814ACC:
    ctx.gpr[31] = (0x08814AD4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 355u, 0x08811C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08814AD4u) goto L_08814AD4;
    return;
L_08814AD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), ctx.gpr[4]);
    goto L_08814AE8;
L_08814AE8:
    ctx.gpr[31] = (0x08814AF0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 333u, 0x089DE28Cu>(ctx, &aot_mem) && ctx.pc == 0x08814AF0u) goto L_08814AF0;
    return;
L_08814AF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
        goto L_08814B5C;
    }
    goto L_08814AFC;
L_08814AFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_08814B58;
      }
      goto L_08814B10;
    }
L_08814B10:
    ctx.gpr[21] = (0u | 0u);
    goto L_08814B14;
L_08814B14:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08814B24u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x08814B24u) goto L_08814B24;
    return;
L_08814B24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08814B34u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 700u, 0x0893AE04u>(ctx, &aot_mem) && ctx.pc == 0x08814B34u) goto L_08814B34;
    return;
L_08814B34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08814B14;
      }
      goto L_08814B58;
    }
L_08814B58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08814B5C;
L_08814B5C:
    ctx.gpr[31] = (0x08814B64u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 250u, 0x089454B0u>(ctx, &aot_mem) && ctx.pc == 0x08814B64u) goto L_08814B64;
    return;
L_08814B64:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08814B8C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1728)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-1724), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08814BA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1616)));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[6] = (0u | 144u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08814BC0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21608));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 431u, 0x08809A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08814BC0u) goto L_08814BC0;
    return;
L_08814BC0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08814BCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08814BE0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21608));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x08814BE0u) goto L_08814BE0;
    return;
L_08814BE0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08814BEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1612)));
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08814C1Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08814C1Cu) goto L_08814C1C;
    return;
L_08814C1C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1672)));
    ctx.gpr[31] = (0x08814C2Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9E0F4u>(ctx, &aot_mem) && ctx.pc == 0x08814C2Cu) goto L_08814C2C;
    return;
L_08814C2C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08814C38u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9E0F4u>(ctx, &aot_mem) && ctx.pc == 0x08814C38u) goto L_08814C38;
    return;
L_08814C38:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08814C44u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9E0F4u>(ctx, &aot_mem) && ctx.pc == 0x08814C44u) goto L_08814C44;
    return;
L_08814C44:
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
L_08814C5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08814C88u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(25384));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08814C88u) goto L_08814C88;
    return;
L_08814C88:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1672)));
    ctx.gpr[31] = (0x08814C98u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9E0F4u>(ctx, &aot_mem) && ctx.pc == 0x08814C98u) goto L_08814C98;
    return;
L_08814C98:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08814CA4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9E0F4u>(ctx, &aot_mem) && ctx.pc == 0x08814CA4u) goto L_08814CA4;
    return;
L_08814CA4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08814CB0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9E0F4u>(ctx, &aot_mem) && ctx.pc == 0x08814CB0u) goto L_08814CB0;
    return;
L_08814CB0:
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
L_08814CC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[31]);
    ctx.gpr[31] = (0x08814D00u);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 216u, 0x08818E1Cu>(ctx, &aot_mem) && ctx.pc == 0x08814D00u) goto L_08814D00;
    return;
L_08814D00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08814D38;
      }
      goto L_08814D0C;
    }
L_08814D0C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1664)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08814D28u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26480));
    goto L_08814BEC;
L_08814D28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08814D34u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 277u, 0x08811730u>(ctx, &aot_mem) && ctx.pc == 0x08814D34u) goto L_08814D34;
    return;
L_08814D34:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08814D38;
L_08814D38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08814D94;
      }
      goto L_08814D44;
    }
L_08814D44:
    ctx.gpr[31] = (0x08814D4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 334u, 0x089DE2ACu>(ctx, &aot_mem) && ctx.pc == 0x08814D4Cu) goto L_08814D4C;
    return;
L_08814D4C:
    ctx.gpr[4] = (2177u << 16u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08814D5Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9620));
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 333u, 0x089DE28Cu>(ctx, &aot_mem) && ctx.pc == 0x08814D5Cu) goto L_08814D5C;
    return;
L_08814D5C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1668)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08814D78u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26492));
    goto L_08814BEC;
L_08814D78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08814D84u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 277u, 0x08811730u>(ctx, &aot_mem) && ctx.pc == 0x08814D84u) goto L_08814D84;
    return;
L_08814D84:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08814D90u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 333u, 0x089DE28Cu>(ctx, &aot_mem) && ctx.pc == 0x08814D90u) goto L_08814D90;
    return;
L_08814D90:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[18]);
    goto L_08814D94;
L_08814D94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08814E5C;
      }
      goto L_08814DA0;
    }
L_08814DA0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[16]);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1524));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08814DDCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26508));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08814DDCu) goto L_08814DDC;
    return;
L_08814DDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (2219u << 16u);
      if (branch_taken) {
          goto L_08814E5C;
      }
      goto L_08814DF0;
    }
L_08814DF0:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(26520));
    ctx.gpr[22] = (2221u << 16u);
    ctx.gpr[21] = (2221u << 16u);
    ctx.gpr[20] = (2221u << 16u);
    ctx.gpr[19] = (2221u << 16u);
    goto L_08814E0C;
L_08814E0C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-1612)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-1672)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-1644)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-1656)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08814E30u);
    ctx.gpr[8] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08814E30u) goto L_08814E30;
    return;
L_08814E30:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08814E44u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 684u, 0x0893ACC8u>(ctx, &aot_mem) && ctx.pc == 0x08814E44u) goto L_08814E44;
    return;
L_08814E44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
      if (branch_taken) {
          goto L_08814E0C;
      }
      goto L_08814E5C;
    }
L_08814E5C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[31] = (0x08814E68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08815F54;
L_08814E68:
    ctx.gpr[31] = (0x08814E70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 251u, 0x08819098u>(ctx, &aot_mem) && ctx.pc == 0x08814E70u) goto L_08814E70;
    return;
L_08814E70:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
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
L_08814EA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(172)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08814F40;
      }
      goto L_08814EE4;
    }
L_08814EE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08814F40;
      }
      goto L_08814EF0;
    }
L_08814EF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08814F40;
      }
      goto L_08814EFC;
    }
L_08814EFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08814F40;
      }
      goto L_08814F10;
    }
L_08814F10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08814F2Cu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 261u, 0x089B1808u>(ctx, &aot_mem) && ctx.pc == 0x08814F2Cu) goto L_08814F2C;
    return;
L_08814F2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08814F10;
      }
      goto L_08814F40;
    }
L_08814F40:
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
L_08814F58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[5] | 8u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08814F68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08814F7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[2] = (ctx.gpr[4] & 8u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08814F8C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08814F9C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (~(ctx.gpr[5] | 0u));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08814FB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[5] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-456));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    goto L_08814FF0;
L_08814FF0:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_0881504C;
    }
    goto L_08815010;
L_08815010:
    ctx.gpr[31] = (0x08815018u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 523u, 0x08813268u>(ctx, &aot_mem) && ctx.pc == 0x08815018u) goto L_08815018;
    return;
L_08815018:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08815028u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 377u, 0x08811E6Cu>(ctx, &aot_mem) && ctx.pc == 0x08815028u) goto L_08815028;
    return;
L_08815028:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08815048u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 225u, 0x089D9648u>(ctx, &aot_mem) && ctx.pc == 0x08815048u) goto L_08815048;
    return;
L_08815048:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_0881504C;
L_0881504C:
    ctx.gpr[4] = (ctx.gpr[20] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08814FF0;
      }
      goto L_08815058;
    }
L_08815058:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881507C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-456));
    goto L_08815088;
L_08815088:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088150A8;
      }
      goto L_08815094;
    }
L_08815094:
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08815088;
      }
      goto L_088150A0;
    }
L_088150A0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088150A8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088150B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088150D0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 507u, 0x089AB834u>(ctx, &aot_mem) && ctx.pc == 0x088150D0u) goto L_088150D0;
    return;
L_088150D0:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17320)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088150F4;
      }
      goto L_088150EC;
    }
L_088150EC:
    ctx.gpr[31] = (0x088150F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08814FB0;
L_088150F4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08815104:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    ctx.gpr[31] = (0x08815128u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 507u, 0x089AB834u>(ctx, &aot_mem) && ctx.pc == 0x08815128u) goto L_08815128;
    return;
L_08815128:
    ctx.gpr[31] = (0x08815130u);
    ctx.gpr[4] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 523u, 0x08813268u>(ctx, &aot_mem) && ctx.pc == 0x08815130u) goto L_08815130;
    return;
L_08815130:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08815144u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 377u, 0x08811E6Cu>(ctx, &aot_mem) && ctx.pc == 0x08815144u) goto L_08815144;
    return;
L_08815144:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08815158u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 225u, 0x089D9648u>(ctx, &aot_mem) && ctx.pc == 0x08815158u) goto L_08815158;
    return;
L_08815158:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08815168u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 507u, 0x089AB834u>(ctx, &aot_mem) && ctx.pc == 0x08815168u) goto L_08815168;
    return;
L_08815168:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17320)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881518C;
      }
      goto L_08815184;
    }
L_08815184:
    ctx.gpr[31] = (0x0881518Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08814FB0;
L_0881518C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088151A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.gpr[6] & 8u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088151DC;
      }
      goto L_088151B8;
    }
L_088151B8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088151D4;
      }
      goto L_088151C0;
    }
L_088151C0:
    ctx.gpr[31] = (0x088151C8u);
    // nop
    goto L_088151E8;
L_088151C8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088151D4:
    ctx.gpr[31] = (0x088151DCu);
    // nop
    goto L_08815444;
L_088151DC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088151E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08815414;
      }
      goto L_08815228;
    }
L_08815228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08815248u);
    ctx.gpr[4] = (0u | 30u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08815248u) goto L_08815248;
    return;
L_08815248:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0881525Cu);
    ctx.gpr[4] = (0u | 29u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881525Cu) goto L_0881525C;
    return;
L_0881525C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 30u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08815270u);
    ctx.gpr[5] = (0u | 255u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08815270u) goto L_08815270;
    return;
L_08815270:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 29u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08815284u);
    ctx.gpr[5] = (0u | 7u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08815284u) goto L_08815284;
    return;
L_08815284:
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[30] = (0u | 1u);
    ctx.gpr[23] = (0u | 5u);
    ctx.gpr[22] = (0u | 8u);
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-256));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-400));
    goto L_088152A0;
L_088152A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[16] == 0u) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_088153E0;
    }
    goto L_088152C0;
L_088152C0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08815334;
      }
      goto L_088152C8;
    }
L_088152C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 29u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088152DCu);
    ctx.gpr[5] = (0u | 8u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088152DCu) goto L_088152DC;
    return;
L_088152DC:
    ctx.gpr[31] = (0x088152E4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 21u, 0x088181C0u>(ctx, &aot_mem) && ctx.pc == 0x088152E4u) goto L_088152E4;
    return;
L_088152E4:
    if (ctx.gpr[2] != ctx.gpr[30]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
        goto L_08815310;
    }
    goto L_088152EC;
L_088152EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08815304u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08815304u) goto L_08815304;
    return;
L_08815304:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08815320;
      }
      goto L_08815310;
    }
L_08815310:
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08815318u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08815318u) goto L_08815318;
    return;
L_08815318:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08815320;
L_08815320:
    ctx.gpr[4] = (0u | 29u);
    jump_target = ctx.gpr[16];
    ctx.gpr[31] = (0x0881532Cu);
    ctx.gpr[5] = (0u | 7u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881532Cu) goto L_0881532C;
    return;
L_0881532C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088153E0;
      }
      goto L_08815334;
    }
L_08815334:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08815360;
      }
      goto L_0881533C;
    }
L_0881533C:
    ctx.gpr[31] = (0x08815344u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 266u, 0x089A58B4u>(ctx, &aot_mem) && ctx.pc == 0x08815344u) goto L_08815344;
    return;
L_08815344:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_088153E0;
    }
    goto L_0881534C;
L_0881534C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08815358u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08815358u) goto L_08815358;
    return;
L_08815358:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088153E0;
      }
      goto L_08815360;
    }
L_08815360:
    if (ctx.gpr[4] != ctx.gpr[22]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
        goto L_088153D4;
    }
    goto L_08815368;
L_08815368:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[5] & 32u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_088153E0;
    }
    goto L_08815378;
L_08815378:
    ctx.gpr[31] = (0x08815380u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 354u, 0x088197E4u>(ctx, &aot_mem) && ctx.pc == 0x08815380u) goto L_08815380;
    return;
L_08815380:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088153B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088153B8u) goto L_088153B8;
    return;
L_088153B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[5] | 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088153DC;
      }
      goto L_088153D4;
    }
L_088153D4:
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088153DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088153DCu) goto L_088153DC;
    return;
L_088153DC:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_088153E0;
L_088153E0:
    ctx.gpr[4] = (ctx.gpr[20] < static_cast<std::uint32_t>(14) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088152A0;
      }
      goto L_088153EC;
    }
L_088153EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08815400u);
    ctx.gpr[4] = (0u | 30u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08815400u) goto L_08815400;
    return;
L_08815400:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08815414u);
    ctx.gpr[4] = (0u | 29u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08815414u) goto L_08815414;
    return;
L_08815414:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08815444:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08815640;
      }
      goto L_08815470;
    }
L_08815470:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0881548Cu);
    ctx.gpr[4] = (0u | 30u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881548Cu) goto L_0881548C;
    return;
L_0881548C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088154A0u);
    ctx.gpr[4] = (0u | 29u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088154A0u) goto L_088154A0;
    return;
L_088154A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
        goto L_088155A8;
    }
    goto L_088154B0;
L_088154B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_08815554;
    }
    goto L_088154C0;
L_088154C0:
    ctx.gpr[31] = (0x088154C8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 266u, 0x089A58B4u>(ctx, &aot_mem) && ctx.pc == 0x088154C8u) goto L_088154C8;
    return;
L_088154C8:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_08815554;
    }
    goto L_088154D0;
L_088154D0:
    ctx.gpr[31] = (0x088154D8u);
    ctx.gpr[4] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 354u, 0x088197E4u>(ctx, &aot_mem) && ctx.pc == 0x088154D8u) goto L_088154D8;
    return;
L_088154D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-256));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 30u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08815514u);
    ctx.gpr[5] = (0u | 255u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08815514u) goto L_08815514;
    return;
L_08815514:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 29u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08815528u);
    ctx.gpr[5] = (0u | 7u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08815528u) goto L_08815528;
    return;
L_08815528:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0881553Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881553Cu) goto L_0881553C;
    return;
L_0881553C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] | 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_08815554;
L_08815554:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
        goto L_0881561C;
    }
    goto L_08815560;
L_08815560:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 30u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08815574u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08815574u) goto L_08815574;
    return;
L_08815574:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 29u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08815588u);
    ctx.gpr[5] = (0u | 5u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08815588u) goto L_08815588;
    return;
L_08815588:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0881559Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881559Cu) goto L_0881559C;
    return;
L_0881559C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
      if (branch_taken) {
          goto L_0881561C;
      }
      goto L_088155A4;
    }
L_088155A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    goto L_088155A8;
L_088155A8:
    ctx.gpr[4] = (0u | 30u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088155B8u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088155B8u) goto L_088155B8;
    return;
L_088155B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 29u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088155CCu);
    ctx.gpr[5] = (0u | 5u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088155CCu) goto L_088155CC;
    return;
L_088155CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
        goto L_08815604;
    }
    goto L_088155DC;
L_088155DC:
    ctx.gpr[31] = (0x088155E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 266u, 0x089A58B4u>(ctx, &aot_mem) && ctx.pc == 0x088155E4u) goto L_088155E4;
    return;
L_088155E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08815600;
      }
      goto L_088155EC;
    }
L_088155EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088155FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088155FCu) goto L_088155FC;
    return;
L_088155FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_08815600;
L_08815600:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    goto L_08815604;
L_08815604:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
        goto L_0881561C;
    }
    goto L_0881560C;
L_0881560C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08815618u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08815618u) goto L_08815618;
    return;
L_08815618:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    goto L_0881561C;
L_0881561C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0881562Cu);
    ctx.gpr[4] = (0u | 30u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881562Cu) goto L_0881562C;
    return;
L_0881562C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08815640u);
    ctx.gpr[4] = (0u | 29u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08815640u) goto L_08815640;
    return;
L_08815640:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881565C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08815688u);
    ctx.gpr[4] = (0u | 20u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08815688u) goto L_08815688;
    return;
L_08815688:
    { const bool branch_taken = 0u != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), 0u);
      if (branch_taken) {
          goto L_0881569C;
      }
      goto L_08815690;
    }
L_08815690:
    ctx.gpr[4] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2384));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_0881569C;
L_0881569C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 20u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088156B0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088156B0u) goto L_088156B0;
    return;
L_088156B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088156BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088156BCu) goto L_088156BC;
    return;
L_088156BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 20u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088156D0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088156D0u) goto L_088156D0;
    return;
L_088156D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088156DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088156DCu) goto L_088156DC;
    return;
L_088156DC:
    ctx.gpr[4] = (2177u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22108));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088156F8;
      }
      goto L_088156EC;
    }
L_088156EC:
    ctx.gpr[4] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2384));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_088156F8;
L_088156F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0881570Cu);
    ctx.gpr[4] = (0u | 20u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881570Cu) goto L_0881570C;
    return;
L_0881570C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08815724:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 4u);
    ctx.gpr[17] = (0u | 6u);
    ctx.gpr[18] = (0u | 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    goto L_08815750;
L_08815750:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08815768u);
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 849u, 0x0882F60Cu>(ctx, &aot_mem) && ctx.pc == 0x08815768u) goto L_08815768;
    return;
L_08815768:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08815778u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_088172F0;
L_08815778:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x088157A4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 25u, 0x088301ECu>(ctx, &aot_mem) && ctx.pc == 0x088157A4u) goto L_088157A4;
    return;
L_088157A4:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088157B4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_088172F0;
L_088157B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08815750;
      }
      goto L_088157D0;
    }
L_088157D0:
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
L_088157F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08815800u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 11u, 0x088180CCu>(ctx, &aot_mem) && ctx.pc == 0x08815800u) goto L_08815800;
    return;
L_08815800:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08815814:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08815848;
L_08815848:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08815864;
    }
    goto L_08815850;
L_08815850:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08815860u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 371u, 0x08811DFCu>(ctx, &aot_mem) && ctx.pc == 0x08815860u) goto L_08815860;
    return;
L_08815860:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08815864;
L_08815864:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 32 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08815848;
    }
    goto L_08815870;
L_08815870:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08815890:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08815914;
      }
      goto L_088158B8;
    }
L_088158B8:
    ctx.gpr[31] = (0x088158C0u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 860u, 0x0881F498u>(ctx, &aot_mem) && ctx.pc == 0x088158C0u) goto L_088158C0;
    return;
L_088158C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08815930;
      }
      goto L_088158C8;
    }
L_088158C8:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(200)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[8] & 1023u);
    ctx.gpr[7] = (ctx.gpr[8] >> 10u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x088158F8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26532));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088158F8u) goto L_088158F8;
    return;
L_088158F8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x08815914u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 619u, 0x0897A9C0u>(ctx, &aot_mem) && ctx.pc == 0x08815914u) goto L_08815914;
    return;
L_08815914:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08815930:
    ctx.gpr[31] = (0x08815938u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 856u, 0x0881B364u>(ctx, &aot_mem) && ctx.pc == 0x08815938u) goto L_08815938;
    return;
L_08815938:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08815954:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08815974u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 859u, 0x0881F488u>(ctx, &aot_mem) && ctx.pc == 0x08815974u) goto L_08815974;
    return;
L_08815974:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[17] = (2221u << 16u);
      if (branch_taken) {
          goto L_0881598C;
      }
      goto L_08815980;
    }
L_08815980:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881598Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 755u, 0x0881AE04u>(ctx, &aot_mem) && ctx.pc == 0x0881598Cu) goto L_0881598C;
    return;
L_0881598C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (ctx.gpr[6] != ctx.gpr[5]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(316)));
        goto L_088159B8;
    }
    goto L_088159A0;
L_088159A0:
    ctx.gpr[31] = (0x088159A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 11u, 0x088180CCu>(ctx, &aot_mem) && ctx.pc == 0x088159A8u) goto L_088159A8;
    return;
L_088159A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
      if (branch_taken) {
          goto L_088159C4;
      }
      goto L_088159B8;
    }
L_088159B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088159C4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08817360;
L_088159C4:
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
L_088159DC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088159E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08815A08u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 858u, 0x0881F478u>(ctx, &aot_mem) && ctx.pc == 0x08815A08u) goto L_08815A08;
    return;
L_08815A08:
    ctx.gpr[19] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-464), 0u);
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 484u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08815A2Cu);
    ctx.gpr[5] = (0u | 144u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08815A2Cu) goto L_08815A2C;
    return;
L_08815A2C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-464), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08815AB0;
      }
      goto L_08815A38;
    }
L_08815A38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 2048u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08815A4Cu);
    ctx.gpr[5] = (0u | 144u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08815A4Cu) goto L_08815A4C;
    return;
L_08815A4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[6] = (0u | 2048u);
    ctx.gpr[31] = (0x08815A68u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08815A68u) goto L_08815A68;
    return;
L_08815A68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(308), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(356)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(312), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(316), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[31] = (0x08815AB0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), 0u);
    goto L_08815AD4;
L_08815AB0:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08815AD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[16] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    goto L_08815B1C;
L_08815B1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-1632)));
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08815B30u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08815B30u) goto L_08815B30;
    return;
L_08815B30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-1628)));
    ctx.gpr[31] = (0x08815B3Cu);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08815B3Cu) goto L_08815B3C;
    return;
L_08815B3C:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(60), 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_08815B1C;
      }
      goto L_08815B68;
    }
L_08815B68:
    ctx.gpr[5] = (0u | 15u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_08815B80;
L_08815B80:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08815B80;
      }
      goto L_08815B94;
    }
L_08815B94:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(320), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(324), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(468), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(472), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(476), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(480), 0u);
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
L_08815BD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[22]);
    ctx.gpr[22] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-464)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08815DAC;
      }
      goto L_08815C14;
    }
L_08815C14:
    ctx.gpr[4] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26560));
    ctx.gpr[23] = (2219u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 7u);
    ctx.gpr[21] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    ctx.gpr[30] = (0u | 30u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(26572));
    ctx.gpr[19] = (2221u << 16u);
    goto L_08815C40;
L_08815C40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[5] = (ctx.gpr[17] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08815D00;
      }
      goto L_08815C54;
    }
L_08815C54:
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
    ctx.gpr[1] = (2219u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[17]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(27648)));
    jump_target = ctx.gpr[1];
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08815C6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[31] = (0x08815C78u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08815C78u) goto L_08815C78;
    return;
L_08815C78:
    ctx.gpr[31] = (0x08815C80u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    goto L_088177AC;
L_08815C80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08815D30;
      }
      goto L_08815C88;
    }
L_08815C88:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08815D2C;
      }
      goto L_08815C90;
    }
L_08815C90:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08815D2C;
      }
      goto L_08815C98;
    }
L_08815C98:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08815D2C;
      }
      goto L_08815CA0;
    }
L_08815CA0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08815D2C;
      }
      goto L_08815CA8;
    }
L_08815CA8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08815D2C;
      }
      goto L_08815CB0;
    }
L_08815CB0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
      if (branch_taken) {
          goto L_08815D2C;
      }
      goto L_08815CB8;
    }
L_08815CB8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[4] = (0u | 36u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08815D2C;
      }
      goto L_08815CCC;
    }
L_08815CCC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-1632)));
    ctx.gpr[31] = (0x08815CD8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08815CD8u) goto L_08815CD8;
    return;
L_08815CD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08815D30;
      }
      goto L_08815CE0;
    }
L_08815CE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[30]);
      if (branch_taken) {
          goto L_08815D2C;
      }
      goto L_08815CEC;
    }
L_08815CEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-1632)));
    ctx.gpr[31] = (0x08815CF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08815CF8u) goto L_08815CF8;
    return;
L_08815CF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08815D30;
      }
      goto L_08815D00;
    }
L_08815D00:
    ctx.gpr[31] = (0x08815D08u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 10u, 0x088180A8u>(ctx, &aot_mem) && ctx.pc == 0x08815D08u) goto L_08815D08;
    return;
L_08815D08:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08815D30;
    }
    goto L_08815D10;
L_08815D10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-1632)));
    ctx.gpr[31] = (0x08815D1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08815D1Cu) goto L_08815D1C;
    return;
L_08815D1C:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[21];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08815D2C;
      }
      goto L_08815D24;
    }
L_08815D24:
    ctx.gpr[31] = (0x08815D2Cu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08815D2Cu) goto L_08815D2C;
    return;
L_08815D2C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08815D30;
L_08815D30:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08815C40;
      }
      goto L_08815D3C;
    }
L_08815D3C:
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19864));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(21608));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21608)));
    ctx.gpr[7] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08815D94u);
    ctx.gpr[18] = (ctx.gpr[7] + static_cast<std::uint32_t>(19848));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 621u, 0x0880ABA0u>(ctx, &aot_mem) && ctx.pc == 0x08815D94u) goto L_08815D94;
    return;
L_08815D94:
    ctx.gpr[31] = (0x08815D9Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 23u, 0x088181D8u>(ctx, &aot_mem) && ctx.pc == 0x08815D9Cu) goto L_08815D9C;
    return;
L_08815D9C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[18]);
    ctx.gpr[31] = (0x08815DACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 624u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x08815DACu) goto L_08815DAC;
    return;
L_08815DAC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08815DE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08815E40;
      }
      goto L_08815E00;
    }
L_08815E00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
      if (branch_taken) {
          goto L_08815E30;
      }
      goto L_08815E14;
    }
L_08815E14:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08815E20u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08815E20u) goto L_08815E20;
    return;
L_08815E20:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    goto L_08815E30;
L_08815E30:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08815E3Cu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08815E3Cu) goto L_08815E3C;
    return;
L_08815E3C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-464), 0u);
    goto L_08815E40;
L_08815E40:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08815E54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(172));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08815F34;
      }
      goto L_08815E7C;
    }
L_08815E7C:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08815F34;
      }
      goto L_08815E8C;
    }
L_08815E8C:
    ctx.gpr[31] = (0x08815E94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 859u, 0x0881F488u>(ctx, &aot_mem) && ctx.pc == 0x08815E94u) goto L_08815E94;
    return;
L_08815E94:
    ctx.gpr[19] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08815EF4;
      }
      goto L_08815EA0;
    }
L_08815EA0:
    ctx.gpr[31] = (0x08815EA8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x08815EA8u) goto L_08815EA8;
    return;
L_08815EA8:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08815EE4;
      }
      goto L_08815EB0;
    }
L_08815EB0:
    ctx.gpr[31] = (0x08815EB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 209u, 0x088BD67Cu>(ctx, &aot_mem) && ctx.pc == 0x08815EB8u) goto L_08815EB8;
    return;
L_08815EB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_08815ED4;
      }
      goto L_08815EC4;
    }
L_08815EC4:
    ctx.gpr[31] = (0x08815ECCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 655u, 0x08836DF8u>(ctx, &aot_mem) && ctx.pc == 0x08815ECCu) goto L_08815ECC;
    return;
L_08815ECC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08815F34;
      }
      goto L_08815ED4;
    }
L_08815ED4:
    ctx.gpr[31] = (0x08815EDCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 334u, 0x088C5CF4u>(ctx, &aot_mem) && ctx.pc == 0x08815EDCu) goto L_08815EDC;
    return;
L_08815EDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08815F34;
      }
      goto L_08815EE4;
    }
L_08815EE4:
    ctx.gpr[31] = (0x08815EECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 655u, 0x08836DF8u>(ctx, &aot_mem) && ctx.pc == 0x08815EECu) goto L_08815EEC;
    return;
L_08815EEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08815F34;
      }
      goto L_08815EF4;
    }
L_08815EF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08815F28;
      }
      goto L_08815F04;
    }
L_08815F04:
    ctx.gpr[31] = (0x08815F0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 113u, 0x088187A8u>(ctx, &aot_mem) && ctx.pc == 0x08815F0Cu) goto L_08815F0C;
    return;
L_08815F0C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08815F34;
      }
      goto L_08815F18;
    }
L_08815F18:
    ctx.gpr[31] = (0x08815F20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08815BD4;
L_08815F20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08815F34;
      }
      goto L_08815F28;
    }
L_08815F28:
    ctx.gpr[31] = (0x08815F30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08815BD4;
L_08815F30:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_08815F34;
L_08815F34:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_08815F54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(172));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08815FB8;
      }
      goto L_08815F70;
    }
L_08815F70:
    ctx.gpr[31] = (0x08815F78u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0881645C;
L_08815F78:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08815F80;
L_08815F80:
    ctx.gpr[31] = (0x08815F88u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 121u, 0x0881C5A8u>(ctx, &aot_mem) && ctx.pc == 0x08815F88u) goto L_08815F88;
    return;
L_08815F88:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08815F80;
      }
      goto L_08815F98;
    }
L_08815F98:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08815FA0;
L_08815FA0:
    ctx.gpr[31] = (0x08815FA8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 325u, 0x088195C4u>(ctx, &aot_mem) && ctx.pc == 0x08815FA8u) goto L_08815FA8;
    return;
L_08815FA8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08815FA0;
      }
      goto L_08815FB8;
    }
L_08815FB8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08815FCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    goto L_08816004;
L_08816004:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 256u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08816018u);
    ctx.gpr[5] = (0u | 144u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08816018u) goto L_08816018;
    return;
L_08816018:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(172), ctx.gpr[2]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[23] = (ctx.gpr[16] | 0u);
    goto L_08816028;
L_08816028:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(172)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_08816040;
      }
      goto L_08816038;
    }
L_08816038:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08816068;
      }
      goto L_08816040;
    }
L_08816040:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 152u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08816054u);
    ctx.gpr[5] = (0u | 144u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08816054u) goto L_08816054;
    return;
L_08816054:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08816068;
      }
      goto L_08816060;
    }
L_08816060:
    ctx.gpr[31] = (0x08816068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 273u, 0x08811604u>(ctx, &aot_mem) && ctx.pc == 0x08816068u) goto L_08816068;
    return;
L_08816068:
    if (ctx.gpr[17] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
        goto L_08816078;
    }
    goto L_08816070;
L_08816070:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_088160A0;
      }
      goto L_08816078;
    }
L_08816078:
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08816088u);
    ctx.gpr[5] = (0u | 144u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08816088u) goto L_08816088;
    return;
L_08816088:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[22] == 0u) {
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(44), 0u);
        goto L_088160A4;
    }
    goto L_08816098;
L_08816098:
    ctx.gpr[31] = (0x088160A0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 741u, 0x0882EE90u>(ctx, &aot_mem) && ctx.pc == 0x088160A0u) goto L_088160A0;
    return;
L_088160A0:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(44), 0u);
    goto L_088160A4;
L_088160A4:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08816028;
      }
      goto L_088160B8;
    }
L_088160B8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08816004;
      }
      goto L_088160C8;
    }
L_088160C8:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088160F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(172));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_088161D4;
      }
      goto L_08816124;
    }
L_08816124:
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (2222u << 16u);
    goto L_0881612C;
L_0881612C:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(172)));
    ctx.gpr[18] = (0u | 0u);
    goto L_08816138;
L_08816138:
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_08816178;
    }
    goto L_08816148;
L_08816148:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
        goto L_08816164;
    }
    goto L_08816154;
L_08816154:
    ctx.gpr[31] = (0x0881615Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 304u, 0x088118E0u>(ctx, &aot_mem) && ctx.pc == 0x0881615Cu) goto L_0881615C;
    return;
L_0881615C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    goto L_08816164;
L_08816164:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08816170u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08816170u) goto L_08816170;
    return;
L_08816170:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08816178;
L_08816178:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_088161A0;
    }
    goto L_08816180;
L_08816180:
    ctx.gpr[31] = (0x08816188u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 742u, 0x0882EEA8u>(ctx, &aot_mem) && ctx.pc == 0x08816188u) goto L_08816188;
    return;
L_08816188:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08816198u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08816198u) goto L_08816198;
    return;
L_08816198:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_088161A0;
L_088161A0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(172)));
      if (branch_taken) {
          goto L_08816138;
      }
      goto L_088161B0;
    }
L_088161B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088161C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088161C0u) goto L_088161C0;
    return;
L_088161C0:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(172), 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881612C;
      }
      goto L_088161D4;
    }
L_088161D4:
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
L_088161F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(172));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0881628C;
      }
      goto L_08816228;
    }
L_08816228:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[22] = (2222u << 16u);
    goto L_08816234;
L_08816234:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    goto L_0881623C;
L_0881623C:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(172)));
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08816270;
    }
    goto L_08816250;
L_08816250:
    ctx.gpr[31] = (0x08816258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 742u, 0x0882EEA8u>(ctx, &aot_mem) && ctx.pc == 0x08816258u) goto L_08816258;
    return;
L_08816258:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08816268u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08816268u) goto L_08816268;
    return;
L_08816268:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08816270;
L_08816270:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0881623C;
      }
      goto L_0881627C;
    }
L_0881627C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08816234;
      }
      goto L_0881628C;
    }
L_0881628C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088162D0;
      }
      goto L_08816298;
    }
L_08816298:
    ctx.gpr[18] = (0u | 0u);
    goto L_0881629C;
L_0881629C:
    ctx.gpr[31] = (0x088162A4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 742u, 0x0882EEA8u>(ctx, &aot_mem) && ctx.pc == 0x088162A4u) goto L_088162A4;
    return;
L_088162A4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[17] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
      if (branch_taken) {
          goto L_0881629C;
      }
      goto L_088162B8;
    }
L_088162B8:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088162CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088162CCu) goto L_088162CC;
    return;
L_088162CC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(180), 0u);
    goto L_088162D0;
L_088162D0:
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
L_088162F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(172));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08816438;
      }
      goto L_0881632C;
    }
L_0881632C:
    ctx.gpr[4] = (ctx.gpr[18] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] & 2u);
      if (branch_taken) {
          goto L_0881640C;
      }
      goto L_08816338;
    }
L_08816338:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (ctx.gpr[17] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(172)));
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[18] & 2u);
        goto L_0881640C;
    }
    goto L_08816364;
L_08816364:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] & 2u);
      if (branch_taken) {
          goto L_0881640C;
      }
      goto L_08816370;
    }
L_08816370:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881637Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08814EA4;
L_0881637C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08816388u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_0881507C;
L_08816388:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08816400;
      }
      goto L_08816390;
    }
L_08816390:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08816400;
      }
      goto L_088163A4;
    }
L_088163A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088163B8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 266u, 0x089A58B4u>(ctx, &aot_mem) && ctx.pc == 0x088163B8u) goto L_088163B8;
    return;
L_088163B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088163E0;
      }
      goto L_088163CC;
    }
L_088163CC:
    ctx.gpr[31] = (0x088163D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 186u, 0x089D92E4u>(ctx, &aot_mem) && ctx.pc == 0x088163D4u) goto L_088163D4;
    return;
L_088163D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_088163F0;
      }
      goto L_088163E0;
    }
L_088163E0:
    ctx.gpr[31] = (0x088163E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 170u, 0x089D9188u>(ctx, &aot_mem) && ctx.pc == 0x088163E8u) goto L_088163E8;
    return;
L_088163E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_088163F0;
L_088163F0:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088163A4;
      }
      goto L_08816400;
    }
L_08816400:
    ctx.gpr[31] = (0x08816408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 304u, 0x088118E0u>(ctx, &aot_mem) && ctx.pc == 0x08816408u) goto L_08816408;
    return;
L_08816408:
    ctx.gpr[4] = (ctx.gpr[18] & 2u);
    goto L_0881640C;
L_0881640C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08816438;
      }
      goto L_08816414;
    }
L_08816414:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    ctx.gpr[5] = (ctx.gpr[17] << 3u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08816438;
      }
      goto L_08816430;
    }
L_08816430:
    ctx.gpr[31] = (0x08816438u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 742u, 0x0882EEA8u>(ctx, &aot_mem) && ctx.pc == 0x08816438u) goto L_08816438;
    return;
L_08816438:
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
L_0881645C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[30]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[30] & 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-3));
      if (branch_taken) {
          goto L_08816668;
      }
      goto L_0881649C;
    }
L_0881649C:
    ctx.gpr[4] = (ctx.gpr[30] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[30] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[4] = (0u | 15u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_08816668;
      }
      goto L_088164C0;
    }
L_088164C0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1536));
    ctx.gpr[5] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1560));
    ctx.gpr[4] = (2219u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26584));
    ctx.gpr[21] = (2221u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1576));
    goto L_088164FC;
L_088164FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(180)));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-464)));
        goto L_0881651C;
    }
    goto L_08816510;
L_08816510:
    ctx.gpr[31] = (0x08816518u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 742u, 0x0882EEA8u>(ctx, &aot_mem) && ctx.pc == 0x08816518u) goto L_08816518;
    return;
L_08816518:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-464)));
    goto L_0881651C;
L_0881651C:
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[6];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0881654C;
      }
      goto L_08816528;
    }
L_08816528:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0881655C;
      }
      goto L_0881654C;
    }
L_0881654C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0881655C;
L_0881655C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08816578u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08816578u) goto L_08816578;
    return;
L_08816578:
    ctx.gpr[31] = (0x08816580u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 741u, 0x0882EE90u>(ctx, &aot_mem) && ctx.pc == 0x08816580u) goto L_08816580;
    return;
L_08816580:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17320)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_0881662C;
      }
      goto L_0881659C;
    }
L_0881659C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-1640)));
      if (branch_taken) {
          goto L_088165D4;
      }
      goto L_088165B0;
    }
L_088165B0:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088165C0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08814BEC;
L_088165C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088165CCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 720u, 0x0882ED10u>(ctx, &aot_mem) && ctx.pc == 0x088165CCu) goto L_088165CC;
    return;
L_088165CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_0881664C;
      }
      goto L_088165D4;
    }
L_088165D4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[21]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(264));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088165ECu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08814C5C;
L_088165EC:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088165F8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x088165F8u) goto L_088165F8;
    return;
L_088165F8:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08816608u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x08816608u) goto L_08816608;
    return;
L_08816608:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08816614u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 881u, 0x0882F7DCu>(ctx, &aot_mem) && ctx.pc == 0x08816614u) goto L_08816614;
    return;
L_08816614:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(200)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(200), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
      if (branch_taken) {
          goto L_08816648;
      }
      goto L_0881662C;
    }
L_0881662C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1660)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0881663Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08814BEC;
L_0881663C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08816648u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 720u, 0x0882ED10u>(ctx, &aot_mem) && ctx.pc == 0x08816648u) goto L_08816648;
    return;
L_08816648:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_0881664C;
L_0881664C:
    ctx.gpr[31] = (0x08816654u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08816698;
L_08816654:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088164FC;
      }
      goto L_08816668;
    }
L_08816668:
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
L_08816698:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1592));
    ctx.gpr[6] = (ctx.gpr[16] << 4u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088166DCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 779u, 0x0882F254u>(ctx, &aot_mem) && ctx.pc == 0x088166DCu) goto L_088166DC;
    return;
L_088166DC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088166ECu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_088172F0;
L_088166EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
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
L_08816714:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[20] = (2177u << 16u);
    ctx.gpr[22] = (2203u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[30]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(22108));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-2384));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    goto L_08816764;
L_08816764:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(172)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_08816808;
      }
      goto L_0881678C;
    }
L_0881678C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_0881680C;
    }
    goto L_088167A4;
L_088167A4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08816808;
      }
      goto L_088167BC;
    }
L_088167BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088167D8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 262u, 0x089B1834u>(ctx, &aot_mem) && ctx.pc == 0x088167D8u) goto L_088167D8;
    return;
L_088167D8:
    ctx.gpr[31] = (0x088167E0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 10u, 0x088180A8u>(ctx, &aot_mem) && ctx.pc == 0x088167E0u) goto L_088167E0;
    return;
L_088167E0:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
        goto L_088167F8;
    }
    goto L_088167E8;
L_088167E8:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
      if (branch_taken) {
          goto L_088167F4;
      }
      goto L_088167F0;
    }
L_088167F0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    goto L_088167F4;
L_088167F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    goto L_088167F8;
L_088167F8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088167BC;
      }
      goto L_08816808;
    }
L_08816808:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_0881680C;
L_0881680C:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08816764;
      }
      goto L_08816828;
    }
L_08816828:
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
L_08816858:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    goto L_08816894;
L_08816894:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[5] = (ctx.gpr[17] << (ctx.gpr[16] & 31u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_088168B4;
      }
      goto L_088168AC;
    }
L_088168AC:
    ctx.gpr[31] = (0x088168B4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08816698;
L_088168B4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_08816894;
      }
      goto L_088168C4;
    }
L_088168C4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1360));
    ctx.gpr[30] = (2219u << 16u);
    ctx.gpr[23] = (2219u << 16u);
    ctx.gpr[22] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(26596));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(26608));
    goto L_088168E0;
L_088168E0:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    goto L_088168F0;
L_088168F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    if (ctx.gpr[22] != ctx.gpr[4]) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_088169B8;
    }
    goto L_088168FC;
L_088168FC:
    ctx.gpr[31] = (0x08816904u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 354u, 0x088197E4u>(ctx, &aot_mem) && ctx.pc == 0x08816904u) goto L_08816904;
    return;
L_08816904:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << (ctx.gpr[16] & 31u));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_088169B8;
    }
    goto L_08816928;
L_08816928:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0881693Cu);
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0881693Cu) goto L_0881693C;
    return;
L_0881693C:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0881694Cu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0881694Cu) goto L_0881694C;
    return;
L_0881694C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088169B4;
      }
      goto L_08816954;
    }
L_08816954:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(172)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_088169B8;
    }
    goto L_0881696C;
L_0881696C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08816990u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 793u, 0x0882F340u>(ctx, &aot_mem) && ctx.pc == 0x08816990u) goto L_08816990;
    return;
L_08816990:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088169A0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_088172F0;
L_088169A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_088169B4;
L_088169B4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_088169B8;
L_088169B8:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(28));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088168F0;
      }
      goto L_088169CC;
    }
L_088169CC:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088168E0;
      }
      goto L_088169DC;
    }
L_088169DC:
    ctx.gpr[17] = (0u | 6u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[20] = (2221u << 16u);
    goto L_088169EC;
L_088169EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[5] = (ctx.gpr[19] << (ctx.gpr[16] & 31u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08816A44;
    }
    goto L_08816A04;
L_08816A04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08816A24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 25u, 0x088301ECu>(ctx, &aot_mem) && ctx.pc == 0x08816A24u) goto L_08816A24;
    return;
L_08816A24:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08816A34u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_088172F0;
L_08816A34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08816A44;
L_08816A44:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088169EC;
      }
      goto L_08816A50;
    }
L_08816A50:
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
L_08816A80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    goto L_08816ABC;
L_08816ABC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(172)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08816B5C;
    }
    goto L_08816ADC;
L_08816ADC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08816B5C;
    }
    goto L_08816AE8;
L_08816AE8:
    ctx.gpr[31] = (0x08816AF0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 354u, 0x088197E4u>(ctx, &aot_mem) && ctx.pc == 0x08816AF0u) goto L_08816AF0;
    return;
L_08816AF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08816B58;
      }
      goto L_08816B00;
    }
L_08816B00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08816B58;
      }
      goto L_08816B1C;
    }
L_08816B1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08816B58;
      }
      goto L_08816B30;
    }
L_08816B30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[31] = (0x08816B44u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 419u, 0x0881259Cu>(ctx, &aot_mem) && ctx.pc == 0x08816B44u) goto L_08816B44;
    return;
L_08816B44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08816B30;
      }
      goto L_08816B58;
    }
L_08816B58:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08816B5C;
L_08816B5C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08816ABC;
      }
      goto L_08816B6C;
    }
L_08816B6C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-464)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
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
L_08816BA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08816BCCu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08817100;
L_08816BCC:
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1360));
    ctx.gpr[20] = (0u | 0u);
    goto L_08816BE0;
L_08816BE0:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08816BE4;
L_08816BE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[21] != ctx.gpr[4]) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08816C18;
    }
    goto L_08816BF0;
L_08816BF0:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08816C0C;
      }
      goto L_08816BF8;
    }
L_08816BF8:
    ctx.gpr[31] = (0x08816C00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 21u, 0x088181C0u>(ctx, &aot_mem) && ctx.pc == 0x08816C00u) goto L_08816C00;
    return;
L_08816C00:
    if (ctx.gpr[2] == ctx.gpr[17]) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08816C18;
    }
    goto L_08816C08;
L_08816C08:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08816C0C;
L_08816C0C:
    ctx.gpr[31] = (0x08816C14u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08816C58;
L_08816C14:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08816C18;
L_08816C18:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08816BE4;
      }
      goto L_08816C24;
    }
L_08816C24:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08816BE0;
      }
      goto L_08816C34;
    }
L_08816C34:
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
L_08816C58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(172)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[5] << 3u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08816E6C;
      }
      goto L_08816CB4;
    }
L_08816CB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08816E6C;
      }
      goto L_08816CC0;
    }
L_08816CC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 15u);
      if (branch_taken) {
          goto L_08816E6C;
      }
      goto L_08816CCC;
    }
L_08816CCC:
    if (ctx.gpr[17] != ctx.gpr[4]) {
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08816CE8;
    }
    goto L_08816CD4;
L_08816CD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08816E6C;
      }
      goto L_08816CE4;
    }
L_08816CE4:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08816CE8;
L_08816CE8:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17320)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08816DE8;
      }
      goto L_08816D04;
    }
L_08816D04:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (0u | 1u);
      if (branch_taken) {
          goto L_08816E6C;
      }
      goto L_08816D14;
    }
L_08816D14:
    ctx.gpr[22] = (0u | 0u);
    goto L_08816D18;
L_08816D18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[22]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08816D30u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_0881507C;
L_08816D30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08816D54;
      }
      goto L_08816D38;
    }
L_08816D38:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08816D4Cu);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    goto L_08817074;
L_08816D4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08816DD0;
      }
      goto L_08816D54;
    }
L_08816D54:
    ctx.gpr[31] = (0x08816D5Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 266u, 0x089A58B4u>(ctx, &aot_mem) && ctx.pc == 0x08816D5Cu) goto L_08816D5C;
    return;
L_08816D5C:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
        goto L_08816DB0;
    }
    goto L_08816D64;
L_08816D64:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08816D78u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    goto L_08817074;
L_08816D78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08816D94u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 199u, 0x089D941Cu>(ctx, &aot_mem) && ctx.pc == 0x08816D94u) goto L_08816D94;
    return;
L_08816D94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08816DA8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 264u, 0x089A5880u>(ctx, &aot_mem) && ctx.pc == 0x08816DA8u) goto L_08816DA8;
    return;
L_08816DA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08816DD0;
      }
      goto L_08816DB0;
    }
L_08816DB0:
    if (ctx.gpr[4] != ctx.gpr[30]) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08816DD4;
    }
    goto L_08816DB8;
L_08816DB8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08816DCCu);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    goto L_08817074;
L_08816DCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    goto L_08816DD0;
L_08816DD0:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08816DD4;
L_08816DD4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08816D18;
      }
      goto L_08816DE0;
    }
L_08816DE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08816E6C;
      }
      goto L_08816DE8;
    }
L_08816DE8:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08816E6C;
      }
      goto L_08816DF8;
    }
L_08816DF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08816E0Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 266u, 0x089A58B4u>(ctx, &aot_mem) && ctx.pc == 0x08816E0Cu) goto L_08816E0C;
    return;
L_08816E0C:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
        goto L_08816E5C;
    }
    goto L_08816E14;
L_08816E14:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08816E28u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    goto L_08817074;
L_08816E28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08816E44u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 199u, 0x089D941Cu>(ctx, &aot_mem) && ctx.pc == 0x08816E44u) goto L_08816E44;
    return;
L_08816E44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08816E58u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 264u, 0x089A5880u>(ctx, &aot_mem) && ctx.pc == 0x08816E58u) goto L_08816E58;
    return;
L_08816E58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    goto L_08816E5C;
L_08816E5C:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08816DF8;
      }
      goto L_08816E6C;
    }
L_08816E6C:
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
L_08816E9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1360));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[20] = (0u | 0u);
    goto L_08816ED4;
L_08816ED4:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08816ED8;
L_08816ED8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[21] != ctx.gpr[4]) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08816F0C;
    }
    goto L_08816EE4;
L_08816EE4:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08816F00;
      }
      goto L_08816EEC;
    }
L_08816EEC:
    ctx.gpr[31] = (0x08816EF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 21u, 0x088181C0u>(ctx, &aot_mem) && ctx.pc == 0x08816EF4u) goto L_08816EF4;
    return;
L_08816EF4:
    if (ctx.gpr[2] == ctx.gpr[17]) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08816F0C;
    }
    goto L_08816EFC;
L_08816EFC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08816F00;
L_08816F00:
    ctx.gpr[31] = (0x08816F08u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08816F4C;
L_08816F08:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08816F0C;
L_08816F0C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08816ED8;
      }
      goto L_08816F18;
    }
L_08816F18:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08816ED4;
      }
      goto L_08816F28;
    }
L_08816F28:
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
L_08816F4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(172)));
    ctx.gpr[6] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08817058;
      }
      goto L_08816F94;
    }
L_08816F94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08817058;
      }
      goto L_08816FA0;
    }
L_08816FA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2224u << 16u);
      if (branch_taken) {
          goto L_08817058;
      }
      goto L_08816FAC;
    }
L_08816FAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17320)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08817020;
      }
      goto L_08816FC4;
    }
L_08816FC4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08816FD0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0881507C;
L_08816FD0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08817008;
      }
      goto L_08816FD8;
    }
L_08816FD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08816FECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 266u, 0x089A58B4u>(ctx, &aot_mem) && ctx.pc == 0x08816FECu) goto L_08816FEC;
    return;
L_08816FEC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08817008;
      }
      goto L_08816FF4;
    }
L_08816FF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08817004u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 206u, 0x089D94B4u>(ctx, &aot_mem) && ctx.pc == 0x08817004u) goto L_08817004;
    return;
L_08817004:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08817008;
L_08817008:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08817018u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08817074;
L_08817018:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08817058;
      }
      goto L_08817020;
    }
L_08817020:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08817048;
      }
      goto L_08817034;
    }
L_08817034:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08817044u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 206u, 0x089D94B4u>(ctx, &aot_mem) && ctx.pc == 0x08817044u) goto L_08817044;
    return;
L_08817044:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08817048;
L_08817048:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08817058u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08817074;
L_08817058:
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
L_08817074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088170BC;
      }
      goto L_08817080;
    }
L_08817080:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
      if (branch_taken) {
          goto L_08817090;
      }
      goto L_08817088;
    }
L_08817088:
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    goto L_08817090;
L_08817090:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
      if (branch_taken) {
          goto L_088170A4;
      }
      goto L_0881709C;
    }
L_0881709C:
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    goto L_088170A4;
L_088170A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
      if (branch_taken) {
          goto L_088170F8;
      }
      goto L_088170B0;
    }
L_088170B0:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088170BC:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[9] = (ctx.gpr[5] << 2u);
      if (branch_taken) {
          goto L_088170CC;
      }
      goto L_088170C4;
    }
L_088170C4:
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_088170CC;
L_088170CC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[8] = (ctx.gpr[5] << 2u);
      if (branch_taken) {
          goto L_088170E0;
      }
      goto L_088170D8;
    }
L_088170D8:
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    goto L_088170E0;
L_088170E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
      if (branch_taken) {
          goto L_088170F8;
      }
      goto L_088170EC;
    }
L_088170EC:
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_088170F8;
L_088170F8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08817100:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(172)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    ctx.gpr[22] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[22] < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088172B8;
      }
      goto L_0881715C;
    }
L_0881715C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1516));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[30] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (2221u << 16u);
    goto L_0881717C;
L_0881717C:
    if (ctx.gpr[22] != 0u) {
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
        goto L_08817190;
    }
    goto L_08817184;
L_08817184:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08817190;
      }
      goto L_08817190;
    }
L_08817190:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(184)));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[30]);
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(188)));
        goto L_088172A8;
    }
    goto L_088171A0;
L_088171A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
        goto L_0881725C;
    }
    goto L_088171B4;
L_088171B4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (0u | 0u);
    goto L_088171BC;
L_088171BC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 39 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08817248;
    }
    goto L_088171C8;
L_088171C8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 18 ? 1u : 0u);
      if (branch_taken) {
          goto L_088171DC;
      }
      goto L_088171D4;
    }
L_088171D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 16u);
      if (branch_taken) {
          goto L_0881720C;
      }
      goto L_088171DC;
    }
L_088171DC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 25 ? 1u : 0u);
      if (branch_taken) {
          goto L_088171EC;
      }
      goto L_088171E4;
    }
L_088171E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 17u);
      if (branch_taken) {
          goto L_0881720C;
      }
      goto L_088171EC;
    }
L_088171EC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 32 ? 1u : 0u);
      if (branch_taken) {
          goto L_088171FC;
      }
      goto L_088171F4;
    }
L_088171F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 18u);
      if (branch_taken) {
          goto L_0881720C;
      }
      goto L_088171FC;
    }
L_088171FC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 20u);
      if (branch_taken) {
          goto L_0881720C;
      }
      goto L_08817204;
    }
L_08817204:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 19u);
      if (branch_taken) {
          goto L_0881720C;
      }
      goto L_0881720C;
    }
L_0881720C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08817224u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08817224u) goto L_08817224;
    return;
L_08817224:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_0881723C;
      }
      goto L_08817230;
    }
L_08817230:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08817244;
      }
      goto L_0881723C;
    }
L_0881723C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    goto L_08817244;
L_08817244:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08817248;
L_08817248:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088171BC;
      }
      goto L_08817258;
    }
L_08817258:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    goto L_0881725C;
L_0881725C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088172A4;
      }
      goto L_0881726C;
    }
L_0881726C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08817280u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 266u, 0x089A58B4u>(ctx, &aot_mem) && ctx.pc == 0x08817280u) goto L_08817280;
    return;
L_08817280:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08817290;
      }
      goto L_08817288;
    }
L_08817288:
    ctx.gpr[31] = (0x08817290u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 473u, 0x08812D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08817290u) goto L_08817290;
    return;
L_08817290:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881726C;
      }
      goto L_088172A4;
    }
L_088172A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(188)));
    goto L_088172A8;
L_088172A8:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[22] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0881717C;
      }
      goto L_088172B8;
    }
L_088172B8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088172F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881734C;
      }
      goto L_0881731C;
    }
L_0881731C:
    ctx.gpr[31] = (0x08817324u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 923u, 0x0882FBE8u>(ctx, &aot_mem) && ctx.pc == 0x08817324u) goto L_08817324;
    return;
L_08817324:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08817340u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08817340u) goto L_08817340;
    return;
L_08817340:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_0881734C;
L_0881734C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08817360:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-464)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08817470;
      }
      goto L_0881738C;
    }
L_0881738C:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17320)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088173B8;
      }
      goto L_088173A8;
    }
L_088173A8:
    ctx.gpr[31] = (0x088173B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 1018u, 0x0881BEC4u>(ctx, &aot_mem) && ctx.pc == 0x088173B0u) goto L_088173B0;
    return;
L_088173B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08817470;
      }
      goto L_088173B8;
    }
L_088173B8:
    ctx.gpr[31] = (0x088173C0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08817488;
L_088173C0:
    ctx.gpr[31] = (0x088173C8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08815E54;
L_088173C8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088173D4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 706u, 0x0881AB38u>(ctx, &aot_mem) && ctx.pc == 0x088173D4u) goto L_088173D4;
    return;
L_088173D4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088173E0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 579u, 0x0881A4E4u>(ctx, &aot_mem) && ctx.pc == 0x088173E0u) goto L_088173E0;
    return;
L_088173E0:
    ctx.gpr[31] = (0x088173E8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08815F54;
L_088173E8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088173F4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 579u, 0x0881A4E4u>(ctx, &aot_mem) && ctx.pc == 0x088173F4u) goto L_088173F4;
    return;
L_088173F4:
    ctx.gpr[31] = (0x088173FCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08814F68;
L_088173FC:
    ctx.gpr[31] = (0x08817404u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08816E9C;
L_08817404:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08817410u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 579u, 0x0881A4E4u>(ctx, &aot_mem) && ctx.pc == 0x08817410u) goto L_08817410;
    return;
L_08817410:
    ctx.gpr[31] = (0x08817418u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08816714;
L_08817418:
    ctx.gpr[31] = (0x08817420u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08816858;
L_08817420:
    ctx.gpr[31] = (0x08817428u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08815724;
L_08817428:
    ctx.gpr[31] = (0x08817430u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08816A80;
L_08817430:
    ctx.gpr[31] = (0x08817438u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08816BA4;
L_08817438:
    ctx.gpr[31] = (0x08817440u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08814F58;
L_08817440:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0881744Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 579u, 0x0881A4E4u>(ctx, &aot_mem) && ctx.pc == 0x0881744Cu) goto L_0881744C;
    return;
L_0881744C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08817458u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 641u, 0x0881A7BCu>(ctx, &aot_mem) && ctx.pc == 0x08817458u) goto L_08817458;
    return;
L_08817458:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08817464u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 579u, 0x0881A4E4u>(ctx, &aot_mem) && ctx.pc == 0x08817464u) goto L_08817464;
    return;
L_08817464:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-464)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    goto L_08817470;
L_08817470:
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
L_08817488:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-464)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08817580;
      }
      goto L_088174BC;
    }
L_088174BC:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08817520;
      }
      goto L_088174C8;
    }
L_088174C8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0881753C;
      }
      goto L_088174D0;
    }
L_088174D0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08817544;
      }
      goto L_088174D8;
    }
L_088174D8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_088174F0;
      }
      goto L_088174E0;
    }
L_088174E0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08817560;
      }
      goto L_088174E8;
    }
L_088174E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08817580;
      }
      goto L_088174F0;
    }
L_088174F0:
    ctx.gpr[17] = (0u | 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088174F8;
L_088174F8:
    ctx.gpr[31] = (0x08817500u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_088175AC;
L_08817500:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088174F8;
      }
      goto L_08817510;
    }
L_08817510:
    ctx.gpr[31] = (0x08817518u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088177AC;
L_08817518:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08817580;
      }
      goto L_08817520;
    }
L_08817520:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08817580;
      }
      goto L_0881752C;
    }
L_0881752C:
    ctx.gpr[31] = (0x08817534u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088175AC;
L_08817534:
    ctx.gpr[31] = (0x0881753Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088177AC;
L_0881753C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08817580;
      }
      goto L_08817544;
    }
L_08817544:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08817550u);
    ctx.gpr[5] = (0u | 16u);
    goto L_088175AC;
L_08817550:
    ctx.gpr[31] = (0x08817558u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088177AC;
L_08817558:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08817580;
      }
      goto L_08817560;
    }
L_08817560:
    ctx.gpr[17] = (0u | 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08817568;
L_08817568:
    ctx.gpr[31] = (0x08817570u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_088175AC;
L_08817570:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08817568;
      }
      goto L_08817580;
    }
L_08817580:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08817594:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088175AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (ctx.gpr[5] << 6u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[6] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08817790;
      }
      goto L_088175E4;
    }
L_088175E4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 16u);
      if (branch_taken) {
          goto L_08817790;
      }
      goto L_088175F0;
    }
L_088175F0:
    if (ctx.gpr[16] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
        goto L_088176A0;
    }
    goto L_088175F8;
L_088175F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (static_cast<std::int32_t>(ctx.gpr[5]) >= 0) {
    ctx.gpr[5] = (ctx.gpr[5] & 3u);
        goto L_08817614;
    }
    goto L_08817604;
L_08817604:
    ctx.gpr[5] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u - ctx.gpr[5]);
      if (branch_taken) {
          goto L_08817614;
      }
      goto L_08817614;
    }
L_08817614:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[7] = (ctx.gpr[7] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 4u);
      if (branch_taken) {
          goto L_08817658;
      }
      goto L_08817634;
    }
L_08817634:
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 4u);
      if (branch_taken) {
          goto L_08817658;
      }
      goto L_08817640;
    }
L_08817640:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1632)));
    ctx.gpr[31] = (0x08817650u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08817650u) goto L_08817650;
    return;
L_08817650:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08817790;
      }
      goto L_08817658;
    }
L_08817658:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[7] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1516));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08817698u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08817698u) goto L_08817698;
    return;
L_08817698:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08817790;
      }
      goto L_088176A0;
    }
L_088176A0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088176D0;
      }
      goto L_088176A8;
    }
L_088176A8:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1632)));
    ctx.gpr[31] = (0x088176B8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088176B8u) goto L_088176B8;
    return;
L_088176B8:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1628)));
    ctx.gpr[31] = (0x088176C8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088176C8u) goto L_088176C8;
    return;
L_088176C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08817790;
      }
      goto L_088176D0;
    }
L_088176D0:
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-344));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-64)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1516));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0881770Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0881770Cu) goto L_0881770C;
    return;
L_0881770C:
    ctx.gpr[4] = (0u | 20u);
    if (ctx.gpr[16] == ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
        goto L_08817740;
    }
    goto L_08817718;
L_08817718:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08817738u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26616));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08817738u) goto L_08817738;
    return;
L_08817738:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08817790;
      }
      goto L_08817740;
    }
L_08817740:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 1u));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_0881776C;
      }
      goto L_08817758;
    }
L_08817758:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1628)));
    ctx.gpr[31] = (0x08817764u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08817764u) goto L_08817764;
    return;
L_08817764:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08817790;
      }
      goto L_0881776C;
    }
L_0881776C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08817790u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26628));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08817790u) goto L_08817790;
    return;
L_08817790:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088177AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26648));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088177DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(896));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088177DCu) goto L_088177DC;
    return;
L_088177DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26572));
    ctx.gpr[31] = (0x088177F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(960));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088177F4u) goto L_088177F4;
    return;
L_088177F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08817818:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08817834u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 8u, 0x08818070u>(ctx, &aot_mem) && ctx.pc == 0x08817834u) goto L_08817834;
    return;
L_08817834:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_08817884;
      }
      goto L_0881783C;
    }
L_0881783C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1560));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(256));
    ctx.gpr[31] = (0x08817864u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26660));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08817864u) goto L_08817864;
    return;
L_08817864:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2219u << 16u);
      if (branch_taken) {
          goto L_08817884;
      }
      goto L_08817878;
    }
L_08817878:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08817884u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26668));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9E0F4u>(ctx, &aot_mem) && ctx.pc == 0x08817884u) goto L_08817884;
    return;
L_08817884:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08817898:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x088178CCu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 8u, 0x08818070u>(ctx, &aot_mem) && ctx.pc == 0x088178CCu) goto L_088178CC;
    return;
L_088178CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[22] = (2221u << 16u);
      if (branch_taken) {
          goto L_08817944;
      }
      goto L_088178D4;
    }
L_088178D4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088178E0u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 8u, 0x08818070u>(ctx, &aot_mem) && ctx.pc == 0x088178E0u) goto L_088178E0;
    return;
L_088178E0:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_08817A50;
      }
      goto L_088178EC;
    }
L_088178EC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1560));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(512));
    ctx.gpr[31] = (0x08817914u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26660));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08817914u) goto L_08817914;
    return;
L_08817914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2219u << 16u);
      if (branch_taken) {
          goto L_08817934;
      }
      goto L_08817928;
    }
L_08817928:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08817934u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26668));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9E0F4u>(ctx, &aot_mem) && ctx.pc == 0x08817934u) goto L_08817934;
    return;
L_08817934:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08817A50;
      }
      goto L_08817944;
    }
L_08817944:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(26672));
    ctx.gpr[31] = (0x0881795Cu);
    ctx.gpr[21] = (ctx.gpr[6] + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0881795Cu) goto L_0881795C;
    return;
L_0881795C:
    ctx.gpr[18] = (2219u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[2]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(26680));
    ctx.gpr[6] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08817974;
L_08817974:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08817980u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08817980u) goto L_08817980;
    return;
L_08817980:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08817990u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 628u, 0x08A9E368u>(ctx, &aot_mem) && ctx.pc == 0x08817990u) goto L_08817990;
    return;
L_08817990:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08817A40;
      }
      goto L_08817998;
    }
L_08817998:
    ctx.gpr[31] = (0x088179A0u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 8u, 0x08818070u>(ctx, &aot_mem) && ctx.pc == 0x088179A0u) goto L_088179A0;
    return;
L_088179A0:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08817A50;
      }
      goto L_088179AC;
    }
L_088179AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1560));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(512));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088179D4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26660));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088179D4u) goto L_088179D4;
    return;
L_088179D4:
    ctx.gpr[4] = (2219u << 16u);
    ctx.gpr[31] = (0x088179E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26688));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088179E0u) goto L_088179E0;
    return;
L_088179E0:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-324));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 2u);
    if (ctx.gpr[4] != ctx.gpr[7]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
        goto L_08817A34;
    }
    goto L_08817A10;
L_08817A10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2219u << 16u);
      if (branch_taken) {
          goto L_08817A30;
      }
      goto L_08817A24;
    }
L_08817A24:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08817A30u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26668));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9E0F4u>(ctx, &aot_mem) && ctx.pc == 0x08817A30u) goto L_08817A30;
    return;
L_08817A30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    goto L_08817A34;
L_08817A34:
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08817A50;
      }
      goto L_08817A40;
    }
L_08817A40:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[20] < static_cast<std::uint32_t>(38) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08817974;
      }
      goto L_08817A50;
    }
L_08817A50:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08817A78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08817AA8u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 8u, 0x08818070u>(ctx, &aot_mem) && ctx.pc == 0x08817AA8u) goto L_08817AA8;
    return;
L_08817AA8:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_08817AF8;
      }
      goto L_08817AB4;
    }
L_08817AB4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1560));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(960));
    ctx.gpr[31] = (0x08817ADCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26660));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08817ADCu) goto L_08817ADC;
    return;
L_08817ADC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2219u << 16u);
      if (branch_taken) {
          goto L_08817B20;
      }
      goto L_08817AF0;
    }
L_08817AF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08817B30;
      }
      goto L_08817AF8;
    }
L_08817AF8:
    ctx.gpr[2] = (0u | 0u);
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
L_08817B20:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08817B2Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26668));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9E0F4u>(ctx, &aot_mem) && ctx.pc == 0x08817B2Cu) goto L_08817B2C;
    return;
L_08817B2C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08817B30;
L_08817B30:
    ctx.gpr[31] = (0x08817B38u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 8u, 0x08818070u>(ctx, &aot_mem) && ctx.pc == 0x08817B38u) goto L_08817B38;
    return;
L_08817B38:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08817BD0;
      }
      goto L_08817B40;
    }
L_08817B40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(26672));
    ctx.gpr[31] = (0x08817B58u);
    ctx.gpr[21] = (ctx.gpr[6] + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x08817B58u) goto L_08817B58;
    return;
L_08817B58:
    ctx.gpr[17] = (2219u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[2]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(26680));
    ctx.gpr[6] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08817B70;
L_08817B70:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08817B7Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08817B7Cu) goto L_08817B7C;
    return;
L_08817B7C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08817B8Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 628u, 0x08A9E368u>(ctx, &aot_mem) && ctx.pc == 0x08817B8Cu) goto L_08817B8C;
    return;
L_08817B8C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2219u << 16u);
      if (branch_taken) {
          goto L_08817BC0;
      }
      goto L_08817B94;
    }
L_08817B94:
    ctx.gpr[31] = (0x08817B9Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26688));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x08817B9Cu) goto L_08817B9C;
    return;
L_08817B9C:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-324));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08817BD0;
      }
      goto L_08817BC0;
    }
L_08817BC0:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[20] < static_cast<std::uint32_t>(38) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08817B70;
      }
      goto L_08817BD0;
    }
L_08817BD0:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_08817BF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(228));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1560));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(576));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08817C58u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26660));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08817C58u) goto L_08817C58;
    return;
L_08817C58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
        goto L_08817C7C;
    }
    goto L_08817C68;
L_08817C68:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08817C80;
      }
      goto L_08817C7C;
    }
L_08817C7C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08817C80;
L_08817C80:
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08817CA0;
      }
      goto L_08817C8C;
    }
L_08817C8C:
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08817CA0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26692));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08817CA0u) goto L_08817CA0;
    return;
L_08817CA0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08817CB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    ctx.gpr[30] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-464)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[22] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    ctx.gpr[4] = (2219u << 16u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[31] = (0x08817D14u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26700));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 628u, 0x08A9E368u>(ctx, &aot_mem) && ctx.pc == 0x08817D14u) goto L_08817D14;
    return;
L_08817D14:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2219u << 16u);
      if (branch_taken) {
          goto L_08817D38;
      }
      goto L_08817D1C;
    }
L_08817D1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[23] = (2221u << 16u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[21] = (0u | 38u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-172));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(640));
      if (branch_taken) {
          goto L_08817E34;
      }
      goto L_08817D38;
    }
L_08817D38:
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08817D48u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26704));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 628u, 0x08A9E368u>(ctx, &aot_mem) && ctx.pc == 0x08817D48u) goto L_08817D48;
    return;
L_08817D48:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2219u << 16u);
      if (branch_taken) {
          goto L_08817D6C;
      }
      goto L_08817D50;
    }
L_08817D50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[23] = (2221u << 16u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[21] = (0u | 16u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-20));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(640));
      if (branch_taken) {
          goto L_08817E34;
      }
      goto L_08817D6C;
    }
L_08817D6C:
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08817D7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26708));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 628u, 0x08A9E368u>(ctx, &aot_mem) && ctx.pc == 0x08817D7Cu) goto L_08817D7C;
    return;
L_08817D7C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2219u << 16u);
      if (branch_taken) {
          goto L_08817DA0;
      }
      goto L_08817D84;
    }
L_08817D84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[23] = (2221u << 16u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[21] = (0u | 16u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(44));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(640));
      if (branch_taken) {
          goto L_08817E34;
      }
      goto L_08817DA0;
    }
L_08817DA0:
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08817DB0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26712));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 628u, 0x08A9E368u>(ctx, &aot_mem) && ctx.pc == 0x08817DB0u) goto L_08817DB0;
    return;
L_08817DB0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2219u << 16u);
      if (branch_taken) {
          goto L_08817DD4;
      }
      goto L_08817DB8;
    }
L_08817DB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[23] = (2221u << 16u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[21] = (0u | 8u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(108));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(640));
      if (branch_taken) {
          goto L_08817E34;
      }
      goto L_08817DD4;
    }
L_08817DD4:
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08817DE4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26716));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 628u, 0x08A9E368u>(ctx, &aot_mem) && ctx.pc == 0x08817DE4u) goto L_08817DE4;
    return;
L_08817DE4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2219u << 16u);
      if (branch_taken) {
          goto L_08817E08;
      }
      goto L_08817DEC;
    }
L_08817DEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[23] = (2221u << 16u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[21] = (0u | 17u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(140));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(640));
      if (branch_taken) {
          goto L_08817E34;
      }
      goto L_08817E08;
    }
L_08817E08:
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08817E18u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26720));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 628u, 0x08A9E368u>(ctx, &aot_mem) && ctx.pc == 0x08817E18u) goto L_08817E18;
    return;
L_08817E18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(640));
      if (branch_taken) {
          goto L_08817E34;
      }
      goto L_08817E28;
    }
L_08817E28:
    ctx.gpr[23] = (2221u << 16u);
    ctx.gpr[21] = (0u | 5u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(208));
    goto L_08817E34;
L_08817E34:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[16] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08817E70;
      }
      goto L_08817E3C;
    }
L_08817E3C:
    ctx.gpr[4] = (2219u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[31] = (0x08817E4Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26672));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x08817E4Cu) goto L_08817E4C;
    return;
L_08817E4C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08817F08;
      }
      goto L_08817E5C;
    }
L_08817E5C:
    ctx.gpr[19] = (2219u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(26680));
      if (branch_taken) {
          goto L_08817ECC;
      }
      goto L_08817E70;
    }
L_08817E70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1560));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08817E9Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26660));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08817E9Cu) goto L_08817E9C;
    return;
L_08817E9C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08817ECC:
    ctx.gpr[16] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08817ED0;
L_08817ED0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08817EE0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08817EE0u) goto L_08817EE0;
    return;
L_08817EE0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08817EF0u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 628u, 0x08A9E368u>(ctx, &aot_mem) && ctx.pc == 0x08817EF0u) goto L_08817EF0;
    return;
L_08817EF0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
      if (branch_taken) {
          goto L_08817F38;
      }
      goto L_08817EF8;
    }
L_08817EF8:
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08817ED0;
      }
      goto L_08817F08;
    }
L_08817F08:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08817F38:
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08817F50u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(26688));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x08817F50u) goto L_08817F50;
    return;
L_08817F50:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1560));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08817F88u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26660));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08817F88u) goto L_08817F88;
    return;
L_08817F88:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08817FB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08817FD8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 8u, 0x08818070u>(ctx, &aot_mem) && ctx.pc == 0x08817FD8u) goto L_08817FD8;
    return;
L_08817FD8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[6] = (ctx.gpr[16] << 6u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 7u, 0x0881805Cu>(ctx, &aot_mem); return;
      }
      goto L_08817FE0;
    }
L_08817FE0:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1560));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (2219u << 16u);
    ctx.pc = 0x08818000u; return;
}

void recomp_unit_0004(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0004_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_4(Runtime &runtime) {
    runtime.register_generated_unit(4u, 0x08814000u, 16384u, &recomp_unit_0004, &recomp_unit_0004_entry);
    runtime.register_function(0x08814004u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814018u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814028u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814048u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814050u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814060u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814080u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881408Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814098u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088140ACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088140D8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088140ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088140F4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814100u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814114u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814128u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881413Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814148u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881415Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814168u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814178u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814184u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814198u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088141ACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088141C4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088141F8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881420Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814220u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814228u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814234u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814248u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881425Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814294u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088142A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088142B4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088142C0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088142E0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088142ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814300u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814314u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814328u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814348u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814374u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814388u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881439Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088143A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088143B0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088143C4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088143D8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088143ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088143F8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881440Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814418u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814428u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814434u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814448u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881445Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814470u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814488u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088144CCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088144F8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814514u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881451Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814538u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881453Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814544u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814554u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814560u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881456Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881457Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814580u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814588u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814590u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088145A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088145ACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088145D0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088145DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088145ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088145F8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814620u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881463Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814644u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814648u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814650u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814674u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814680u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814690u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088146B0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088146CCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088146D4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088146D8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088146E0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814708u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814714u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814720u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881473Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814748u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814750u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814758u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814764u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881478Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088147A8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088147B0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088147B8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088147C4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088147D8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088147F0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881480Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881481Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814830u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814864u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881489Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088148B0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088148BCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088148CCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088148D8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088148E4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088148ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088148F4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814904u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881490Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881491Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814928u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814930u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814938u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814948u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814950u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881495Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814984u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088149A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088149A8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088149BCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088149C0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088149C8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088149D0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088149D8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088149E8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088149F0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814A10u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814A2Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814A34u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814A48u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814A4Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814A54u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814A5Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814A64u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814A74u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814A7Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814A88u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814AB0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814ACCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814AD4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814AE8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814AF0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814AFCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814B10u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814B14u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814B24u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814B34u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814B58u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814B5Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814B64u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814B8Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814BA0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814BC0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814BCCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814BE0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814BECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814C1Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814C2Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814C38u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814C44u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814C5Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814C88u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814C98u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814CA4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814CB0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814CC8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D00u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D0Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D28u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D34u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D38u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D44u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D4Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D5Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D78u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D84u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D90u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D94u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814DA0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814DDCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814DF0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814E0Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814E30u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814E44u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814E5Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814E68u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814E70u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814EA4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814EE4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814EF0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814EFCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814F10u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814F2Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814F40u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814F58u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814F68u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814F7Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814F8Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814F9Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814FB0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814FF0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815010u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815018u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815028u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815048u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881504Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815058u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881507Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815088u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815094u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088150A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088150A8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088150B0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088150D0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088150ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088150F4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815104u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815128u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815130u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815144u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815158u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815168u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815184u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881518Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088151A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088151B8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088151C0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088151C8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088151D4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088151DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088151E8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815228u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815248u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881525Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815270u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815284u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088152A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088152C0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088152C8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088152DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088152E4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088152ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815304u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815310u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815318u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815320u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881532Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815334u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881533Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815344u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881534Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815358u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815360u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815368u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815378u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815380u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088153B8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088153D4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088153DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088153E0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088153ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815400u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815414u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815444u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815470u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881548Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088154A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088154B0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088154C0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088154C8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088154D0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088154D8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815514u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815528u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881553Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815554u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815560u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815574u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815588u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881559Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088155A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088155A8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088155B8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088155CCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088155DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088155E4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088155ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088155FCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815600u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815604u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881560Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815618u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881561Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881562Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815640u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881565Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815688u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815690u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881569Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088156B0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088156BCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088156D0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088156DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088156ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088156F8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881570Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815724u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815750u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815768u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815778u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088157A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088157B4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088157D0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088157F0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815800u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815814u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815848u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815850u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815860u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815864u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815870u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815890u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088158B8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088158C0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088158C8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088158F8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815914u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815930u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815938u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815954u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815974u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815980u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881598Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088159A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088159A8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088159B8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088159C4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088159DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088159E4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815A08u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815A2Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815A38u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815A4Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815A68u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815AB0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815AD4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815B1Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815B30u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815B3Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815B68u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815B80u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815B94u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815BD4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815C14u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815C40u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815C54u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815C6Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815C78u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815C80u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815C88u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815C90u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815C98u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815CA0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815CA8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815CB0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815CB8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815CCCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815CD8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815CE0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815CECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815CF8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815D00u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815D08u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815D10u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815D1Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815D24u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815D2Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815D30u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815D3Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815D94u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815D9Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815DACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815DE0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815E00u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815E14u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815E20u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815E30u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815E3Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815E40u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815E54u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815E7Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815E8Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815E94u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815EA0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815EA8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815EB0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815EB8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815EC4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815ECCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815ED4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815EDCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815EE4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815EECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815EF4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815F04u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815F0Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815F18u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815F20u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815F28u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815F30u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815F34u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815F54u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815F70u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815F78u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815F80u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815F88u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815F98u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815FA0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815FA8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815FB8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815FCCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816004u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816018u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816028u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816038u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816040u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816054u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816060u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816068u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816070u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816078u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816088u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816098u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088160A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088160A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088160B8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088160C8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088160F8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816124u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881612Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816138u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816148u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816154u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881615Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816164u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816170u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816178u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816180u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816188u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816198u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088161A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088161B0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088161C0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088161D4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088161F8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816228u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816234u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881623Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816250u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816258u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816268u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816270u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881627Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881628Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816298u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881629Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088162A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088162B8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088162CCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088162D0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088162F8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881632Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816338u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816364u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816370u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881637Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816388u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816390u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088163A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088163B8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088163CCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088163D4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088163E0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088163E8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088163F0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816400u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816408u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881640Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816414u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816430u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816438u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881645Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881649Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088164C0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088164FCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816510u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816518u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881651Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816528u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881654Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881655Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816578u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816580u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881659Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088165B0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088165C0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088165CCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088165D4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088165ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088165F8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816608u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816614u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881662Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881663Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816648u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881664Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816654u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816668u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816698u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088166DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088166ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816714u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816764u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881678Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088167A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088167BCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088167D8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088167E0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088167E8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088167F0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088167F4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088167F8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816808u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881680Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816828u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816858u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816894u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088168ACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088168B4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088168C4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088168E0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088168F0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088168FCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816904u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816928u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881693Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881694Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816954u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881696Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816990u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088169A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088169B4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088169B8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088169CCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088169DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088169ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816A04u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816A24u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816A34u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816A44u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816A50u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816A80u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816ABCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816ADCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816AE8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816AF0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816B00u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816B1Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816B30u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816B44u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816B58u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816B5Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816B6Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816BA4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816BCCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816BE0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816BE4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816BF0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816BF8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816C00u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816C08u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816C0Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816C14u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816C18u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816C24u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816C34u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816C58u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816CB4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816CC0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816CCCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816CD4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816CE4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816CE8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D04u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D14u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D18u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D30u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D38u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D4Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D54u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D5Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D64u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D78u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D94u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816DA8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816DB0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816DB8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816DCCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816DD0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816DD4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816DE0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816DE8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816DF8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816E0Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816E14u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816E28u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816E44u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816E58u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816E5Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816E6Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816E9Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816ED4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816ED8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816EE4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816EECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816EF4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816EFCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816F00u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816F08u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816F0Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816F18u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816F28u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816F4Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816F94u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816FA0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816FACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816FC4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816FD0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816FD8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816FECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816FF4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817004u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817008u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817018u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817020u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817034u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817044u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817048u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817058u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817074u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817080u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817088u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817090u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881709Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088170A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088170B0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088170BCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088170C4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088170CCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088170D8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088170E0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088170ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088170F8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817100u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881715Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881717Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817184u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817190u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088171A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088171B4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088171BCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088171C8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088171D4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088171DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088171E4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088171ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088171F4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088171FCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817204u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881720Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817224u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817230u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881723Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817244u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817248u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817258u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881725Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881726Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817280u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817288u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817290u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088172A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088172A8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088172B8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088172F0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881731Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817324u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817340u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881734Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817360u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881738Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088173A8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088173B0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088173B8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088173C0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088173C8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088173D4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088173E0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088173E8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088173F4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088173FCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817404u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817410u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817418u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817420u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817428u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817430u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817438u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817440u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881744Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817458u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817464u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817470u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817488u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088174BCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088174C8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088174D0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088174D8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088174E0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088174E8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088174F0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088174F8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817500u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817510u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817518u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817520u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881752Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817534u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881753Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817544u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817550u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817558u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817560u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817568u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817570u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817580u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817594u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088175ACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088175E4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088175F0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088175F8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817604u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817614u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817634u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817640u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817650u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817658u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817698u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088176A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088176A8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088176B8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088176C8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088176D0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881770Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817718u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817738u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817740u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817758u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817764u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881776Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817790u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088177ACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088177DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088177F4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817818u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817834u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881783Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817864u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817878u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817884u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817898u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088178CCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088178D4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088178E0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088178ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817914u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817928u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817934u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817944u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881795Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817974u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817980u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817990u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817998u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088179A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088179ACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088179D4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088179E0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817A10u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817A24u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817A30u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817A34u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817A40u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817A50u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817A78u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817AA8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817AB4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817ADCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817AF0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817AF8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817B20u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817B2Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817B30u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817B38u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817B40u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817B58u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817B70u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817B7Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817B8Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817B94u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817B9Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817BC0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817BD0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817BF8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817C58u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817C68u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817C7Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817C80u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817C8Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817CA0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817CB4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817D14u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817D1Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817D38u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817D48u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817D50u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817D6Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817D7Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817D84u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817DA0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817DB0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817DB8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817DD4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817DE4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817DECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817E08u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817E18u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817E28u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817E34u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817E3Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817E4Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817E5Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817E70u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817E9Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817ECCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817ED0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817EE0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817EF0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817EF8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817F08u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817F38u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817F50u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817F88u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817FB8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817FD8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817FE0u, &recomp_unit_0004, "recomp_unit_0004");
}
} // namespace psprecomp

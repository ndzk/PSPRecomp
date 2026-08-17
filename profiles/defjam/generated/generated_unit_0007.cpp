#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0007[4095] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0,
    0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 7, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10,
    0, 11, 12, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 17, 0, 0,
    18, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25,
    0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0,
    0, 0, 0, 0, 0, 31, 0, 32, 0, 33, 0, 34, 0, 35, 0, 36, 0, 37, 0, 38, 0, 0, 39, 0, 40, 0, 0, 0, 41, 0, 0, 0,
    42, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 49, 0, 50,
    0, 51, 0, 0, 52, 0, 53, 0, 54, 0, 55, 0, 56, 0, 0, 0, 57, 0, 0, 58, 0, 59, 60, 0, 0, 0, 61, 0, 0, 0, 62, 0,
    0, 0, 0, 0, 0, 63, 0, 64, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 69, 0, 0, 70,
    0, 0, 71, 0, 72, 0, 73, 0, 74, 0, 0, 75, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0,
    0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0,
    0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 88, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 90, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0,
    0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 99, 0,
    0, 100, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0,
    118, 0, 0, 0, 119, 0, 0, 0, 120, 121, 122, 0, 0, 123, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0,
    0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0,
    0, 133, 0, 0, 134, 0, 135, 0, 0, 0, 136, 0, 137, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 142,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 145, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0,
    0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 155, 0,
    0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 160, 161, 0, 0, 0, 0, 0, 0, 162, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 166, 0, 0, 167, 0, 0,
    168, 0, 169, 0, 170, 0, 171, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 180, 0, 0, 181,
    0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 183, 184, 0, 185, 0, 186, 0, 0, 187, 0, 188, 0, 189, 0, 190, 191, 0, 192, 0, 193, 0, 0,
    194, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0, 199, 0, 200, 0, 201, 0, 202, 0, 203,
    0, 204, 0, 205, 0, 0, 206, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 230, 0, 0, 231, 0, 0, 232, 0, 233, 0, 234, 0, 235, 0, 0, 236, 0, 0,
    0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0,
    242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 252, 0, 253, 0, 0,
    0, 0, 254, 0, 0, 255, 0, 256, 0, 0, 0, 0, 0, 257, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0,
    0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 262, 0, 0, 0, 263, 0, 0, 264, 0, 265, 0, 266, 0, 0, 267, 0, 0, 268, 0, 269, 0,
    270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 272, 0, 273, 0, 274, 0, 275, 0, 276, 0, 277, 0, 278, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 281, 0, 282, 0, 283, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 288, 0, 289, 0, 290, 0, 291, 0, 292, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0,
    0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 297, 0, 0, 0, 298, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 301, 0, 0,
    302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 305, 0, 306, 0, 0, 0, 0, 307, 0, 0, 308, 0, 0, 309, 0,
    0, 0, 0, 310, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 317, 0, 0, 318,
    0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 324, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0,
    328, 0, 0, 0, 0, 0, 329, 0, 330, 0, 331, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 334, 0,
    335, 0, 0, 0, 0, 336, 0, 0, 0, 337, 338, 0, 0, 339, 0, 0, 0, 340, 341, 0, 342, 0, 0, 343, 0, 344, 0, 0, 0, 0, 345, 346,
    0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 349, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 352, 0, 353, 354, 0, 0, 355, 0, 0, 0,
    356, 0, 0, 0, 357, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 360, 0, 0, 361, 362, 0, 0, 363, 0, 364, 0, 0, 0, 0, 365,
    0, 366, 0, 367, 0, 0, 0, 368, 369, 0, 0, 370, 0, 0, 0, 371, 372, 0, 373, 0, 0, 374, 0, 0, 0, 0, 375, 376, 0, 0, 0, 377,
    0, 378, 0, 379, 0, 380, 0, 0, 0, 381, 382, 0, 0, 0, 383, 0, 384, 0, 385, 0, 0, 0, 386, 387, 0, 0, 388, 0, 0, 0, 0, 389,
    390, 0, 391, 0, 0, 0, 0, 0, 392, 393, 0, 0, 0, 394, 0, 395, 0, 396, 397, 0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 0, 400, 401,
    0, 402, 0, 403, 0, 404, 0, 405, 0, 406, 0, 407, 0, 408, 0, 409, 0, 410, 0, 411, 0, 412, 0, 0, 0, 0, 413, 0, 414, 0, 415, 0,
    416, 0, 0, 0, 0, 417, 0, 0, 418, 0, 0, 0, 419, 420, 0, 421, 0, 0, 422, 0, 423, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 427, 0, 0, 428,
    0, 429, 0, 0, 0, 0, 0, 430, 0, 431, 0, 0, 0, 0, 432, 0, 433, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 436, 0, 437, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 439, 440, 0, 441, 0, 0, 0, 0, 0, 0, 442, 0, 443, 0, 0, 444, 0, 445, 0,
    446, 0, 447, 0, 448, 0, 0, 0, 449, 0, 450, 0, 451, 0, 452, 0, 453, 0, 454, 0, 455, 0, 456, 457, 0, 0, 0, 458, 0, 0, 0, 0,
    0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 0, 0, 461, 0, 462, 0, 0, 463, 0, 464, 0, 0, 465, 0, 0, 466, 0, 0, 467, 0, 0, 468,
    0, 0, 469, 0, 0, 470, 0, 471, 0, 0, 472, 0, 473, 0, 474, 0, 475, 0, 476, 0, 477, 0, 478, 0, 0, 479, 0, 480, 0, 481, 0, 482,
    0, 483, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    486, 0, 487, 0, 0, 488, 0, 0, 489, 0, 0, 490, 0, 491, 0, 492, 0, 493, 0, 0, 494, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 496, 0, 497, 0, 0, 0, 498, 0, 0, 499, 0, 0, 500, 0, 0, 0, 501, 0, 0, 502, 0, 0, 0, 0, 503, 0, 0, 0, 0, 504,
    0, 0, 505, 0, 506, 0, 0, 0, 0, 507, 508, 0, 509, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 511, 0, 0, 512, 0, 0, 0, 0,
    0, 513, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 516, 0, 0, 517, 0, 518, 519, 0, 520, 0, 0, 0, 0, 521,
    0, 0, 522, 0, 0, 0, 523, 0, 0, 0, 524, 0, 0, 0, 525, 0, 0, 526, 0, 527, 0, 0, 528, 0, 0, 529, 0, 0, 530, 0, 0, 531,
    0, 0, 0, 0, 532, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 535, 0, 536, 0, 537, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 539, 0, 0, 0, 0, 540, 0, 0, 0, 541, 0, 0, 0,
    542, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 545, 0, 546, 0, 0, 0, 547, 0, 548, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 551,
    0, 552, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 556, 0,
    0, 0, 0, 0, 557, 0, 558, 0, 0, 559, 0, 0, 0, 560, 0, 561, 562, 0, 0, 563, 0, 0, 564, 0, 565, 0, 0, 0, 0, 0, 0, 0,
    566, 0, 0, 567, 0, 568, 0, 569, 0, 0, 570, 0, 0, 0, 571, 0, 572, 0, 0, 0, 0, 0, 573, 0, 0, 0, 574, 0, 0, 575, 0, 0,
    0, 576, 0, 577, 0, 578, 0, 0, 0, 0, 579, 580, 0, 581, 0, 0, 582, 0, 0, 0, 0, 0, 583, 0, 0, 584, 0, 0, 0, 585, 0, 0,
    586, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 589, 0, 0, 0, 590, 0, 0, 591, 0, 0, 0, 0, 592, 0, 0,
    0, 0, 0, 0, 0, 0, 593, 0, 594, 0, 0, 595, 596, 597, 0, 598, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 600, 601, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    603, 0, 604, 0, 0, 605, 0, 0, 606, 0, 0, 607, 0, 608, 0, 609, 0, 610, 0, 0, 0, 611, 0, 612, 0, 0, 0, 0, 0, 0, 613, 0,
    0, 614, 0, 0, 0, 0, 0, 0, 615, 0, 616, 0, 617, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 620, 0, 0, 0, 621, 0,
    0, 622, 0, 0, 623, 0, 0, 0, 624, 0, 0, 0, 0, 625, 0, 0, 0, 626, 0, 0, 0, 627, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0,
    0, 629, 0, 0, 0, 0, 630, 0, 0, 0, 0, 631, 0, 0, 0, 632, 0, 633, 0, 0, 634, 0, 635, 0, 0, 636, 0, 637, 0, 638, 0, 639,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0,
    643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 645, 0, 646, 0, 0, 647, 0, 0, 0, 648, 0, 649, 0, 0,
    0, 650, 0, 0, 0, 651, 0, 652, 0, 0, 0, 653, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 656, 0, 0, 657, 0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 660, 0, 0, 0, 0, 0, 0,
    661, 0, 662, 0, 663, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 665, 0, 0, 666, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0,
    0, 0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 671, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 674, 0, 0, 0, 0, 675, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 676,
    0, 0, 0, 677, 0, 0, 0, 0, 678, 0, 0, 0, 679, 0, 680, 0, 0, 0, 0, 0, 0, 0, 0, 681, 0, 0, 0, 0, 682, 0, 0, 0,
    0, 0, 683, 0, 0, 0, 0, 0, 0, 684, 0, 0, 0, 0, 685, 0, 686, 0, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 688, 0, 0, 689,
    0, 0, 0, 690, 0, 0, 0, 691, 0, 0, 0, 0, 692, 0, 0, 693, 0, 0, 0, 694, 0, 0, 0, 0, 695, 0, 0, 696, 0, 0, 0, 0,
    697, 0, 0, 0, 0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 700, 0, 0, 0, 701, 0, 0, 0, 0, 0, 702, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 0, 705, 0, 706, 0,
    0, 707, 0, 0, 0, 708, 0, 709, 0, 0, 0, 0, 710, 0, 711, 712, 0, 0, 713, 0, 0, 0, 0, 0, 714, 715, 0, 716, 0, 0, 717, 0,
    718, 0, 719, 0, 720, 0, 721, 0, 0, 0, 0, 0, 722, 723, 0, 0, 0, 724, 0, 725, 0, 726, 0, 0, 0, 727, 0, 728, 0, 0, 729, 0,
    0, 0, 0, 730, 0, 0, 731, 0, 0, 0, 0, 0, 732, 0, 0, 733, 0, 0, 734, 0, 735, 0, 736, 0, 737, 0, 738, 0, 0, 739, 0, 740,
    0, 741, 0, 0, 0, 0, 0, 742, 0, 743, 0, 744, 0, 0, 0, 0, 0, 0, 745, 746, 0, 747, 0, 748, 0, 749, 0, 750, 0, 751, 0, 752,
    0, 753, 0, 754, 0, 755, 0, 756, 0, 757, 0, 758, 0, 0, 0, 0, 759, 0, 760, 0, 761, 0, 762, 0, 0, 0, 0, 0, 763, 0, 764, 0,
    765, 0, 766, 0, 767, 0, 0, 0, 0, 768, 0, 769, 0, 770, 0, 0, 0, 771, 0, 0, 0, 0, 772, 773, 0, 0, 0, 0, 0, 0, 774, 0,
    0, 0, 0, 0, 775, 0, 776, 0, 0, 777, 0, 778, 0, 0, 779, 0, 0, 0, 0, 0, 0, 780, 0, 781, 0, 0, 0, 0, 782, 0, 783, 784,
    0, 785, 0, 786, 0, 787, 0, 788, 0, 789, 0, 790, 0, 0, 0, 791, 0, 0, 0, 0, 792, 0, 0, 0, 0, 793, 0, 0, 0, 0, 0, 0,
    0, 794, 0, 0, 0, 0, 0, 795, 0, 0, 0, 796, 0, 797, 0, 0, 798, 0, 0, 799, 0, 0, 800, 0, 0, 801, 0, 0, 802, 0, 0, 803,
    0, 0, 804, 0, 0, 0, 0, 0, 0, 805, 0, 0, 0, 0, 0, 0, 806, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 807, 0, 0, 0, 0, 0, 0, 0, 0, 0, 808, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 809, 0, 810,
    0, 811, 0, 0, 0, 0, 0, 812, 0, 0, 0, 0, 0, 813, 0, 0, 0, 0, 0, 0, 0, 814, 0, 815, 816, 0, 817, 0, 818, 0, 0, 819,
    0, 820, 0, 0, 0, 821, 0, 822, 0, 0, 0, 823, 0, 0, 824, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 825, 0, 0,
    0, 826, 0, 0, 0, 0, 827, 0, 828, 0, 0, 829, 830, 0, 0, 0, 0, 831, 0, 832, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    833, 0, 0, 834, 0, 0, 835, 0, 0, 0, 0, 0, 836, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 837, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 838, 0, 839, 0, 0, 840, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 841, 0, 842, 0, 0, 843,
};
void recomp_unit_0007_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08820000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0007[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08820000;
    case 2u: goto L_0882000C;
    case 3u: goto L_08820070;
    case 4u: goto L_08820090;
    case 5u: goto L_088200AC;
    case 6u: goto L_088200B4;
    case 7u: goto L_088200C0;
    case 8u: goto L_088200C4;
    case 9u: goto L_088200D8;
    case 10u: goto L_088200FC;
    case 11u: goto L_08820104;
    case 12u: goto L_08820108;
    case 13u: goto L_08820118;
    case 14u: goto L_08820128;
    case 15u: goto L_08820158;
    case 16u: goto L_08820160;
    case 17u: goto L_08820174;
    case 18u: goto L_08820180;
    case 19u: goto L_08820190;
    case 20u: goto L_08820198;
    case 21u: goto L_088201AC;
    case 22u: goto L_088201BC;
    case 23u: goto L_088201C4;
    case 24u: goto L_088201E0;
    case 25u: goto L_088201FC;
    case 26u: goto L_08820218;
    case 27u: goto L_08820234;
    case 28u: goto L_08820250;
    case 29u: goto L_08820260;
    case 30u: goto L_08820270;
    case 31u: goto L_08820294;
    case 32u: goto L_0882029C;
    case 33u: goto L_088202A4;
    case 34u: goto L_088202AC;
    case 35u: goto L_088202B4;
    case 36u: goto L_088202BC;
    case 37u: goto L_088202C4;
    case 38u: goto L_088202CC;
    case 39u: goto L_088202D8;
    case 40u: goto L_088202E0;
    case 41u: goto L_088202F0;
    case 42u: goto L_08820300;
    case 43u: goto L_08820310;
    case 44u: goto L_08820320;
    case 45u: goto L_08820334;
    case 46u: goto L_08820340;
    case 47u: goto L_08820364;
    case 48u: goto L_0882036C;
    case 49u: goto L_08820374;
    case 50u: goto L_0882037C;
    case 51u: goto L_08820384;
    case 52u: goto L_08820390;
    case 53u: goto L_08820398;
    case 54u: goto L_088203A0;
    case 55u: goto L_088203A8;
    case 56u: goto L_088203B0;
    case 57u: goto L_088203C0;
    case 58u: goto L_088203CC;
    case 59u: goto L_088203D4;
    case 60u: goto L_088203D8;
    case 61u: goto L_088203E8;
    case 62u: goto L_088203F8;
    case 63u: goto L_08820414;
    case 64u: goto L_0882041C;
    case 65u: goto L_08820420;
    case 66u: goto L_08820434;
    case 67u: goto L_0882045C;
    case 68u: goto L_08820464;
    case 69u: goto L_08820470;
    case 70u: goto L_0882047C;
    case 71u: goto L_08820488;
    case 72u: goto L_08820490;
    case 73u: goto L_08820498;
    case 74u: goto L_088204A0;
    case 75u: goto L_088204AC;
    case 76u: goto L_088204B8;
    case 77u: goto L_088204C8;
    case 78u: goto L_088204E4;
    case 79u: goto L_088204F4;
    case 80u: goto L_08820510;
    case 81u: goto L_0882051C;
    case 82u: goto L_0882055C;
    case 83u: goto L_08820568;
    case 84u: goto L_08820584;
    case 85u: goto L_088205CC;
    case 86u: goto L_088205D8;
    case 87u: goto L_088205E8;
    case 88u: goto L_088205F8;
    case 89u: goto L_08820660;
    case 90u: goto L_08820688;
    case 91u: goto L_08820694;
    case 92u: goto L_0882069C;
    case 93u: goto L_088206F8;
    case 94u: goto L_08820704;
    case 95u: goto L_08820714;
    case 96u: goto L_0882072C;
    case 97u: goto L_08820758;
    case 98u: goto L_08820768;
    case 99u: goto L_08820778;
    case 100u: goto L_08820784;
    case 101u: goto L_08820790;
    case 102u: goto L_088207A0;
    case 103u: goto L_088207B0;
    case 104u: goto L_088207BC;
    case 105u: goto L_088207C8;
    case 106u: goto L_088207E0;
    case 107u: goto L_088207F8;
    case 108u: goto L_08820834;
    case 109u: goto L_08820854;
    case 110u: goto L_088208A4;
    case 111u: goto L_088208C4;
    case 112u: goto L_088208CC;
    case 113u: goto L_08820924;
    case 114u: goto L_08820934;
    case 115u: goto L_08820940;
    case 116u: goto L_08820960;
    case 117u: goto L_08820974;
    case 118u: goto L_08820980;
    case 119u: goto L_08820990;
    case 120u: goto L_088209A0;
    case 121u: goto L_088209A4;
    case 122u: goto L_088209A8;
    case 123u: goto L_088209B4;
    case 124u: goto L_088209B8;
    case 125u: goto L_088209CC;
    case 126u: goto L_088209F0;
    case 127u: goto L_08820A04;
    case 128u: goto L_08820A20;
    case 129u: goto L_08820A28;
    case 130u: goto L_08820A34;
    case 131u: goto L_08820A64;
    case 132u: goto L_08820AE0;
    case 133u: goto L_08820B04;
    case 134u: goto L_08820B10;
    case 135u: goto L_08820B18;
    case 136u: goto L_08820B28;
    case 137u: goto L_08820B30;
    case 138u: goto L_08820B38;
    case 139u: goto L_08820B48;
    case 140u: goto L_08820B64;
    case 141u: goto L_08820B6C;
    case 142u: goto L_08820B7C;
    case 143u: goto L_08820BB0;
    case 144u: goto L_08820BC0;
    case 145u: goto L_08820BCC;
    case 146u: goto L_08820BD8;
    case 147u: goto L_08820BE0;
    case 148u: goto L_08820C04;
    case 149u: goto L_08820C1C;
    case 150u: goto L_08820C28;
    case 151u: goto L_08820C34;
    case 152u: goto L_08820C48;
    case 153u: goto L_08820C60;
    case 154u: goto L_08820C6C;
    case 155u: goto L_08820C78;
    case 156u: goto L_08820C8C;
    case 157u: goto L_08820CA0;
    case 158u: goto L_08820CB8;
    case 159u: goto L_08820CC0;
    case 160u: goto L_08820CD8;
    case 161u: goto L_08820CDC;
    case 162u: goto L_08820CF8;
    case 163u: goto L_08820D34;
    case 164u: goto L_08820D54;
    case 165u: goto L_08820D5C;
    case 166u: goto L_08820D68;
    case 167u: goto L_08820D74;
    case 168u: goto L_08820D80;
    case 169u: goto L_08820D88;
    case 170u: goto L_08820D90;
    case 171u: goto L_08820D98;
    case 172u: goto L_08820DA4;
    case 173u: goto L_08820DB0;
    case 174u: goto L_08820F88;
    case 175u: goto L_08820FA4;
    case 176u: goto L_08820FC4;
    case 177u: goto L_08821230;
    case 178u: goto L_08821254;
    case 179u: goto L_0882125C;
    case 180u: goto L_08821270;
    case 181u: goto L_0882127C;
    case 182u: goto L_08821284;
    case 183u: goto L_088212A8;
    case 184u: goto L_088212AC;
    case 185u: goto L_088212B4;
    case 186u: goto L_088212BC;
    case 187u: goto L_088212C8;
    case 188u: goto L_088212D0;
    case 189u: goto L_088212D8;
    case 190u: goto L_088212E0;
    case 191u: goto L_088212E4;
    case 192u: goto L_088212EC;
    case 193u: goto L_088212F4;
    case 194u: goto L_08821300;
    case 195u: goto L_08821308;
    case 196u: goto L_08821330;
    case 197u: goto L_08821344;
    case 198u: goto L_0882134C;
    case 199u: goto L_0882135C;
    case 200u: goto L_08821364;
    case 201u: goto L_0882136C;
    case 202u: goto L_08821374;
    case 203u: goto L_0882137C;
    case 204u: goto L_08821384;
    case 205u: goto L_0882138C;
    case 206u: goto L_08821398;
    case 207u: goto L_088213A0;
    case 208u: goto L_088213B0;
    case 209u: goto L_088213C4;
    case 210u: goto L_088213DC;
    case 211u: goto L_088213E8;
    case 212u: goto L_08821410;
    case 213u: goto L_08821418;
    case 214u: goto L_08821428;
    case 215u: goto L_08821438;
    case 216u: goto L_08821444;
    case 217u: goto L_08821488;
    case 218u: goto L_08821498;
    case 219u: goto L_088214B0;
    case 220u: goto L_088214CC;
    case 221u: goto L_088214DC;
    case 222u: goto L_088214E8;
    case 223u: goto L_0882152C;
    case 224u: goto L_0882153C;
    case 225u: goto L_08821544;
    case 226u: goto L_0882155C;
    case 227u: goto L_08821578;
    case 228u: goto L_088215A4;
    case 229u: goto L_088215AC;
    case 230u: goto L_088215B8;
    case 231u: goto L_088215C4;
    case 232u: goto L_088215D0;
    case 233u: goto L_088215D8;
    case 234u: goto L_088215E0;
    case 235u: goto L_088215E8;
    case 236u: goto L_088215F4;
    case 237u: goto L_0882160C;
    case 238u: goto L_0882161C;
    case 239u: goto L_08821638;
    case 240u: goto L_0882164C;
    case 241u: goto L_0882165C;
    case 242u: goto L_08821680;
    case 243u: goto L_088216A8;
    case 244u: goto L_088216C0;
    case 245u: goto L_088216D0;
    case 246u: goto L_088216E0;
    case 247u: goto L_088216E8;
    case 248u: goto L_08821724;
    case 249u: goto L_08821734;
    case 250u: goto L_0882174C;
    case 251u: goto L_08821760;
    case 252u: goto L_0882176C;
    case 253u: goto L_08821774;
    case 254u: goto L_08821788;
    case 255u: goto L_08821794;
    case 256u: goto L_0882179C;
    case 257u: goto L_088217B4;
    case 258u: goto L_088217BC;
    case 259u: goto L_088217EC;
    case 260u: goto L_08821808;
    case 261u: goto L_08821820;
    case 262u: goto L_0882182C;
    case 263u: goto L_0882183C;
    case 264u: goto L_08821848;
    case 265u: goto L_08821850;
    case 266u: goto L_08821858;
    case 267u: goto L_08821864;
    case 268u: goto L_08821870;
    case 269u: goto L_08821878;
    case 270u: goto L_08821880;
    case 271u: goto L_088218B0;
    case 272u: goto L_088218B8;
    case 273u: goto L_088218C0;
    case 274u: goto L_088218C8;
    case 275u: goto L_088218D0;
    case 276u: goto L_088218D8;
    case 277u: goto L_088218E0;
    case 278u: goto L_088218E8;
    case 279u: goto L_08821918;
    case 280u: goto L_0882192C;
    case 281u: goto L_08821934;
    case 282u: goto L_0882193C;
    case 283u: goto L_08821944;
    case 284u: goto L_08821954;
    case 285u: goto L_08821964;
    case 286u: goto L_0882197C;
    case 287u: goto L_088219AC;
    case 288u: goto L_088219B4;
    case 289u: goto L_088219BC;
    case 290u: goto L_088219C4;
    case 291u: goto L_088219CC;
    case 292u: goto L_088219D4;
    case 293u: goto L_088219E4;
    case 294u: goto L_088219F4;
    case 295u: goto L_08821A0C;
    case 296u: goto L_08821A24;
    case 297u: goto L_08821A30;
    case 298u: goto L_08821A40;
    case 299u: goto L_08821A48;
    case 300u: goto L_08821A68;
    case 301u: goto L_08821A74;
    case 302u: goto L_08821A80;
    case 303u: goto L_08821AAC;
    case 304u: goto L_08821AB8;
    case 305u: goto L_08821AC4;
    case 306u: goto L_08821ACC;
    case 307u: goto L_08821AE0;
    case 308u: goto L_08821AEC;
    case 309u: goto L_08821AF8;
    case 310u: goto L_08821B0C;
    case 311u: goto L_08821B18;
    case 312u: goto L_08821B24;
    case 313u: goto L_08821B38;
    case 314u: goto L_08821B44;
    case 315u: goto L_08821B50;
    case 316u: goto L_08821B64;
    case 317u: goto L_08821B70;
    case 318u: goto L_08821B7C;
    case 319u: goto L_08821B9C;
    case 320u: goto L_08821BA8;
    case 321u: goto L_08821BB4;
    case 322u: goto L_08821BD8;
    case 323u: goto L_08821BE4;
    case 324u: goto L_08821BF0;
    case 325u: goto L_08821C20;
    case 326u: goto L_08821C38;
    case 327u: goto L_08821C6C;
    case 328u: goto L_08821C80;
    case 329u: goto L_08821C98;
    case 330u: goto L_08821CA0;
    case 331u: goto L_08821CA8;
    case 332u: goto L_08821CB0;
    case 333u: goto L_08821CD8;
    case 334u: goto L_08821CF8;
    case 335u: goto L_08821D00;
    case 336u: goto L_08821D14;
    case 337u: goto L_08821D24;
    case 338u: goto L_08821D28;
    case 339u: goto L_08821D34;
    case 340u: goto L_08821D44;
    case 341u: goto L_08821D48;
    case 342u: goto L_08821D50;
    case 343u: goto L_08821D5C;
    case 344u: goto L_08821D64;
    case 345u: goto L_08821D78;
    case 346u: goto L_08821D7C;
    case 347u: goto L_08821D88;
    case 348u: goto L_08821D98;
    case 349u: goto L_08821DA8;
    case 350u: goto L_08821DB0;
    case 351u: goto L_08821DCC;
    case 352u: goto L_08821DD8;
    case 353u: goto L_08821DE0;
    case 354u: goto L_08821DE4;
    case 355u: goto L_08821DF0;
    case 356u: goto L_08821E00;
    case 357u: goto L_08821E10;
    case 358u: goto L_08821E1C;
    case 359u: goto L_08821E38;
    case 360u: goto L_08821E44;
    case 361u: goto L_08821E50;
    case 362u: goto L_08821E54;
    case 363u: goto L_08821E60;
    case 364u: goto L_08821E68;
    case 365u: goto L_08821E7C;
    case 366u: goto L_08821E84;
    case 367u: goto L_08821E8C;
    case 368u: goto L_08821E9C;
    case 369u: goto L_08821EA0;
    case 370u: goto L_08821EAC;
    case 371u: goto L_08821EBC;
    case 372u: goto L_08821EC0;
    case 373u: goto L_08821EC8;
    case 374u: goto L_08821ED4;
    case 375u: goto L_08821EE8;
    case 376u: goto L_08821EEC;
    case 377u: goto L_08821EFC;
    case 378u: goto L_08821F04;
    case 379u: goto L_08821F0C;
    case 380u: goto L_08821F14;
    case 381u: goto L_08821F24;
    case 382u: goto L_08821F28;
    case 383u: goto L_08821F38;
    case 384u: goto L_08821F40;
    case 385u: goto L_08821F48;
    case 386u: goto L_08821F58;
    case 387u: goto L_08821F5C;
    case 388u: goto L_08821F68;
    case 389u: goto L_08821F7C;
    case 390u: goto L_08821F80;
    case 391u: goto L_08821F88;
    case 392u: goto L_08821FA0;
    case 393u: goto L_08821FA4;
    case 394u: goto L_08821FB4;
    case 395u: goto L_08821FBC;
    case 396u: goto L_08821FC4;
    case 397u: goto L_08821FC8;
    case 398u: goto L_08821FD0;
    case 399u: goto L_08821FE4;
    case 400u: goto L_08821FF8;
    case 401u: goto L_08821FFC;
    case 402u: goto L_08822004;
    case 403u: goto L_0882200C;
    case 404u: goto L_08822014;
    case 405u: goto L_0882201C;
    case 406u: goto L_08822024;
    case 407u: goto L_0882202C;
    case 408u: goto L_08822034;
    case 409u: goto L_0882203C;
    case 410u: goto L_08822044;
    case 411u: goto L_0882204C;
    case 412u: goto L_08822054;
    case 413u: goto L_08822068;
    case 414u: goto L_08822070;
    case 415u: goto L_08822078;
    case 416u: goto L_08822080;
    case 417u: goto L_08822094;
    case 418u: goto L_088220A0;
    case 419u: goto L_088220B0;
    case 420u: goto L_088220B4;
    case 421u: goto L_088220BC;
    case 422u: goto L_088220C8;
    case 423u: goto L_088220D0;
    case 424u: goto L_088220EC;
    case 425u: goto L_0882212C;
    case 426u: goto L_08822168;
    case 427u: goto L_08822170;
    case 428u: goto L_0882217C;
    case 429u: goto L_08822184;
    case 430u: goto L_0882219C;
    case 431u: goto L_088221A4;
    case 432u: goto L_088221B8;
    case 433u: goto L_088221C0;
    case 434u: goto L_088221D0;
    case 435u: goto L_088221E0;
    case 436u: goto L_088221EC;
    case 437u: goto L_088221F4;
    case 438u: goto L_08822228;
    case 439u: goto L_08822234;
    case 440u: goto L_08822238;
    case 441u: goto L_08822240;
    case 442u: goto L_0882225C;
    case 443u: goto L_08822264;
    case 444u: goto L_08822270;
    case 445u: goto L_08822278;
    case 446u: goto L_08822280;
    case 447u: goto L_08822288;
    case 448u: goto L_08822290;
    case 449u: goto L_088222A0;
    case 450u: goto L_088222A8;
    case 451u: goto L_088222B0;
    case 452u: goto L_088222B8;
    case 453u: goto L_088222C0;
    case 454u: goto L_088222C8;
    case 455u: goto L_088222D0;
    case 456u: goto L_088222D8;
    case 457u: goto L_088222DC;
    case 458u: goto L_088222EC;
    case 459u: goto L_0882230C;
    case 460u: goto L_0882231C;
    case 461u: goto L_08822330;
    case 462u: goto L_08822338;
    case 463u: goto L_08822344;
    case 464u: goto L_0882234C;
    case 465u: goto L_08822358;
    case 466u: goto L_08822364;
    case 467u: goto L_08822370;
    case 468u: goto L_0882237C;
    case 469u: goto L_08822388;
    case 470u: goto L_08822394;
    case 471u: goto L_0882239C;
    case 472u: goto L_088223A8;
    case 473u: goto L_088223B0;
    case 474u: goto L_088223B8;
    case 475u: goto L_088223C0;
    case 476u: goto L_088223C8;
    case 477u: goto L_088223D0;
    case 478u: goto L_088223D8;
    case 479u: goto L_088223E4;
    case 480u: goto L_088223EC;
    case 481u: goto L_088223F4;
    case 482u: goto L_088223FC;
    case 483u: goto L_08822404;
    case 484u: goto L_0882240C;
    case 485u: goto L_0882244C;
    case 486u: goto L_08822480;
    case 487u: goto L_08822488;
    case 488u: goto L_08822494;
    case 489u: goto L_088224A0;
    case 490u: goto L_088224AC;
    case 491u: goto L_088224B4;
    case 492u: goto L_088224BC;
    case 493u: goto L_088224C4;
    case 494u: goto L_088224D0;
    case 495u: goto L_088224DC;
    case 496u: goto L_08822508;
    case 497u: goto L_08822510;
    case 498u: goto L_08822520;
    case 499u: goto L_0882252C;
    case 500u: goto L_08822538;
    case 501u: goto L_08822548;
    case 502u: goto L_08822554;
    case 503u: goto L_08822568;
    case 504u: goto L_0882257C;
    case 505u: goto L_08822588;
    case 506u: goto L_08822590;
    case 507u: goto L_088225A4;
    case 508u: goto L_088225A8;
    case 509u: goto L_088225B0;
    case 510u: goto L_088225D0;
    case 511u: goto L_088225E0;
    case 512u: goto L_088225EC;
    case 513u: goto L_08822604;
    case 514u: goto L_08822610;
    case 515u: goto L_08822634;
    case 516u: goto L_08822648;
    case 517u: goto L_08822654;
    case 518u: goto L_0882265C;
    case 519u: goto L_08822660;
    case 520u: goto L_08822668;
    case 521u: goto L_0882267C;
    case 522u: goto L_08822688;
    case 523u: goto L_08822698;
    case 524u: goto L_088226A8;
    case 525u: goto L_088226B8;
    case 526u: goto L_088226C4;
    case 527u: goto L_088226CC;
    case 528u: goto L_088226D8;
    case 529u: goto L_088226E4;
    case 530u: goto L_088226F0;
    case 531u: goto L_088226FC;
    case 532u: goto L_08822710;
    case 533u: goto L_08822724;
    case 534u: goto L_08822748;
    case 535u: goto L_08822788;
    case 536u: goto L_08822790;
    case 537u: goto L_08822798;
    case 538u: goto L_088227B8;
    case 539u: goto L_088227CC;
    case 540u: goto L_088227E0;
    case 541u: goto L_088227F0;
    case 542u: goto L_08822800;
    case 543u: goto L_08822824;
    case 544u: goto L_08822830;
    case 545u: goto L_08822850;
    case 546u: goto L_08822858;
    case 547u: goto L_08822868;
    case 548u: goto L_08822870;
    case 549u: goto L_0882289C;
    case 550u: goto L_088228F0;
    case 551u: goto L_088228FC;
    case 552u: goto L_08822904;
    case 553u: goto L_08822914;
    case 554u: goto L_0882294C;
    case 555u: goto L_0882296C;
    case 556u: goto L_08822978;
    case 557u: goto L_08822990;
    case 558u: goto L_08822998;
    case 559u: goto L_088229A4;
    case 560u: goto L_088229B4;
    case 561u: goto L_088229BC;
    case 562u: goto L_088229C0;
    case 563u: goto L_088229CC;
    case 564u: goto L_088229D8;
    case 565u: goto L_088229E0;
    case 566u: goto L_08822A00;
    case 567u: goto L_08822A0C;
    case 568u: goto L_08822A14;
    case 569u: goto L_08822A1C;
    case 570u: goto L_08822A28;
    case 571u: goto L_08822A38;
    case 572u: goto L_08822A40;
    case 573u: goto L_08822A58;
    case 574u: goto L_08822A68;
    case 575u: goto L_08822A74;
    case 576u: goto L_08822A84;
    case 577u: goto L_08822A8C;
    case 578u: goto L_08822A94;
    case 579u: goto L_08822AA8;
    case 580u: goto L_08822AAC;
    case 581u: goto L_08822AB4;
    case 582u: goto L_08822AC0;
    case 583u: goto L_08822AD8;
    case 584u: goto L_08822AE4;
    case 585u: goto L_08822AF4;
    case 586u: goto L_08822B00;
    case 587u: goto L_08822B14;
    case 588u: goto L_08822B38;
    case 589u: goto L_08822B44;
    case 590u: goto L_08822B54;
    case 591u: goto L_08822B60;
    case 592u: goto L_08822B74;
    case 593u: goto L_08822B98;
    case 594u: goto L_08822BA0;
    case 595u: goto L_08822BAC;
    case 596u: goto L_08822BB0;
    case 597u: goto L_08822BB4;
    case 598u: goto L_08822BBC;
    case 599u: goto L_08822BC8;
    case 600u: goto L_08822BF0;
    case 601u: goto L_08822BF4;
    case 602u: goto L_08822C3C;
    case 603u: goto L_08822C80;
    case 604u: goto L_08822C88;
    case 605u: goto L_08822C94;
    case 606u: goto L_08822CA0;
    case 607u: goto L_08822CAC;
    case 608u: goto L_08822CB4;
    case 609u: goto L_08822CBC;
    case 610u: goto L_08822CC4;
    case 611u: goto L_08822CD4;
    case 612u: goto L_08822CDC;
    case 613u: goto L_08822CF8;
    case 614u: goto L_08822D04;
    case 615u: goto L_08822D20;
    case 616u: goto L_08822D28;
    case 617u: goto L_08822D30;
    case 618u: goto L_08822D38;
    case 619u: goto L_08822D5C;
    case 620u: goto L_08822D68;
    case 621u: goto L_08822D78;
    case 622u: goto L_08822D84;
    case 623u: goto L_08822D90;
    case 624u: goto L_08822DA0;
    case 625u: goto L_08822DB4;
    case 626u: goto L_08822DC4;
    case 627u: goto L_08822DD4;
    case 628u: goto L_08822DE8;
    case 629u: goto L_08822E04;
    case 630u: goto L_08822E18;
    case 631u: goto L_08822E2C;
    case 632u: goto L_08822E3C;
    case 633u: goto L_08822E44;
    case 634u: goto L_08822E50;
    case 635u: goto L_08822E58;
    case 636u: goto L_08822E64;
    case 637u: goto L_08822E6C;
    case 638u: goto L_08822E74;
    case 639u: goto L_08822E7C;
    case 640u: goto L_08822EB0;
    case 641u: goto L_08822ED0;
    case 642u: goto L_08822EE8;
    case 643u: goto L_08822F00;
    case 644u: goto L_08822F2C;
    case 645u: goto L_08822F48;
    case 646u: goto L_08822F50;
    case 647u: goto L_08822F5C;
    case 648u: goto L_08822F6C;
    case 649u: goto L_08822F74;
    case 650u: goto L_08822F84;
    case 651u: goto L_08822F94;
    case 652u: goto L_08822F9C;
    case 653u: goto L_08822FAC;
    case 654u: goto L_08822FBC;
    case 655u: goto L_08822FE8;
    case 656u: goto L_08823010;
    case 657u: goto L_0882301C;
    case 658u: goto L_08823024;
    case 659u: goto L_08823058;
    case 660u: goto L_08823064;
    case 661u: goto L_08823080;
    case 662u: goto L_08823088;
    case 663u: goto L_08823090;
    case 664u: goto L_08823134;
    case 665u: goto L_08823144;
    case 666u: goto L_08823150;
    case 667u: goto L_08823160;
    case 668u: goto L_08823428;
    case 669u: goto L_08823478;
    case 670u: goto L_0882349C;
    case 671u: goto L_088234AC;
    case 672u: goto L_088234C0;
    case 673u: goto L_088234E0;
    case 674u: goto L_08823508;
    case 675u: goto L_0882351C;
    case 676u: goto L_0882357C;
    case 677u: goto L_0882358C;
    case 678u: goto L_088235A0;
    case 679u: goto L_088235B0;
    case 680u: goto L_088235B8;
    case 681u: goto L_088235DC;
    case 682u: goto L_088235F0;
    case 683u: goto L_08823608;
    case 684u: goto L_08823624;
    case 685u: goto L_08823638;
    case 686u: goto L_08823640;
    case 687u: goto L_08823658;
    case 688u: goto L_08823670;
    case 689u: goto L_0882367C;
    case 690u: goto L_0882368C;
    case 691u: goto L_0882369C;
    case 692u: goto L_088236B0;
    case 693u: goto L_088236BC;
    case 694u: goto L_088236CC;
    case 695u: goto L_088236E0;
    case 696u: goto L_088236EC;
    case 697u: goto L_08823700;
    case 698u: goto L_08823714;
    case 699u: goto L_08823738;
    case 700u: goto L_0882374C;
    case 701u: goto L_0882375C;
    case 702u: goto L_08823774;
    case 703u: goto L_088237BC;
    case 704u: goto L_088237D0;
    case 705u: goto L_088237F0;
    case 706u: goto L_088237F8;
    case 707u: goto L_08823804;
    case 708u: goto L_08823814;
    case 709u: goto L_0882381C;
    case 710u: goto L_08823830;
    case 711u: goto L_08823838;
    case 712u: goto L_0882383C;
    case 713u: goto L_08823848;
    case 714u: goto L_08823860;
    case 715u: goto L_08823864;
    case 716u: goto L_0882386C;
    case 717u: goto L_08823878;
    case 718u: goto L_08823880;
    case 719u: goto L_08823888;
    case 720u: goto L_08823890;
    case 721u: goto L_08823898;
    case 722u: goto L_088238B0;
    case 723u: goto L_088238B4;
    case 724u: goto L_088238C4;
    case 725u: goto L_088238CC;
    case 726u: goto L_088238D4;
    case 727u: goto L_088238E4;
    case 728u: goto L_088238EC;
    case 729u: goto L_088238F8;
    case 730u: goto L_0882390C;
    case 731u: goto L_08823918;
    case 732u: goto L_08823930;
    case 733u: goto L_0882393C;
    case 734u: goto L_08823948;
    case 735u: goto L_08823950;
    case 736u: goto L_08823958;
    case 737u: goto L_08823960;
    case 738u: goto L_08823968;
    case 739u: goto L_08823974;
    case 740u: goto L_0882397C;
    case 741u: goto L_08823984;
    case 742u: goto L_0882399C;
    case 743u: goto L_088239A4;
    case 744u: goto L_088239AC;
    case 745u: goto L_088239C8;
    case 746u: goto L_088239CC;
    case 747u: goto L_088239D4;
    case 748u: goto L_088239DC;
    case 749u: goto L_088239E4;
    case 750u: goto L_088239EC;
    case 751u: goto L_088239F4;
    case 752u: goto L_088239FC;
    case 753u: goto L_08823A04;
    case 754u: goto L_08823A0C;
    case 755u: goto L_08823A14;
    case 756u: goto L_08823A1C;
    case 757u: goto L_08823A24;
    case 758u: goto L_08823A2C;
    case 759u: goto L_08823A40;
    case 760u: goto L_08823A48;
    case 761u: goto L_08823A50;
    case 762u: goto L_08823A58;
    case 763u: goto L_08823A70;
    case 764u: goto L_08823A78;
    case 765u: goto L_08823A80;
    case 766u: goto L_08823A88;
    case 767u: goto L_08823A90;
    case 768u: goto L_08823AA4;
    case 769u: goto L_08823AAC;
    case 770u: goto L_08823AB4;
    case 771u: goto L_08823AC4;
    case 772u: goto L_08823AD8;
    case 773u: goto L_08823ADC;
    case 774u: goto L_08823AF8;
    case 775u: goto L_08823B10;
    case 776u: goto L_08823B18;
    case 777u: goto L_08823B24;
    case 778u: goto L_08823B2C;
    case 779u: goto L_08823B38;
    case 780u: goto L_08823B54;
    case 781u: goto L_08823B5C;
    case 782u: goto L_08823B70;
    case 783u: goto L_08823B78;
    case 784u: goto L_08823B7C;
    case 785u: goto L_08823B84;
    case 786u: goto L_08823B8C;
    case 787u: goto L_08823B94;
    case 788u: goto L_08823B9C;
    case 789u: goto L_08823BA4;
    case 790u: goto L_08823BAC;
    case 791u: goto L_08823BBC;
    case 792u: goto L_08823BD0;
    case 793u: goto L_08823BE4;
    case 794u: goto L_08823C04;
    case 795u: goto L_08823C1C;
    case 796u: goto L_08823C2C;
    case 797u: goto L_08823C34;
    case 798u: goto L_08823C40;
    case 799u: goto L_08823C4C;
    case 800u: goto L_08823C58;
    case 801u: goto L_08823C64;
    case 802u: goto L_08823C70;
    case 803u: goto L_08823C7C;
    case 804u: goto L_08823C88;
    case 805u: goto L_08823CA4;
    case 806u: goto L_08823CC0;
    case 807u: goto L_08823D14;
    case 808u: goto L_08823D3C;
    case 809u: goto L_08823D74;
    case 810u: goto L_08823D7C;
    case 811u: goto L_08823D84;
    case 812u: goto L_08823D9C;
    case 813u: goto L_08823DB4;
    case 814u: goto L_08823DD4;
    case 815u: goto L_08823DDC;
    case 816u: goto L_08823DE0;
    case 817u: goto L_08823DE8;
    case 818u: goto L_08823DF0;
    case 819u: goto L_08823DFC;
    case 820u: goto L_08823E04;
    case 821u: goto L_08823E14;
    case 822u: goto L_08823E1C;
    case 823u: goto L_08823E2C;
    case 824u: goto L_08823E38;
    case 825u: goto L_08823E74;
    case 826u: goto L_08823E84;
    case 827u: goto L_08823E98;
    case 828u: goto L_08823EA0;
    case 829u: goto L_08823EAC;
    case 830u: goto L_08823EB0;
    case 831u: goto L_08823EC4;
    case 832u: goto L_08823ECC;
    case 833u: goto L_08823F00;
    case 834u: goto L_08823F0C;
    case 835u: goto L_08823F18;
    case 836u: goto L_08823F30;
    case 837u: goto L_08823F5C;
    case 838u: goto L_08823FA0;
    case 839u: goto L_08823FA8;
    case 840u: goto L_08823FB4;
    case 841u: goto L_08823FE4;
    case 842u: goto L_08823FEC;
    case 843u: goto L_08823FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08820000:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1652)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882000C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1656)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08820070:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(360));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08820090u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1112), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 858u, 0x0881F478u>(ctx, &aot_mem) && ctx.pc == 0x08820090u) goto L_08820090;
    return;
L_08820090:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17320)));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088200C4;
      }
      goto L_088200AC;
    }
L_088200AC:
    ctx.gpr[31] = (0x088200B4u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 181u, 0x089511DCu>(ctx, &aot_mem) && ctx.pc == 0x088200B4u) goto L_088200B4;
    return;
L_088200B4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088200C0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 169u, 0x08951098u>(ctx, &aot_mem) && ctx.pc == 0x088200C0u) goto L_088200C0;
    return;
L_088200C0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1112), ctx.gpr[2]);
    goto L_088200C4;
L_088200C4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088200D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(360));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1112)));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08820108;
      }
      goto L_088200FC;
    }
L_088200FC:
    ctx.gpr[31] = (0x08820104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 733u, 0x0894F5A0u>(ctx, &aot_mem) && ctx.pc == 0x08820104u) goto L_08820104;
    return;
L_08820104:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1112), 0u);
    goto L_08820108;
L_08820108:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08820118:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1112)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08820128:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(360));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1092)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08820234;
      }
      goto L_08820158;
    }
L_08820158:
    ctx.gpr[31] = (0x08820160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 858u, 0x0881F478u>(ctx, &aot_mem) && ctx.pc == 0x08820160u) goto L_08820160;
    return;
L_08820160:
    ctx.gpr[17] = (ctx.gpr[16] << 2u);
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(200)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (2219u << 16u);
      if (branch_taken) {
          goto L_08820218;
      }
      goto L_08820174;
    }
L_08820174:
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(28912));
    ctx.gpr[31] = (0x08820180u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x08820180u) goto L_08820180;
    return;
L_08820180:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08820190u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 628u, 0x08A9E368u>(ctx, &aot_mem) && ctx.pc == 0x08820190u) goto L_08820190;
    return;
L_08820190:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088201FC;
      }
      goto L_08820198;
    }
L_08820198:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(200)));
    ctx.gpr[4] = (2219u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(28920));
    ctx.gpr[31] = (0x088201ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088201ACu) goto L_088201AC;
    return;
L_088201AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088201BCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 628u, 0x08A9E368u>(ctx, &aot_mem) && ctx.pc == 0x088201BCu) goto L_088201BC;
    return;
L_088201BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088201E0;
      }
      goto L_088201C4;
    }
L_088201C4:
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
L_088201E0:
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
L_088201FC:
    ctx.gpr[2] = (0u | 2u);
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
L_08820218:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
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
L_08820234:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
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
L_08820250:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1116)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08820260:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(360));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1116), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08820270:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(360));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1116)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088202AC;
      }
      goto L_08820294;
    }
L_08820294:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088202E0;
      }
      goto L_0882029C;
    }
L_0882029C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_088202E0;
      }
      goto L_088202A4;
    }
L_088202A4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1116), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088202E0;
      }
      goto L_088202AC;
    }
L_088202AC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088202C4;
      }
      goto L_088202B4;
    }
L_088202B4:
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1116), 0u);
        goto L_088202E0;
    }
    goto L_088202BC;
L_088202BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088202E0;
      }
      goto L_088202C4;
    }
L_088202C4:
    ctx.gpr[31] = (0x088202CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 89u, 0x0896C97Cu>(ctx, &aot_mem) && ctx.pc == 0x088202CCu) goto L_088202CC;
    return;
L_088202CC:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_088202E0;
      }
      goto L_088202D8;
    }
L_088202D8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1116), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088202E0;
      }
      goto L_088202E0;
    }
L_088202E0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088202F0:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1120)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08820300:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(360));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1120), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08820310:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08820334;
      }
      goto L_08820320;
    }
L_08820320:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    ctx.gpr[6] = (0u | 516u);
    ctx.gpr[31] = (0x08820334u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1124));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08820334u) goto L_08820334;
    return;
L_08820334:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08820340:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(360));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1120)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08820390;
      }
      goto L_08820364;
    }
L_08820364:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088203D8;
      }
      goto L_0882036C;
    }
L_0882036C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088203D8;
      }
      goto L_08820374;
    }
L_08820374:
    ctx.gpr[31] = (0x0882037Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 306u, 0x0896E0E0u>(ctx, &aot_mem) && ctx.pc == 0x0882037Cu) goto L_0882037C;
    return;
L_0882037C:
    ctx.gpr[31] = (0x08820384u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1124));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 311u, 0x0896E150u>(ctx, &aot_mem) && ctx.pc == 0x08820384u) goto L_08820384;
    return;
L_08820384:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1120), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088203D8;
      }
      goto L_08820390;
    }
L_08820390:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088203A8;
      }
      goto L_08820398;
    }
L_08820398:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088203CC;
      }
      goto L_088203A0;
    }
L_088203A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088203D8;
      }
      goto L_088203A8;
    }
L_088203A8:
    ctx.gpr[31] = (0x088203B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 316u, 0x0896E234u>(ctx, &aot_mem) && ctx.pc == 0x088203B0u) goto L_088203B0;
    return;
L_088203B0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_088203D8;
      }
      goto L_088203C0;
    }
L_088203C0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1640), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1120), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088203D8;
      }
      goto L_088203CC;
    }
L_088203CC:
    ctx.gpr[31] = (0x088203D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 309u, 0x0896E124u>(ctx, &aot_mem) && ctx.pc == 0x088203D4u) goto L_088203D4;
    return;
L_088203D4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1120), 0u);
    goto L_088203D8;
L_088203D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088203E8:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1640)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088203F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08820420;
      }
      goto L_08820414;
    }
L_08820414:
    ctx.gpr[31] = (0x0882041Cu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x0882041Cu) goto L_0882041C;
    return;
L_0882041C:
    ctx.gpr[4] = (0u | 2u);
    goto L_08820420;
L_08820420:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08820434:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0882047C;
      }
      goto L_0882045C;
    }
L_0882045C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_088204C8;
      }
      goto L_08820464;
    }
L_08820464:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08820470u);
    ctx.gpr[6] = (0u | 130u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 465u, 0x08809CF0u>(ctx, &aot_mem) && ctx.pc == 0x08820470u) goto L_08820470;
    return;
L_08820470:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088204C8;
      }
      goto L_0882047C;
    }
L_0882047C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08820498;
      }
      goto L_08820488;
    }
L_08820488:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (0u | 1u);
        goto L_088204C8;
    }
    goto L_08820490;
L_08820490:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088204C8;
      }
      goto L_08820498;
    }
L_08820498:
    ctx.gpr[31] = (0x088204A0u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 469u, 0x08809D90u>(ctx, &aot_mem) && ctx.pc == 0x088204A0u) goto L_088204A0;
    return;
L_088204A0:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088204C8;
      }
      goto L_088204AC;
    }
L_088204AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x088204B8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 257u, 0x08A162F4u>(ctx, &aot_mem) && ctx.pc == 0x088204B8u) goto L_088204B8;
    return;
L_088204B8:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_088204C8;
      }
      goto L_088204C8;
    }
L_088204C8:
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
L_088204E4:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(252)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088204F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(360));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08820510u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(500));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x08820510u) goto L_08820510;
    return;
L_08820510:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882051C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[22]);
    ctx.gpr[22] = (2221u << 16u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(360));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(996)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088205F8;
      }
      goto L_0882055C;
    }
L_0882055C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(992)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (2219u << 16u);
      if (branch_taken) {
          goto L_088205F8;
      }
      goto L_08820568;
    }
L_08820568:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(28928));
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] << 4u);
    goto L_08820584;
L_08820584:
    ctx.gpr[6] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(996)));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[21] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[21] - ctx.gpr[7]);
    ctx.gpr[23] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(992)));
    ctx.gpr[4] = (ctx.gpr[8] << 2u);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(320)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2144)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[8] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088205CCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088205CCu) goto L_088205CC;
    return;
L_088205CC:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088205D8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 240u, 0x0880EC64u>(ctx, &aot_mem) && ctx.pc == 0x088205D8u) goto L_088205D8;
    return;
L_088205D8:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088205E8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 812u, 0x0893BD00u>(ctx, &aot_mem) && ctx.pc == 0x088205E8u) goto L_088205E8;
    return;
L_088205E8:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[21] << 4u);
      if (branch_taken) {
          goto L_08820584;
      }
      goto L_088205F8;
    }
L_088205F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08820660:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(360));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(996)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08820714;
      }
      goto L_08820688;
    }
L_08820688:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(992)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08820714;
      }
      goto L_08820694;
    }
L_08820694:
    ctx.gpr[31] = (0x0882069Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 858u, 0x0881F478u>(ctx, &aot_mem) && ctx.pc == 0x0882069Cu) goto L_0882069C;
    return;
L_0882069C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(3));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[7]);
    ctx.gpr[16] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088206F8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28940));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088206F8u) goto L_088206F8;
    return;
L_088206F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08820704u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 240u, 0x0880EC64u>(ctx, &aot_mem) && ctx.pc == 0x08820704u) goto L_08820704;
    return;
L_08820704:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08820714u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 812u, 0x0893BD00u>(ctx, &aot_mem) && ctx.pc == 0x08820714u) goto L_08820714;
    return;
L_08820714:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882072C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(360));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1680)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[16] << 2u);
      if (branch_taken) {
          goto L_08820784;
      }
      goto L_08820758;
    }
L_08820758:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_08820784;
      }
      goto L_08820768;
    }
L_08820768:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08820778u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08820778u) goto L_08820778;
    return;
L_08820778:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1680)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_08820784;
L_08820784:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1676)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[16] << 2u);
      if (branch_taken) {
          goto L_088207BC;
      }
      goto L_08820790;
    }
L_08820790:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_088207BC;
      }
      goto L_088207A0;
    }
L_088207A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088207B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088207B0u) goto L_088207B0;
    return;
L_088207B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1676)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_088207BC;
L_088207BC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(996)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088207E0;
      }
      goto L_088207C8;
    }
L_088207C8:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x088207E0u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 280u, 0x0880EEA8u>(ctx, &aot_mem) && ctx.pc == 0x088207E0u) goto L_088207E0;
    return;
L_088207E0:
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
L_088207F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[31]);
    ctx.gpr[31] = (0x08820834u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 235u, 0x08A2F478u>(ctx, &aot_mem) && ctx.pc == 0x08820834u) goto L_08820834;
    return;
L_08820834:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (2221u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(360));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1068), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(996)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1072), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08820A34;
      }
      goto L_08820854;
    }
L_08820854:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2484));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
    ctx.gpr[4] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28956));
    ctx.gpr[5] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2156));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2148));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[4]);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21616));
    ctx.gpr[20] = (0u | 5u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[23] = (0u | 760u);
    ctx.gpr[22] = (0u | 780u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    ctx.gpr[30] = (2221u << 16u);
    goto L_088208A4;
L_088208A4:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(-5));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_088208CC;
      }
      goto L_088208C4;
    }
L_088208C4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1004), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088209B8;
      }
      goto L_088208CC;
    }
L_088208CC:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 1u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1004), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(324)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[31] = (0x08820924u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08820924u) goto L_08820924;
    return;
L_08820924:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(996)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08820934u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 240u, 0x0880EC64u>(ctx, &aot_mem) && ctx.pc == 0x08820934u) goto L_08820934;
    return;
L_08820934:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(992)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
      if (branch_taken) {
          goto L_08820974;
      }
      goto L_08820940;
    }
L_08820940:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(328)));
    ctx.gpr[31] = (0x08820960u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08820960u) goto L_08820960;
    return;
L_08820960:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(992)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[31] = (0x08820974u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 812u, 0x0893BD00u>(ctx, &aot_mem) && ctx.pc == 0x08820974u) goto L_08820974;
    return;
L_08820974:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(2508)));
    goto L_08820980;
L_08820980:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_088209A8;
    }
    goto L_08820990;
L_08820990:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[19] << (ctx.gpr[4] & 31u));
      if (branch_taken) {
          goto L_088209A4;
      }
      goto L_088209A0;
    }
L_088209A0:
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    goto L_088209A4;
L_088209A4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_088209A8;
L_088209A8:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08820980;
      }
      goto L_088209B4;
    }
L_088209B4:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(2508), ctx.gpr[6]);
    goto L_088209B8;
L_088209B8:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(152));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(156));
      if (branch_taken) {
          goto L_088208A4;
      }
      goto L_088209CC;
    }
L_088209CC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[18] = (2219u << 16u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(28968));
    ctx.gpr[20] = (2221u << 16u);
    ctx.gpr[21] = (2221u << 16u);
    ctx.gpr[22] = (2221u << 16u);
    goto L_088209F0;
L_088209F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(2508)));
    ctx.gpr[5] = (ctx.gpr[19] << (ctx.gpr[16] & 31u));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08820A28;
    }
    goto L_08820A04;
L_08820A04:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(320)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2504)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08820A20u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08820A20u) goto L_08820A20;
    return;
L_08820A20:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08820A28;
L_08820A28:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(176));
      if (branch_taken) {
          goto L_088209F0;
      }
      goto L_08820A34;
    }
L_08820A34:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08820A64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (2219u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28980));
    ctx.gpr[5] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2156));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(21616));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[22] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[23]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(360));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    goto L_08820AE0;
L_08820AE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2508)));
    ctx.gpr[6] = (ctx.gpr[18] << (ctx.gpr[4] & 31u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_08820B10;
      }
      goto L_08820B04;
    }
L_08820B04:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08820CD8;
      }
      goto L_08820B10;
    }
L_08820B10:
    if (ctx.gpr[4] != ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
        goto L_08820CDC;
    }
    goto L_08820B18;
L_08820B18:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08820B28u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    goto L_08820D34;
L_08820B28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08820CD8;
      }
      goto L_08820B30;
    }
L_08820B30:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[18];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08820CD8;
      }
      goto L_08820B38;
    }
L_08820B38:
    ctx.gpr[16] = (ctx.gpr[30] + static_cast<std::uint32_t>(132));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08820B48u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x08820B48u) goto L_08820B48;
    return;
L_08820B48:
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(168));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[31] = (0x08820B64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 522u, 0x0880A0E8u>(ctx, &aot_mem) && ctx.pc == 0x08820B64u) goto L_08820B64;
    return;
L_08820B64:
    ctx.gpr[30] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    goto L_08820B6C;
L_08820B6C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1004)));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[21];
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 1u));
      if (branch_taken) {
          goto L_08820CA0;
      }
      goto L_08820B7C;
    }
L_08820B7C:
    ctx.gpr[4] = (ctx.gpr[4] >> 31u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(332)));
    ctx.gpr[31] = (0x08820BB0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08820BB0u) goto L_08820BB0;
    return;
L_08820BB0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08820BC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x08820BC0u) goto L_08820BC0;
    return;
L_08820BC0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[21];
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08820CA0;
      }
      goto L_08820BCC;
    }
L_08820BCC:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08820BD8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x08820BD8u) goto L_08820BD8;
    return;
L_08820BD8:
    ctx.gpr[31] = (0x08820BE0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 522u, 0x0880A0E8u>(ctx, &aot_mem) && ctx.pc == 0x08820BE0u) goto L_08820BE0;
    return;
L_08820BE0:
    ctx.gpr[18] = (ctx.gpr[30] << 4u);
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[30] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[30] - ctx.gpr[17]);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[4]);
    goto L_08820C04;
L_08820C04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(996)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(760));
    ctx.gpr[31] = (0x08820C1Cu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x08820C1Cu) goto L_08820C1C;
    return;
L_08820C1C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08820C48;
      }
      goto L_08820C28;
    }
L_08820C28:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(108));
    ctx.gpr[31] = (0x08820C34u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x08820C34u) goto L_08820C34;
    return;
L_08820C34:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08820C48u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 247u, 0x0880ECE8u>(ctx, &aot_mem) && ctx.pc == 0x08820C48u) goto L_08820C48;
    return;
L_08820C48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(992)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(780));
    ctx.gpr[31] = (0x08820C60u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x08820C60u) goto L_08820C60;
    return;
L_08820C60:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08820C8C;
      }
      goto L_08820C6C;
    }
L_08820C6C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08820C78u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x08820C78u) goto L_08820C78;
    return;
L_08820C78:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08820C8Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 817u, 0x0893BD74u>(ctx, &aot_mem) && ctx.pc == 0x08820C8Cu) goto L_08820C8C;
    return;
L_08820C8C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(152));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(156));
      if (branch_taken) {
          goto L_08820C04;
      }
      goto L_08820CA0;
    }
L_08820CA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[30]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08820B6C;
      }
      goto L_08820CB8;
    }
L_08820CB8:
    ctx.gpr[31] = (0x08820CC0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 555u, 0x0880A5E8u>(ctx, &aot_mem) && ctx.pc == 0x08820CC0u) goto L_08820CC0;
    return;
L_08820CC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2508)));
    ctx.gpr[4] = (~(ctx.gpr[4] | 0u));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(2508), ctx.gpr[4]);
    goto L_08820CD8;
L_08820CD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    goto L_08820CDC;
L_08820CDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08820AE0;
      }
      goto L_08820CF8;
    }
L_08820CF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[2] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08820D34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08820D74;
      }
      goto L_08820D54;
    }
L_08820D54:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
      if (branch_taken) {
          goto L_08820DB0;
      }
      goto L_08820D5C;
    }
L_08820D5C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08820D68u);
    ctx.gpr[6] = (0u | 130u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 465u, 0x08809CF0u>(ctx, &aot_mem) && ctx.pc == 0x08820D68u) goto L_08820D68;
    return;
L_08820D68:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08820DB0;
      }
      goto L_08820D74;
    }
L_08820D74:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08820D90;
      }
      goto L_08820D80;
    }
L_08820D80:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (0u | 1u);
        goto L_08820DB0;
    }
    goto L_08820D88;
L_08820D88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08820DB0;
      }
      goto L_08820D90;
    }
L_08820D90:
    ctx.gpr[31] = (0x08820D98u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 487u, 0x08809EA8u>(ctx, &aot_mem) && ctx.pc == 0x08820D98u) goto L_08820D98;
    return;
L_08820D98:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08820DB0;
      }
      goto L_08820DA4;
    }
L_08820DA4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08820DB0;
      }
      goto L_08820DB0;
    }
L_08820DB0:
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
L_08820F88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08820FA4u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(840));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 858u, 0x0881F478u>(ctx, &aot_mem) && ctx.pc == 0x08820FA4u) goto L_08820FA4;
    return;
L_08820FA4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08820FC4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29020));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08820FC4u) goto L_08820FC4;
    return;
L_08820FC4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08821230:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08821254u);
    ctx.gpr[4] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 860u, 0x0881F498u>(ctx, &aot_mem) && ctx.pc == 0x08821254u) goto L_08821254;
    return;
L_08821254:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08821284;
      }
      goto L_0882125C;
    }
L_0882125C:
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(360));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08821270u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(252));
    goto L_08820434;
L_08821270:
    ctx.gpr[17] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[20];
    ctx.gpr[16] = (2221u << 16u);
      if (branch_taken) {
          goto L_088212A8;
      }
      goto L_0882127C;
    }
L_0882127C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088212AC;
      }
      goto L_08821284;
    }
L_08821284:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
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
L_088212A8:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_088212AC;
L_088212AC:
    ctx.gpr[31] = (0x088212B4u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(400));
    goto L_0882244C;
L_088212B4:
    if (ctx.gpr[2] == ctx.gpr[20]) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_088212BC;
    }
    goto L_088212BC;
L_088212BC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088212C8u);
    ctx.gpr[5] = (0u | 2u);
    goto L_0882289C;
L_088212C8:
    if (ctx.gpr[2] == ctx.gpr[20]) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_088212D0;
    }
    goto L_088212D0;
L_088212D0:
    if (ctx.gpr[19] != ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2512)));
        goto L_088212E4;
    }
    goto L_088212D8;
L_088212D8:
    ctx.gpr[31] = (0x088212E0u);
    ctx.gpr[4] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 861u, 0x0881F4B4u>(ctx, &aot_mem) && ctx.pc == 0x088212E0u) goto L_088212E0;
    return;
L_088212E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2512)));
    goto L_088212E4;
L_088212E4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[19] ^ 3u);
      if (branch_taken) {
          goto L_08821308;
      }
      goto L_088212EC;
    }
L_088212EC:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[17];
    ctx.gpr[4] = (ctx.gpr[19] ^ 3u);
      if (branch_taken) {
          goto L_08821308;
      }
      goto L_088212F4;
    }
L_088212F4:
    ctx.gpr[4] = (2178u << 16u);
    ctx.gpr[31] = (0x08821300u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13352));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 855u, 0x0881F428u>(ctx, &aot_mem) && ctx.pc == 0x08821300u) goto L_08821300;
    return;
L_08821300:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2512), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[19] ^ 3u);
    goto L_08821308;
L_08821308:
    ctx.gpr[2] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
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
L_08821330:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08821344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 333u, 0x08809158u>(ctx, &aot_mem) && ctx.pc == 0x08821344u) goto L_08821344;
    return;
L_08821344:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (2221u << 16u);
      if (branch_taken) {
          goto L_088213A0;
      }
      goto L_0882134C;
    }
L_0882134C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(360));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1644)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088213A0;
      }
      goto L_0882135C;
    }
L_0882135C:
    ctx.gpr[31] = (0x08821364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 65u, 0x0883C8F0u>(ctx, &aot_mem) && ctx.pc == 0x08821364u) goto L_08821364;
    return;
L_08821364:
    ctx.gpr[31] = (0x0882136Cu);
    ctx.gpr[4] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 860u, 0x0881F498u>(ctx, &aot_mem) && ctx.pc == 0x0882136Cu) goto L_0882136C;
    return;
L_0882136C:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1648)));
        goto L_0882138C;
    }
    goto L_08821374;
L_08821374:
    ctx.gpr[31] = (0x0882137Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 560u, 0x088835B0u>(ctx, &aot_mem) && ctx.pc == 0x0882137Cu) goto L_0882137C;
    return;
L_0882137C:
    ctx.gpr[31] = (0x08821384u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1644)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 72u, 0x0883C9FCu>(ctx, &aot_mem) && ctx.pc == 0x08821384u) goto L_08821384;
    return;
L_08821384:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088213A0;
      }
      goto L_0882138C;
    }
L_0882138C:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088213A0;
      }
      goto L_08821398;
    }
L_08821398:
    ctx.gpr[31] = (0x088213A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1644)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 72u, 0x0883C9FCu>(ctx, &aot_mem) && ctx.pc == 0x088213A0u) goto L_088213A0;
    return;
L_088213A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088213B0:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(360));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1648), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088213C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088213DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(788));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x088213DCu) goto L_088213DC;
    return;
L_088213DC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088213E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(688));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08821410u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2120));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08821410u) goto L_08821410;
    return;
L_08821410:
    ctx.gpr[31] = (0x08821418u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_08821578;
L_08821418:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08821428:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08821438u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 555u, 0x0880A5E8u>(ctx, &aot_mem) && ctx.pc == 0x08821438u) goto L_08821438;
    return;
L_08821438:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08821444:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(832)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(724));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(788), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(100));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(792), ctx.gpr[6]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08821488u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 584u, 0x0880A830u>(ctx, &aot_mem) && ctx.pc == 0x08821488u) goto L_08821488;
    return;
L_08821488:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088214B0;
      }
      goto L_08821498;
    }
L_08821498:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[31] = (0x088214B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 522u, 0x0880A0E8u>(ctx, &aot_mem) && ctx.pc == 0x088214B0u) goto L_088214B0;
    return;
L_088214B0:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_088214CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088214DCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 555u, 0x0880A5E8u>(ctx, &aot_mem) && ctx.pc == 0x088214DCu) goto L_088214DC;
    return;
L_088214DC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088214E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(832)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(724));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(788), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(100));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(792), ctx.gpr[6]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0882152Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 584u, 0x0880A830u>(ctx, &aot_mem) && ctx.pc == 0x0882152Cu) goto L_0882152C;
    return;
L_0882152C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0882155C;
      }
      goto L_0882153C;
    }
L_0882153C:
    ctx.gpr[31] = (0x08821544u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x08821544u) goto L_08821544;
    return;
L_08821544:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[31] = (0x0882155Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 522u, 0x0880A0E8u>(ctx, &aot_mem) && ctx.pc == 0x0882155Cu) goto L_0882155C;
    return;
L_0882155C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_08821578:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(360));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(688));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088215C4;
      }
      goto L_088215A4;
    }
L_088215A4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_0882161C;
      }
      goto L_088215AC;
    }
L_088215AC:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088215B8u);
    ctx.gpr[6] = (0u | 130u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 465u, 0x08809CF0u>(ctx, &aot_mem) && ctx.pc == 0x088215B8u) goto L_088215B8;
    return;
L_088215B8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0882161C;
      }
      goto L_088215C4;
    }
L_088215C4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088215E0;
      }
      goto L_088215D0;
    }
L_088215D0:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[16] = (0u | 1u);
        goto L_0882161C;
    }
    goto L_088215D8;
L_088215D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882161C;
      }
      goto L_088215E0;
    }
L_088215E0:
    ctx.gpr[31] = (0x088215E8u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 487u, 0x08809EA8u>(ctx, &aot_mem) && ctx.pc == 0x088215E8u) goto L_088215E8;
    return;
L_088215E8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_0882161C;
      }
      goto L_088215F4;
    }
L_088215F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(832), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(836), ctx.gpr[4]);
    ctx.gpr[31] = (0x0882160Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 555u, 0x0880A5E8u>(ctx, &aot_mem) && ctx.pc == 0x0882160Cu) goto L_0882160C;
    return;
L_0882160C:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_0882161C;
      }
      goto L_0882161C;
    }
L_0882161C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_08821638:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(688));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(100));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882164C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1672)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882165C:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[2] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1664)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08821680:
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1668)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088216A8:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(360));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(1664)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    goto L_088216C0;
L_088216C0:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[9];
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088216E0;
      }
      goto L_088216D0;
    }
L_088216D0:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(52));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 86 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_088216C0;
      }
      goto L_088216E0;
    }
L_088216E0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[7] + ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088216E8:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2516));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(360));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1668)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08821724:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(2048), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08821734:
    ctx.gpr[4] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2048), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882174C:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(360));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1676)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
      if (branch_taken) {
          goto L_0882176C;
      }
      goto L_08821760;
    }
L_08821760:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882176C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08821774:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(360));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1680)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
      if (branch_taken) {
          goto L_08821794;
      }
      goto L_08821788;
    }
L_08821788:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08821794:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882179C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1684)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088217B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088217BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-544));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[31]);
    ctx.gpr[31] = (0x088217ECu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29060));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088217ECu) goto L_088217EC;
    return;
L_088217EC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x08821808u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 619u, 0x0897A9C0u>(ctx, &aot_mem) && ctx.pc == 0x08821808u) goto L_08821808;
    return;
L_08821808:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(540)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08821820:
    ctx.gpr[2] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08821850;
      }
      goto L_0882182C;
    }
L_0882182C:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4584)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_08821850;
      }
      goto L_0882183C;
    }
L_0882183C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2052)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08821850;
      }
      goto L_08821848;
    }
L_08821848:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(2052), ctx.gpr[6]);
    ctx.gpr[2] = (ctx.gpr[6] | 0u);
    goto L_08821850;
L_08821850:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_08821878;
      }
      goto L_08821858;
    }
L_08821858:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4584)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_08821878;
      }
      goto L_08821864;
    }
L_08821864:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2052)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08821878;
      }
      goto L_08821870;
    }
L_08821870:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(2052), 0u);
    ctx.gpr[2] = (0u | 1u);
    goto L_08821878;
L_08821878:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08821880:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x088218B0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2052), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 511u, 0x0894B874u>(ctx, &aot_mem) && ctx.pc == 0x088218B0u) goto L_088218B0;
    return;
L_088218B0:
    ctx.gpr[31] = (0x088218B8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 849u, 0x0881F3C0u>(ctx, &aot_mem) && ctx.pc == 0x088218B8u) goto L_088218B8;
    return;
L_088218B8:
    ctx.gpr[31] = (0x088218C0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 850u, 0x0881F3D8u>(ctx, &aot_mem) && ctx.pc == 0x088218C0u) goto L_088218C0;
    return;
L_088218C0:
    ctx.gpr[31] = (0x088218C8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 851u, 0x0881F3E8u>(ctx, &aot_mem) && ctx.pc == 0x088218C8u) goto L_088218C8;
    return;
L_088218C8:
    ctx.gpr[31] = (0x088218D0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 852u, 0x0881F3F8u>(ctx, &aot_mem) && ctx.pc == 0x088218D0u) goto L_088218D0;
    return;
L_088218D0:
    ctx.gpr[31] = (0x088218D8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 853u, 0x0881F408u>(ctx, &aot_mem) && ctx.pc == 0x088218D8u) goto L_088218D8;
    return;
L_088218D8:
    ctx.gpr[31] = (0x088218E0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 854u, 0x0881F418u>(ctx, &aot_mem) && ctx.pc == 0x088218E0u) goto L_088218E0;
    return;
L_088218E0:
    ctx.gpr[31] = (0x088218E8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 855u, 0x0881F428u>(ctx, &aot_mem) && ctx.pc == 0x088218E8u) goto L_088218E8;
    return;
L_088218E8:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(360));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 364u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08821918u);
    ctx.gpr[5] = (0u | 128u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08821918u) goto L_08821918;
    return;
L_08821918:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[21] = (0u | 2u);
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    goto L_0882192C;
L_0882192C:
    ctx.gpr[31] = (0x08821934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 863u, 0x0881F4E8u>(ctx, &aot_mem) && ctx.pc == 0x08821934u) goto L_08821934;
    return;
L_08821934:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[21];
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08821944;
      }
      goto L_0882193C;
    }
L_0882193C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[22]);
    goto L_08821944;
L_08821944:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882192C;
      }
      goto L_08821954;
    }
L_08821954:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[31] = (0x08821964u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(348), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 868u, 0x0881F550u>(ctx, &aot_mem) && ctx.pc == 0x08821964u) goto L_08821964;
    return;
L_08821964:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4596)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0882197Cu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(352), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 876u, 0x0881F5D8u>(ctx, &aot_mem) && ctx.pc == 0x0882197Cu) goto L_0882197C;
    return;
L_0882197C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), 0u);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4592)));
    ctx.gpr[31] = (0x088219ACu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 622u, 0x0898FE3Cu>(ctx, &aot_mem) && ctx.pc == 0x088219ACu) goto L_088219AC;
    return;
L_088219AC:
    ctx.gpr[31] = (0x088219B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 284u, 0x08989620u>(ctx, &aot_mem) && ctx.pc == 0x088219B4u) goto L_088219B4;
    return;
L_088219B4:
    ctx.gpr[31] = (0x088219BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 611u, 0x0897A948u>(ctx, &aot_mem) && ctx.pc == 0x088219BCu) goto L_088219BC;
    return;
L_088219BC:
    ctx.gpr[31] = (0x088219C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 288u, 0x0891CFF4u>(ctx, &aot_mem) && ctx.pc == 0x088219C4u) goto L_088219C4;
    return;
L_088219C4:
    ctx.gpr[31] = (0x088219CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 914u, 0x0881F904u>(ctx, &aot_mem) && ctx.pc == 0x088219CCu) goto L_088219CC;
    return;
L_088219CC:
    ctx.gpr[31] = (0x088219D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 922u, 0x0881F95Cu>(ctx, &aot_mem) && ctx.pc == 0x088219D4u) goto L_088219D4;
    return;
L_088219D4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(252));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088219E4u);
    ctx.gpr[6] = (0u | 148u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088219E4u) goto L_088219E4;
    return;
L_088219E4:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(260));
    ctx.gpr[31] = (0x088219F4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2068));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088219F4u) goto L_088219F4;
    return;
L_088219F4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(252), 0u);
    ctx.gpr[5] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(256), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(404));
    ctx.gpr[31] = (0x08821A0Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2090));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08821A0Cu) goto L_08821A0C;
    return;
L_08821A0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(400), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 32u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08821A24u);
    ctx.gpr[5] = (0u | 130u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08821A24u) goto L_08821A24;
    return;
L_08821A24:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(988), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08821A40;
      }
      goto L_08821A30;
    }
L_08821A30:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08821A40u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08821A40u) goto L_08821A40;
    return;
L_08821A40:
    ctx.gpr[31] = (0x08821A48u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 769u, 0x0893B9C4u>(ctx, &aot_mem) && ctx.pc == 0x08821A48u) goto L_08821A48;
    return;
L_08821A48:
    ctx.gpr[4] = (0u | 22u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1000), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[17] = (0u | 3344u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08821A68u);
    ctx.gpr[5] = (0u | 130u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08821A68u) goto L_08821A68;
    return;
L_08821A68:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(996), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08821AC4;
      }
      goto L_08821A74;
    }
L_08821A74:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08821A80u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08821A80u) goto L_08821A80;
    return;
L_08821A80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1000)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[17] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(156));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08821AACu);
    ctx.gpr[5] = (0u | 130u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08821AACu) goto L_08821AAC;
    return;
L_08821AAC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08821AC4;
      }
      goto L_08821AB8;
    }
L_08821AB8:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08821AC4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08821AC4u) goto L_08821AC4;
    return;
L_08821AC4:
    ctx.gpr[31] = (0x08821ACCu);
    // nop
    goto L_0882051C;
L_08821ACC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 152u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08821AE0u);
    ctx.gpr[5] = (0u | 130u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08821AE0u) goto L_08821AE0;
    return;
L_08821AE0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1652), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08821B24;
      }
      goto L_08821AEC;
    }
L_08821AEC:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08821AF8u);
    ctx.gpr[6] = (0u | 152u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08821AF8u) goto L_08821AF8;
    return;
L_08821AF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 156u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08821B0Cu);
    ctx.gpr[5] = (0u | 130u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08821B0Cu) goto L_08821B0C;
    return;
L_08821B0C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1656), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08821B24;
      }
      goto L_08821B18;
    }
L_08821B18:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08821B24u);
    ctx.gpr[6] = (0u | 156u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08821B24u) goto L_08821B24;
    return;
L_08821B24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08821B38u);
    ctx.gpr[5] = (0u | 130u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08821B38u) goto L_08821B38;
    return;
L_08821B38:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1676), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08821B50;
      }
      goto L_08821B44;
    }
L_08821B44:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08821B50u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08821B50u) goto L_08821B50;
    return;
L_08821B50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08821B64u);
    ctx.gpr[5] = (0u | 130u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08821B64u) goto L_08821B64;
    return;
L_08821B64:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1680), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08821B7C;
      }
      goto L_08821B70;
    }
L_08821B70:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08821B7Cu);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08821B7Cu) goto L_08821B7C;
    return;
L_08821B7C:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1092), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[17] = (0u | 288u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08821B9Cu);
    ctx.gpr[5] = (0u | 130u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08821B9Cu) goto L_08821B9C;
    return;
L_08821B9C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1084), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08821BB4;
      }
      goto L_08821BA8;
    }
L_08821BA8:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08821BB4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08821BB4u) goto L_08821BB4;
    return;
L_08821BB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1092)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[17] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08821BD8u);
    ctx.gpr[5] = (0u | 130u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08821BD8u) goto L_08821BD8;
    return;
L_08821BD8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1088), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08821BF0;
      }
      goto L_08821BE4;
    }
L_08821BE4:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08821BF0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08821BF0u) goto L_08821BF0;
    return;
L_08821BF0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1096), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1100), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1104), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1108), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1112), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1116), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1120), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1640), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1124));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08821C20u);
    ctx.gpr[6] = (0u | 516u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08821C20u) goto L_08821C20;
    return;
L_08821C20:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1644), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(244), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(248), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1660), 0u);
    ctx.gpr[31] = (0x08821C38u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 191u, 0x089B4FCCu>(ctx, &aot_mem) && ctx.pc == 0x08821C38u) goto L_08821C38;
    return;
L_08821C38:
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1660), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08821C6Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 139u, 0x089B49F8u>(ctx, &aot_mem) && ctx.pc == 0x08821C6Cu) goto L_08821C6C;
    return;
L_08821C6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 9932u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08821C80u);
    ctx.gpr[5] = (0u | 129u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08821C80u) goto L_08821C80;
    return;
L_08821C80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1664), ctx.gpr[2]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 5916u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08821C98u);
    ctx.gpr[5] = (0u | 129u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08821C98u) goto L_08821C98;
    return;
L_08821C98:
    ctx.gpr[31] = (0x08821CA0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1668), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 193u, 0x08944EB8u>(ctx, &aot_mem) && ctx.pc == 0x08821CA0u) goto L_08821CA0;
    return;
L_08821CA0:
    ctx.gpr[31] = (0x08821CA8u);
    // nop
    goto L_08822ED0;
L_08821CA8:
    ctx.gpr[31] = (0x08821CB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 511u, 0x0894B874u>(ctx, &aot_mem) && ctx.pc == 0x08821CB0u) goto L_08821CB0;
    return;
L_08821CB0:
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
L_08821CD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08821CF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 758u, 0x0881EF38u>(ctx, &aot_mem) && ctx.pc == 0x08821CF8u) goto L_08821CF8;
    return;
L_08821CF8:
    ctx.gpr[31] = (0x08821D00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 199u, 0x08944FACu>(ctx, &aot_mem) && ctx.pc == 0x08821D00u) goto L_08821D00;
    return;
L_08821D00:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(360));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1664)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_08821D28;
      }
      goto L_08821D14;
    }
L_08821D14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08821D24u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08821D24u) goto L_08821D24;
    return;
L_08821D24:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1664), 0u);
    goto L_08821D28;
L_08821D28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1668)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_08821D48;
      }
      goto L_08821D34;
    }
L_08821D34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08821D44u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08821D44u) goto L_08821D44;
    return;
L_08821D44:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1668), 0u);
    goto L_08821D48;
L_08821D48:
    ctx.gpr[31] = (0x08821D50u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1660)));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 187u, 0x089B4F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08821D50u) goto L_08821D50;
    return;
L_08821D50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1644)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1660), 0u);
      if (branch_taken) {
          goto L_08821D7C;
      }
      goto L_08821D5C;
    }
L_08821D5C:
    ctx.gpr[31] = (0x08821D64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 61u, 0x0883C8A8u>(ctx, &aot_mem) && ctx.pc == 0x08821D64u) goto L_08821D64;
    return;
L_08821D64:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08821D78u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1644)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08821D78u) goto L_08821D78;
    return;
L_08821D78:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1644), 0u);
    goto L_08821D7C;
L_08821D7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1676)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (2222u << 16u);
      if (branch_taken) {
          goto L_08821DE4;
      }
      goto L_08821D88;
    }
L_08821D88:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(268)));
    goto L_08821D98;
L_08821D98:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08821DCC;
    }
    goto L_08821DA8;
L_08821DA8:
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08821DB0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08821DB0u) goto L_08821DB0;
    return;
L_08821DB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1676)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1676)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(268)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08821DCC;
L_08821DCC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08821D98;
      }
      goto L_08821DD8;
    }
L_08821DD8:
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08821DE0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08821DE0u) goto L_08821DE0;
    return;
L_08821DE0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1676), 0u);
    goto L_08821DE4;
L_08821DE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1680)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (2222u << 16u);
      if (branch_taken) {
          goto L_08821E54;
      }
      goto L_08821DF0;
    }
L_08821DF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    goto L_08821E00;
L_08821E00:
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08821E38;
    }
    goto L_08821E10;
L_08821E10:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08821E1Cu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08821E1Cu) goto L_08821E1C;
    return;
L_08821E1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1680)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1680)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08821E38;
L_08821E38:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08821E00;
      }
      goto L_08821E44;
    }
L_08821E44:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08821E50u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08821E50u) goto L_08821E50;
    return;
L_08821E50:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1680), 0u);
    goto L_08821E54;
L_08821E54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1652)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1656)));
        goto L_08821E84;
    }
    goto L_08821E60;
L_08821E60:
    ctx.gpr[31] = (0x08821E68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 280u, 0x0880EEA8u>(ctx, &aot_mem) && ctx.pc == 0x08821E68u) goto L_08821E68;
    return;
L_08821E68:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08821E7Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1652)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08821E7Cu) goto L_08821E7C;
    return;
L_08821E7C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1652), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1656)));
    goto L_08821E84;
L_08821E84:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_08821EA0;
      }
      goto L_08821E8C;
    }
L_08821E8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08821E9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08821E9Cu) goto L_08821E9C;
    return;
L_08821E9C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1656), 0u);
    goto L_08821EA0;
L_08821EA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(992)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_08821EC0;
      }
      goto L_08821EAC;
    }
L_08821EAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08821EBCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08821EBCu) goto L_08821EBC;
    return;
L_08821EBC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(992), 0u);
    goto L_08821EC0;
L_08821EC0:
    ctx.gpr[31] = (0x08821EC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 779u, 0x0893BA94u>(ctx, &aot_mem) && ctx.pc == 0x08821EC8u) goto L_08821EC8;
    return;
L_08821EC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1088)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1084)));
        goto L_08821F40;
    }
    goto L_08821ED4;
L_08821ED4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1092)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[17] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_08821F28;
      }
      goto L_08821EE8;
    }
L_08821EE8:
    ctx.gpr[18] = (0u | 0u);
    goto L_08821EEC;
L_08821EEC:
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1092)));
        goto L_08821F14;
    }
    goto L_08821EFC;
L_08821EFC:
    ctx.gpr[31] = (0x08821F04u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 348u, 0x08811BF8u>(ctx, &aot_mem) && ctx.pc == 0x08821F04u) goto L_08821F04;
    return;
L_08821F04:
    ctx.gpr[31] = (0x08821F0Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 276u, 0x0893DC40u>(ctx, &aot_mem) && ctx.pc == 0x08821F0Cu) goto L_08821F0C;
    return;
L_08821F0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1088)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1092)));
    goto L_08821F14;
L_08821F14:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[17] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08821EEC;
      }
      goto L_08821F24;
    }
L_08821F24:
    ctx.gpr[5] = (2222u << 16u);
    goto L_08821F28;
L_08821F28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08821F38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08821F38u) goto L_08821F38;
    return;
L_08821F38:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1088), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1084)));
    goto L_08821F40;
L_08821F40:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_08821F5C;
      }
      goto L_08821F48;
    }
L_08821F48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08821F58u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08821F58u) goto L_08821F58;
    return;
L_08821F58:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1084), 0u);
    goto L_08821F5C;
L_08821F5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(996)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(988)));
        goto L_08821FBC;
    }
    goto L_08821F68;
L_08821F68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1000)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[17] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_08821FA4;
      }
      goto L_08821F7C;
    }
L_08821F7C:
    ctx.gpr[18] = (0u | 0u);
    goto L_08821F80;
L_08821F80:
    ctx.gpr[31] = (0x08821F88u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 280u, 0x0880EEA8u>(ctx, &aot_mem) && ctx.pc == 0x08821F88u) goto L_08821F88;
    return;
L_08821F88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1000)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(152));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(996)));
      if (branch_taken) {
          goto L_08821F80;
      }
      goto L_08821FA0;
    }
L_08821FA0:
    ctx.gpr[5] = (2222u << 16u);
    goto L_08821FA4;
L_08821FA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08821FB4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08821FB4u) goto L_08821FB4;
    return;
L_08821FB4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(996), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(988)));
    goto L_08821FBC;
L_08821FBC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08821FFC;
      }
      goto L_08821FC4;
    }
L_08821FC4:
    ctx.gpr[18] = (0u | 0u);
    goto L_08821FC8;
L_08821FC8:
    ctx.gpr[31] = (0x08821FD0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 689u, 0x0893AD34u>(ctx, &aot_mem) && ctx.pc == 0x08821FD0u) goto L_08821FD0;
    return;
L_08821FD0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[17] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(988)));
      if (branch_taken) {
          goto L_08821FC8;
      }
      goto L_08821FE4;
    }
L_08821FE4:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08821FF8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08821FF8u) goto L_08821FF8;
    return;
L_08821FF8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(988), 0u);
    goto L_08821FFC;
L_08821FFC:
    ctx.gpr[31] = (0x08822004u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(252));
    goto L_088203F8;
L_08822004:
    ctx.gpr[31] = (0x0882200Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 899u, 0x0881F824u>(ctx, &aot_mem) && ctx.pc == 0x0882200Cu) goto L_0882200C;
    return;
L_0882200C:
    ctx.gpr[31] = (0x08822014u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 910u, 0x0881F8CCu>(ctx, &aot_mem) && ctx.pc == 0x08822014u) goto L_08822014;
    return;
L_08822014:
    ctx.gpr[31] = (0x0882201Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 912u, 0x0881F8E8u>(ctx, &aot_mem) && ctx.pc == 0x0882201Cu) goto L_0882201C;
    return;
L_0882201C:
    ctx.gpr[31] = (0x08822024u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 918u, 0x0881F930u>(ctx, &aot_mem) && ctx.pc == 0x08822024u) goto L_08822024;
    return;
L_08822024:
    ctx.gpr[31] = (0x0882202Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 926u, 0x0881F988u>(ctx, &aot_mem) && ctx.pc == 0x0882202Cu) goto L_0882202C;
    return;
L_0882202C:
    ctx.gpr[31] = (0x08822034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 292u, 0x0891D0D0u>(ctx, &aot_mem) && ctx.pc == 0x08822034u) goto L_08822034;
    return;
L_08822034:
    ctx.gpr[31] = (0x0882203Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 614u, 0x0897A980u>(ctx, &aot_mem) && ctx.pc == 0x0882203Cu) goto L_0882203C;
    return;
L_0882203C:
    ctx.gpr[31] = (0x08822044u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 296u, 0x089897B4u>(ctx, &aot_mem) && ctx.pc == 0x08822044u) goto L_08822044;
    return;
L_08822044:
    ctx.gpr[31] = (0x0882204Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 631u, 0x0898FE9Cu>(ctx, &aot_mem) && ctx.pc == 0x0882204Cu) goto L_0882204C;
    return;
L_0882204C:
    ctx.gpr[31] = (0x08822054u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 883u, 0x0881F65Cu>(ctx, &aot_mem) && ctx.pc == 0x08822054u) goto L_08822054;
    return;
L_08822054:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4596)));
    ctx.gpr[31] = (0x08822068u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 62u, 0x089C05F0u>(ctx, &aot_mem) && ctx.pc == 0x08822068u) goto L_08822068;
    return;
L_08822068:
    ctx.gpr[31] = (0x08822070u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 871u, 0x0881F58Cu>(ctx, &aot_mem) && ctx.pc == 0x08822070u) goto L_08822070;
    return;
L_08822070:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    goto L_08822078;
L_08822078:
    ctx.gpr[31] = (0x08822080u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 865u, 0x0881F52Cu>(ctx, &aot_mem) && ctx.pc == 0x08822080u) goto L_08822080;
    return;
L_08822080:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08822078;
      }
      goto L_08822094;
    }
L_08822094:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_088220B4;
      }
      goto L_088220A0;
    }
L_088220A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088220B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088220B0u) goto L_088220B0;
    return;
L_088220B0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    goto L_088220B4;
L_088220B4:
    ctx.gpr[31] = (0x088220BCu);
    // nop
    goto L_08822F2C;
L_088220BC:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[31] = (0x088220C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17320));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 50u, 0x0880C310u>(ctx, &aot_mem) && ctx.pc == 0x088220C8u) goto L_088220C8;
    return;
L_088220C8:
    ctx.gpr[31] = (0x088220D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 511u, 0x0894B874u>(ctx, &aot_mem) && ctx.pc == 0x088220D0u) goto L_088220D0;
    return;
L_088220D0:
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
L_088220EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x0882212Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 891u, 0x0881F6D4u>(ctx, &aot_mem) && ctx.pc == 0x0882212Cu) goto L_0882212C;
    return;
L_0882212C:
    ctx.gpr[5] = (14979u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4719u);
    ctx.gpr[18] = (2221u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2632)));
    ctx.gpr[21] = (2221u << 16u);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[22] = (0u | 3u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[23] = (0u | 1u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(360));
    ctx.gpr[19] = (2222u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (2222u << 16u);
      if (branch_taken) {
          goto L_0882217C;
      }
      goto L_08822168;
    }
L_08822168:
    ctx.gpr[31] = (0x08822170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 590u, 0x0897A6C4u>(ctx, &aot_mem) && ctx.pc == 0x08822170u) goto L_08822170;
    return;
L_08822170:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(22324), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(22320), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2632), 0u);
    goto L_0882217C;
L_0882217C:
    ctx.gpr[31] = (0x08822184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 590u, 0x0897A6C4u>(ctx, &aot_mem) && ctx.pc == 0x08822184u) goto L_08822184;
    return;
L_08822184:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22320)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1000));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_088221A4;
      }
      goto L_0882219C;
    }
L_0882219C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088221B8;
      }
      goto L_088221A4;
    }
L_088221A4:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(356)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(356), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(22320), ctx.gpr[18]);
    goto L_088221B8;
L_088221B8:
    ctx.gpr[31] = (0x088221C0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 71u, 0x089AD25Cu>(ctx, &aot_mem) && ctx.pc == 0x088221C0u) goto L_088221C0;
    return;
L_088221C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22324)));
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
        goto L_088221F4;
    }
    goto L_088221D0;
L_088221D0:
    ctx.gpr[4] = (ctx.gpr[18] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_088221EC;
      }
      goto L_088221E0;
    }
L_088221E0:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_088221EC;
L_088221EC:
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_08822238;
      }
      goto L_088221F4;
    }
L_088221F4:
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (~(ctx.gpr[4] | 0u));
    ctx.gpr[5] = (0u | 1000u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08822234;
      }
      goto L_08822228;
    }
L_08822228:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08822234;
L_08822234:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_08822238;
L_08822238:
    ctx.gpr[31] = (0x08822240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 997u, 0x0881FED8u>(ctx, &aot_mem) && ctx.pc == 0x08822240u) goto L_08822240;
    return;
L_08822240:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08822270;
      }
      goto L_0882225C;
    }
L_0882225C:
    ctx.gpr[31] = (0x08822264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 997u, 0x0881FED8u>(ctx, &aot_mem) && ctx.pc == 0x08822264u) goto L_08822264;
    return;
L_08822264:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[20] = ctx.fpr[22] / ctx.fpr[20];
    goto L_08822270;
L_08822270:
    ctx.gpr[31] = (0x08822278u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 859u, 0x0881F488u>(ctx, &aot_mem) && ctx.pc == 0x08822278u) goto L_08822278;
    return;
L_08822278:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088222DC;
      }
      goto L_08822280;
    }
L_08822280:
    ctx.gpr[31] = (0x08822288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 859u, 0x0881F488u>(ctx, &aot_mem) && ctx.pc == 0x08822288u) goto L_08822288;
    return;
L_08822288:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_088222DC;
      }
      goto L_08822290;
    }
L_08822290:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088222C8;
      }
      goto L_088222A0;
    }
L_088222A0:
    ctx.gpr[31] = (0x088222A8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 860u, 0x0881F498u>(ctx, &aot_mem) && ctx.pc == 0x088222A8u) goto L_088222A8;
    return;
L_088222A8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088222C0;
      }
      goto L_088222B0;
    }
L_088222B0:
    ctx.gpr[31] = (0x088222B8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 861u, 0x0881F4B4u>(ctx, &aot_mem) && ctx.pc == 0x088222B8u) goto L_088222B8;
    return;
L_088222B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088222C8;
      }
      goto L_088222C0;
    }
L_088222C0:
    ctx.gpr[31] = (0x088222C8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 862u, 0x0881F4CCu>(ctx, &aot_mem) && ctx.pc == 0x088222C8u) goto L_088222C8;
    return;
L_088222C8:
    ctx.gpr[31] = (0x088222D0u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 860u, 0x0881F498u>(ctx, &aot_mem) && ctx.pc == 0x088222D0u) goto L_088222D0;
    return;
L_088222D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088222DC;
      }
      goto L_088222D8;
    }
L_088222D8:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_088222DC;
L_088222DC:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1684), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_0882230C;
    }
    goto L_088222EC;
L_088222EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (15496u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[5] | 34953u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1684), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_0882230C;
L_0882230C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4584)));
    if (ctx.gpr[4] == ctx.gpr[23]) {
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_0882231C;
    }
    goto L_0882231C;
L_0882231C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[31] = (0x08822330u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08821230;
L_08822330:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08822404;
      }
      goto L_08822338;
    }
L_08822338:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
        goto L_0882239C;
    }
    goto L_08822344;
L_08822344:
    ctx.gpr[31] = (0x0882234Cu);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 849u, 0x0881F3C0u>(ctx, &aot_mem) && ctx.pc == 0x0882234Cu) goto L_0882234C;
    return;
L_0882234C:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[31] = (0x08822358u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18552));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 850u, 0x0881F3D8u>(ctx, &aot_mem) && ctx.pc == 0x08822358u) goto L_08822358;
    return;
L_08822358:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[31] = (0x08822364u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18424));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 851u, 0x0881F3E8u>(ctx, &aot_mem) && ctx.pc == 0x08822364u) goto L_08822364;
    return;
L_08822364:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[31] = (0x08822370u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18264));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 852u, 0x0881F3F8u>(ctx, &aot_mem) && ctx.pc == 0x08822370u) goto L_08822370;
    return;
L_08822370:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[31] = (0x0882237Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18016));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 853u, 0x0881F408u>(ctx, &aot_mem) && ctx.pc == 0x0882237Cu) goto L_0882237C;
    return;
L_0882237C:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[31] = (0x08822388u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17472));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 854u, 0x0881F418u>(ctx, &aot_mem) && ctx.pc == 0x08822388u) goto L_08822388;
    return;
L_08822388:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[31] = (0x08822394u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17444));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 855u, 0x0881F428u>(ctx, &aot_mem) && ctx.pc == 0x08822394u) goto L_08822394;
    return;
L_08822394:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08822404;
      }
      goto L_0882239C;
    }
L_0882239C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088223C8;
      }
      goto L_088223A8;
    }
L_088223A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) < 0;
    // nop
      if (branch_taken) {
          goto L_08822404;
      }
      goto L_088223B0;
    }
L_088223B0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) > 0;
    // nop
      if (branch_taken) {
          goto L_088223EC;
      }
      goto L_088223B8;
    }
L_088223B8:
    ctx.gpr[31] = (0x088223C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 751u, 0x0881EEB8u>(ctx, &aot_mem) && ctx.pc == 0x088223C0u) goto L_088223C0;
    return;
L_088223C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08822404;
      }
      goto L_088223C8;
    }
L_088223C8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088223FC;
      }
      goto L_088223D0;
    }
L_088223D0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08822404;
      }
      goto L_088223D8;
    }
L_088223D8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088223E4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 793u, 0x0881F0B0u>(ctx, &aot_mem) && ctx.pc == 0x088223E4u) goto L_088223E4;
    return;
L_088223E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08822404;
      }
      goto L_088223EC;
    }
L_088223EC:
    ctx.gpr[31] = (0x088223F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 754u, 0x0881EEF4u>(ctx, &aot_mem) && ctx.pc == 0x088223F4u) goto L_088223F4;
    return;
L_088223F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08822404;
      }
      goto L_088223FC;
    }
L_088223FC:
    ctx.gpr[31] = (0x08822404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 758u, 0x0881EF38u>(ctx, &aot_mem) && ctx.pc == 0x08822404u) goto L_08822404;
    return;
L_08822404:
    ctx.gpr[31] = (0x0882240Cu);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(22324), ctx.gpr[18]);
    ctx.pc = 0x08AB45BCu;
    return;
L_0882240C:
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2056), ctx.gpr[2]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882244C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088224A0;
      }
      goto L_08822480;
    }
L_08822480:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_08822870;
      }
      goto L_08822488;
    }
L_08822488:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08822494u);
    ctx.gpr[6] = (0u | 130u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 465u, 0x08809CF0u>(ctx, &aot_mem) && ctx.pc == 0x08822494u) goto L_08822494;
    return;
L_08822494:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08822870;
      }
      goto L_088224A0;
    }
L_088224A0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088224BC;
      }
      goto L_088224AC;
    }
L_088224AC:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (0u | 1u);
        goto L_08822870;
    }
    goto L_088224B4;
L_088224B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08822870;
      }
      goto L_088224BC;
    }
L_088224BC:
    ctx.gpr[31] = (0x088224C4u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 487u, 0x08809EA8u>(ctx, &aot_mem) && ctx.pc == 0x088224C4u) goto L_088224C4;
    return;
L_088224C4:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08822870;
      }
      goto L_088224D0;
    }
L_088224D0:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(100));
    ctx.gpr[31] = (0x088224DCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x088224DCu) goto L_088224DC;
    return;
L_088224DC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(136));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(360));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(988)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (2222u << 16u);
      if (branch_taken) {
          goto L_08822548;
      }
      goto L_08822508;
    }
L_08822508:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    goto L_08822510;
L_08822510:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(988)));
    ctx.gpr[22] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[31] = (0x08822520u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 688u, 0x0893AD1Cu>(ctx, &aot_mem) && ctx.pc == 0x08822520u) goto L_08822520;
    return;
L_08822520:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0882252Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_088204F4;
L_0882252C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08822538u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 700u, 0x0893AE04u>(ctx, &aot_mem) && ctx.pc == 0x08822538u) goto L_08822538;
    return;
L_08822538:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08822510;
      }
      goto L_08822548;
    }
L_08822548:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1088)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1652)));
        goto L_088225A8;
    }
    goto L_08822554;
L_08822554:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1092)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088225A4;
      }
      goto L_08822568;
    }
L_08822568:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1088)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[31] = (0x0882257Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 263u, 0x0893DAECu>(ctx, &aot_mem) && ctx.pc == 0x0882257Cu) goto L_0882257C;
    return;
L_0882257C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08822588u);
    ctx.gpr[5] = (0u | 2u);
    goto L_088204F4;
L_08822588:
    ctx.gpr[31] = (0x08822590u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 267u, 0x0893DB84u>(ctx, &aot_mem) && ctx.pc == 0x08822590u) goto L_08822590;
    return;
L_08822590:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1092)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08822568;
      }
      goto L_088225A4;
    }
L_088225A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1652)));
    goto L_088225A8;
L_088225A8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_08822604;
      }
      goto L_088225B0;
    }
L_088225B0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(324)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088225D0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29064));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088225D0u) goto L_088225D0;
    return;
L_088225D0:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1652)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088225E0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 240u, 0x0880EC64u>(ctx, &aot_mem) && ctx.pc == 0x088225E0u) goto L_088225E0;
    return;
L_088225E0:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(108));
    ctx.gpr[31] = (0x088225ECu);
    ctx.gpr[5] = (0u | 3u);
    goto L_088204F4;
L_088225EC:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08822604u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 247u, 0x0880ECE8u>(ctx, &aot_mem) && ctx.pc == 0x08822604u) goto L_08822604;
    return;
L_08822604:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1656)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08822660;
      }
      goto L_08822610;
    }
L_08822610:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(328)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08822634u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29064));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08822634u) goto L_08822634;
    return;
L_08822634:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1656)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08822648u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 812u, 0x0893BD00u>(ctx, &aot_mem) && ctx.pc == 0x08822648u) goto L_08822648;
    return;
L_08822648:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08822654u);
    ctx.gpr[5] = (0u | 4u);
    goto L_088204F4;
L_08822654:
    ctx.gpr[31] = (0x0882265Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 45u, 0x0893C514u>(ctx, &aot_mem) && ctx.pc == 0x0882265Cu) goto L_0882265C;
    return;
L_0882265C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08822660;
L_08822660:
    ctx.gpr[31] = (0x08822668u);
    ctx.gpr[5] = (0u | 5u);
    goto L_088204F4;
L_08822668:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x0882267Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17320));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 46u, 0x0880C27Cu>(ctx, &aot_mem) && ctx.pc == 0x0882267Cu) goto L_0882267C;
    return;
L_0882267C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08822688u);
    ctx.gpr[5] = (0u | 6u);
    goto L_088204F4;
L_08822688:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1664)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x08822698u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 850u, 0x0880BB68u>(ctx, &aot_mem) && ctx.pc == 0x08822698u) goto L_08822698;
    return;
L_08822698:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1672), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088226A8u);
    ctx.gpr[5] = (0u | 7u);
    goto L_088204F4;
L_088226A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1668)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x088226B8u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 887u, 0x0880BE74u>(ctx, &aot_mem) && ctx.pc == 0x088226B8u) goto L_088226B8;
    return;
L_088226B8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088226C4u);
    ctx.gpr[5] = (0u | 8u);
    goto L_088204F4;
L_088226C4:
    ctx.gpr[31] = (0x088226CCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 453u, 0x0883B6B4u>(ctx, &aot_mem) && ctx.pc == 0x088226CCu) goto L_088226CC;
    return;
L_088226CC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088226D8u);
    ctx.gpr[5] = (0u | 12u);
    goto L_088204F4;
L_088226D8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088226E4u);
    ctx.gpr[5] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 527u, 0x08846E0Cu>(ctx, &aot_mem) && ctx.pc == 0x088226E4u) goto L_088226E4;
    return;
L_088226E4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088226F0u);
    ctx.gpr[5] = (0u | 13u);
    goto L_088204F4;
L_088226F0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088226FCu);
    ctx.gpr[5] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 527u, 0x08846E0Cu>(ctx, &aot_mem) && ctx.pc == 0x088226FCu) goto L_088226FC;
    return;
L_088226FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 184u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08822710u);
    ctx.gpr[5] = (0u | 129u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08822710u) goto L_08822710;
    return;
L_08822710:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1644), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08822724u);
    ctx.gpr[6] = (0u | 184u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08822724u) goto L_08822724;
    return;
L_08822724:
    ctx.gpr[6] = (17360u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (17232u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1644)));
    ctx.gpr[6] = (17024u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    goto L_08822748;
L_08822748:
    ctx.gpr[6] = (ctx.gpr[20] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1644)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1644)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1644)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(92));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1644)));
      if (branch_taken) {
          goto L_08822748;
      }
      goto L_08822788;
    }
L_08822788:
    ctx.gpr[31] = (0x08822790u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 55u, 0x0883C734u>(ctx, &aot_mem) && ctx.pc == 0x08822790u) goto L_08822790;
    return;
L_08822790:
    ctx.gpr[31] = (0x08822798u);
    ctx.gpr[4] = (0u | 1u);
    goto L_088213B0;
L_08822798:
    ctx.gpr[4] = (0u | 240u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(106), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(107), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    goto L_088227B8;
L_088227B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 24u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088227CCu);
    ctx.gpr[5] = (0u | 129u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088227CCu) goto L_088227CC;
    return;
L_088227CC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(244), ctx.gpr[2]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088227B8;
      }
      goto L_088227E0;
    }
L_088227E0:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088227F0u);
    ctx.gpr[5] = (0u | 9u);
    goto L_088204F4;
L_088227F0:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08822800u);
    ctx.gpr[5] = (0u | 10u);
    goto L_088204F4;
L_08822800:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(244)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    ctx.gpr[7] = (2219u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08822824u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(29076));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 309u, 0x088458FCu>(ctx, &aot_mem) && ctx.pc == 0x08822824u) goto L_08822824;
    return;
L_08822824:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08822830u);
    ctx.gpr[5] = (0u | 11u);
    goto L_088204F4;
L_08822830:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(248)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    ctx.gpr[7] = (2219u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08822850u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(29084));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 309u, 0x088458FCu>(ctx, &aot_mem) && ctx.pc == 0x08822850u) goto L_08822850;
    return;
L_08822850:
    ctx.gpr[31] = (0x08822858u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 555u, 0x0880A5E8u>(ctx, &aot_mem) && ctx.pc == 0x08822858u) goto L_08822858;
    return;
L_08822858:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[31] = (0x08822868u);
    ctx.gpr[17] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 511u, 0x0894B874u>(ctx, &aot_mem) && ctx.pc == 0x08822868u) goto L_08822868;
    return;
L_08822868:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08822870;
      }
      goto L_08822870;
    }
L_08822870:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882289C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[20] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(360));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(996)));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08822BF0;
      }
      goto L_088228F0;
    }
L_088228F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(992)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
        goto L_08822BF4;
    }
    goto L_088228FC;
L_088228FC:
    ctx.gpr[31] = (0x08822904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 858u, 0x0881F478u>(ctx, &aot_mem) && ctx.pc == 0x08822904u) goto L_08822904;
    return;
L_08822904:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08822BF0;
      }
      goto L_08822914;
    }
L_08822914:
    ctx.gpr[6] = (ctx.gpr[19] << 4u);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[19] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[8] = (ctx.gpr[19] - ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[22] = (ctx.gpr[19] + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[22] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[30] = (0u | 1u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_0882294C;
L_0882294C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(996)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(992)));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[18] + static_cast<std::uint32_t>(44));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08822998;
      }
      goto L_0882296C;
    }
L_0882296C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08822BB0;
      }
      goto L_08822978;
    }
L_08822978:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08822990u);
    ctx.gpr[6] = (0u | 132u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 465u, 0x08809CF0u>(ctx, &aot_mem) && ctx.pc == 0x08822990u) goto L_08822990;
    return;
L_08822990:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[30]);
      if (branch_taken) {
          goto L_08822BB0;
      }
      goto L_08822998;
    }
L_08822998:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
        goto L_088229C0;
    }
    goto L_088229A4;
L_088229A4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08822BAC;
      }
      goto L_088229B4;
    }
L_088229B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_08822BB4;
      }
      goto L_088229BC;
    }
L_088229BC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    goto L_088229C0;
L_088229C0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[31] = (0x088229CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 487u, 0x08809EA8u>(ctx, &aot_mem) && ctx.pc == 0x088229CCu) goto L_088229CC;
    return;
L_088229CC:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[21] != ctx.gpr[30]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
        goto L_08822BB4;
    }
    goto L_088229D8;
L_088229D8:
    ctx.gpr[31] = (0x088229E0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x088229E0u) goto L_088229E0;
    return;
L_088229E0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08822A28;
      }
      goto L_08822A00;
    }
L_08822A00:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08822A1C;
      }
      goto L_08822A0C;
    }
L_08822A0C:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08822A1C;
      }
      goto L_08822A14;
    }
L_08822A14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[19] + static_cast<std::uint32_t>(1000));
      if (branch_taken) {
          goto L_08822A28;
      }
      goto L_08822A1C;
    }
L_08822A1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    goto L_08822A28;
L_08822A28:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(108));
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08822A38u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x08822A38u) goto L_08822A38;
    return;
L_08822A38:
    ctx.gpr[31] = (0x08822A40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 267u, 0x08A2F840u>(ctx, &aot_mem) && ctx.pc == 0x08822A40u) goto L_08822A40;
    return;
L_08822A40:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08822A58u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 247u, 0x0880ECE8u>(ctx, &aot_mem) && ctx.pc == 0x08822A58u) goto L_08822A58;
    return;
L_08822A58:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08822A68u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x08822A68u) goto L_08822A68;
    return;
L_08822A68:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08822A8C;
      }
      goto L_08822A74;
    }
L_08822A74:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08822A84u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 825u, 0x0893BE94u>(ctx, &aot_mem) && ctx.pc == 0x08822A84u) goto L_08822A84;
    return;
L_08822A84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(3) ? 1u : 0u);
      if (branch_taken) {
          goto L_08822AAC;
      }
      goto L_08822A8C;
    }
L_08822A8C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[30];
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(3) ? 1u : 0u);
      if (branch_taken) {
          goto L_08822AAC;
      }
      goto L_08822A94;
    }
L_08822A94:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08822AA8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 825u, 0x0893BE94u>(ctx, &aot_mem) && ctx.pc == 0x08822AA8u) goto L_08822AA8;
    return;
L_08822AA8:
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    goto L_08822AAC;
L_08822AAC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (2222u << 16u);
      if (branch_taken) {
          goto L_08822B98;
      }
      goto L_08822AB4;
    }
L_08822AB4:
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822B98;
      }
      goto L_08822AC0;
    }
L_08822AC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08822B98;
      }
      goto L_08822AD8;
    }
L_08822AD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1676)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[22] << 2u);
      if (branch_taken) {
          goto L_08822B38;
      }
      goto L_08822AE4;
    }
L_08822AE4:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08822B38;
      }
      goto L_08822AF4;
    }
L_08822AF4:
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08822B00u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x08822B00u) goto L_08822B00;
    return;
L_08822B00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (0u | 132u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08822B14u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08822B14u) goto L_08822B14;
    return;
L_08822B14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1676)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1676)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08822B38u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08822B38u) goto L_08822B38;
    return;
L_08822B38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1680)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[22] << 2u);
      if (branch_taken) {
          goto L_08822B98;
      }
      goto L_08822B44;
    }
L_08822B44:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08822B98;
      }
      goto L_08822B54;
    }
L_08822B54:
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08822B60u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x08822B60u) goto L_08822B60;
    return;
L_08822B60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (0u | 132u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08822B74u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08822B74u) goto L_08822B74;
    return;
L_08822B74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1680)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1680)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08822B98u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08822B98u) goto L_08822B98;
    return;
L_08822B98:
    ctx.gpr[31] = (0x08822BA0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 555u, 0x0880A5E8u>(ctx, &aot_mem) && ctx.pc == 0x08822BA0u) goto L_08822BA0;
    return;
L_08822BA0:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08822BB0;
      }
      goto L_08822BAC;
    }
L_08822BAC:
    ctx.gpr[21] = (ctx.gpr[30] | 0u);
    goto L_08822BB0;
L_08822BB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    goto L_08822BB4;
L_08822BB4:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[30];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_08822BC8;
      }
      goto L_08822BBC;
    }
L_08822BBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    goto L_08822BC8;
L_08822BC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(152));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(156));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0882294C;
      }
      goto L_08822BF0;
    }
L_08822BF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    goto L_08822BF4;
L_08822BF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (ctx.gpr[6] ^ ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
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
L_08822C3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(360));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(840));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08822CA0;
      }
      goto L_08822C80;
    }
L_08822C80:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_08822E7C;
      }
      goto L_08822C88;
    }
L_08822C88:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08822C94u);
    ctx.gpr[6] = (0u | 130u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 465u, 0x08809CF0u>(ctx, &aot_mem) && ctx.pc == 0x08822C94u) goto L_08822C94;
    return;
L_08822C94:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08822E7C;
      }
      goto L_08822CA0;
    }
L_08822CA0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08822CBC;
      }
      goto L_08822CAC;
    }
L_08822CAC:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[18] = (0u | 1u);
        goto L_08822E7C;
    }
    goto L_08822CB4;
L_08822CB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08822E7C;
      }
      goto L_08822CBC;
    }
L_08822CBC:
    ctx.gpr[31] = (0x08822CC4u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 487u, 0x08809EA8u>(ctx, &aot_mem) && ctx.pc == 0x08822CC4u) goto L_08822CC4;
    return;
L_08822CC4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_08822E7C;
      }
      goto L_08822CD4;
    }
L_08822CD4:
    ctx.gpr[31] = (0x08822CDCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x08822CDCu) goto L_08822CDC;
    return;
L_08822CDC:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(136));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[31] = (0x08822CF8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 522u, 0x0880A0E8u>(ctx, &aot_mem) && ctx.pc == 0x08822CF8u) goto L_08822CF8;
    return;
L_08822CF8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08822D04u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 236u, 0x08A2F4B8u>(ctx, &aot_mem) && ctx.pc == 0x08822D04u) goto L_08822D04;
    return;
L_08822D04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1076), ctx.gpr[4]);
    ctx.gpr[20] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1080), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(544), ctx.gpr[20]);
      if (branch_taken) {
          goto L_08822D30;
      }
      goto L_08822D20;
    }
L_08822D20:
    ctx.gpr[31] = (0x08822D28u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 862u, 0x0881F4CCu>(ctx, &aot_mem) && ctx.pc == 0x08822D28u) goto L_08822D28;
    return;
L_08822D28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08822E3C;
      }
      goto L_08822D30;
    }
L_08822D30:
    ctx.gpr[31] = (0x08822D38u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 861u, 0x0881F4B4u>(ctx, &aot_mem) && ctx.pc == 0x08822D38u) goto L_08822D38;
    return;
L_08822D38:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1080)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(548));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(332)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08822D5Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29092));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08822D5Cu) goto L_08822D5C;
    return;
L_08822D5C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08822D68u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x08822D68u) goto L_08822D68;
    return;
L_08822D68:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08822E3C;
      }
      goto L_08822D78;
    }
L_08822D78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(996)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822E3C;
      }
      goto L_08822D84;
    }
L_08822D84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(992)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08822E3C;
      }
      goto L_08822D90;
    }
L_08822D90:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08822DA0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x08822DA0u) goto L_08822DA0;
    return;
L_08822DA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(996)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(3192));
    ctx.gpr[31] = (0x08822DB4u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 240u, 0x0880EC64u>(ctx, &aot_mem) && ctx.pc == 0x08822DB4u) goto L_08822DB4;
    return;
L_08822DB4:
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(108));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08822DC4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x08822DC4u) goto L_08822DC4;
    return;
L_08822DC4:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08822DD4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 247u, 0x0880ECE8u>(ctx, &aot_mem) && ctx.pc == 0x08822DD4u) goto L_08822DD4;
    return;
L_08822DD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1092)));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[22] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (0u | 0u);
      if (branch_taken) {
          goto L_08822E3C;
      }
      goto L_08822DE8;
    }
L_08822DE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(992)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[30] = (ctx.gpr[4] + static_cast<std::uint32_t>(3276));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08822E04u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 812u, 0x0893BD00u>(ctx, &aot_mem) && ctx.pc == 0x08822E04u) goto L_08822E04;
    return;
L_08822E04:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(112));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08822E18u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x08822E18u) goto L_08822E18;
    return;
L_08822E18:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08822E2Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 817u, 0x0893BD74u>(ctx, &aot_mem) && ctx.pc == 0x08822E2Cu) goto L_08822E2C;
    return;
L_08822E2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1092)));
    ctx.gpr[4] = (ctx.gpr[22] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(156));
      if (branch_taken) {
          goto L_08822DE8;
      }
      goto L_08822E3C;
    }
L_08822E3C:
    ctx.gpr[31] = (0x08822E44u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 372u, 0x08945D84u>(ctx, &aot_mem) && ctx.pc == 0x08822E44u) goto L_08822E44;
    return;
L_08822E44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1096)));
    ctx.gpr[31] = (0x08822E50u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 1u, 0x0882C02Cu>(ctx, &aot_mem) && ctx.pc == 0x08822E50u) goto L_08822E50;
    return;
L_08822E50:
    ctx.gpr[31] = (0x08822E58u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1096)));
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 803u, 0x0882B600u>(ctx, &aot_mem) && ctx.pc == 0x08822E58u) goto L_08822E58;
    return;
L_08822E58:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1100), ctx.gpr[2]);
    ctx.gpr[31] = (0x08822E64u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 153u, 0x08950F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08822E64u) goto L_08822E64;
    return;
L_08822E64:
    ctx.gpr[31] = (0x08822E6Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 106u, 0x08940758u>(ctx, &aot_mem) && ctx.pc == 0x08822E6Cu) goto L_08822E6C;
    return;
L_08822E6C:
    ctx.gpr[31] = (0x08822E74u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 555u, 0x0880A5E8u>(ctx, &aot_mem) && ctx.pc == 0x08822E74u) goto L_08822E74;
    return;
L_08822E74:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
      if (branch_taken) {
          goto L_08822E7C;
      }
      goto L_08822E7C;
    }
L_08822E7C:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_08822EB0:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(340)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(344), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08822ED0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2656), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08822EE8u);
    ctx.gpr[4] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 95u, 0x08AA8730u>(ctx, &aot_mem) && ctx.pc == 0x08822EE8u) goto L_08822EE8;
    return;
L_08822EE8:
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2652), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08822F00u);
    ctx.gpr[6] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08822F00u) goto L_08822F00;
    return;
L_08822F00:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(22328));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(22328), 0u);
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(22336));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(22336), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08822F2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2652)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822F5C;
      }
      goto L_08822F48;
    }
L_08822F48:
    ctx.gpr[31] = (0x08822F50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 93u, 0x08AA86E8u>(ctx, &aot_mem) && ctx.pc == 0x08822F50u) goto L_08822F50;
    return;
L_08822F50:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2652), 0u);
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2656), 0u);
    goto L_08822F5C;
L_08822F5C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08822F6C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08822F74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08822F84u);
    // nop
    goto L_0882165C;
L_08822F84:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08822F94:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08822F9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08822FACu);
    // nop
    goto L_08821680;
L_08822FAC:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08822FBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08822FE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 858u, 0x0881F478u>(ctx, &aot_mem) && ctx.pc == 0x08822FE8u) goto L_08822FE8;
    return;
L_08822FE8:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2652)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(22336));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(22328));
    goto L_08823010;
L_08823010:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[31] = (0x0882301Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08822F6C;
L_0882301C:
    ctx.gpr[31] = (0x08823024u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0882165C;
L_08823024:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(28));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(200), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(208), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(356), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2652)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08823058;
L_08823058:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08823058;
      }
      goto L_08823064;
    }
L_08823064:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08823010;
      }
      goto L_08823080;
    }
L_08823080:
    ctx.gpr[31] = (0x08823088u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    goto L_08822F94;
L_08823088:
    ctx.gpr[31] = (0x08823090u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08821680;
L_08823090:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(116));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(172), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(124));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(176), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(156));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(180), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(172));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(184), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(188));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(196));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(192), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(196), ctx.gpr[4]);
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
L_08823134:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08823144u);
    // nop
    goto L_088216A8;
L_08823144:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08823150:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08823160u);
    // nop
    goto L_088216E8;
L_08823160:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08823428:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-368));
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[31]);
    ctx.gpr[31] = (0x08823478u);
    ctx.gpr[5] = (0u | 200u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 766u, 0x08807160u>(ctx, &aot_mem) && ctx.pc == 0x08823478u) goto L_08823478;
    return;
L_08823478:
    ctx.gpr[7] = (16928u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (16840u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0882349Cu);
    ctx.gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0882349Cu) goto L_0882349C;
    return;
L_0882349C:
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088234ACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29252));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088234ACu) goto L_088234AC;
    return;
L_088234AC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x088234C0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 619u, 0x0897A9C0u>(ctx, &aot_mem) && ctx.pc == 0x088234C0u) goto L_088234C0;
    return;
L_088234C0:
    ctx.gpr[7] = (17176u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (16932u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088234E0u);
    ctx.gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088234E0u) goto L_088234E0;
    return;
L_088234E0:
    ctx.gpr[22] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(2652)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2816));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08823508u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08823508u) goto L_08823508;
    return;
L_08823508:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x0882351Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 619u, 0x0897A9C0u>(ctx, &aot_mem) && ctx.pc == 0x0882351Cu) goto L_0882351C;
    return;
L_0882351C:
    ctx.gpr[4] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[4]);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2820));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[4]);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2660));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[4]);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(22336));
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (2219u << 16u);
    ctx.gpr[4] = (17184u << 16u);
    ctx.gpr[18] = (2222u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[20] = (0u | 14u);
    ctx.gpr[17] = (0u | 4u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(29328));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(22328));
    ctx.gpr[23] = (2221u << 16u);
    goto L_0882357C;
L_0882357C:
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[20]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    if (static_cast<std::int32_t>(ctx.gpr[20]) < 0) {
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[28];
        goto L_0882358C;
    }
    goto L_0882358C;
L_0882358C:
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[26];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088235A0u);
    ctx.gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088235A0u) goto L_088235A0;
    return;
L_088235A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(2652)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x088235B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08822F6C;
L_088235B0:
    ctx.gpr[31] = (0x088235B8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08822F74;
L_088235B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088235DCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088235DCu) goto L_088235DC;
    return;
L_088235DC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x088235F0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 619u, 0x0897A9C0u>(ctx, &aot_mem) && ctx.pc == 0x088235F0u) goto L_088235F0;
    return;
L_088235F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(2652)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(86) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08823640;
    }
    goto L_08823608;
L_08823608:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[30] = ctx.fpr[24] + ctx.fpr[30];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(2640)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08823624u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08823624u) goto L_08823624;
    return;
L_08823624:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08823638u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 619u, 0x0897A9C0u>(ctx, &aot_mem) && ctx.pc == 0x08823638u) goto L_08823638;
    return;
L_08823638:
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08823640;
L_08823640:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(14));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[21] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882357C;
      }
      goto L_08823658;
    }
L_08823658:
    ctx.gpr[7] = (17062u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08823670u);
    ctx.gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08823670u) goto L_08823670;
    return;
L_08823670:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(2652)));
    ctx.gpr[31] = (0x0882367Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08822F94;
L_0882367C:
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0882368Cu);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(29344));
    goto L_08822F9C;
L_0882368C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0882369Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0882369Cu) goto L_0882369C;
    return;
L_0882369C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x088236B0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 619u, 0x0897A9C0u>(ctx, &aot_mem) && ctx.pc == 0x088236B0u) goto L_088236B0;
    return;
L_088236B0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    goto L_088236BC;
L_088236BC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (static_cast<std::int32_t>(ctx.gpr[17]) < 0) {
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[28];
        goto L_088236CC;
    }
    goto L_088236CC;
L_088236CC:
    ctx.fpr[22] = ctx.fpr[12] + ctx.fpr[26];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088236E0u);
    ctx.gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088236E0u) goto L_088236E0;
    return;
L_088236E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088236ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088236ECu) goto L_088236EC;
    return;
L_088236EC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08823700u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 619u, 0x0897A9C0u>(ctx, &aot_mem) && ctx.pc == 0x08823700u) goto L_08823700;
    return;
L_08823700:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(14));
    ctx.gpr[4] = (ctx.gpr[22] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088236BC;
      }
      goto L_08823714;
    }
L_08823714:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2656)));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[28];
        goto L_08823738;
    }
    goto L_08823738;
L_08823738:
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[26];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0882374Cu);
    ctx.gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0882374Cu) goto L_0882374C;
    return;
L_0882374C:
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882375Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29348));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0882375Cu) goto L_0882375C;
    return;
L_0882375C:
    ctx.gpr[6] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08823774u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 619u, 0x0897A9C0u>(ctx, &aot_mem) && ctx.pc == 0x08823774u) goto L_08823774;
    return;
L_08823774:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088237BC:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2644)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(2648), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088237D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088237F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 415u, 0x08842278u>(ctx, &aot_mem) && ctx.pc == 0x088237F0u) goto L_088237F0;
    return;
L_088237F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (2221u << 16u);
      if (branch_taken) {
          goto L_08823804;
      }
      goto L_088237F8;
    }
L_088237F8:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x08823804u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 680u, 0x08806C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08823804u) goto L_08823804;
    return;
L_08823804:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22344)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_0882383C;
      }
      goto L_08823814;
    }
L_08823814:
    ctx.gpr[31] = (0x0882381Cu);
    // nop
    goto L_08821734;
L_0882381C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_0882383C;
      }
      goto L_08823830;
    }
L_08823830:
    ctx.gpr[31] = (0x08823838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 273u, 0x088C1204u>(ctx, &aot_mem) && ctx.pc == 0x08823838u) goto L_08823838;
    return;
L_08823838:
    ctx.gpr[4] = (2221u << 16u);
    goto L_0882383C;
L_0882383C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4596)));
    ctx.gpr[31] = (0x08823848u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 369u, 0x0880F6C4u>(ctx, &aot_mem) && ctx.pc == 0x08823848u) goto L_08823848;
    return;
L_08823848:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2224u << 16u);
      if (branch_taken) {
          goto L_088238B4;
      }
      goto L_08823860;
    }
L_08823860:
    ctx.gpr[17] = (0u | 1u);
    goto L_08823864;
L_08823864:
    ctx.gpr[31] = (0x0882386Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08823BE4;
L_0882386C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08823878u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 488u, 0x0881DD6Cu>(ctx, &aot_mem) && ctx.pc == 0x08823878u) goto L_08823878;
    return;
L_08823878:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08823890;
      }
      goto L_08823880;
    }
L_08823880:
    ctx.gpr[31] = (0x08823888u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 479u, 0x0881DCF4u>(ctx, &aot_mem) && ctx.pc == 0x08823888u) goto L_08823888;
    return;
L_08823888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2852)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), 0u);
    goto L_08823890;
L_08823890:
    ctx.gpr[31] = (0x08823898u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 297u, 0x0881D0FCu>(ctx, &aot_mem) && ctx.pc == 0x08823898u) goto L_08823898;
    return;
L_08823898:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08823864;
      }
      goto L_088238B0;
    }
L_088238B0:
    ctx.gpr[5] = (2224u << 16u);
    goto L_088238B4;
L_088238B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088238CC;
      }
      goto L_088238C4;
    }
L_088238C4:
    ctx.gpr[31] = (0x088238CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 495u, 0x0896AEB8u>(ctx, &aot_mem) && ctx.pc == 0x088238CCu) goto L_088238CC;
    return;
L_088238CC:
    ctx.gpr[31] = (0x088238D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 451u, 0x089FB6A4u>(ctx, &aot_mem) && ctx.pc == 0x088238D4u) goto L_088238D4;
    return;
L_088238D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    if (ctx.gpr[17] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
        goto L_0882393C;
    }
    goto L_088238E4;
L_088238E4:
    ctx.gpr[31] = (0x088238ECu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 1000u, 0x0881FF20u>(ctx, &aot_mem) && ctx.pc == 0x088238ECu) goto L_088238EC;
    return;
L_088238EC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088238F8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 486u, 0x0880FFE0u>(ctx, &aot_mem) && ctx.pc == 0x088238F8u) goto L_088238F8;
    return;
L_088238F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x0882390Cu);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(76));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 1000u, 0x0881FF20u>(ctx, &aot_mem) && ctx.pc == 0x0882390Cu) goto L_0882390C;
    return;
L_0882390C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08823918u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 486u, 0x0880FFE0u>(ctx, &aot_mem) && ctx.pc == 0x08823918u) goto L_08823918;
    return;
L_08823918:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08823930u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08823930u) goto L_08823930;
    return;
L_08823930:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2852)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    goto L_0882393C;
L_0882393C:
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08823950;
      }
      goto L_08823948;
    }
L_08823948:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088239A4;
      }
      goto L_08823950;
    }
L_08823950:
    ctx.gpr[31] = (0x08823958u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 475u, 0x08806030u>(ctx, &aot_mem) && ctx.pc == 0x08823958u) goto L_08823958;
    return;
L_08823958:
    ctx.gpr[31] = (0x08823960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 496u, 0x08806164u>(ctx, &aot_mem) && ctx.pc == 0x08823960u) goto L_08823960;
    return;
L_08823960:
    ctx.gpr[31] = (0x08823968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 163u, 0x08964CC8u>(ctx, &aot_mem) && ctx.pc == 0x08823968u) goto L_08823968;
    return;
L_08823968:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[31] = (0x08823974u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13456));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 189u, 0x08954EA4u>(ctx, &aot_mem) && ctx.pc == 0x08823974u) goto L_08823974;
    return;
L_08823974:
    ctx.gpr[31] = (0x0882397Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 7u, 0x0896C084u>(ctx, &aot_mem) && ctx.pc == 0x0882397Cu) goto L_0882397C;
    return;
L_0882397C:
    ctx.gpr[31] = (0x08823984u);
    // nop
    goto L_088200D8;
L_08823984:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (ctx.gpr[19] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088239C8;
      }
      goto L_0882399C;
    }
L_0882399C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08823A70;
      }
      goto L_088239A4;
    }
L_088239A4:
    ctx.gpr[31] = (0x088239ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 889u, 0x0881F6ACu>(ctx, &aot_mem) && ctx.pc == 0x088239ACu) goto L_088239AC;
    return;
L_088239AC:
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
L_088239C8:
    ctx.gpr[18] = (2221u << 16u);
    goto L_088239CC;
L_088239CC:
    ctx.gpr[31] = (0x088239D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 415u, 0x08842278u>(ctx, &aot_mem) && ctx.pc == 0x088239D4u) goto L_088239D4;
    return;
L_088239D4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088239EC;
      }
      goto L_088239DC;
    }
L_088239DC:
    ctx.gpr[31] = (0x088239E4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 946u, 0x0881FAFCu>(ctx, &aot_mem) && ctx.pc == 0x088239E4u) goto L_088239E4;
    return;
L_088239E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08823A50;
      }
      goto L_088239EC;
    }
L_088239EC:
    ctx.gpr[31] = (0x088239F4u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x088239F4u) goto L_088239F4;
    return;
L_088239F4:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4588)));
        goto L_08823A0C;
    }
    goto L_088239FC;
L_088239FC:
    ctx.gpr[31] = (0x08823A04u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 946u, 0x0881FAFCu>(ctx, &aot_mem) && ctx.pc == 0x08823A04u) goto L_08823A04;
    return;
L_08823A04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08823A50;
      }
      goto L_08823A0C;
    }
L_08823A0C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08823A24;
      }
      goto L_08823A14;
    }
L_08823A14:
    ctx.gpr[31] = (0x08823A1Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 946u, 0x0881FAFCu>(ctx, &aot_mem) && ctx.pc == 0x08823A1Cu) goto L_08823A1C;
    return;
L_08823A1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08823A50;
      }
      goto L_08823A24;
    }
L_08823A24:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08823A48;
      }
      goto L_08823A2C;
    }
L_08823A2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (0x08823A40u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 472u, 0x0881DCA0u>(ctx, &aot_mem) && ctx.pc == 0x08823A40u) goto L_08823A40;
    return;
L_08823A40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08823A50;
      }
      goto L_08823A48;
    }
L_08823A48:
    ctx.gpr[31] = (0x08823A50u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 946u, 0x0881FAFCu>(ctx, &aot_mem) && ctx.pc == 0x08823A50u) goto L_08823A50;
    return;
L_08823A50:
    ctx.gpr[31] = (0x08823A58u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_0882072C;
L_08823A58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (ctx.gpr[19] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(144));
      if (branch_taken) {
          goto L_088239CC;
      }
      goto L_08823A70;
    }
L_08823A70:
    ctx.gpr[31] = (0x08823A78u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 508u, 0x08946754u>(ctx, &aot_mem) && ctx.pc == 0x08823A78u) goto L_08823A78;
    return;
L_08823A78:
    ctx.gpr[31] = (0x08823A80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 188u, 0x08940E4Cu>(ctx, &aot_mem) && ctx.pc == 0x08823A80u) goto L_08823A80;
    return;
L_08823A80:
    ctx.gpr[31] = (0x08823A88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 231u, 0x08969D34u>(ctx, &aot_mem) && ctx.pc == 0x08823A88u) goto L_08823A88;
    return;
L_08823A88:
    ctx.gpr[31] = (0x08823A90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 982u, 0x0881FDD0u>(ctx, &aot_mem) && ctx.pc == 0x08823A90u) goto L_08823A90;
    return;
L_08823A90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(92), 0u);
    ctx.gpr[31] = (0x08823AA4u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(96), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 775u, 0x0893BA44u>(ctx, &aot_mem) && ctx.pc == 0x08823AA4u) goto L_08823AA4;
    return;
L_08823AA4:
    ctx.gpr[31] = (0x08823AACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 994u, 0x0881FEA8u>(ctx, &aot_mem) && ctx.pc == 0x08823AACu) goto L_08823AAC;
    return;
L_08823AAC:
    ctx.gpr[31] = (0x08823AB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 987u, 0x0881FE20u>(ctx, &aot_mem) && ctx.pc == 0x08823AB4u) goto L_08823AB4;
    return;
L_08823AB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2852)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), 0u);
      if (branch_taken) {
          goto L_08823ADC;
      }
      goto L_08823AC4;
    }
L_08823AC4:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08823AD8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08823AD8u) goto L_08823AD8;
    return;
L_08823AD8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2852), 0u);
    goto L_08823ADC;
L_08823ADC:
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
L_08823AF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2852)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08823B10u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 784u, 0x0882B444u>(ctx, &aot_mem) && ctx.pc == 0x08823B10u) goto L_08823B10;
    return;
L_08823B10:
    ctx.gpr[31] = (0x08823B18u);
    // nop
    goto L_08820118;
L_08823B18:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08823B2C;
      }
      goto L_08823B24;
    }
L_08823B24:
    ctx.gpr[31] = (0x08823B2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 184u, 0x089511FCu>(ctx, &aot_mem) && ctx.pc == 0x08823B2Cu) goto L_08823B2C;
    return;
L_08823B2C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08823B38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2852)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08823BAC;
      }
      goto L_08823B54;
    }
L_08823B54:
    ctx.gpr[31] = (0x08823B5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 36u, 0x0896C22Cu>(ctx, &aot_mem) && ctx.pc == 0x08823B5Cu) goto L_08823B5C;
    return;
L_08823B5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2224u << 16u);
      if (branch_taken) {
          goto L_08823B7C;
      }
      goto L_08823B70;
    }
L_08823B70:
    ctx.gpr[31] = (0x08823B78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 516u, 0x0896AFD4u>(ctx, &aot_mem) && ctx.pc == 0x08823B78u) goto L_08823B78;
    return;
L_08823B78:
    ctx.gpr[4] = (2224u << 16u);
    goto L_08823B7C;
L_08823B7C:
    ctx.gpr[31] = (0x08823B84u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13456));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 227u, 0x089551C8u>(ctx, &aot_mem) && ctx.pc == 0x08823B84u) goto L_08823B84;
    return;
L_08823B84:
    ctx.gpr[31] = (0x08823B8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 165u, 0x08964D14u>(ctx, &aot_mem) && ctx.pc == 0x08823B8Cu) goto L_08823B8C;
    return;
L_08823B8C:
    ctx.gpr[31] = (0x08823B94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 203u, 0x088BD634u>(ctx, &aot_mem) && ctx.pc == 0x08823B94u) goto L_08823B94;
    return;
L_08823B94:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08823BA4;
      }
      goto L_08823B9C;
    }
L_08823B9C:
    ctx.gpr[31] = (0x08823BA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 278u, 0x088BDAF4u>(ctx, &aot_mem) && ctx.pc == 0x08823BA4u) goto L_08823BA4;
    return;
L_08823BA4:
    ctx.gpr[31] = (0x08823BACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 196u, 0x08A158A4u>(ctx, &aot_mem) && ctx.pc == 0x08823BACu) goto L_08823BAC;
    return;
L_08823BAC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08823BBC:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08823BD0:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08823BE4:
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08823C04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2852)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08823C7C;
      }
      goto L_08823C1C;
    }
L_08823C1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08823C7C;
      }
      goto L_08823C2C;
    }
L_08823C2C:
    ctx.gpr[31] = (0x08823C34u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 849u, 0x0881F3C0u>(ctx, &aot_mem) && ctx.pc == 0x08823C34u) goto L_08823C34;
    return;
L_08823C34:
    ctx.gpr[4] = (2178u << 16u);
    ctx.gpr[31] = (0x08823C40u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17524));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 850u, 0x0881F3D8u>(ctx, &aot_mem) && ctx.pc == 0x08823C40u) goto L_08823C40;
    return;
L_08823C40:
    ctx.gpr[4] = (2178u << 16u);
    ctx.gpr[31] = (0x08823C4Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18404));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 851u, 0x0881F3E8u>(ctx, &aot_mem) && ctx.pc == 0x08823C4Cu) goto L_08823C4C;
    return;
L_08823C4C:
    ctx.gpr[4] = (2178u << 16u);
    ctx.gpr[31] = (0x08823C58u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14288));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 852u, 0x0881F3F8u>(ctx, &aot_mem) && ctx.pc == 0x08823C58u) goto L_08823C58;
    return;
L_08823C58:
    ctx.gpr[4] = (2178u << 16u);
    ctx.gpr[31] = (0x08823C64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20008));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 853u, 0x0881F408u>(ctx, &aot_mem) && ctx.pc == 0x08823C64u) goto L_08823C64;
    return;
L_08823C64:
    ctx.gpr[4] = (2178u << 16u);
    ctx.gpr[31] = (0x08823C70u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(15096));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 854u, 0x0881F418u>(ctx, &aot_mem) && ctx.pc == 0x08823C70u) goto L_08823C70;
    return;
L_08823C70:
    ctx.gpr[4] = (2178u << 16u);
    ctx.gpr[31] = (0x08823C7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(15160));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 855u, 0x0881F428u>(ctx, &aot_mem) && ctx.pc == 0x08823C7Cu) goto L_08823C7C;
    return;
L_08823C7C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08823C88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08823CA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 858u, 0x0881F478u>(ctx, &aot_mem) && ctx.pc == 0x08823CA4u) goto L_08823CA4;
    return;
L_08823CA4:
    ctx.gpr[18] = (2224u << 16u);
    ctx.gpr[16] = (ctx.gpr[18] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08823CC0u);
    ctx.gpr[6] = (0u | 336u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08823CC0u) goto L_08823CC0;
    return;
L_08823CC0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (0u | 515u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-13800), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), ctx.gpr[4]);
    ctx.gpr[8] = (2224u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[13] = (ctx.gpr[8] + static_cast<std::uint32_t>(-17320));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[11] = (0u | 3u);
    ctx.gpr[2] = (0u | 2u);
    ctx.gpr[3] = (0u | 4u);
    ctx.gpr[12] = (0u | 5u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[7] | 0u);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(4)));
    goto L_08823D14;
L_08823D14:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(104)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(40), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(112)));
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (0u < ctx.gpr[8] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(112)));
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
        goto L_08823D3C;
    }
    goto L_08823D3C;
L_08823D3C:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(52), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(60), 0u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(68), ctx.gpr[12]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08823D14;
      }
      goto L_08823D74;
    }
L_08823D74:
    ctx.gpr[31] = (0x08823D7Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(308), ctx.gpr[13]);
    ctx.pc = 0x08AB45BCu;
    return;
L_08823D7C:
    ctx.gpr[31] = (0x08823D84u);
    ctx.gpr[16] = (ctx.gpr[2] >> 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 890u, 0x0881F6C4u>(ctx, &aot_mem) && ctx.pc == 0x08823D84u) goto L_08823D84;
    return;
L_08823D84:
    ctx.gpr[4] = (22325u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(29523));
    ctx.gpr[6] = (ctx.gpr[16] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08823D9Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 203u, 0x08A15D6Cu>(ctx, &aot_mem) && ctx.pc == 0x08823D9Cu) goto L_08823D9C;
    return;
L_08823D9C:
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
L_08823DB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2224u << 16u);
      if (branch_taken) {
          goto L_08823DE0;
      }
      goto L_08823DD4;
    }
L_08823DD4:
    ctx.gpr[31] = (0x08823DDCu);
    // nop
    goto L_088214E8;
L_08823DDC:
    ctx.gpr[4] = (2224u << 16u);
    goto L_08823DE0;
L_08823DE0:
    ctx.gpr[31] = (0x08823DE8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13800));
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 464u, 0x089FB7B0u>(ctx, &aot_mem) && ctx.pc == 0x08823DE8u) goto L_08823DE8;
    return;
L_08823DE8:
    ctx.gpr[31] = (0x08823DF0u);
    // nop
    ctx.pc = 0x08AB45BCu;
    return;
L_08823DF0:
    ctx.gpr[4] = (ctx.gpr[2] >> 1u);
    ctx.gpr[31] = (0x08823DFCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 111u, 0x089FC918u>(ctx, &aot_mem) && ctx.pc == 0x08823DFCu) goto L_08823DFC;
    return;
L_08823DFC:
    ctx.gpr[31] = (0x08823E04u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 582u, 0x089F7B70u>(ctx, &aot_mem) && ctx.pc == 0x08823E04u) goto L_08823E04;
    return;
L_08823E04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08823E1C;
      }
      goto L_08823E14;
    }
L_08823E14:
    ctx.gpr[31] = (0x08823E1Cu);
    // nop
    goto L_08821428;
L_08823E1C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08823E2C:
    ctx.gpr[6] = (2221u << 16u);
    if (ctx.gpr[5] != 0u) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
        goto L_08823E38;
    }
    goto L_08823E38;
L_08823E38:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[7] = (2224u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(1872)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(88)));
    ctx.gpr[10] = (ctx.gpr[8] << 4u);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[10] + ctx.gpr[8]);
    ctx.gpr[10] = (2224u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1880));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-20));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[7] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08823EC4;
      }
      goto L_08823E74;
    }
L_08823E74:
    ctx.gpr[9] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(2856));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[9]);
    goto L_08823E84;
L_08823E84:
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] & ctx.gpr[10]);
    if (ctx.gpr[9] == 0u) {
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(2852)));
        goto L_08823EB0;
    }
    goto L_08823E98;
L_08823E98:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[2] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08823EAC;
      }
      goto L_08823EA0;
    }
L_08823EA0:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    goto L_08823EAC;
L_08823EAC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(2852)));
    goto L_08823EB0;
L_08823EB0:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(88)));
    ctx.gpr[9] = (ctx.gpr[7] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08823E84;
      }
      goto L_08823EC4;
    }
L_08823EC4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08823ECC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08823F30;
      }
      goto L_08823F00;
    }
L_08823F00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (0x08823F0Cu);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 1004u, 0x0881FF94u>(ctx, &aot_mem) && ctx.pc == 0x08823F0Cu) goto L_08823F0C;
    return;
L_08823F0C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[31] = (0x08823F18u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 479u, 0x0881DCF4u>(ctx, &aot_mem) && ctx.pc == 0x08823F18u) goto L_08823F18;
    return;
L_08823F18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(144));
      if (branch_taken) {
          goto L_08823F00;
      }
      goto L_08823F30;
    }
L_08823F30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1025));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
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
L_08823F5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08823FA0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2888));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 382u, 0x0881D5ECu>(ctx, &aot_mem) && ctx.pc == 0x08823FA0u) goto L_08823FA0;
    return;
L_08823FA0:
    ctx.gpr[31] = (0x08823FA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 1004u, 0x0881FF94u>(ctx, &aot_mem) && ctx.pc == 0x08823FA8u) goto L_08823FA8;
    return;
L_08823FA8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[31] = (0x08823FB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 479u, 0x0881DCF4u>(ctx, &aot_mem) && ctx.pc == 0x08823FB4u) goto L_08823FB4;
    return;
L_08823FB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(124), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[17] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 3u, 0x08824018u>(ctx, &aot_mem); return;
      }
      goto L_08823FE4;
    }
L_08823FE4:
    ctx.gpr[31] = (0x08823FECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 374u, 0x08A463A4u>(ctx, &aot_mem) && ctx.pc == 0x08823FECu) goto L_08823FEC;
    return;
L_08823FEC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] == ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
        (void)rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 2u, 0x08824004u>(ctx, &aot_mem); return;
    }
    goto L_08823FF8;
L_08823FF8:
    ctx.gpr[31] = (0x08824000u);
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 66u, 0x0896857Cu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0007(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0007_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_7(Runtime &runtime) {
    runtime.register_generated_unit(7u, 0x08820000u, 16384u, &recomp_unit_0007, &recomp_unit_0007_entry);
    runtime.register_function(0x08820000u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882000Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820070u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820090u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088200ACu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088200B4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088200C0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088200C4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088200D8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088200FCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820104u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820108u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820118u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820128u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820158u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820160u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820174u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820180u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820190u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820198u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088201ACu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088201BCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088201C4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088201E0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088201FCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820218u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820234u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820250u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820260u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820270u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820294u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882029Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088202A4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088202ACu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088202B4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088202BCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088202C4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088202CCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088202D8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088202E0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088202F0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820300u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820310u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820320u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820334u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820340u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820364u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882036Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820374u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882037Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820384u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820390u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820398u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088203A0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088203A8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088203B0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088203C0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088203CCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088203D4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088203D8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088203E8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088203F8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820414u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882041Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820420u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820434u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882045Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820464u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820470u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882047Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820488u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820490u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820498u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088204A0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088204ACu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088204B8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088204C8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088204E4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088204F4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820510u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882051Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882055Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820568u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820584u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088205CCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088205D8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088205E8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088205F8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820660u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820688u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820694u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882069Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088206F8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820704u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820714u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882072Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820758u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820768u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820778u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820784u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820790u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088207A0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088207B0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088207BCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088207C8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088207E0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088207F8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820834u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820854u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088208A4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088208C4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088208CCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820924u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820934u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820940u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820960u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820974u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820980u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820990u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088209A0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088209A4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088209A8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088209B4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088209B8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088209CCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088209F0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820A04u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820A20u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820A28u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820A34u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820A64u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820AE0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820B04u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820B10u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820B18u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820B28u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820B30u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820B38u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820B48u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820B64u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820B6Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820B7Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820BB0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820BC0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820BCCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820BD8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820BE0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820C04u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820C1Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820C28u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820C34u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820C48u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820C60u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820C6Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820C78u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820C8Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820CA0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820CB8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820CC0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820CD8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820CDCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820CF8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820D34u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820D54u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820D5Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820D68u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820D74u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820D80u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820D88u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820D90u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820D98u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820DA4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820DB0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820F88u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820FA4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820FC4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821230u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821254u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882125Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821270u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882127Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821284u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088212A8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088212ACu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088212B4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088212BCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088212C8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088212D0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088212D8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088212E0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088212E4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088212ECu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088212F4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821300u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821308u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821330u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821344u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882134Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882135Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821364u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882136Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821374u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882137Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821384u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882138Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821398u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088213A0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088213B0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088213C4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088213DCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088213E8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821410u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821418u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821428u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821438u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821444u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821488u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821498u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088214B0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088214CCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088214DCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088214E8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882152Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882153Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821544u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882155Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821578u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088215A4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088215ACu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088215B8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088215C4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088215D0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088215D8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088215E0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088215E8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088215F4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882160Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882161Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821638u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882164Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882165Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821680u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088216A8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088216C0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088216D0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088216E0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088216E8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821724u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821734u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882174Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821760u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882176Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821774u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821788u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821794u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882179Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088217B4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088217BCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088217ECu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821808u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821820u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882182Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882183Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821848u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821850u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821858u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821864u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821870u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821878u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821880u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088218B0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088218B8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088218C0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088218C8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088218D0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088218D8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088218E0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088218E8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821918u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882192Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821934u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882193Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821944u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821954u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821964u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882197Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088219ACu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088219B4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088219BCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088219C4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088219CCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088219D4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088219E4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088219F4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821A0Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821A24u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821A30u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821A40u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821A48u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821A68u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821A74u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821A80u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821AACu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821AB8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821AC4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821ACCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821AE0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821AECu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821AF8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821B0Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821B18u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821B24u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821B38u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821B44u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821B50u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821B64u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821B70u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821B7Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821B9Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821BA8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821BB4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821BD8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821BE4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821BF0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821C20u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821C38u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821C6Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821C80u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821C98u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821CA0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821CA8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821CB0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821CD8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821CF8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821D00u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821D14u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821D24u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821D28u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821D34u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821D44u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821D48u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821D50u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821D5Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821D64u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821D78u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821D7Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821D88u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821D98u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821DA8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821DB0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821DCCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821DD8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821DE0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821DE4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821DF0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821E00u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821E10u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821E1Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821E38u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821E44u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821E50u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821E54u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821E60u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821E68u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821E7Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821E84u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821E8Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821E9Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821EA0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821EACu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821EBCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821EC0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821EC8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821ED4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821EE8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821EECu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821EFCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821F04u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821F0Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821F14u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821F24u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821F28u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821F38u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821F40u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821F48u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821F58u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821F5Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821F68u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821F7Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821F80u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821F88u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821FA0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821FA4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821FB4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821FBCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821FC4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821FC8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821FD0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821FE4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821FF8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821FFCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822004u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882200Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822014u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882201Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822024u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882202Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822034u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882203Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822044u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882204Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822054u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822068u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822070u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822078u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822080u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822094u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088220A0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088220B0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088220B4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088220BCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088220C8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088220D0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088220ECu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882212Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822168u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822170u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882217Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822184u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882219Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088221A4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088221B8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088221C0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088221D0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088221E0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088221ECu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088221F4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822228u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822234u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822238u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822240u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882225Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822264u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822270u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822278u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822280u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822288u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822290u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088222A0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088222A8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088222B0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088222B8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088222C0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088222C8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088222D0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088222D8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088222DCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088222ECu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882230Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882231Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822330u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822338u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822344u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882234Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822358u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822364u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822370u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882237Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822388u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822394u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882239Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088223A8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088223B0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088223B8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088223C0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088223C8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088223D0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088223D8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088223E4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088223ECu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088223F4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088223FCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822404u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882240Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882244Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822480u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822488u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822494u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088224A0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088224ACu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088224B4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088224BCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088224C4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088224D0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088224DCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822508u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822510u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822520u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882252Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822538u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822548u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822554u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822568u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882257Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822588u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822590u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088225A4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088225A8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088225B0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088225D0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088225E0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088225ECu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822604u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822610u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822634u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822648u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822654u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882265Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822660u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822668u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882267Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822688u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822698u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088226A8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088226B8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088226C4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088226CCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088226D8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088226E4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088226F0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088226FCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822710u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822724u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822748u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822788u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822790u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822798u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088227B8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088227CCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088227E0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088227F0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822800u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822824u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822830u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822850u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822858u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822868u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822870u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882289Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088228F0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088228FCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822904u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822914u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882294Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882296Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822978u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822990u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822998u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088229A4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088229B4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088229BCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088229C0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088229CCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088229D8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088229E0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822A00u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822A0Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822A14u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822A1Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822A28u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822A38u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822A40u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822A58u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822A68u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822A74u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822A84u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822A8Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822A94u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822AA8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822AACu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822AB4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822AC0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822AD8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822AE4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822AF4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822B00u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822B14u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822B38u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822B44u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822B54u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822B60u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822B74u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822B98u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822BA0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822BACu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822BB0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822BB4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822BBCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822BC8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822BF0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822BF4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822C3Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822C80u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822C88u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822C94u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822CA0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822CACu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822CB4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822CBCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822CC4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822CD4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822CDCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822CF8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822D04u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822D20u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822D28u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822D30u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822D38u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822D5Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822D68u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822D78u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822D84u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822D90u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822DA0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822DB4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822DC4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822DD4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822DE8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822E04u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822E18u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822E2Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822E3Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822E44u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822E50u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822E58u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822E64u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822E6Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822E74u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822E7Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822EB0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822ED0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822EE8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822F00u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822F2Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822F48u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822F50u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822F5Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822F6Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822F74u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822F84u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822F94u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822F9Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822FACu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822FBCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822FE8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823010u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882301Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823024u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823058u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823064u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823080u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823088u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823090u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823134u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823144u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823150u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823160u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823428u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823478u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882349Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088234ACu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088234C0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088234E0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823508u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882351Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882357Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882358Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088235A0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088235B0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088235B8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088235DCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088235F0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823608u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823624u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823638u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823640u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823658u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823670u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882367Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882368Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882369Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088236B0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088236BCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088236CCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088236E0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088236ECu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823700u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823714u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823738u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882374Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882375Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823774u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088237BCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088237D0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088237F0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088237F8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823804u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823814u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882381Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823830u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823838u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882383Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823848u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823860u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823864u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882386Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823878u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823880u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823888u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823890u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823898u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088238B0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088238B4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088238C4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088238CCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088238D4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088238E4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088238ECu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088238F8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882390Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823918u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823930u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882393Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823948u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823950u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823958u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823960u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823968u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823974u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882397Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823984u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882399Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088239A4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088239ACu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088239C8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088239CCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088239D4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088239DCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088239E4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088239ECu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088239F4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088239FCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823A04u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823A0Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823A14u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823A1Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823A24u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823A2Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823A40u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823A48u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823A50u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823A58u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823A70u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823A78u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823A80u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823A88u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823A90u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823AA4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823AACu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823AB4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823AC4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823AD8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823ADCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823AF8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823B10u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823B18u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823B24u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823B2Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823B38u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823B54u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823B5Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823B70u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823B78u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823B7Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823B84u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823B8Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823B94u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823B9Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823BA4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823BACu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823BBCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823BD0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823BE4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823C04u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823C1Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823C2Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823C34u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823C40u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823C4Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823C58u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823C64u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823C70u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823C7Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823C88u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823CA4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823CC0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823D14u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823D3Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823D74u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823D7Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823D84u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823D9Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823DB4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823DD4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823DDCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823DE0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823DE8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823DF0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823DFCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823E04u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823E14u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823E1Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823E2Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823E38u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823E74u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823E84u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823E98u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823EA0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823EACu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823EB0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823EC4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823ECCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823F00u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823F0Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823F18u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823F30u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823F5Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823FA0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823FA8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823FB4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823FE4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823FECu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823FF8u, &recomp_unit_0007, "recomp_unit_0007");
}
} // namespace psprecomp

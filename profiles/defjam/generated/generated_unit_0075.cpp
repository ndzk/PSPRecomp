#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0075[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0,
    0, 0, 0, 9, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 16,
    0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 20, 0, 21, 0, 0, 22, 0, 0, 0, 23, 0, 24, 0, 25, 0, 0,
    26, 0, 27, 0, 0, 28, 0, 29, 0, 30, 0, 0, 31, 0, 0, 32, 0, 33, 0, 0, 34, 0, 35, 0, 36, 0, 0, 37, 0, 0, 0, 0,
    0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0,
    0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0,
    50, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 55, 0, 56, 0, 57, 0, 0, 0,
    58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0,
    0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0,
    0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0,
    0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95,
    0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 101, 0, 0, 102, 0,
    103, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 108, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 114, 0, 115, 0, 116, 0, 117, 0, 0, 118, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121,
    0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0,
    129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 139, 0,
    0, 140, 0, 141, 0, 142, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 147, 0, 0, 148, 0, 149, 0, 150, 0, 0, 0,
    0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 153, 0, 154, 0, 0, 0, 0, 0, 155, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 158, 0, 159, 0, 0, 0, 160, 0, 161, 0, 162, 0, 0, 0,
    0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 166, 0, 167, 0, 0, 0, 168, 169, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0,
    0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0,
    0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 187, 0, 0,
    0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190,
    0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 193, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0,
    0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 206, 0, 0, 0, 207, 0, 0, 208, 0, 209,
    0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 215,
    0, 216, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220,
    0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 226, 0, 227, 0, 228, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 233, 0, 0, 0, 234, 0, 235,
    0, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 239, 0, 0, 0, 240, 0, 241, 0, 242, 0, 0, 0, 0, 243,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 248, 0, 249, 0, 250, 0, 251, 0,
    0, 252, 0, 0, 0, 0, 0, 253, 0, 254, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 258,
    0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 265,
    0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0,
    0, 0, 272, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 276, 0, 277, 0, 0, 278, 279, 0, 0, 0, 280, 0, 281,
    0, 0, 282, 283, 0, 0, 0, 284, 0, 285, 0, 0, 286, 287, 0, 0, 0, 288, 0, 289, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0,
    0, 304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 308, 0, 0, 0,
    0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 314, 0, 315, 0, 316, 0, 0, 0, 317, 0, 0, 318, 0, 0, 0, 319, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0,
    0, 0, 323, 0, 324, 0, 325, 0, 326, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 330, 0, 331, 332, 0, 0, 333, 0,
    0, 334, 0, 335, 0, 336, 0, 337, 0, 0, 0, 338, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342,
    0, 0, 343, 0, 344, 0, 345, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 348, 0, 349, 0, 350, 0, 351, 0, 0, 0, 352, 0, 353, 0, 0,
    0, 0, 0, 354, 0, 355, 0, 0, 0, 356, 0, 357, 0, 0, 0, 0, 358, 0, 359, 0, 0, 0, 360, 0, 361, 0, 0, 0, 0, 0, 362, 0,
    363, 0, 0, 0, 364, 0, 365, 0, 0, 0, 366, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 369, 0, 0, 0, 370, 0, 371, 0, 0, 0, 0,
    0, 0, 0, 372, 0, 373, 0, 0, 0, 0, 374, 0, 375, 0, 376, 0, 377, 0, 0, 378, 0, 379, 0, 380, 0, 381, 0, 382, 0, 0, 0, 0,
    0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 385, 0, 386, 0, 0, 0,
    387, 0, 388, 0, 0, 0, 389, 0, 390, 0, 0, 0, 391, 0, 392, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 396, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 403, 0, 404, 0, 0, 405, 0, 406, 0,
    0, 407, 0, 408, 0, 0, 409, 0, 410, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0,
    417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 421, 0,
    0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0,
    426, 0, 427, 0, 0, 428, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 430, 431, 0, 432, 0, 433, 0, 0, 434, 0, 0, 435, 0, 436, 0, 0, 0, 437, 0, 0, 0, 438, 0, 439, 0, 0,
    0, 440, 0, 441, 0, 0, 0, 442, 0, 443, 0, 0, 0, 444, 0, 445, 446, 0, 447, 0, 448, 0, 449, 450, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 451, 0, 0, 452, 0, 453, 0, 0, 454, 0, 455, 0, 456, 0, 0, 0, 457, 0, 458, 0, 0, 459, 0, 0, 460, 0, 461,
    0, 462, 0, 0, 0, 463, 0, 464, 0, 0, 465, 0, 0, 466, 0, 467, 0, 468, 0, 0, 0, 469, 0, 470, 0, 0, 471, 0, 0, 472, 0, 473,
    0, 474, 0, 0, 0, 475, 0, 476, 0, 0, 477, 0, 478, 0, 479, 0, 0, 0, 480, 0, 481, 0, 0, 0, 482, 0, 483, 0, 484, 0, 485, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 487, 0, 488, 0, 0, 489, 0, 0, 0, 0, 490, 0, 491, 0, 0, 492, 0, 493,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 495, 0, 496, 0, 497, 0, 0, 498, 0, 0, 499,
    0, 500, 0, 0, 0, 0, 501, 502, 0, 503, 0, 504, 0, 0, 0, 505, 0, 506, 0, 0, 0, 507, 0, 508, 0, 509, 0, 0, 0, 510, 0, 511,
    0, 0, 0, 0, 0, 512, 0, 513, 0, 514, 0, 0, 0, 515, 0, 516, 0, 0, 0, 0, 0, 517, 0, 518, 0, 519, 0, 0, 0, 520, 0, 521,
    0, 0, 0, 0, 0, 522, 0, 523, 0, 524, 0, 0, 0, 525, 0, 526, 0, 0, 0, 0, 0, 0, 0, 527, 0, 528, 0, 529, 0, 0, 0, 530,
    0, 531, 0, 0, 532, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 535, 0, 536, 0, 537, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 541, 0, 542,
    0, 543, 0, 0, 544, 0, 0, 0, 0, 0, 0, 545, 0, 546, 0, 0, 0, 0, 547, 548, 0, 0, 0, 549, 0, 0, 0, 550, 0, 0, 551, 0,
    0, 0, 552, 0, 0, 553, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0,
    0, 0, 557, 0, 0, 0, 558, 0, 0, 0, 559, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 562, 0, 563, 0, 564,
    0, 565, 0, 566, 0, 0, 567, 0, 568, 0, 0, 569, 0, 570, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 573, 0, 574,
    0, 575, 0, 576, 0, 577, 0, 0, 0, 0, 0, 0, 578, 0, 579, 0, 580, 0, 0, 0, 581, 0, 582, 0, 583, 0, 584, 0, 585, 0, 0, 0,
    586, 0, 587, 0, 588, 0, 589, 0, 0, 590, 0, 591, 0, 0, 0, 592, 0, 593, 0, 594, 0, 595, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 598, 0, 0, 0, 0, 599, 0, 0, 600, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 604, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    607, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 0, 609, 0, 0, 610, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 612, 0, 0, 613, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 615, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 619, 0, 620, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 624, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 625, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0, 633, 0, 0, 0, 634, 0, 0,
    0, 635, 636, 0, 0, 0, 637, 0, 0, 638, 0, 639, 0, 0, 0, 640, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 641, 0, 642, 0, 0, 0, 0, 0, 0, 0, 643, 0, 644, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 649, 0, 650, 0, 0,
    651, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 655, 0, 656, 0,
    0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 660, 0, 661, 0, 662, 0, 0, 0, 0, 0, 0,
    663, 0, 0, 0, 664, 0, 0, 0, 665, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0,
    0, 0, 669, 0, 0, 0, 0, 670, 0, 671, 0, 0, 0, 672, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0,
    675, 0, 0, 0, 676, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 0, 678, 0, 679, 0, 0, 0, 680, 0, 0, 0, 681, 0, 0, 0, 682, 0,
    0, 0, 0, 683, 0, 0, 0, 0, 0, 684, 0, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 687, 0, 688, 0,
    0, 0, 0, 0, 0, 0, 689, 0, 690, 0, 0, 691, 0, 692, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 695, 0, 0, 696, 0, 0, 0, 0, 697, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 698, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 701, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 702, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 705, 0, 706, 0, 0, 0, 0,
    0, 707, 0, 0, 0, 708, 0, 0, 0, 709, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 710, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    711, 0, 0, 0, 712, 0, 0, 0, 713, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0, 715, 0, 716, 0, 0, 0, 0, 0, 717, 0, 0, 0, 718,
};
void recomp_unit_0075_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08930000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0075[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08930000;
    case 2u: goto L_08930018;
    case 3u: goto L_08930020;
    case 4u: goto L_08930034;
    case 5u: goto L_089300A4;
    case 6u: goto L_089300B8;
    case 7u: goto L_089300DC;
    case 8u: goto L_089300F4;
    case 9u: goto L_0893010C;
    case 10u: goto L_08930114;
    case 11u: goto L_08930124;
    case 12u: goto L_08930138;
    case 13u: goto L_08930140;
    case 14u: goto L_08930158;
    case 15u: goto L_0893016C;
    case 16u: goto L_0893017C;
    case 17u: goto L_08930194;
    case 18u: goto L_089301AC;
    case 19u: goto L_089301B8;
    case 20u: goto L_089301C0;
    case 21u: goto L_089301C8;
    case 22u: goto L_089301D4;
    case 23u: goto L_089301E4;
    case 24u: goto L_089301EC;
    case 25u: goto L_089301F4;
    case 26u: goto L_08930200;
    case 27u: goto L_08930208;
    case 28u: goto L_08930214;
    case 29u: goto L_0893021C;
    case 30u: goto L_08930224;
    case 31u: goto L_08930230;
    case 32u: goto L_0893023C;
    case 33u: goto L_08930244;
    case 34u: goto L_08930250;
    case 35u: goto L_08930258;
    case 36u: goto L_08930260;
    case 37u: goto L_0893026C;
    case 38u: goto L_08930290;
    case 39u: goto L_089302B0;
    case 40u: goto L_08930340;
    case 41u: goto L_08930354;
    case 42u: goto L_08930364;
    case 43u: goto L_08930374;
    case 44u: goto L_08930384;
    case 45u: goto L_089303A0;
    case 46u: goto L_089303B0;
    case 47u: goto L_089303C0;
    case 48u: goto L_089303D0;
    case 49u: goto L_089303E8;
    case 50u: goto L_08930400;
    case 51u: goto L_08930418;
    case 52u: goto L_08930424;
    case 53u: goto L_08930448;
    case 54u: goto L_08930450;
    case 55u: goto L_08930460;
    case 56u: goto L_08930468;
    case 57u: goto L_08930470;
    case 58u: goto L_08930480;
    case 59u: goto L_089304D0;
    case 60u: goto L_089304EC;
    case 61u: goto L_0893056C;
    case 62u: goto L_08930584;
    case 63u: goto L_089305F4;
    case 64u: goto L_0893060C;
    case 65u: goto L_0893061C;
    case 66u: goto L_08930630;
    case 67u: goto L_0893066C;
    case 68u: goto L_08930694;
    case 69u: goto L_0893069C;
    case 70u: goto L_089306B4;
    case 71u: goto L_089306C8;
    case 72u: goto L_089306E8;
    case 73u: goto L_0893072C;
    case 74u: goto L_08930740;
    case 75u: goto L_0893074C;
    case 76u: goto L_08930768;
    case 77u: goto L_08930774;
    case 78u: goto L_089307C0;
    case 79u: goto L_089307D8;
    case 80u: goto L_08930804;
    case 81u: goto L_08930818;
    case 82u: goto L_08930844;
    case 83u: goto L_08930864;
    case 84u: goto L_08930874;
    case 85u: goto L_08930884;
    case 86u: goto L_0893089C;
    case 87u: goto L_089308D8;
    case 88u: goto L_089308E4;
    case 89u: goto L_08930910;
    case 90u: goto L_08930920;
    case 91u: goto L_0893092C;
    case 92u: goto L_08930944;
    case 93u: goto L_08930954;
    case 94u: goto L_08930964;
    case 95u: goto L_0893097C;
    case 96u: goto L_08930998;
    case 97u: goto L_089309A8;
    case 98u: goto L_089309B0;
    case 99u: goto L_089309C8;
    case 100u: goto L_089309E4;
    case 101u: goto L_089309EC;
    case 102u: goto L_089309F8;
    case 103u: goto L_08930A00;
    case 104u: goto L_08930A08;
    case 105u: goto L_08930A10;
    case 106u: goto L_08930A30;
    case 107u: goto L_08930A40;
    case 108u: goto L_08930A48;
    case 109u: goto L_08930A50;
    case 110u: goto L_08930A58;
    case 111u: goto L_08930A74;
    case 112u: goto L_08930A90;
    case 113u: goto L_08930AA0;
    case 114u: goto L_08930AA8;
    case 115u: goto L_08930AB0;
    case 116u: goto L_08930AB8;
    case 117u: goto L_08930AC0;
    case 118u: goto L_08930ACC;
    case 119u: goto L_08930AD4;
    case 120u: goto L_08930ADC;
    case 121u: goto L_08930AFC;
    case 122u: goto L_08930B04;
    case 123u: goto L_08930B0C;
    case 124u: goto L_08930B28;
    case 125u: goto L_08930B44;
    case 126u: goto L_08930B4C;
    case 127u: goto L_08930B58;
    case 128u: goto L_08930B60;
    case 129u: goto L_08930B80;
    case 130u: goto L_08930BA0;
    case 131u: goto L_08930BA8;
    case 132u: goto L_08930BB4;
    case 133u: goto L_08930BC4;
    case 134u: goto L_08930BDC;
    case 135u: goto L_08930C9C;
    case 136u: goto L_08930CC4;
    case 137u: goto L_08930CE4;
    case 138u: goto L_08930CEC;
    case 139u: goto L_08930CF8;
    case 140u: goto L_08930D04;
    case 141u: goto L_08930D0C;
    case 142u: goto L_08930D14;
    case 143u: goto L_08930D18;
    case 144u: goto L_08930D24;
    case 145u: goto L_08930D40;
    case 146u: goto L_08930D48;
    case 147u: goto L_08930D54;
    case 148u: goto L_08930D60;
    case 149u: goto L_08930D68;
    case 150u: goto L_08930D70;
    case 151u: goto L_08930D88;
    case 152u: goto L_08930DD0;
    case 153u: goto L_08930DD8;
    case 154u: goto L_08930DE0;
    case 155u: goto L_08930DF8;
    case 156u: goto L_08930E2C;
    case 157u: goto L_08930E3C;
    case 158u: goto L_08930E48;
    case 159u: goto L_08930E50;
    case 160u: goto L_08930E60;
    case 161u: goto L_08930E68;
    case 162u: goto L_08930E70;
    case 163u: goto L_08930E88;
    case 164u: goto L_08930EC0;
    case 165u: goto L_08930ED0;
    case 166u: goto L_08930EDC;
    case 167u: goto L_08930EE4;
    case 168u: goto L_08930EF4;
    case 169u: goto L_08930EF8;
    case 170u: goto L_08930F30;
    case 171u: goto L_08930F58;
    case 172u: goto L_08930F98;
    case 173u: goto L_08930FAC;
    case 174u: goto L_08930FF8;
    case 175u: goto L_08931004;
    case 176u: goto L_0893100C;
    case 177u: goto L_0893102C;
    case 178u: goto L_08931040;
    case 179u: goto L_08931054;
    case 180u: goto L_08931070;
    case 181u: goto L_08931084;
    case 182u: goto L_089310A4;
    case 183u: goto L_089310B4;
    case 184u: goto L_089310C8;
    case 185u: goto L_089310D8;
    case 186u: goto L_089310EC;
    case 187u: goto L_089310F4;
    case 188u: goto L_08931104;
    case 189u: goto L_08931124;
    case 190u: goto L_0893117C;
    case 191u: goto L_08931190;
    case 192u: goto L_089311A4;
    case 193u: goto L_08931204;
    case 194u: goto L_08931214;
    case 195u: goto L_08931220;
    case 196u: goto L_0893129C;
    case 197u: goto L_089312AC;
    case 198u: goto L_089312C0;
    case 199u: goto L_089312D4;
    case 200u: goto L_089312E8;
    case 201u: goto L_08931308;
    case 202u: goto L_08931318;
    case 203u: goto L_0893132C;
    case 204u: goto L_0893133C;
    case 205u: goto L_08931350;
    case 206u: goto L_08931358;
    case 207u: goto L_08931368;
    case 208u: goto L_08931374;
    case 209u: goto L_0893137C;
    case 210u: goto L_08931384;
    case 211u: goto L_08931398;
    case 212u: goto L_089313C8;
    case 213u: goto L_089313DC;
    case 214u: goto L_089313F4;
    case 215u: goto L_089313FC;
    case 216u: goto L_08931404;
    case 217u: goto L_08931408;
    case 218u: goto L_0893141C;
    case 219u: goto L_08931434;
    case 220u: goto L_0893147C;
    case 221u: goto L_08931494;
    case 222u: goto L_089314B0;
    case 223u: goto L_089314C0;
    case 224u: goto L_089314D0;
    case 225u: goto L_089314E4;
    case 226u: goto L_0893150C;
    case 227u: goto L_08931514;
    case 228u: goto L_0893151C;
    case 229u: goto L_08931528;
    case 230u: goto L_08931538;
    case 231u: goto L_0893154C;
    case 232u: goto L_08931554;
    case 233u: goto L_08931564;
    case 234u: goto L_08931574;
    case 235u: goto L_0893157C;
    case 236u: goto L_08931590;
    case 237u: goto L_08931598;
    case 238u: goto L_089315C0;
    case 239u: goto L_089315C8;
    case 240u: goto L_089315D8;
    case 241u: goto L_089315E0;
    case 242u: goto L_089315E8;
    case 243u: goto L_089315FC;
    case 244u: goto L_08931624;
    case 245u: goto L_0893162C;
    case 246u: goto L_08931640;
    case 247u: goto L_08931654;
    case 248u: goto L_08931660;
    case 249u: goto L_08931668;
    case 250u: goto L_08931670;
    case 251u: goto L_08931678;
    case 252u: goto L_08931684;
    case 253u: goto L_0893169C;
    case 254u: goto L_089316A4;
    case 255u: goto L_089316AC;
    case 256u: goto L_089316C0;
    case 257u: goto L_089316D8;
    case 258u: goto L_089316FC;
    case 259u: goto L_0893171C;
    case 260u: goto L_089317AC;
    case 261u: goto L_089317BC;
    case 262u: goto L_089317CC;
    case 263u: goto L_089317DC;
    case 264u: goto L_089317EC;
    case 265u: goto L_089317FC;
    case 266u: goto L_08931818;
    case 267u: goto L_08931828;
    case 268u: goto L_08931838;
    case 269u: goto L_08931848;
    case 270u: goto L_08931858;
    case 271u: goto L_08931870;
    case 272u: goto L_08931888;
    case 273u: goto L_08931890;
    case 274u: goto L_089318AC;
    case 275u: goto L_089318C0;
    case 276u: goto L_089318CC;
    case 277u: goto L_089318D4;
    case 278u: goto L_089318E0;
    case 279u: goto L_089318E4;
    case 280u: goto L_089318F4;
    case 281u: goto L_089318FC;
    case 282u: goto L_08931908;
    case 283u: goto L_0893190C;
    case 284u: goto L_0893191C;
    case 285u: goto L_08931924;
    case 286u: goto L_08931930;
    case 287u: goto L_08931934;
    case 288u: goto L_08931944;
    case 289u: goto L_0893194C;
    case 290u: goto L_0893195C;
    case 291u: goto L_0893196C;
    case 292u: goto L_089319B8;
    case 293u: goto L_089319D4;
    case 294u: goto L_08931A44;
    case 295u: goto L_08931A5C;
    case 296u: goto L_08931AB8;
    case 297u: goto L_08931AD0;
    case 298u: goto L_08931AE0;
    case 299u: goto L_08931AF0;
    case 300u: goto L_08931B28;
    case 301u: goto L_08931B50;
    case 302u: goto L_08931B58;
    case 303u: goto L_08931B70;
    case 304u: goto L_08931B84;
    case 305u: goto L_08931BA4;
    case 306u: goto L_08931BCC;
    case 307u: goto L_08931BE4;
    case 308u: goto L_08931BF0;
    case 309u: goto L_08931C0C;
    case 310u: goto L_08931C24;
    case 311u: goto L_08931C40;
    case 312u: goto L_08931C48;
    case 313u: goto L_08931C54;
    case 314u: goto L_08931C88;
    case 315u: goto L_08931C90;
    case 316u: goto L_08931C98;
    case 317u: goto L_08931CA8;
    case 318u: goto L_08931CB4;
    case 319u: goto L_08931CC4;
    case 320u: goto L_08931CCC;
    case 321u: goto L_08931CDC;
    case 322u: goto L_08931CF4;
    case 323u: goto L_08931D08;
    case 324u: goto L_08931D10;
    case 325u: goto L_08931D18;
    case 326u: goto L_08931D20;
    case 327u: goto L_08931D30;
    case 328u: goto L_08931D40;
    case 329u: goto L_08931D50;
    case 330u: goto L_08931D60;
    case 331u: goto L_08931D68;
    case 332u: goto L_08931D6C;
    case 333u: goto L_08931D78;
    case 334u: goto L_08931D84;
    case 335u: goto L_08931D8C;
    case 336u: goto L_08931D94;
    case 337u: goto L_08931D9C;
    case 338u: goto L_08931DAC;
    case 339u: goto L_08931DB4;
    case 340u: goto L_08931DCC;
    case 341u: goto L_08931DE4;
    case 342u: goto L_08931DFC;
    case 343u: goto L_08931E08;
    case 344u: goto L_08931E10;
    case 345u: goto L_08931E18;
    case 346u: goto L_08931E24;
    case 347u: goto L_08931E34;
    case 348u: goto L_08931E44;
    case 349u: goto L_08931E4C;
    case 350u: goto L_08931E54;
    case 351u: goto L_08931E5C;
    case 352u: goto L_08931E6C;
    case 353u: goto L_08931E74;
    case 354u: goto L_08931E8C;
    case 355u: goto L_08931E94;
    case 356u: goto L_08931EA4;
    case 357u: goto L_08931EAC;
    case 358u: goto L_08931EC0;
    case 359u: goto L_08931EC8;
    case 360u: goto L_08931ED8;
    case 361u: goto L_08931EE0;
    case 362u: goto L_08931EF8;
    case 363u: goto L_08931F00;
    case 364u: goto L_08931F10;
    case 365u: goto L_08931F18;
    case 366u: goto L_08931F28;
    case 367u: goto L_08931F30;
    case 368u: goto L_08931F4C;
    case 369u: goto L_08931F54;
    case 370u: goto L_08931F64;
    case 371u: goto L_08931F6C;
    case 372u: goto L_08931F8C;
    case 373u: goto L_08931F94;
    case 374u: goto L_08931FA8;
    case 375u: goto L_08931FB0;
    case 376u: goto L_08931FB8;
    case 377u: goto L_08931FC0;
    case 378u: goto L_08931FCC;
    case 379u: goto L_08931FD4;
    case 380u: goto L_08931FDC;
    case 381u: goto L_08931FE4;
    case 382u: goto L_08931FEC;
    case 383u: goto L_0893200C;
    case 384u: goto L_0893205C;
    case 385u: goto L_08932068;
    case 386u: goto L_08932070;
    case 387u: goto L_08932080;
    case 388u: goto L_08932088;
    case 389u: goto L_08932098;
    case 390u: goto L_089320A0;
    case 391u: goto L_089320B0;
    case 392u: goto L_089320B8;
    case 393u: goto L_089320CC;
    case 394u: goto L_089320DC;
    case 395u: goto L_089320EC;
    case 396u: goto L_089320F8;
    case 397u: goto L_08932130;
    case 398u: goto L_0893216C;
    case 399u: goto L_089321A4;
    case 400u: goto L_089321B0;
    case 401u: goto L_089321C8;
    case 402u: goto L_08932250;
    case 403u: goto L_0893225C;
    case 404u: goto L_08932264;
    case 405u: goto L_08932270;
    case 406u: goto L_08932278;
    case 407u: goto L_08932284;
    case 408u: goto L_0893228C;
    case 409u: goto L_08932298;
    case 410u: goto L_089322A0;
    case 411u: goto L_089322B4;
    case 412u: goto L_089322CC;
    case 413u: goto L_089322E4;
    case 414u: goto L_089322F8;
    case 415u: goto L_0893233C;
    case 416u: goto L_08932374;
    case 417u: goto L_08932380;
    case 418u: goto L_089323B8;
    case 419u: goto L_089323C4;
    case 420u: goto L_089323F0;
    case 421u: goto L_089323F8;
    case 422u: goto L_08932414;
    case 423u: goto L_08932464;
    case 424u: goto L_08932494;
    case 425u: goto L_089324E4;
    case 426u: goto L_08932500;
    case 427u: goto L_08932508;
    case 428u: goto L_08932514;
    case 429u: goto L_0893251C;
    case 430u: goto L_08932598;
    case 431u: goto L_0893259C;
    case 432u: goto L_089325A4;
    case 433u: goto L_089325AC;
    case 434u: goto L_089325B8;
    case 435u: goto L_089325C4;
    case 436u: goto L_089325CC;
    case 437u: goto L_089325DC;
    case 438u: goto L_089325EC;
    case 439u: goto L_089325F4;
    case 440u: goto L_08932604;
    case 441u: goto L_0893260C;
    case 442u: goto L_0893261C;
    case 443u: goto L_08932624;
    case 444u: goto L_08932634;
    case 445u: goto L_0893263C;
    case 446u: goto L_08932640;
    case 447u: goto L_08932648;
    case 448u: goto L_08932650;
    case 449u: goto L_08932658;
    case 450u: goto L_0893265C;
    case 451u: goto L_08932694;
    case 452u: goto L_089326A0;
    case 453u: goto L_089326A8;
    case 454u: goto L_089326B4;
    case 455u: goto L_089326BC;
    case 456u: goto L_089326C4;
    case 457u: goto L_089326D4;
    case 458u: goto L_089326DC;
    case 459u: goto L_089326E8;
    case 460u: goto L_089326F4;
    case 461u: goto L_089326FC;
    case 462u: goto L_08932704;
    case 463u: goto L_08932714;
    case 464u: goto L_0893271C;
    case 465u: goto L_08932728;
    case 466u: goto L_08932734;
    case 467u: goto L_0893273C;
    case 468u: goto L_08932744;
    case 469u: goto L_08932754;
    case 470u: goto L_0893275C;
    case 471u: goto L_08932768;
    case 472u: goto L_08932774;
    case 473u: goto L_0893277C;
    case 474u: goto L_08932784;
    case 475u: goto L_08932794;
    case 476u: goto L_0893279C;
    case 477u: goto L_089327A8;
    case 478u: goto L_089327B0;
    case 479u: goto L_089327B8;
    case 480u: goto L_089327C8;
    case 481u: goto L_089327D0;
    case 482u: goto L_089327E0;
    case 483u: goto L_089327E8;
    case 484u: goto L_089327F0;
    case 485u: goto L_089327F8;
    case 486u: goto L_08932834;
    case 487u: goto L_08932838;
    case 488u: goto L_08932840;
    case 489u: goto L_0893284C;
    case 490u: goto L_08932860;
    case 491u: goto L_08932868;
    case 492u: goto L_08932874;
    case 493u: goto L_0893287C;
    case 494u: goto L_089328D0;
    case 495u: goto L_089328D4;
    case 496u: goto L_089328DC;
    case 497u: goto L_089328E4;
    case 498u: goto L_089328F0;
    case 499u: goto L_089328FC;
    case 500u: goto L_08932904;
    case 501u: goto L_08932918;
    case 502u: goto L_0893291C;
    case 503u: goto L_08932924;
    case 504u: goto L_0893292C;
    case 505u: goto L_0893293C;
    case 506u: goto L_08932944;
    case 507u: goto L_08932954;
    case 508u: goto L_0893295C;
    case 509u: goto L_08932964;
    case 510u: goto L_08932974;
    case 511u: goto L_0893297C;
    case 512u: goto L_08932994;
    case 513u: goto L_0893299C;
    case 514u: goto L_089329A4;
    case 515u: goto L_089329B4;
    case 516u: goto L_089329BC;
    case 517u: goto L_089329D4;
    case 518u: goto L_089329DC;
    case 519u: goto L_089329E4;
    case 520u: goto L_089329F4;
    case 521u: goto L_089329FC;
    case 522u: goto L_08932A14;
    case 523u: goto L_08932A1C;
    case 524u: goto L_08932A24;
    case 525u: goto L_08932A34;
    case 526u: goto L_08932A3C;
    case 527u: goto L_08932A5C;
    case 528u: goto L_08932A64;
    case 529u: goto L_08932A6C;
    case 530u: goto L_08932A7C;
    case 531u: goto L_08932A84;
    case 532u: goto L_08932A90;
    case 533u: goto L_08932AA4;
    case 534u: goto L_08932AD4;
    case 535u: goto L_08932ADC;
    case 536u: goto L_08932AE4;
    case 537u: goto L_08932AEC;
    case 538u: goto L_08932B28;
    case 539u: goto L_08932B3C;
    case 540u: goto L_08932B5C;
    case 541u: goto L_08932B74;
    case 542u: goto L_08932B7C;
    case 543u: goto L_08932B84;
    case 544u: goto L_08932B90;
    case 545u: goto L_08932BAC;
    case 546u: goto L_08932BB4;
    case 547u: goto L_08932BC8;
    case 548u: goto L_08932BCC;
    case 549u: goto L_08932BDC;
    case 550u: goto L_08932BEC;
    case 551u: goto L_08932BF8;
    case 552u: goto L_08932C08;
    case 553u: goto L_08932C14;
    case 554u: goto L_08932C28;
    case 555u: goto L_08932C44;
    case 556u: goto L_08932C68;
    case 557u: goto L_08932C88;
    case 558u: goto L_08932C98;
    case 559u: goto L_08932CA8;
    case 560u: goto L_08932CC0;
    case 561u: goto L_08932CE0;
    case 562u: goto L_08932CEC;
    case 563u: goto L_08932CF4;
    case 564u: goto L_08932CFC;
    case 565u: goto L_08932D04;
    case 566u: goto L_08932D0C;
    case 567u: goto L_08932D18;
    case 568u: goto L_08932D20;
    case 569u: goto L_08932D2C;
    case 570u: goto L_08932D34;
    case 571u: goto L_08932D40;
    case 572u: goto L_08932D68;
    case 573u: goto L_08932D74;
    case 574u: goto L_08932D7C;
    case 575u: goto L_08932D84;
    case 576u: goto L_08932D8C;
    case 577u: goto L_08932D94;
    case 578u: goto L_08932DB0;
    case 579u: goto L_08932DB8;
    case 580u: goto L_08932DC0;
    case 581u: goto L_08932DD0;
    case 582u: goto L_08932DD8;
    case 583u: goto L_08932DE0;
    case 584u: goto L_08932DE8;
    case 585u: goto L_08932DF0;
    case 586u: goto L_08932E00;
    case 587u: goto L_08932E08;
    case 588u: goto L_08932E10;
    case 589u: goto L_08932E18;
    case 590u: goto L_08932E24;
    case 591u: goto L_08932E2C;
    case 592u: goto L_08932E3C;
    case 593u: goto L_08932E44;
    case 594u: goto L_08932E4C;
    case 595u: goto L_08932E54;
    case 596u: goto L_08932E68;
    case 597u: goto L_08932E9C;
    case 598u: goto L_08932F0C;
    case 599u: goto L_08932F20;
    case 600u: goto L_08932F2C;
    case 601u: goto L_08932F40;
    case 602u: goto L_08932F84;
    case 603u: goto L_08932FDC;
    case 604u: goto L_08932FE8;
    case 605u: goto L_08933044;
    case 606u: goto L_08933050;
    case 607u: goto L_08933080;
    case 608u: goto L_08933124;
    case 609u: goto L_08933140;
    case 610u: goto L_0893314C;
    case 611u: goto L_089331D0;
    case 612u: goto L_089331EC;
    case 613u: goto L_089331F8;
    case 614u: goto L_08933340;
    case 615u: goto L_08933350;
    case 616u: goto L_08933360;
    case 617u: goto L_0893338C;
    case 618u: goto L_089333D0;
    case 619u: goto L_08933418;
    case 620u: goto L_08933420;
    case 621u: goto L_0893343C;
    case 622u: goto L_08933450;
    case 623u: goto L_089334E4;
    case 624u: goto L_089334F4;
    case 625u: goto L_08933588;
    case 626u: goto L_08933598;
    case 627u: goto L_0893362C;
    case 628u: goto L_08933640;
    case 629u: goto L_089336D0;
    case 630u: goto L_089336D4;
    case 631u: goto L_08933730;
    case 632u: goto L_0893374C;
    case 633u: goto L_08933764;
    case 634u: goto L_08933774;
    case 635u: goto L_08933784;
    case 636u: goto L_08933788;
    case 637u: goto L_08933798;
    case 638u: goto L_089337A4;
    case 639u: goto L_089337AC;
    case 640u: goto L_089337BC;
    case 641u: goto L_0893380C;
    case 642u: goto L_08933814;
    case 643u: goto L_08933834;
    case 644u: goto L_0893383C;
    case 645u: goto L_0893385C;
    case 646u: goto L_089338A0;
    case 647u: goto L_089338B4;
    case 648u: goto L_089338D4;
    case 649u: goto L_089338EC;
    case 650u: goto L_089338F4;
    case 651u: goto L_08933900;
    case 652u: goto L_08933920;
    case 653u: goto L_0893392C;
    case 654u: goto L_08933958;
    case 655u: goto L_08933970;
    case 656u: goto L_08933978;
    case 657u: goto L_0893398C;
    case 658u: goto L_089339A8;
    case 659u: goto L_089339BC;
    case 660u: goto L_089339D4;
    case 661u: goto L_089339DC;
    case 662u: goto L_089339E4;
    case 663u: goto L_08933A00;
    case 664u: goto L_08933A10;
    case 665u: goto L_08933A20;
    case 666u: goto L_08933A38;
    case 667u: goto L_08933A50;
    case 668u: goto L_08933A6C;
    case 669u: goto L_08933A88;
    case 670u: goto L_08933A9C;
    case 671u: goto L_08933AA4;
    case 672u: goto L_08933AB4;
    case 673u: goto L_08933AC0;
    case 674u: goto L_08933AE8;
    case 675u: goto L_08933B00;
    case 676u: goto L_08933B10;
    case 677u: goto L_08933B24;
    case 678u: goto L_08933B40;
    case 679u: goto L_08933B48;
    case 680u: goto L_08933B58;
    case 681u: goto L_08933B68;
    case 682u: goto L_08933B78;
    case 683u: goto L_08933B8C;
    case 684u: goto L_08933BA4;
    case 685u: goto L_08933BC0;
    case 686u: goto L_08933BDC;
    case 687u: goto L_08933BF0;
    case 688u: goto L_08933BF8;
    case 689u: goto L_08933C18;
    case 690u: goto L_08933C20;
    case 691u: goto L_08933C2C;
    case 692u: goto L_08933C34;
    case 693u: goto L_08933C40;
    case 694u: goto L_08933C88;
    case 695u: goto L_08933CA8;
    case 696u: goto L_08933CB4;
    case 697u: goto L_08933CC8;
    case 698u: goto L_08933D04;
    case 699u: goto L_08933D18;
    case 700u: goto L_08933D34;
    case 701u: goto L_08933D4C;
    case 702u: goto L_08933E10;
    case 703u: goto L_08933E28;
    case 704u: goto L_08933ECC;
    case 705u: goto L_08933EE4;
    case 706u: goto L_08933EEC;
    case 707u: goto L_08933F04;
    case 708u: goto L_08933F14;
    case 709u: goto L_08933F24;
    case 710u: goto L_08933F58;
    case 711u: goto L_08933F80;
    case 712u: goto L_08933F90;
    case 713u: goto L_08933FA0;
    case 714u: goto L_08933FB8;
    case 715u: goto L_08933FCC;
    case 716u: goto L_08933FD4;
    case 717u: goto L_08933FEC;
    case 718u: goto L_08933FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08930000:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3908)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    goto L_08930018;
L_08930018:
    ctx.gpr[31] = (0x08930020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x08930020u) goto L_08930020;
    return;
L_08930020:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 1289u, 0x0892FEE8u>(ctx, &aot_mem); return;
      }
      goto L_08930034;
    }
L_08930034:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
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
L_089300A4:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21784)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(21788), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089300B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 28u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089300DCu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089300DCu) goto L_089300DC;
    return;
L_089300DC:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(22032), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089300F4u);
    ctx.gpr[6] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x089300F4u) goto L_089300F4;
    return;
L_089300F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22032)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x0893010Cu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    goto L_0893026C;
L_0893010C:
    ctx.gpr[31] = (0x08930114u);
    // nop
    goto L_08930480;
L_08930114:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08930124:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08930138u);
    // nop
    goto L_08930384;
L_08930138:
    ctx.gpr[31] = (0x08930140u);
    // nop
    goto L_0893066C;
L_08930140:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    ctx.gpr[16] = (2221u << 16u);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08930158u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22032)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08930158u) goto L_08930158;
    return;
L_08930158:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(22032), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893016C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0893017Cu);
    // nop
    goto L_08930400;
L_0893017C:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22032)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(14) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930260;
      }
      goto L_08930194;
    }
L_08930194:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(6640)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089301AC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089301B8:
    ctx.gpr[31] = (0x089301C0u);
    // nop
    goto L_08930424;
L_089301C0:
    ctx.gpr[31] = (0x089301C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 304u, 0x0891D230u>(ctx, &aot_mem) && ctx.pc == 0x089301C8u) goto L_089301C8;
    return;
L_089301C8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089301D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08930260;
      }
      goto L_089301E4;
    }
L_089301E4:
    ctx.gpr[31] = (0x089301ECu);
    // nop
    goto L_08930424;
L_089301EC:
    ctx.gpr[31] = (0x089301F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 304u, 0x0891D230u>(ctx, &aot_mem) && ctx.pc == 0x089301F4u) goto L_089301F4;
    return;
L_089301F4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08930200:
    ctx.gpr[31] = (0x08930208u);
    // nop
    goto L_08930424;
L_08930208:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08930214:
    ctx.gpr[31] = (0x0893021Cu);
    // nop
    goto L_08930424;
L_0893021C:
    ctx.gpr[31] = (0x08930224u);
    // nop
    goto L_08930844;
L_08930224:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08930230:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08930260;
      }
      goto L_0893023C;
    }
L_0893023C:
    ctx.gpr[31] = (0x08930244u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 449u, 0x08805DA8u>(ctx, &aot_mem) && ctx.pc == 0x08930244u) goto L_08930244;
    return;
L_08930244:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08930250:
    ctx.gpr[31] = (0x08930258u);
    // nop
    goto L_08930424;
L_08930258:
    ctx.gpr[31] = (0x08930260u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 304u, 0x0891D230u>(ctx, &aot_mem) && ctx.pc == 0x08930260u) goto L_08930260;
    return;
L_08930260:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893026C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 368u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08930290u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08930290u) goto L_08930290;
    return;
L_08930290:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22032)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22032)));
    ctx.gpr[6] = (0u | 368u);
    ctx.gpr[31] = (0x089302B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x089302B0u) goto L_089302B0;
    return;
L_089302B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22032)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22032)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22032)));
    ctx.gpr[5] = (17392u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22032)));
    ctx.gpr[5] = (17288u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22032)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22032)));
    ctx.gpr[31] = (0x08930340u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x08930340u) goto L_08930340;
    return;
L_08930340:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22032)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08930354u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 866u, 0x08837A88u>(ctx, &aot_mem) && ctx.pc == 0x08930354u) goto L_08930354;
    return;
L_08930354:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22032)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08930364u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 877u, 0x08837B90u>(ctx, &aot_mem) && ctx.pc == 0x08930364u) goto L_08930364;
    return;
L_08930364:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22032)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08930374u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 102u, 0x0883CCBCu>(ctx, &aot_mem) && ctx.pc == 0x08930374u) goto L_08930374;
    return;
L_08930374:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08930384:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22032)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089303A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x089303A0u) goto L_089303A0;
    return;
L_089303A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22032)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x089303B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 873u, 0x08837B58u>(ctx, &aot_mem) && ctx.pc == 0x089303B0u) goto L_089303B0;
    return;
L_089303B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22032)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x089303C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 881u, 0x08837C40u>(ctx, &aot_mem) && ctx.pc == 0x089303C0u) goto L_089303C0;
    return;
L_089303C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22032)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x089303D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 105u, 0x0883CD80u>(ctx, &aot_mem) && ctx.pc == 0x089303D0u) goto L_089303D0;
    return;
L_089303D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22032)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089303E8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089303E8u) goto L_089303E8;
    return;
L_089303E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22032)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08930400:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22032)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08930418u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x08930418u) goto L_08930418;
    return;
L_08930418:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08930424:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22032)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08930468;
      }
      goto L_08930448;
    }
L_08930448:
    ctx.gpr[31] = (0x08930450u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 875u, 0x08837B74u>(ctx, &aot_mem) && ctx.pc == 0x08930450u) goto L_08930450;
    return;
L_08930450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22032)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08930460u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 883u, 0x08837C5Cu>(ctx, &aot_mem) && ctx.pc == 0x08930460u) goto L_08930460;
    return;
L_08930460:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08930470;
      }
      goto L_08930468;
    }
L_08930468:
    ctx.gpr[31] = (0x08930470u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 107u, 0x0883CDB8u>(ctx, &aot_mem) && ctx.pc == 0x08930470u) goto L_08930470;
    return;
L_08930470:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08930480:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 900u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089304D0u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089304D0u) goto L_089304D0;
    return;
L_089304D0:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22032)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089304ECu);
    ctx.gpr[6] = (0u | 900u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x089304ECu) goto L_089304EC;
    return;
L_089304EC:
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17264u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[5] << 24u);
    ctx.gpr[23] = (ctx.gpr[6] << 24u);
    ctx.gpr[22] = (ctx.gpr[7] << 24u);
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[21] = (2220u << 16u);
    ctx.gpr[20] = (2220u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[30]) >> 24u));
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[23]) >> 24u));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 24u));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(22036));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(6616));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(6632));
    goto L_0893056C;
L_0893056C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22032)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x08930584u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08930584u) goto L_08930584;
    return;
L_08930584:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22032)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.gpr[5] = (0u | 1u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[31] = (0x089305F4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x089305F4u) goto L_089305F4;
    return;
L_089305F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22032)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x0893060Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0893060Cu) goto L_0893060C;
    return;
L_0893060C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22032)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x0893061Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x0893061Cu) goto L_0893061C;
    return;
L_0893061C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0893056C;
      }
      goto L_08930630;
    }
L_08930630:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893066C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22032)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_08930694;
L_08930694:
    ctx.gpr[31] = (0x0893069Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0893069Cu) goto L_0893069C;
    return;
L_0893069C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22032)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08930694;
      }
      goto L_089306B4;
    }
L_089306B4:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089306C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089306C8u) goto L_089306C8;
    return;
L_089306C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22032)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
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
L_089306E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22032)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(22036));
      if (branch_taken) {
          goto L_08930740;
      }
      goto L_0893072C;
    }
L_0893072C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
      if (branch_taken) {
          goto L_08930774;
      }
      goto L_08930740;
    }
L_08930740:
    ctx.gpr[5] = (0u | 5u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[17] = (0u | 0u);
        goto L_08930768;
    }
    goto L_0893074C;
L_0893074C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (0u | 255u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08930774;
      }
      goto L_08930768;
    }
L_08930768:
    ctx.gpr[5] = (0u | 4u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[17] = (0u | 255u);
        goto L_08930774;
    }
    goto L_08930774;
L_08930774:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.gpr[20] = (ctx.gpr[4] << 24u);
    ctx.gpr[21] = (ctx.gpr[5] << 24u);
    ctx.gpr[22] = (ctx.gpr[6] << 24u);
    ctx.gpr[23] = (ctx.gpr[7] << 24u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 24u));
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 24u));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 24u));
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[23]) >> 24u));
    goto L_089307C0;
L_089307C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22032)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x089307D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x089307D8u) goto L_089307D8;
    return;
L_089307D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22032)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(168));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[23]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08930804u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x08930804u) goto L_08930804;
    return;
L_08930804:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(180));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089307C0;
      }
      goto L_08930818;
    }
L_08930818:
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
L_08930844:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_08930864;
L_08930864:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22032)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08930874u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x08930874u) goto L_08930874;
    return;
L_08930874:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_08930864;
      }
      goto L_08930884;
    }
L_08930884:
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
L_0893089C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (17392u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (17288u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[31] = (0x089308D8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 101u, 0x08804508u>(ctx, &aot_mem) && ctx.pc == 0x089308D8u) goto L_089308D8;
    return;
L_089308D8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089308E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22032)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08930920;
      }
      goto L_08930910;
    }
L_08930910:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08930920;
L_08930920:
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(14) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930BC4;
      }
      goto L_0893092C;
    }
L_0893092C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(6696)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08930944:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08930954u);
    ctx.gpr[5] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 307u, 0x0891D260u>(ctx, &aot_mem) && ctx.pc == 0x08930954u) goto L_08930954;
    return;
L_08930954:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22032)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08930BC4;
      }
      goto L_08930964;
    }
L_08930964:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08930BC4;
      }
      goto L_0893097C;
    }
L_0893097C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08930BC4;
      }
      goto L_08930998;
    }
L_08930998:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x089309A8u);
    ctx.gpr[5] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 307u, 0x0891D260u>(ctx, &aot_mem) && ctx.pc == 0x089309A8u) goto L_089309A8;
    return;
L_089309A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08930BC4;
      }
      goto L_089309B0;
    }
L_089309B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089309F8;
      }
      goto L_089309C8;
    }
L_089309C8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08930BC4;
      }
      goto L_089309E4;
    }
L_089309E4:
    ctx.gpr[31] = (0x089309ECu);
    // nop
    ctx.pc = 0x08AB45BCu;
    return;
L_089309EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22032)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08930BC4;
      }
      goto L_089309F8;
    }
L_089309F8:
    ctx.gpr[31] = (0x08930A00u);
    // nop
    goto L_089306E8;
L_08930A00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08930BC4;
      }
      goto L_08930A08;
    }
L_08930A08:
    ctx.gpr[31] = (0x08930A10u);
    // nop
    ctx.pc = 0x08AB45BCu;
    return;
L_08930A10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22032)));
    ctx.gpr[4] = (76u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19264));
    ctx.gpr[6] = (ctx.gpr[2] - ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08930A40;
      }
      goto L_08930A30;
    }
L_08930A30:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08930A40;
L_08930A40:
    ctx.gpr[31] = (0x08930A48u);
    // nop
    goto L_089306E8;
L_08930A48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08930BC4;
      }
      goto L_08930A50;
    }
L_08930A50:
    ctx.gpr[31] = (0x08930A58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 295u, 0x0891D110u>(ctx, &aot_mem) && ctx.pc == 0x08930A58u) goto L_08930A58;
    return;
L_08930A58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22032)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 30 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08930BC4;
      }
      goto L_08930A74;
    }
L_08930A74:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08930BC4;
      }
      goto L_08930A90;
    }
L_08930A90:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08930AA0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 307u, 0x0891D260u>(ctx, &aot_mem) && ctx.pc == 0x08930AA0u) goto L_08930AA0;
    return;
L_08930AA0:
    ctx.gpr[31] = (0x08930AA8u);
    // nop
    goto L_0893089C;
L_08930AA8:
    ctx.gpr[31] = (0x08930AB0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08AB4504u;
    return;
L_08930AB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08930BC4;
      }
      goto L_08930AB8;
    }
L_08930AB8:
    ctx.gpr[31] = (0x08930AC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 161u, 0x088049A4u>(ctx, &aot_mem) && ctx.pc == 0x08930AC0u) goto L_08930AC0;
    return;
L_08930AC0:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08930BC4;
      }
      goto L_08930ACC;
    }
L_08930ACC:
    ctx.gpr[31] = (0x08930AD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 129u, 0x08804790u>(ctx, &aot_mem) && ctx.pc == 0x08930AD4u) goto L_08930AD4;
    return;
L_08930AD4:
    ctx.gpr[31] = (0x08930ADCu);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08AB44ECu;
    return;
L_08930ADC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22032)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08930AFCu);
    ctx.gpr[5] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 307u, 0x0891D260u>(ctx, &aot_mem) && ctx.pc == 0x08930AFCu) goto L_08930AFC;
    return;
L_08930AFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08930BC4;
      }
      goto L_08930B04;
    }
L_08930B04:
    ctx.gpr[31] = (0x08930B0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 295u, 0x0891D110u>(ctx, &aot_mem) && ctx.pc == 0x08930B0Cu) goto L_08930B0C;
    return;
L_08930B0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22032)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 30 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08930BC4;
      }
      goto L_08930B28;
    }
L_08930B28:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08930BC4;
      }
      goto L_08930B44;
    }
L_08930B44:
    ctx.gpr[31] = (0x08930B4Cu);
    // nop
    ctx.pc = 0x08AB45BCu;
    return;
L_08930B4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22032)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08930BC4;
      }
      goto L_08930B58;
    }
L_08930B58:
    ctx.gpr[31] = (0x08930B60u);
    // nop
    ctx.pc = 0x08AB45BCu;
    return;
L_08930B60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22032)));
    ctx.gpr[4] = (76u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19264));
    ctx.gpr[6] = (ctx.gpr[2] - ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08930BC4;
      }
      goto L_08930B80;
    }
L_08930B80:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x08930BA0u);
    ctx.gpr[5] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 307u, 0x0891D260u>(ctx, &aot_mem) && ctx.pc == 0x08930BA0u) goto L_08930BA0;
    return;
L_08930BA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08930BC4;
      }
      goto L_08930BA8;
    }
L_08930BA8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08930BC4;
      }
      goto L_08930BB4;
    }
L_08930BB4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08930BC4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 307u, 0x0891D260u>(ctx, &aot_mem) && ctx.pc == 0x08930BC4u) goto L_08930BC4;
    return;
L_08930BC4:
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
L_08930BDC:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22024)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(22028), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08930C9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    ctx.gpr[31] = (0x08930CC4u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08930CC4u) goto L_08930CC4;
    return;
L_08930CC4:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(22080));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22080)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08930CE4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6828));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08930CE4u) goto L_08930CE4;
    return;
L_08930CE4:
    ctx.gpr[31] = (0x08930CECu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08AB47ACu;
    return;
L_08930CEC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08930D0C;
      }
      goto L_08930CF8;
    }
L_08930CF8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08930D04u);
    ctx.gpr[5] = (0u | 511u);
    ctx.pc = 0x08AB4754u;
    return;
L_08930D04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08930D18;
      }
      goto L_08930D0C;
    }
L_08930D0C:
    ctx.gpr[31] = (0x08930D14u);
    // nop
    ctx.pc = 0x08AB47CCu;
    return;
L_08930D14:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08930D18;
L_08930D18:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08930D24u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08930D24u) goto L_08930D24;
    return;
L_08930D24:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22080)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08930D40u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6836));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08930D40u) goto L_08930D40;
    return;
L_08930D40:
    ctx.gpr[31] = (0x08930D48u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08AB47ACu;
    return;
L_08930D48:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08930D68;
      }
      goto L_08930D54;
    }
L_08930D54:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08930D60u);
    ctx.gpr[5] = (0u | 511u);
    ctx.pc = 0x08AB4754u;
    return;
L_08930D60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08930D70;
      }
      goto L_08930D68;
    }
L_08930D68:
    ctx.gpr[31] = (0x08930D70u);
    // nop
    ctx.pc = 0x08AB47CCu;
    return;
L_08930D70:
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
L_08930D88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    ctx.gpr[31] = (0x08930DD0u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08930DD0u) goto L_08930DD0;
    return;
L_08930DD0:
    ctx.gpr[31] = (0x08930DD8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.pc = 0x08AB4184u;
    return;
L_08930DD8:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08930E68;
      }
      goto L_08930DE0;
    }
L_08930DE0:
    ctx.gpr[19] = (2220u << 16u);
    ctx.gpr[21] = (2221u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(6844));
    ctx.gpr[20] = (ctx.gpr[21] + static_cast<std::uint32_t>(22080));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(22080)));
    goto L_08930DF8;
L_08930DF8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(50)));
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08930E2Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08930E2Cu) goto L_08930E2C;
    return;
L_08930E2C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08930E3Cu);
    ctx.gpr[6] = (0u | 511u);
    ctx.pc = 0x08AB47DCu;
    return;
L_08930E3C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08930F30;
      }
      goto L_08930E48;
    }
L_08930E48:
    ctx.gpr[31] = (0x08930E50u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08AB4784u;
    return;
L_08930E50:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 9999 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(22080)));
        goto L_08930DF8;
    }
    goto L_08930E60;
L_08930E60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08930F30;
      }
      goto L_08930E68;
    }
L_08930E68:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    ctx.gpr[22] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08930F30;
      }
      goto L_08930E70;
    }
L_08930E70:
    ctx.gpr[21] = (2220u << 16u);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(6872));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(22080));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22080)));
    goto L_08930E88;
L_08930E88:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(50)));
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08930EC0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08930EC0u) goto L_08930EC0;
    return;
L_08930EC0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08930ED0u);
    ctx.gpr[6] = (0u | 511u);
    ctx.pc = 0x08AB47DCu;
    return;
L_08930ED0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22080)));
        goto L_08930EF8;
    }
    goto L_08930EDC;
L_08930EDC:
    ctx.gpr[31] = (0x08930EE4u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08AB4784u;
    return;
L_08930EE4:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 9999 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22080)));
        goto L_08930E88;
    }
    goto L_08930EF4;
L_08930EF4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22080)));
    goto L_08930EF8;
L_08930EF8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(50)));
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08930F30u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08930F30u) goto L_08930F30;
    return;
L_08930F30:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08930F58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[18]);
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[17]);
    ctx.gpr[17] = (6u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5716));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08930F98u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08930F98u) goto L_08930F98;
    return;
L_08930F98:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08930FACu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08930FACu) goto L_08930FAC;
    return;
L_08930FAC:
    ctx.gpr[4] = (6u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1482));
    ctx.gpr[5] = (0u | 1494u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 40u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 480u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 272u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 24u);
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[6] = (9u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-32768));
    goto L_08930FF8;
L_08930FF8:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    ctx.gpr[10] = (ctx.gpr[6] | 0u);
    goto L_08931004;
L_08931004:
    ctx.gpr[8] = (0u | 2u);
    ctx.gpr[11] = (ctx.gpr[10] | 0u);
    goto L_0893100C;
L_0893100C:
    ctx.gpr[2] = (ctx.gpr[16] + ctx.gpr[11]);
    ctx.gpr[3] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) >= 0;
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0893100C;
      }
      goto L_0893102C;
    }
L_0893102C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(3));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 480 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08931004;
      }
      goto L_08931040;
    }
L_08931040:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1440));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 273 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2048));
      if (branch_taken) {
          goto L_08930FF8;
      }
      goto L_08931054;
    }
L_08931054:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (6u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(5718));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08931070u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08931070u) goto L_08931070;
    return;
L_08931070:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08931084u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08931084u) goto L_08931084;
    return;
L_08931084:
    ctx.gpr[4] = (0u | 66u);
    ctx.gpr[5] = (0u | 77u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089310A4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 551u, 0x08A9DF74u>(ctx, &aot_mem) && ctx.pc == 0x089310A4u) goto L_089310A4;
    return;
L_089310A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089310B4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089310B4u) goto L_089310B4;
    return;
L_089310B4:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089310C8u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08930D88;
L_089310C8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 514u);
    ctx.gpr[31] = (0x089310D8u);
    ctx.gpr[6] = (0u | 511u);
    ctx.pc = 0x08AB47DCu;
    return;
L_089310D8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089310ECu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08AB475Cu;
    return;
L_089310EC:
    ctx.gpr[31] = (0x089310F4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08AB4784u;
    return;
L_089310F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08931104u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08931104u) goto L_08931104;
    return;
L_08931104:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08931124:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[30]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[30] = (6u << 16u);
    ctx.gpr[22] = (6u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[23]);
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[5]);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(5716));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(5718));
    ctx.gpr[20] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[31]);
    goto L_0893117C;
L_0893117C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08931190u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08931190u) goto L_08931190;
    return;
L_08931190:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089311A4u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x089311A4u) goto L_089311A4;
    return;
L_089311A4:
    ctx.gpr[4] = (6u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1482));
    ctx.gpr[5] = (0u | 54u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 40u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[6] = (0u | 480u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 272u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 24u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[19] << 9u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[19] << 5u);
    ctx.gpr[6] = (ctx.gpr[23] + static_cast<std::uint32_t>(68));
    ctx.gpr[25] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] << 11u);
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0u | 0u);
    ctx.gpr[25] = (ctx.gpr[4] + ctx.gpr[25]);
    goto L_08931204;
L_08931204:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1440));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[31])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[24] = (0u | 0u);
    ctx.gpr[15] = (ctx.lo);
    goto L_08931214;
L_08931214:
    ctx.gpr[14] = (0u | 0u);
    ctx.gpr[13] = (ctx.gpr[15] | 0u);
    ctx.gpr[4] = (ctx.gpr[25] + static_cast<std::uint32_t>(-2048));
    goto L_08931220;
L_08931220:
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[13] + ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(59), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[14]) < 480 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08931220;
      }
      goto L_0893129C;
    }
L_0893129C:
    ctx.gpr[24] = (ctx.gpr[24] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[24]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(1440));
      if (branch_taken) {
          goto L_08931214;
      }
      goto L_089312AC;
    }
L_089312AC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (ctx.gpr[31] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 68 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(-2048));
      if (branch_taken) {
          goto L_08931204;
      }
      goto L_089312C0;
    }
L_089312C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089312D4u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089312D4u) goto L_089312D4;
    return;
L_089312D4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089312E8u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x089312E8u) goto L_089312E8;
    return;
L_089312E8:
    ctx.gpr[4] = (0u | 66u);
    ctx.gpr[5] = (0u | 77u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08931308u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 551u, 0x08A9DF74u>(ctx, &aot_mem) && ctx.pc == 0x08931308u) goto L_08931308;
    return;
L_08931308:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08931318u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08931318u) goto L_08931318;
    return;
L_08931318:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (ctx.gpr[21] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0893132Cu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08930D88;
L_0893132C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 514u);
    ctx.gpr[31] = (0x0893133Cu);
    ctx.gpr[6] = (0u | 511u);
    ctx.pc = 0x08AB47DCu;
    return;
L_0893133C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08931350u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.pc = 0x08AB475Cu;
    return;
L_08931350:
    ctx.gpr[31] = (0x08931358u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08AB4784u;
    return;
L_08931358:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08931368u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08931368u) goto L_08931368;
    return;
L_08931368:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[19] = (0u | 0u);
        goto L_0893137C;
    }
    goto L_08931374;
L_08931374:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08931384;
      }
      goto L_0893137C;
    }
L_0893137C:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(68));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    goto L_08931384;
L_08931384:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0893117C;
      }
      goto L_08931398;
    }
L_08931398:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089313C8:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22072)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(22076), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089313DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089313F4u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x089313F4u) goto L_089313F4;
    return;
L_089313F4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (2222u << 16u);
      if (branch_taken) {
          goto L_08931408;
      }
      goto L_089313FC;
    }
L_089313FC:
    ctx.gpr[31] = (0x08931404u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 439u, 0x0884DB84u>(ctx, &aot_mem) && ctx.pc == 0x08931404u) goto L_08931404;
    return;
L_08931404:
    ctx.gpr[16] = (2222u << 16u);
    goto L_08931408;
L_08931408:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 4012u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0893141Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893141Cu) goto L_0893141C;
    return;
L_0893141C:
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(22808), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08931434u);
    ctx.gpr[6] = (0u | 4012u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08931434u) goto L_08931434;
    return;
L_08931434:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(288), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3992), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3996), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 144u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0893147Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893147Cu) goto L_0893147C;
    return;
L_0893147C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4000), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08931494u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08931494u) goto L_08931494;
    return;
L_08931494:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[6] = (2195u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4000)));
    ctx.gpr[5] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x089314B0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(7252));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 702u, 0x0884BCB8u>(ctx, &aot_mem) && ctx.pc == 0x089314B0u) goto L_089314B0;
    return;
L_089314B0:
    ctx.gpr[4] = (2195u << 16u);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[31] = (0x089314C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5520));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 706u, 0x0884BCFCu>(ctx, &aot_mem) && ctx.pc == 0x089314C0u) goto L_089314C0;
    return;
L_089314C0:
    ctx.gpr[4] = (2195u << 16u);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[31] = (0x089314D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5528));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 709u, 0x0884BD28u>(ctx, &aot_mem) && ctx.pc == 0x089314D0u) goto L_089314D0;
    return;
L_089314D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089314E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(23)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[16] = (2222u << 16u);
      if (branch_taken) {
          goto L_08931554;
      }
      goto L_0893150C;
    }
L_0893150C:
    ctx.gpr[31] = (0x08931514u);
    // nop
    goto L_089317FC;
L_08931514:
    ctx.gpr[31] = (0x0893151Cu);
    // nop
    goto L_08931B28;
L_0893151C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[31] = (0x08931528u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 624u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x08931528u) goto L_08931528;
    return;
L_08931528:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4000)));
    ctx.gpr[31] = (0x08931538u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x08931538u) goto L_08931538;
    return;
L_08931538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0893154Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4000)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893154Cu) goto L_0893154C;
    return;
L_0893154C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4000), 0u);
    goto L_08931554;
L_08931554:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08931564u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08931564u) goto L_08931564;
    return;
L_08931564:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08931574u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 307u, 0x0891D260u>(ctx, &aot_mem) && ctx.pc == 0x08931574u) goto L_08931574;
    return;
L_08931574:
    ctx.gpr[31] = (0x0893157Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 439u, 0x0884DB84u>(ctx, &aot_mem) && ctx.pc == 0x0893157Cu) goto L_0893157C;
    return;
L_0893157C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08931590:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08931598:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(23)));
    ctx.gpr[16] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089315E8;
      }
      goto L_089315C0;
    }
L_089315C0:
    ctx.gpr[31] = (0x089315C8u);
    // nop
    goto L_08931890;
L_089315C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089315E8;
      }
      goto L_089315D8;
    }
L_089315D8:
    ctx.gpr[31] = (0x089315E0u);
    // nop
    goto L_08931BA4;
L_089315E0:
    ctx.gpr[31] = (0x089315E8u);
    // nop
    goto L_08931C24;
L_089315E8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089315FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4000)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08931654;
      }
      goto L_08931624;
    }
L_08931624:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_089316C0;
      }
      goto L_0893162C;
    }
L_0893162C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22120)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08931640u);
    ctx.gpr[6] = (0u | 130u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 465u, 0x08809CF0u>(ctx, &aot_mem) && ctx.pc == 0x08931640u) goto L_08931640;
    return;
L_08931640:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4000)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089316C0;
      }
      goto L_08931654;
    }
L_08931654:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08931670;
      }
      goto L_08931660;
    }
L_08931660:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (0u | 1u);
        goto L_089316C0;
    }
    goto L_08931668;
L_08931668:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089316C0;
      }
      goto L_08931670;
    }
L_08931670:
    ctx.gpr[31] = (0x08931678u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 469u, 0x08809D90u>(ctx, &aot_mem) && ctx.pc == 0x08931678u) goto L_08931678;
    return;
L_08931678:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089316C0;
      }
      goto L_08931684;
    }
L_08931684:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4000)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x0893169Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 621u, 0x0880ABA0u>(ctx, &aot_mem) && ctx.pc == 0x0893169Cu) goto L_0893169C;
    return;
L_0893169C:
    ctx.gpr[31] = (0x089316A4u);
    // nop
    goto L_089316D8;
L_089316A4:
    ctx.gpr[31] = (0x089316ACu);
    // nop
    goto L_0893196C;
L_089316AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4000)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089316C0;
      }
      goto L_089316C0;
    }
L_089316C0:
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
L_089316D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 552u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089316FCu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089316FCu) goto L_089316FC;
    return;
L_089316FC:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22808)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4004), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[6] = (0u | 552u);
    ctx.gpr[31] = (0x0893171Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4004)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0893171Cu) goto L_0893171C;
    return;
L_0893171C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4004)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4004)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[5] = (17392u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4004)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[5] = (17288u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4004)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22808)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4004)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[31] = (0x089317ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4004)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x089317ACu) goto L_089317AC;
    return;
L_089317AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4004)));
    ctx.gpr[31] = (0x089317BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 109u, 0x0883CDD4u>(ctx, &aot_mem) && ctx.pc == 0x089317BCu) goto L_089317BC;
    return;
L_089317BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4004)));
    ctx.gpr[31] = (0x089317CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 349u, 0x0883AB58u>(ctx, &aot_mem) && ctx.pc == 0x089317CCu) goto L_089317CC;
    return;
L_089317CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4004)));
    ctx.gpr[31] = (0x089317DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 102u, 0x0883CCBCu>(ctx, &aot_mem) && ctx.pc == 0x089317DCu) goto L_089317DC;
    return;
L_089317DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4004)));
    ctx.gpr[31] = (0x089317ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(460));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 122u, 0x0883D030u>(ctx, &aot_mem) && ctx.pc == 0x089317ECu) goto L_089317EC;
    return;
L_089317EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089317FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22808)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08931818u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4004)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x08931818u) goto L_08931818;
    return;
L_08931818:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4004)));
    ctx.gpr[31] = (0x08931828u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 114u, 0x0883CF58u>(ctx, &aot_mem) && ctx.pc == 0x08931828u) goto L_08931828;
    return;
L_08931828:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4004)));
    ctx.gpr[31] = (0x08931838u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 352u, 0x0883AC14u>(ctx, &aot_mem) && ctx.pc == 0x08931838u) goto L_08931838;
    return;
L_08931838:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4004)));
    ctx.gpr[31] = (0x08931848u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 105u, 0x0883CD80u>(ctx, &aot_mem) && ctx.pc == 0x08931848u) goto L_08931848;
    return;
L_08931848:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4004)));
    ctx.gpr[31] = (0x08931858u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(460));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 125u, 0x0883D0F4u>(ctx, &aot_mem) && ctx.pc == 0x08931858u) goto L_08931858;
    return;
L_08931858:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08931870u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4004)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08931870u) goto L_08931870;
    return;
L_08931870:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22808)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4004), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08931888:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08931890:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22808)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089318ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4004)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x089318ACu) goto L_089318AC;
    return;
L_089318AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(22)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[5] = (2220u << 16u);
      if (branch_taken) {
          goto L_0893195C;
      }
      goto L_089318C0;
    }
L_089318C0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(140));
    ctx.gpr[31] = (0x089318CCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6952));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x089318CCu) goto L_089318CC;
    return;
L_089318CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22808)));
      if (branch_taken) {
          goto L_089318E4;
      }
      goto L_089318D4;
    }
L_089318D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4004)));
    ctx.gpr[31] = (0x089318E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 118u, 0x0883CFE8u>(ctx, &aot_mem) && ctx.pc == 0x089318E0u) goto L_089318E0;
    return;
L_089318E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22808)));
    goto L_089318E4;
L_089318E4:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(140));
    ctx.gpr[31] = (0x089318F4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6960));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x089318F4u) goto L_089318F4;
    return;
L_089318F4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22808)));
      if (branch_taken) {
          goto L_0893190C;
      }
      goto L_089318FC;
    }
L_089318FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4004)));
    ctx.gpr[31] = (0x08931908u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 354u, 0x0883AC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08931908u) goto L_08931908;
    return;
L_08931908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22808)));
    goto L_0893190C;
L_0893190C:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(140));
    ctx.gpr[31] = (0x0893191Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6972));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0893191Cu) goto L_0893191C;
    return;
L_0893191C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22808)));
      if (branch_taken) {
          goto L_08931934;
      }
      goto L_08931924;
    }
L_08931924:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4004)));
    ctx.gpr[31] = (0x08931930u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 107u, 0x0883CDB8u>(ctx, &aot_mem) && ctx.pc == 0x08931930u) goto L_08931930;
    return;
L_08931930:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22808)));
    goto L_08931934;
L_08931934:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(140));
    ctx.gpr[31] = (0x08931944u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6980));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08931944u) goto L_08931944;
    return;
L_08931944:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893195C;
      }
      goto L_0893194C;
    }
L_0893194C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4004)));
    ctx.gpr[31] = (0x0893195Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(460));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 127u, 0x0883D12Cu>(ctx, &aot_mem) && ctx.pc == 0x0893195Cu) goto L_0893195C;
    return;
L_0893195C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893196C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 4500u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089319B8u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089319B8u) goto L_089319B8;
    return;
L_089319B8:
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4008), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089319D4u);
    ctx.gpr[6] = (0u | 4500u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x089319D4u) goto L_089319D4;
    return;
L_089319D4:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6992));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.gpr[30] = (ctx.gpr[4] << 24u);
    ctx.gpr[23] = (ctx.gpr[5] << 24u);
    ctx.gpr[22] = (ctx.gpr[6] << 24u);
    ctx.gpr[21] = (ctx.gpr[7] << 24u);
    ctx.gpr[4] = (16736u << 16u);
    ctx.gpr[20] = (2220u << 16u);
    ctx.gpr[19] = (2220u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[30]) >> 24u));
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[23]) >> 24u));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 24u));
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 24u));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(6996));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(7012));
    goto L_08931A44;
L_08931A44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4008)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x08931A5Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08931A5Cu) goto L_08931A5C;
    return;
L_08931A5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4008)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4008)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4008)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4008)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4008)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[31] = (0x08931AB8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x08931AB8u) goto L_08931AB8;
    return;
L_08931AB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4008)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x08931AD0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08931AD0u) goto L_08931AD0;
    return;
L_08931AD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4008)));
    ctx.gpr[31] = (0x08931AE0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x08931AE0u) goto L_08931AE0;
    return;
L_08931AE0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 25 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_08931A44;
      }
      goto L_08931AF0;
    }
L_08931AF0:
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
L_08931B28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4008)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_08931B50;
L_08931B50:
    ctx.gpr[31] = (0x08931B58u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08931B58u) goto L_08931B58;
    return;
L_08931B58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 25 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4008)));
      if (branch_taken) {
          goto L_08931B50;
      }
      goto L_08931B70;
    }
L_08931B70:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08931B84u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08931B84u) goto L_08931B84;
    return;
L_08931B84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4008), 0u);
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
L_08931BA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08931C0C;
      }
      goto L_08931BCC;
    }
L_08931BCC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3992)));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (0u | 180u);
      if (branch_taken) {
          goto L_08931C0C;
      }
      goto L_08931BE4;
    }
L_08931BE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4008)));
    ctx.gpr[31] = (0x08931BF0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x08931BF0u) goto L_08931BF0;
    return;
L_08931BF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3992)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_08931BE4;
      }
      goto L_08931C0C;
    }
L_08931C0C:
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
L_08931C24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08931C48;
      }
      goto L_08931C40;
    }
L_08931C40:
    ctx.gpr[31] = (0x08931C48u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4008)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x08931C48u) goto L_08931C48;
    return;
L_08931C48:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08931C54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(23)));
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08931CA8;
      }
      goto L_08931C88;
    }
L_08931C88:
    ctx.gpr[31] = (0x08931C90u);
    // nop
    goto L_089315FC;
L_08931C90:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08931FEC;
      }
      goto L_08931C98;
    }
L_08931C98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08931FEC;
      }
      goto L_08931CA8;
    }
L_08931CA8:
    ctx.gpr[19] = (0u | 6u);
    ctx.gpr[31] = (0x08931CB4u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x08931CB4u) goto L_08931CB4;
    return;
L_08931CB4:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[20] = (0u | 4u);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[19] = (0u | 0u);
        goto L_08931CC4;
    }
    goto L_08931CC4;
L_08931CC4:
    if (ctx.gpr[19] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
        goto L_08931D6C;
    }
    goto L_08931CCC;
L_08931CCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 991u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08931D08;
      }
      goto L_08931CDC;
    }
L_08931CDC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
        goto L_08931D6C;
    }
    goto L_08931CF4;
L_08931CF4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
        goto L_08931D6C;
    }
    goto L_08931D08;
L_08931D08:
    ctx.gpr[31] = (0x08931D10u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 705u, 0x0884BCE4u>(ctx, &aot_mem) && ctx.pc == 0x08931D10u) goto L_08931D10;
    return;
L_08931D10:
    ctx.gpr[31] = (0x08931D18u);
    ctx.gpr[4] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 712u, 0x0884BD54u>(ctx, &aot_mem) && ctx.pc == 0x08931D18u) goto L_08931D18;
    return;
L_08931D18:
    ctx.gpr[31] = (0x08931D20u);
    ctx.gpr[4] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 713u, 0x0884BD6Cu>(ctx, &aot_mem) && ctx.pc == 0x08931D20u) goto L_08931D20;
    return;
L_08931D20:
    ctx.gpr[4] = (2195u << 16u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x08931D30u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5348));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x08931D30u) goto L_08931D30;
    return;
L_08931D30:
    ctx.gpr[4] = (2187u << 16u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x08931D40u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17192));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 702u, 0x0884BCB8u>(ctx, &aot_mem) && ctx.pc == 0x08931D40u) goto L_08931D40;
    return;
L_08931D40:
    ctx.gpr[4] = (2187u << 16u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08931D50u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16472));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 706u, 0x0884BCFCu>(ctx, &aot_mem) && ctx.pc == 0x08931D50u) goto L_08931D50;
    return;
L_08931D50:
    ctx.gpr[4] = (2187u << 16u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08931D60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16464));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 709u, 0x0884BD28u>(ctx, &aot_mem) && ctx.pc == 0x08931D60u) goto L_08931D60;
    return;
L_08931D60:
    ctx.gpr[31] = (0x08931D68u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08931D68u) goto L_08931D68;
    return;
L_08931D68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    goto L_08931D6C;
L_08931D6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08931E54;
      }
      goto L_08931D78;
    }
L_08931D78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08931E4C;
      }
      goto L_08931D84;
    }
L_08931D84:
    ctx.gpr[31] = (0x08931D8Cu);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 705u, 0x0884BCE4u>(ctx, &aot_mem) && ctx.pc == 0x08931D8Cu) goto L_08931D8C;
    return;
L_08931D8C:
    ctx.gpr[31] = (0x08931D94u);
    ctx.gpr[4] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 712u, 0x0884BD54u>(ctx, &aot_mem) && ctx.pc == 0x08931D94u) goto L_08931D94;
    return;
L_08931D94:
    ctx.gpr[31] = (0x08931D9Cu);
    ctx.gpr[4] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 713u, 0x0884BD6Cu>(ctx, &aot_mem) && ctx.pc == 0x08931D9Cu) goto L_08931D9C;
    return;
L_08931D9C:
    ctx.gpr[4] = (2195u << 16u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x08931DACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5348));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x08931DACu) goto L_08931DAC;
    return;
L_08931DAC:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (2187u << 16u);
      if (branch_taken) {
          goto L_08931E18;
      }
      goto L_08931DB4;
    }
L_08931DB4:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[5] = (2181u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4484));
    ctx.gpr[31] = (0x08931DCCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4252));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x08931DCCu) goto L_08931DCC;
    return;
L_08931DCC:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[5] = (2181u << 16u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3248));
    ctx.gpr[31] = (0x08931DE4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3520));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x08931DE4u) goto L_08931DE4;
    return;
L_08931DE4:
    ctx.gpr[4] = (2183u << 16u);
    ctx.gpr[5] = (2183u << 16u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18136));
    ctx.gpr[31] = (0x08931DFCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18308));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x08931DFCu) goto L_08931DFC;
    return;
L_08931DFC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08931E08u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x08931E08u) goto L_08931E08;
    return;
L_08931E08:
    ctx.gpr[31] = (0x08931E10u);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 861u, 0x0881F4B4u>(ctx, &aot_mem) && ctx.pc == 0x08931E10u) goto L_08931E10;
    return;
L_08931E10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08931FCC;
      }
      goto L_08931E18;
    }
L_08931E18:
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x08931E24u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17192));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 702u, 0x0884BCB8u>(ctx, &aot_mem) && ctx.pc == 0x08931E24u) goto L_08931E24;
    return;
L_08931E24:
    ctx.gpr[4] = (2187u << 16u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08931E34u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16472));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 706u, 0x0884BCFCu>(ctx, &aot_mem) && ctx.pc == 0x08931E34u) goto L_08931E34;
    return;
L_08931E34:
    ctx.gpr[4] = (2187u << 16u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08931E44u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16464));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 709u, 0x0884BD28u>(ctx, &aot_mem) && ctx.pc == 0x08931E44u) goto L_08931E44;
    return;
L_08931E44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08931FCC;
      }
      goto L_08931E4C;
    }
L_08931E4C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08931FCC;
      }
      goto L_08931E54;
    }
L_08931E54:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08931E8C;
      }
      goto L_08931E5C;
    }
L_08931E5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08931E74;
      }
      goto L_08931E6C;
    }
L_08931E6C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08931FCC;
      }
      goto L_08931E74;
    }
L_08931E74:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08931FCC;
      }
      goto L_08931E8C;
    }
L_08931E8C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    ctx.gpr[6] = (0u | 3u);
      if (branch_taken) {
          goto L_08931EC0;
      }
      goto L_08931E94;
    }
L_08931E94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 30 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08931EAC;
      }
      goto L_08931EA4;
    }
L_08931EA4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08931FCC;
      }
      goto L_08931EAC;
    }
L_08931EAC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08931FCC;
      }
      goto L_08931EC0;
    }
L_08931EC0:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[7] = (0u | 2u);
      if (branch_taken) {
          goto L_08931EF8;
      }
      goto L_08931EC8;
    }
L_08931EC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 30 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08931EE0;
      }
      goto L_08931ED8;
    }
L_08931ED8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08931FCC;
      }
      goto L_08931EE0;
    }
L_08931EE0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08931FCC;
      }
      goto L_08931EF8;
    }
L_08931EF8:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08931FCC;
      }
      goto L_08931F00;
    }
L_08931F00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08931F4C;
      }
      goto L_08931F10;
    }
L_08931F10:
    ctx.gpr[31] = (0x08931F18u);
    // nop
    goto L_08932494;
L_08931F18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(21)));
    if (ctx.gpr[5] != ctx.gpr[18]) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
        goto L_08931F30;
    }
    goto L_08931F28;
L_08931F28:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
      if (branch_taken) {
          goto L_08931F8C;
      }
      goto L_08931F30;
    }
L_08931F30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08931F8C;
      }
      goto L_08931F4C;
    }
L_08931F4C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08931F8C;
      }
      goto L_08931F54;
    }
L_08931F54:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3996)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08931F6C;
      }
      goto L_08931F64;
    }
L_08931F64:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08931F8C;
      }
      goto L_08931F6C;
    }
L_08931F6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[16] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    goto L_08931F8C;
L_08931F8C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08931FCC;
      }
      goto L_08931F94;
    }
L_08931F94:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08931FB0;
      }
      goto L_08931FA8;
    }
L_08931FA8:
    if (ctx.gpr[4] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(276)));
        goto L_08931FB8;
    }
    goto L_08931FB0;
L_08931FB0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08931FC0;
      }
      goto L_08931FB8;
    }
L_08931FB8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(280)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08931FC0;
L_08931FC0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08931FCCu);
    ctx.gpr[5] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 307u, 0x0891D260u>(ctx, &aot_mem) && ctx.pc == 0x08931FCCu) goto L_08931FCC;
    return;
L_08931FCC:
    ctx.gpr[31] = (0x08931FD4u);
    // nop
    goto L_08931888;
L_08931FD4:
    ctx.gpr[31] = (0x08931FDCu);
    // nop
    goto L_0893200C;
L_08931FDC:
    ctx.gpr[31] = (0x08931FE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 295u, 0x0891D110u>(ctx, &aot_mem) && ctx.pc == 0x08931FE4u) goto L_08931FE4;
    return;
L_08931FE4:
    ctx.gpr[31] = (0x08931FECu);
    ctx.gpr[4] = (0u | 6u);
    ctx.pc = 0x08AB44E4u;
    return;
L_08931FEC:
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
L_0893200C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[18]);
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 255u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6952));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[31]);
    if (ctx.gpr[6] == ctx.gpr[7]) {
    ctx.gpr[16] = (0u | 0u);
        goto L_0893205C;
    }
    goto L_0893205C;
L_0893205C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
    ctx.gpr[31] = (0x08932068u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(140));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08932068u) goto L_08932068;
    return;
L_08932068:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22808)));
      if (branch_taken) {
          goto L_089320B8;
      }
      goto L_08932070;
    }
L_08932070:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(140));
    ctx.gpr[31] = (0x08932080u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6960));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08932080u) goto L_08932080;
    return;
L_08932080:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22808)));
      if (branch_taken) {
          goto L_089320B8;
      }
      goto L_08932088;
    }
L_08932088:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(140));
    ctx.gpr[31] = (0x08932098u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6972));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08932098u) goto L_08932098;
    return;
L_08932098:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22808)));
      if (branch_taken) {
          goto L_089320B8;
      }
      goto L_089320A0;
    }
L_089320A0:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(140));
    ctx.gpr[31] = (0x089320B0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6980));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x089320B0u) goto L_089320B0;
    return;
L_089320B0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22808)));
      if (branch_taken) {
          goto L_089320DC;
      }
      goto L_089320B8;
    }
L_089320B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4008)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x089320CCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6992));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x089320CCu) goto L_089320CC;
    return;
L_089320CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4008)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
      if (branch_taken) {
          goto L_089320F8;
      }
      goto L_089320DC;
    }
L_089320DC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4008)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(140));
    ctx.gpr[31] = (0x089320ECu);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x089320ECu) goto L_089320EC;
    return;
L_089320EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4008)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    goto L_089320F8;
L_089320F8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(280)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4008)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(272)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4008)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(276)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4008)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4008)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(284)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(168));
      if (branch_taken) {
          goto L_0893216C;
      }
      goto L_08932130;
    }
L_08932130:
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4008)));
      if (branch_taken) {
          goto L_089321A4;
      }
      goto L_0893216C;
    }
L_0893216C:
    ctx.gpr[5] = (0u | 150u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4008)));
    goto L_089321A4;
L_089321A4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    ctx.gpr[31] = (0x089321B0u);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x089321B0u) goto L_089321B0;
    return;
L_089321B0:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(3992)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2220u << 16u);
      if (branch_taken) {
          goto L_08932464;
      }
      goto L_089321C8;
    }
L_089321C8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6960));
    ctx.gpr[5] = (2220u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6972));
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6980));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6992));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(29)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(30)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[30] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35)));
    ctx.gpr[23] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    goto L_08932250;
L_08932250:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x0893225Cu);
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(140));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0893225Cu) goto L_0893225C;
    return;
L_0893225C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22808)));
      if (branch_taken) {
          goto L_089322A0;
      }
      goto L_08932264;
    }
L_08932264:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (0x08932270u);
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(140));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08932270u) goto L_08932270;
    return;
L_08932270:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22808)));
      if (branch_taken) {
          goto L_089322A0;
      }
      goto L_08932278;
    }
L_08932278:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08932284u);
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(140));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08932284u) goto L_08932284;
    return;
L_08932284:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22808)));
      if (branch_taken) {
          goto L_089322A0;
      }
      goto L_0893228C;
    }
L_0893228C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x08932298u);
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(140));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08932298u) goto L_08932298;
    return;
L_08932298:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22808)));
      if (branch_taken) {
          goto L_089322CC;
      }
      goto L_089322A0;
    }
L_089322A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4008)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089322B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(212));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x089322B4u) goto L_089322B4;
    return;
L_089322B4:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4008)));
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[17]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(420)));
      if (branch_taken) {
          goto L_089322F8;
      }
      goto L_089322CC;
    }
L_089322CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4008)));
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(212));
    ctx.gpr[31] = (0x089322E4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(292));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x089322E4u) goto L_089322E4;
    return;
L_089322E4:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4008)));
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[17]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[16]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(420)));
    goto L_089322F8;
L_089322F8:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(184), ctx.gpr[9]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4008)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(432)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4008)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4008)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(428)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4008)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_08932374;
      }
      goto L_0893233C;
    }
L_0893233C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (ctx.gpr[23] & 255u);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(348));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4008)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_089323F0;
      }
      goto L_08932374;
    }
L_08932374:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_089323B8;
      }
      goto L_08932380;
    }
L_08932380:
    ctx.gpr[19] = (0u | 150u);
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(348));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[9] & 255u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4008)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_089323F0;
      }
      goto L_089323B8;
    }
L_089323B8:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[23] & 255u);
      if (branch_taken) {
          goto L_089323F0;
      }
      goto L_089323C4;
    }
L_089323C4:
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(348));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[21] = (0u & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[30] = (ctx.gpr[9] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4008)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[16]);
    goto L_089323F0;
L_089323F0:
    ctx.gpr[31] = (0x089323F8u);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(180));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x089323F8u) goto L_089323F8;
    return;
L_089323F8:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(3992)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(148));
      if (branch_taken) {
          goto L_08932250;
      }
      goto L_08932414;
    }
L_08932414:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[30]));
    goto L_08932464;
L_08932464:
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
L_08932494:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(144), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(288)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08932838;
      }
      goto L_089324E4;
    }
L_089324E4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[16] = (2220u << 16u);
    ctx.gpr[19] = (2220u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(7020));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(7104));
    goto L_08932500;
L_08932500:
    ctx.gpr[31] = (0x08932508u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08932508u) goto L_08932508;
    return;
L_08932508:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08932514u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08932514u) goto L_08932514;
    return;
L_08932514:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089327E0;
      }
      goto L_0893251C;
    }
L_0893251C:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7032));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7044));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[4]);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6952));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6960));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[4]);
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6972));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6980));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[4]);
    ctx.gpr[30] = (2220u << 16u);
    ctx.gpr[23] = (2220u << 16u);
    ctx.gpr[22] = (2220u << 16u);
    ctx.gpr[21] = (2220u << 16u);
    ctx.gpr[20] = (2220u << 16u);
    ctx.gpr[19] = (2220u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(7052));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(7064));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(7072));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(7080));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(7088));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(7096));
    goto L_08932598;
L_08932598:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    goto L_0893259C;
L_0893259C:
    ctx.gpr[31] = (0x089325A4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x089325A4u) goto L_089325A4;
    return;
L_089325A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
      if (branch_taken) {
          goto L_08932834;
      }
      goto L_089325AC;
    }
L_089325AC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x089325B8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x089325B8u) goto L_089325B8;
    return;
L_089325B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[31] = (0x089325C4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x089325C4u) goto L_089325C4;
    return;
L_089325C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08932640;
      }
      goto L_089325CC;
    }
L_089325CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(140));
    ctx.gpr[31] = (0x089325DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x089325DCu) goto L_089325DC;
    return;
L_089325DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[31] = (0x089325ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(140));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x089325ECu) goto L_089325EC;
    return;
L_089325EC:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
        goto L_0893265C;
    }
    goto L_089325F4;
L_089325F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[31] = (0x08932604u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(140));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08932604u) goto L_08932604;
    return;
L_08932604:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
        goto L_0893265C;
    }
    goto L_0893260C;
L_0893260C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[31] = (0x0893261Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(140));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0893261Cu) goto L_0893261C;
    return;
L_0893261C:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
        goto L_0893265C;
    }
    goto L_08932624;
L_08932624:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[31] = (0x08932634u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(140));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08932634u) goto L_08932634;
    return;
L_08932634:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
        goto L_0893265C;
    }
    goto L_0893263C;
L_0893263C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08932640;
L_08932640:
    ctx.gpr[31] = (0x08932648u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08932648u) goto L_08932648;
    return;
L_08932648:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
        goto L_08932694;
    }
    goto L_08932650;
L_08932650:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089326B4;
      }
      goto L_08932658;
    }
L_08932658:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    goto L_0893265C;
L_0893265C:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08932694:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089326A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x089326A0u) goto L_089326A0;
    return;
L_089326A0:
    ctx.gpr[31] = (0x089326A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 209u, 0x08A9CADCu>(ctx, &aot_mem) && ctx.pc == 0x089326A8u) goto L_089326A8;
    return;
L_089326A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(268), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089326B4;
L_089326B4:
    ctx.gpr[31] = (0x089326BCu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x089326BCu) goto L_089326BC;
    return;
L_089326BC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089326F4;
      }
      goto L_089326C4;
    }
L_089326C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089326D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x089326D4u) goto L_089326D4;
    return;
L_089326D4:
    ctx.gpr[31] = (0x089326DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x089326DCu) goto L_089326DC;
    return;
L_089326DC:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089326E8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x089326E8u) goto L_089326E8;
    return;
L_089326E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089326F4;
L_089326F4:
    ctx.gpr[31] = (0x089326FCu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x089326FCu) goto L_089326FC;
    return;
L_089326FC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08932734;
      }
      goto L_08932704;
    }
L_08932704:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08932714u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08932714u) goto L_08932714;
    return;
L_08932714:
    ctx.gpr[31] = (0x0893271Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x0893271Cu) goto L_0893271C;
    return;
L_0893271C:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08932728u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08932728u) goto L_08932728;
    return;
L_08932728:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08932734;
L_08932734:
    ctx.gpr[31] = (0x0893273Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0893273Cu) goto L_0893273C;
    return;
L_0893273C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08932774;
      }
      goto L_08932744;
    }
L_08932744:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08932754u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08932754u) goto L_08932754;
    return;
L_08932754:
    ctx.gpr[31] = (0x0893275Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 207u, 0x08A9CAC0u>(ctx, &aot_mem) && ctx.pc == 0x0893275Cu) goto L_0893275C;
    return;
L_0893275C:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08932768u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x08932768u) goto L_08932768;
    return;
L_08932768:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08932774;
L_08932774:
    ctx.gpr[31] = (0x0893277Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0893277Cu) goto L_0893277C;
    return;
L_0893277C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089327A8;
      }
      goto L_08932784;
    }
L_08932784:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08932794u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08932794u) goto L_08932794;
    return;
L_08932794:
    ctx.gpr[31] = (0x0893279Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 209u, 0x08A9CADCu>(ctx, &aot_mem) && ctx.pc == 0x0893279Cu) goto L_0893279C;
    return;
L_0893279C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(284), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089327A8;
L_089327A8:
    ctx.gpr[31] = (0x089327B0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x089327B0u) goto L_089327B0;
    return;
L_089327B0:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
        goto L_0893259C;
    }
    goto L_089327B8;
L_089327B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089327C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x089327C8u) goto L_089327C8;
    return;
L_089327C8:
    ctx.gpr[31] = (0x089327D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 209u, 0x08A9CADCu>(ctx, &aot_mem) && ctx.pc == 0x089327D0u) goto L_089327D0;
    return;
L_089327D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(288), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08932598;
      }
      goto L_089327E0;
    }
L_089327E0:
    ctx.gpr[31] = (0x089327E8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x089327E8u) goto L_089327E8;
    return;
L_089327E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
      if (branch_taken) {
          goto L_089327F8;
      }
      goto L_089327F0;
    }
L_089327F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08932500;
      }
      goto L_089327F8;
    }
L_089327F8:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08932834:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(288)));
    goto L_08932838;
L_08932838:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08932AA4;
      }
      goto L_08932840;
    }
L_08932840:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(22)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (2220u << 16u);
      if (branch_taken) {
          goto L_08932AA4;
      }
      goto L_0893284C;
    }
L_0893284C:
    ctx.gpr[16] = (2220u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(7112));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(7104));
    goto L_08932860;
L_08932860:
    ctx.gpr[31] = (0x08932868u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08932868u) goto L_08932868;
    return;
L_08932868:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08932874u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08932874u) goto L_08932874;
    return;
L_08932874:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08932AD4;
      }
      goto L_0893287C;
    }
L_0893287C:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7052));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[4]);
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7064));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7072));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[4]);
    ctx.gpr[22] = (2220u << 16u);
    ctx.gpr[21] = (2220u << 16u);
    ctx.gpr[30] = (2220u << 16u);
    ctx.gpr[23] = (2220u << 16u);
    ctx.gpr[20] = (2220u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[5]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(7120));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(7128));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(7080));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(7088));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(7136));
    goto L_089328D0;
L_089328D0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089328D4;
L_089328D4:
    ctx.gpr[31] = (0x089328DCu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x089328DCu) goto L_089328DC;
    return;
L_089328DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
      if (branch_taken) {
          goto L_08932A90;
      }
      goto L_089328E4;
    }
L_089328E4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x089328F0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x089328F0u) goto L_089328F0;
    return;
L_089328F0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089328FCu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x089328FCu) goto L_089328FC;
    return;
L_089328FC:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
        goto L_0893291C;
    }
    goto L_08932904;
L_08932904:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08932918u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(292));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08932918u) goto L_08932918;
    return;
L_08932918:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    goto L_0893291C;
L_0893291C:
    ctx.gpr[31] = (0x08932924u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08932924u) goto L_08932924;
    return;
L_08932924:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
        goto L_08932954;
    }
    goto L_0893292C;
L_0893292C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0893293Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x0893293Cu) goto L_0893293C;
    return;
L_0893293C:
    ctx.gpr[31] = (0x08932944u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 209u, 0x08A9CADCu>(ctx, &aot_mem) && ctx.pc == 0x08932944u) goto L_08932944;
    return;
L_08932944:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(420), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    goto L_08932954;
L_08932954:
    ctx.gpr[31] = (0x0893295Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0893295Cu) goto L_0893295C;
    return;
L_0893295C:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
        goto L_08932994;
    }
    goto L_08932964;
L_08932964:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08932974u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08932974u) goto L_08932974;
    return;
L_08932974:
    ctx.gpr[31] = (0x0893297Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 209u, 0x08A9CADCu>(ctx, &aot_mem) && ctx.pc == 0x0893297Cu) goto L_0893297C;
    return;
L_0893297C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    goto L_08932994;
L_08932994:
    ctx.gpr[31] = (0x0893299Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0893299Cu) goto L_0893299C;
    return;
L_0893299C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089329D4;
      }
      goto L_089329A4;
    }
L_089329A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089329B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x089329B4u) goto L_089329B4;
    return;
L_089329B4:
    ctx.gpr[31] = (0x089329BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 209u, 0x08A9CADCu>(ctx, &aot_mem) && ctx.pc == 0x089329BCu) goto L_089329BC;
    return;
L_089329BC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(428), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089329D4;
L_089329D4:
    ctx.gpr[31] = (0x089329DCu);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x089329DCu) goto L_089329DC;
    return;
L_089329DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08932A14;
      }
      goto L_089329E4;
    }
L_089329E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089329F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x089329F4u) goto L_089329F4;
    return;
L_089329F4:
    ctx.gpr[31] = (0x089329FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 209u, 0x08A9CADCu>(ctx, &aot_mem) && ctx.pc == 0x089329FCu) goto L_089329FC;
    return;
L_089329FC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08932A14;
L_08932A14:
    ctx.gpr[31] = (0x08932A1Cu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08932A1Cu) goto L_08932A1C;
    return;
L_08932A1C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08932A5C;
      }
      goto L_08932A24;
    }
L_08932A24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08932A34u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08932A34u) goto L_08932A34;
    return;
L_08932A34:
    ctx.gpr[31] = (0x08932A3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 209u, 0x08A9CADCu>(ctx, &aot_mem) && ctx.pc == 0x08932A3Cu) goto L_08932A3C;
    return;
L_08932A3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(436), ctx.gpr[2]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(148));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08932A5C;
L_08932A5C:
    ctx.gpr[31] = (0x08932A64u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08932A64u) goto L_08932A64;
    return;
L_08932A64:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089328D4;
      }
      goto L_08932A6C;
    }
L_08932A6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08932A7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08932A7Cu) goto L_08932A7C;
    return;
L_08932A7C:
    ctx.gpr[31] = (0x08932A84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 209u, 0x08A9CADCu>(ctx, &aot_mem) && ctx.pc == 0x08932A84u) goto L_08932A84;
    return;
L_08932A84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3996), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089328D0;
      }
      goto L_08932A90;
    }
L_08932A90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(288)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3992), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(288), ctx.gpr[5]);
    goto L_08932AA4;
L_08932AA4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08932AD4:
    ctx.gpr[31] = (0x08932ADCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08932ADCu) goto L_08932ADC;
    return;
L_08932ADC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22808)));
      if (branch_taken) {
          goto L_08932AEC;
      }
      goto L_08932AE4;
    }
L_08932AE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08932860;
      }
      goto L_08932AEC;
    }
L_08932AEC:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08932B28:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22112)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(22116), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08932B3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 484u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08932B5Cu);
    ctx.gpr[5] = (0u | 176u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08932B5Cu) goto L_08932B5C;
    return;
L_08932B5C:
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(22136), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08932B74u);
    ctx.gpr[6] = (0u | 484u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08932B74u) goto L_08932B74;
    return;
L_08932B74:
    ctx.gpr[31] = (0x08932B7Cu);
    // nop
    goto L_08932C44;
L_08932B7C:
    ctx.gpr[31] = (0x08932B84u);
    // nop
    goto L_08933050;
L_08932B84:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08932B90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22136)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08932BCC;
      }
      goto L_08932BAC;
    }
L_08932BAC:
    ctx.gpr[31] = (0x08932BB4u);
    // nop
    goto L_08932C68;
L_08932BB4:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08932BC8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22136)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08932BC8u) goto L_08932BC8;
    return;
L_08932BC8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(22136), 0u);
    goto L_08932BCC;
L_08932BCC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08932BDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08932BECu);
    // nop
    goto L_08932CC0;
L_08932BEC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08932BF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08932C08u);
    // nop
    goto L_08932D40;
L_08932C08:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08932C14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08932C28u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08932C44;
L_08932C28:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22136)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08932C44:
    ctx.gpr[5] = (2221u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08932C68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_08932C88;
L_08932C88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x08932C98u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x08932C98u) goto L_08932C98;
    return;
L_08932C98:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_08932C88;
      }
      goto L_08932CA8;
    }
L_08932CA8:
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
L_08932CC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08932D34;
      }
      goto L_08932CE0;
    }
L_08932CE0:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08932D0C;
      }
      goto L_08932CEC;
    }
L_08932CEC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08932D18;
      }
      goto L_08932CF4;
    }
L_08932CF4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08932D2C;
      }
      goto L_08932CFC;
    }
L_08932CFC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08932D34;
      }
      goto L_08932D04;
    }
L_08932D04:
    ctx.gpr[31] = (0x08932D0Cu);
    // nop
    goto L_0893338C;
L_08932D0C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08932D18:
    ctx.gpr[31] = (0x08932D20u);
    // nop
    goto L_08932E68;
L_08932D20:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08932D2C:
    ctx.gpr[31] = (0x08932D34u);
    // nop
    goto L_08932F40;
L_08932D34:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08932D40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08932E54;
      }
      goto L_08932D68;
    }
L_08932D68:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08932DE0;
      }
      goto L_08932D74;
    }
L_08932D74:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08932DF0;
      }
      goto L_08932D7C;
    }
L_08932D7C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08932E2C;
      }
      goto L_08932D84;
    }
L_08932D84:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08932E54;
      }
      goto L_08932D8C;
    }
L_08932D8C:
    ctx.gpr[31] = (0x08932D94u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(208));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x08932D94u) goto L_08932D94;
    return;
L_08932D94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22136)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
        goto L_08932DC0;
    }
    goto L_08932DB0;
L_08932DB0:
    ctx.gpr[31] = (0x08932DB8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x08932DB8u) goto L_08932DB8;
    return;
L_08932DB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22136)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08932DC0;
L_08932DC0:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08932E54;
      }
      goto L_08932DD0;
    }
L_08932DD0:
    ctx.gpr[31] = (0x08932DD8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(116));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x08932DD8u) goto L_08932DD8;
    return;
L_08932DD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08932E54;
      }
      goto L_08932DE0;
    }
L_08932DE0:
    ctx.gpr[31] = (0x08932DE8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(208));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x08932DE8u) goto L_08932DE8;
    return;
L_08932DE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08932E54;
      }
      goto L_08932DF0;
    }
L_08932DF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 255 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(392));
      if (branch_taken) {
          goto L_08932E10;
      }
      goto L_08932E00;
    }
L_08932E00:
    ctx.gpr[31] = (0x08932E08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x08932E08u) goto L_08932E08;
    return;
L_08932E08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08932E54;
      }
      goto L_08932E10;
    }
L_08932E10:
    ctx.gpr[31] = (0x08932E18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x08932E18u) goto L_08932E18;
    return;
L_08932E18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[31] = (0x08932E24u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(300));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x08932E24u) goto L_08932E24;
    return;
L_08932E24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08932E54;
      }
      goto L_08932E2C;
    }
L_08932E2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 70 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08932E4C;
      }
      goto L_08932E3C;
    }
L_08932E3C:
    ctx.gpr[31] = (0x08932E44u);
    // nop
    goto L_08932C44;
L_08932E44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08932E54;
      }
      goto L_08932E4C;
    }
L_08932E4C:
    ctx.gpr[31] = (0x08932E54u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(208));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x08932E54u) goto L_08932E54;
    return;
L_08932E54:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08932E68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22136)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[13])) && ctx.fpr[14] == ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_08932E9C;
    }
    goto L_08932E9C;
L_08932E9C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (15948u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(320));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.gpr[7] = (17279u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(300));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x08932F0Cu);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x08932F0Cu) goto L_08932F0C;
    return;
L_08932F0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 255 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08932F2C;
      }
      goto L_08932F20;
    }
L_08932F20:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_08932F2C;
L_08932F2C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08932F40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16199u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 7282u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17036u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.gpr[4] = (0u | 0u);
        goto L_08932F84;
    }
    goto L_08932F84;
L_08932F84:
    ctx.gpr[6] = (0u | 70u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[7] = (0u | 120u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[8] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(228));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08932FDCu);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(208));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x08932FDCu) goto L_08932FDC;
    return;
L_08932FDC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08932FE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (0u | 120u);
    ctx.gpr[5] = (0u | 60u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 70u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(228));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22136)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08933044u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(208));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x08933044u) goto L_08933044;
    return;
L_08933044:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08933050:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[31] = (0x08933080u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 473u, 0x0883B810u>(ctx, &aot_mem) && ctx.pc == 0x08933080u) goto L_08933080;
    return;
L_08933080:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22136)));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22136)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (17056u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22136)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (17288u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22136)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22136)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[18] = (2220u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(7164));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(44));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[31] = (0x08933124u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 77u, 0x089AD318u>(ctx, &aot_mem) && ctx.pc == 0x08933124u) goto L_08933124;
    return;
L_08933124:
    ctx.gpr[4] = (0u | 6u);
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[5] = (ctx.hi);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_0893314C;
      }
      goto L_08933140;
    }
L_08933140:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0893314C;
L_0893314C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[5] = (17352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22136)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22136)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22136)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22136)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(140), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22136)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(144), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22136)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(152), ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(136));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[31] = (0x089331D0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 77u, 0x089AD318u>(ctx, &aot_mem) && ctx.pc == 0x089331D0u) goto L_089331D0;
    return;
L_089331D0:
    ctx.gpr[4] = (0u | 3u);
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[5] = (ctx.hi);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
      if (branch_taken) {
          goto L_089331F8;
      }
      goto L_089331EC;
    }
L_089331EC:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_089331F8;
L_089331F8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[5] = (17392u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22136)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[5] = (0u | 120u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[6] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22136)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(232), 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (0u | 70u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(228));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22136)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22136)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22136)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22136)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22136)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(324), 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(29)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(320));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(30)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22136)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22136)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(396), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[5] = (0u | 40u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[6] = (0u | 50u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22136)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(416), 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(412));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    goto L_08933340;
L_08933340:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x08933350u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x08933350u) goto L_08933350;
    return;
L_08933350:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_08933340;
      }
      goto L_08933360;
    }
L_08933360:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893338C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[31]);
    ctx.gpr[31] = (0x089333D0u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 473u, 0x0883B810u>(ctx, &aot_mem) && ctx.pc == 0x089333D0u) goto L_089333D0;
    return;
L_089333D0:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (2220u << 16u);
    ctx.gpr[4] = (17056u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[22] = (0u | 255u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(7164));
    ctx.gpr[20] = (2221u << 16u);
    goto L_08933418;
L_08933418:
    ctx.gpr[31] = (0x08933420u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 77u, 0x089AD318u>(ctx, &aot_mem) && ctx.pc == 0x08933420u) goto L_08933420;
    return;
L_08933420:
    ctx.gpr[5] = (ctx.gpr[2] & 3u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22136)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[28];
        goto L_0893343C;
    }
    goto L_0893343C;
L_0893343C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[22])) && ctx.fpr[12] == ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22136)));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_089334E4;
      }
      goto L_08933450;
    }
L_08933450:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(88));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(96));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22136)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_089336D0;
      }
      goto L_089334E4;
    }
L_089334E4:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08933588;
      }
      goto L_089334F4;
    }
L_089334F4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(88));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(96));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22136)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_089336D0;
      }
      goto L_08933588;
    }
L_08933588:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[26])) && ctx.fpr[12] == ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (16448u << 16u);
      if (branch_taken) {
          goto L_0893362C;
      }
      goto L_08933598;
    }
L_08933598:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(88));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(96));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22136)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_089336D0;
      }
      goto L_0893362C;
    }
L_0893362C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
        goto L_089336D4;
    }
    goto L_08933640;
L_08933640:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(88));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(96));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    goto L_089336D0;
L_089336D0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    goto L_089336D4;
L_089336D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22136)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(44));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[31] = (0x08933730u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 77u, 0x089AD318u>(ctx, &aot_mem) && ctx.pc == 0x08933730u) goto L_08933730;
    return;
L_08933730:
    ctx.gpr[5] = (ctx.gpr[2] & 7u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22136)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[28];
        goto L_0893374C;
    }
    goto L_0893374C;
L_0893374C:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[22])) && ctx.fpr[12] == ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22136)));
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08933784;
      }
      goto L_08933764;
    }
L_08933764:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
        goto L_08933788;
    }
    goto L_08933774;
L_08933774:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[26])) && ctx.fpr[12] == ctx.fpr[26]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_08933798;
    }
    goto L_08933784;
L_08933784:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    goto L_08933788;
L_08933788:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_089337A4;
      }
      goto L_08933798;
    }
L_08933798:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    goto L_089337A4;
L_089337A4:
    ctx.gpr[31] = (0x089337ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x089337ACu) goto L_089337AC;
    return;
L_089337AC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_08933418;
      }
      goto L_089337BC;
    }
L_089337BC:
    ctx.gpr[4] = (0u | 120u);
    ctx.gpr[5] = (0u | 60u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 70u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(228));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[31] = (0x0893380Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(208));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x0893380Cu) goto L_0893380C;
    return;
L_0893380C:
    ctx.gpr[31] = (0x08933814u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 77u, 0x089AD318u>(ctx, &aot_mem) && ctx.pc == 0x08933814u) goto L_08933814;
    return;
L_08933814:
    ctx.gpr[4] = (0u | 6u);
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[5] = (ctx.hi);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[28];
        goto L_08933834;
    }
    goto L_08933834;
L_08933834:
    ctx.gpr[31] = (0x0893383Cu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 77u, 0x089AD318u>(ctx, &aot_mem) && ctx.pc == 0x0893383Cu) goto L_0893383C;
    return;
L_0893383C:
    ctx.gpr[4] = (0u | 3u);
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22136)));
    ctx.gpr[5] = (ctx.hi);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[28];
        goto L_0893385C;
    }
    goto L_0893385C;
L_0893385C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089338A0:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22128)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(22132), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089338B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 804u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089338D4u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089338D4u) goto L_089338D4;
    return;
L_089338D4:
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(22812), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089338ECu);
    ctx.gpr[6] = (0u | 804u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x089338ECu) goto L_089338EC;
    return;
L_089338EC:
    ctx.gpr[31] = (0x089338F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 696u, 0x08936C74u>(ctx, &aot_mem) && ctx.pc == 0x089338F4u) goto L_089338F4;
    return;
L_089338F4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08933900:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08933920u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22812)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08933920u) goto L_08933920;
    return;
L_08933920:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893392C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 36u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08933958u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08933958u) goto L_08933958;
    return;
L_08933958:
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(22816), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08933970u);
    ctx.gpr[6] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08933970u) goto L_08933970;
    return;
L_08933970:
    ctx.gpr[31] = (0x08933978u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 387u, 0x08939238u>(ctx, &aot_mem) && ctx.pc == 0x08933978u) goto L_08933978;
    return;
L_08933978:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 144u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0893398Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893398Cu) goto L_0893398C;
    return;
L_0893398C:
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22812)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(524), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089339A8u);
    ctx.gpr[6] = (0u | 144u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x089339A8u) goto L_089339A8;
    return;
L_089339A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 6144u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089339BCu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089339BCu) goto L_089339BC;
    return;
L_089339BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22812)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(520), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089339D4u);
    ctx.gpr[6] = (0u | 6144u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x089339D4u) goto L_089339D4;
    return;
L_089339D4:
    ctx.gpr[31] = (0x089339DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 117u, 0x08934880u>(ctx, &aot_mem) && ctx.pc == 0x089339DCu) goto L_089339DC;
    return;
L_089339DC:
    ctx.gpr[31] = (0x089339E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 212u, 0x089350ACu>(ctx, &aot_mem) && ctx.pc == 0x089339E4u) goto L_089339E4;
    return;
L_089339E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22816)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (2195u << 16u);
    ctx.gpr[31] = (0x08933A00u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28200));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 702u, 0x0884BCB8u>(ctx, &aot_mem) && ctx.pc == 0x08933A00u) goto L_08933A00;
    return;
L_08933A00:
    ctx.gpr[4] = (2195u << 16u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x08933A10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(15004));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 706u, 0x0884BCFCu>(ctx, &aot_mem) && ctx.pc == 0x08933A10u) goto L_08933A10;
    return;
L_08933A10:
    ctx.gpr[4] = (2195u << 16u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x08933A20u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(15012));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 709u, 0x0884BD28u>(ctx, &aot_mem) && ctx.pc == 0x08933A20u) goto L_08933A20;
    return;
L_08933A20:
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
L_08933A38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08933A50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 221u, 0x08935254u>(ctx, &aot_mem) && ctx.pc == 0x08933A50u) goto L_08933A50;
    return;
L_08933A50:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08933A6Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08933A6Cu) goto L_08933A6C;
    return;
L_08933A6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(524), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.gpr[5] = (2222u << 16u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08933A88u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22816)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08933A88u) goto L_08933A88;
    return;
L_08933A88:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08933A9C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08933AA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08933AB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 228u, 0x089352F4u>(ctx, &aot_mem) && ctx.pc == 0x08933AB4u) goto L_08933AB4;
    return;
L_08933AB4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08933AC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 36u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08933AE8u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08933AE8u) goto L_08933AE8;
    return;
L_08933AE8:
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(22816), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08933B00u);
    ctx.gpr[6] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08933B00u) goto L_08933B00;
    return;
L_08933B00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22816)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08933B10u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 212u, 0x089350ACu>(ctx, &aot_mem) && ctx.pc == 0x08933B10u) goto L_08933B10;
    return;
L_08933B10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 144u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08933B24u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08933B24u) goto L_08933B24;
    return;
L_08933B24:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22812)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(524), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08933B40u);
    ctx.gpr[6] = (0u | 144u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08933B40u) goto L_08933B40;
    return;
L_08933B40:
    ctx.gpr[31] = (0x08933B48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 59u, 0x08934430u>(ctx, &aot_mem) && ctx.pc == 0x08933B48u) goto L_08933B48;
    return;
L_08933B48:
    ctx.gpr[4] = (2195u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08933B58u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29444));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 702u, 0x0884BCB8u>(ctx, &aot_mem) && ctx.pc == 0x08933B58u) goto L_08933B58;
    return;
L_08933B58:
    ctx.gpr[4] = (2195u << 16u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x08933B68u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(15344));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 706u, 0x0884BCFCu>(ctx, &aot_mem) && ctx.pc == 0x08933B68u) goto L_08933B68;
    return;
L_08933B68:
    ctx.gpr[4] = (2195u << 16u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x08933B78u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(15352));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 709u, 0x0884BD28u>(ctx, &aot_mem) && ctx.pc == 0x08933B78u) goto L_08933B78;
    return;
L_08933B78:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08933B8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08933BA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 221u, 0x08935254u>(ctx, &aot_mem) && ctx.pc == 0x08933BA4u) goto L_08933BA4;
    return;
L_08933BA4:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08933BC0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08933BC0u) goto L_08933BC0;
    return;
L_08933BC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(524), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.gpr[5] = (2222u << 16u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08933BDCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22816)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08933BDCu) goto L_08933BDC;
    return;
L_08933BDC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08933BF0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08933BF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08933C2C;
      }
      goto L_08933C18;
    }
L_08933C18:
    ctx.gpr[31] = (0x08933C20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 7u, 0x08934078u>(ctx, &aot_mem) && ctx.pc == 0x08933C20u) goto L_08933C20;
    return;
L_08933C20:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08933C2C:
    ctx.gpr[31] = (0x08933C34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 228u, 0x089352F4u>(ctx, &aot_mem) && ctx.pc == 0x08933C34u) goto L_08933C34;
    return;
L_08933C34:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08933C40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 276u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08933C88u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08933C88u) goto L_08933C88;
    return;
L_08933C88:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[6] = (0u | 276u);
    ctx.gpr[31] = (0x08933CA8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08933CA8u) goto L_08933CA8;
    return;
L_08933CA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[31] = (0x08933CB4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 47u, 0x088386E0u>(ctx, &aot_mem) && ctx.pc == 0x08933CB4u) goto L_08933CB4;
    return;
L_08933CB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x08933CC8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 24u, 0x0883C3CCu>(ctx, &aot_mem) && ctx.pc == 0x08933CC8u) goto L_08933CC8;
    return;
L_08933CC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[5] = (17248u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[5] = (17204u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x08933D04u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 129u, 0x0883D148u>(ctx, &aot_mem) && ctx.pc == 0x08933D04u) goto L_08933D04;
    return;
L_08933D04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 720u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08933D18u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08933D18u) goto L_08933D18;
    return;
L_08933D18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[6] = (0u | 720u);
    ctx.gpr[31] = (0x08933D34u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08933D34u) goto L_08933D34;
    return;
L_08933D34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[20] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22208)));
    ctx.gpr[31] = (0x08933D4Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08933D4Cu) goto L_08933D4C;
    return;
L_08933D4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[5] = (16792u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[5] = (17114u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[5] = (17084u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 204u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 202u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 183u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[17] = (0u | 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (16720u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17264u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17148u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(22208));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[19] = (0u | 0u);
    goto L_08933E10;
L_08933E10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[31] = (0x08933E28u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(212));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08933E28u) goto L_08933E28;
    return;
L_08933E28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(348));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(180));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08933E10;
      }
      goto L_08933ECC;
    }
L_08933ECC:
    ctx.gpr[18] = (2220u << 16u);
    ctx.gpr[20] = (2220u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(7340));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(7356));
    goto L_08933EE4;
L_08933EE4:
    ctx.gpr[31] = (0x08933EECu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x08933EECu) goto L_08933EEC;
    return;
L_08933EEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[31] = (0x08933F04u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08933F04u) goto L_08933F04;
    return;
L_08933F04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08933F14u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x08933F14u) goto L_08933F14;
    return;
L_08933F14:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_08933EE4;
      }
      goto L_08933F24;
    }
L_08933F24:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08933F58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22816)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08933F80u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 50u, 0x08838774u>(ctx, &aot_mem) && ctx.pc == 0x08933F80u) goto L_08933F80;
    return;
L_08933F80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x08933F90u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 39u, 0x0883C59Cu>(ctx, &aot_mem) && ctx.pc == 0x08933F90u) goto L_08933F90;
    return;
L_08933F90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x08933FA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 474u, 0x0883B820u>(ctx, &aot_mem) && ctx.pc == 0x08933FA0u) goto L_08933FA0;
    return;
L_08933FA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08933FB8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08933FB8u) goto L_08933FB8;
    return;
L_08933FB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22816)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (0u | 0u);
    goto L_08933FCC;
L_08933FCC:
    ctx.gpr[31] = (0x08933FD4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08933FD4u) goto L_08933FD4;
    return;
L_08933FD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08933FCC;
      }
      goto L_08933FEC;
    }
L_08933FEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08933FFCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08933FFCu) goto L_08933FFC;
    return;
L_08933FFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22816)));
    ctx.pc = 0x08934000u; return;
}

void recomp_unit_0075(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0075_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_75(Runtime &runtime) {
    runtime.register_generated_unit(75u, 0x08930000u, 16384u, &recomp_unit_0075, &recomp_unit_0075_entry);
    runtime.register_function(0x08930000u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930018u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930020u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930034u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089300A4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089300B8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089300DCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089300F4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893010Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930114u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930124u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930138u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930140u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930158u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893016Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893017Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930194u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089301ACu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089301B8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089301C0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089301C8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089301D4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089301E4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089301ECu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089301F4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930200u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930208u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930214u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893021Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930224u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930230u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893023Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930244u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930250u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930258u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930260u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893026Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930290u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089302B0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930340u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930354u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930364u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930374u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930384u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089303A0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089303B0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089303C0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089303D0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089303E8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930400u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930418u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930424u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930448u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930450u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930460u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930468u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930470u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930480u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089304D0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089304ECu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893056Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930584u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089305F4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893060Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893061Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930630u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893066Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930694u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893069Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089306B4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089306C8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089306E8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893072Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930740u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893074Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930768u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930774u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089307C0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089307D8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930804u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930818u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930844u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930864u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930874u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930884u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893089Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089308D8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089308E4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930910u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930920u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893092Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930944u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930954u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930964u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893097Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930998u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089309A8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089309B0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089309C8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089309E4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089309ECu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089309F8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930A00u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930A08u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930A10u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930A30u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930A40u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930A48u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930A50u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930A58u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930A74u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930A90u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930AA0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930AA8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930AB0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930AB8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930AC0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930ACCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930AD4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930ADCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930AFCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930B04u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930B0Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930B28u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930B44u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930B4Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930B58u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930B60u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930B80u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930BA0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930BA8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930BB4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930BC4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930BDCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930C9Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930CC4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930CE4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930CECu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930CF8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930D04u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930D0Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930D14u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930D18u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930D24u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930D40u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930D48u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930D54u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930D60u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930D68u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930D70u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930D88u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930DD0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930DD8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930DE0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930DF8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930E2Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930E3Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930E48u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930E50u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930E60u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930E68u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930E70u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930E88u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930EC0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930ED0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930EDCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930EE4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930EF4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930EF8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930F30u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930F58u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930F98u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930FACu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930FF8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931004u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893100Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893102Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931040u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931054u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931070u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931084u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089310A4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089310B4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089310C8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089310D8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089310ECu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089310F4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931104u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931124u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893117Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931190u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089311A4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931204u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931214u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931220u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893129Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089312ACu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089312C0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089312D4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089312E8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931308u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931318u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893132Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893133Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931350u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931358u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931368u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931374u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893137Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931384u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931398u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089313C8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089313DCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089313F4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089313FCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931404u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931408u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893141Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931434u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893147Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931494u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089314B0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089314C0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089314D0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089314E4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893150Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931514u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893151Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931528u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931538u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893154Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931554u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931564u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931574u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893157Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931590u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931598u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089315C0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089315C8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089315D8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089315E0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089315E8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089315FCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931624u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893162Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931640u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931654u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931660u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931668u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931670u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931678u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931684u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893169Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089316A4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089316ACu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089316C0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089316D8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089316FCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893171Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089317ACu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089317BCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089317CCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089317DCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089317ECu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089317FCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931818u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931828u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931838u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931848u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931858u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931870u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931888u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931890u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089318ACu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089318C0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089318CCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089318D4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089318E0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089318E4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089318F4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089318FCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931908u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893190Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893191Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931924u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931930u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931934u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931944u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893194Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893195Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893196Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089319B8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089319D4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931A44u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931A5Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931AB8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931AD0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931AE0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931AF0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931B28u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931B50u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931B58u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931B70u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931B84u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931BA4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931BCCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931BE4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931BF0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931C0Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931C24u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931C40u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931C48u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931C54u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931C88u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931C90u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931C98u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931CA8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931CB4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931CC4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931CCCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931CDCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931CF4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931D08u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931D10u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931D18u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931D20u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931D30u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931D40u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931D50u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931D60u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931D68u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931D6Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931D78u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931D84u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931D8Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931D94u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931D9Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931DACu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931DB4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931DCCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931DE4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931DFCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931E08u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931E10u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931E18u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931E24u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931E34u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931E44u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931E4Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931E54u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931E5Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931E6Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931E74u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931E8Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931E94u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931EA4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931EACu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931EC0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931EC8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931ED8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931EE0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931EF8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931F00u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931F10u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931F18u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931F28u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931F30u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931F4Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931F54u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931F64u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931F6Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931F8Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931F94u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931FA8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931FB0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931FB8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931FC0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931FCCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931FD4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931FDCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931FE4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931FECu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893200Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893205Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932068u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932070u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932080u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932088u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932098u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089320A0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089320B0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089320B8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089320CCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089320DCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089320ECu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089320F8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932130u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893216Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089321A4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089321B0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089321C8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932250u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893225Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932264u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932270u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932278u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932284u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893228Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932298u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089322A0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089322B4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089322CCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089322E4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089322F8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893233Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932374u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932380u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089323B8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089323C4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089323F0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089323F8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932414u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932464u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932494u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089324E4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932500u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932508u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932514u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893251Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932598u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893259Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089325A4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089325ACu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089325B8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089325C4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089325CCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089325DCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089325ECu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089325F4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932604u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893260Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893261Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932624u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932634u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893263Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932640u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932648u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932650u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932658u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893265Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932694u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089326A0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089326A8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089326B4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089326BCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089326C4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089326D4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089326DCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089326E8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089326F4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089326FCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932704u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932714u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893271Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932728u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932734u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893273Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932744u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932754u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893275Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932768u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932774u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893277Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932784u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932794u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893279Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089327A8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089327B0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089327B8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089327C8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089327D0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089327E0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089327E8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089327F0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089327F8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932834u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932838u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932840u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893284Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932860u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932868u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932874u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893287Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089328D0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089328D4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089328DCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089328E4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089328F0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089328FCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932904u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932918u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893291Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932924u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893292Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893293Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932944u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932954u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893295Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932964u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932974u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893297Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932994u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893299Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089329A4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089329B4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089329BCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089329D4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089329DCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089329E4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089329F4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089329FCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932A14u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932A1Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932A24u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932A34u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932A3Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932A5Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932A64u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932A6Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932A7Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932A84u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932A90u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932AA4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932AD4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932ADCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932AE4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932AECu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932B28u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932B3Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932B5Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932B74u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932B7Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932B84u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932B90u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932BACu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932BB4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932BC8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932BCCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932BDCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932BECu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932BF8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932C08u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932C14u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932C28u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932C44u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932C68u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932C88u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932C98u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932CA8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932CC0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932CE0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932CECu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932CF4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932CFCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932D04u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932D0Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932D18u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932D20u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932D2Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932D34u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932D40u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932D68u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932D74u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932D7Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932D84u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932D8Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932D94u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932DB0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932DB8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932DC0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932DD0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932DD8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932DE0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932DE8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932DF0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932E00u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932E08u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932E10u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932E18u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932E24u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932E2Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932E3Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932E44u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932E4Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932E54u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932E68u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932E9Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932F0Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932F20u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932F2Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932F40u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932F84u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932FDCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932FE8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933044u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933050u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933080u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933124u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933140u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893314Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089331D0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089331ECu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089331F8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933340u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933350u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933360u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893338Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089333D0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933418u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933420u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893343Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933450u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089334E4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089334F4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933588u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933598u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893362Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933640u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089336D0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089336D4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933730u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893374Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933764u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933774u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933784u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933788u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933798u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089337A4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089337ACu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089337BCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893380Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933814u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933834u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893383Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893385Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089338A0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089338B4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089338D4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089338ECu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089338F4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933900u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933920u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893392Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933958u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933970u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933978u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893398Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089339A8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089339BCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089339D4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089339DCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089339E4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933A00u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933A10u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933A20u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933A38u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933A50u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933A6Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933A88u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933A9Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933AA4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933AB4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933AC0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933AE8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933B00u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933B10u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933B24u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933B40u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933B48u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933B58u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933B68u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933B78u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933B8Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933BA4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933BC0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933BDCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933BF0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933BF8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933C18u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933C20u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933C2Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933C34u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933C40u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933C88u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933CA8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933CB4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933CC8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933D04u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933D18u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933D34u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933D4Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933E10u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933E28u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933ECCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933EE4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933EECu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933F04u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933F14u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933F24u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933F58u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933F80u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933F90u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933FA0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933FB8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933FCCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933FD4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933FECu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933FFCu, &recomp_unit_0075, "recomp_unit_0075");
}
} // namespace psprecomp
